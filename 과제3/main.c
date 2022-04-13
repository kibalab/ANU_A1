#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cursor.h>

void Start();
void Update(char input, COORD* cursor);
void FixedUpdate(char input, COORD* cursor);
void CheckAndSpawnBlockByLine();
void PlayerPosAdjust(char input, COORD* cursor);

void UpdateScreenInfo();

void Render(COORD* cursor);
void DrawMap();
void DrawPlayerCharacter(COORD* cursor);
void CheckAndSpawnItem();

struct Block
{
    int lineYPos;
    int holePos;
    int holeSize;
    short isEnd;
    short isPlayed;
};

struct Screen
{
    int width;
    int height;
};

struct PlayerStatus
{
    int point;
    int collideDisabled;
    int moveSize;
};

struct Item
{
    char icon;
    int ColliderDisable;
    int moveSize;
    int speed;
    COORD pos;
    short isEnd;
};

struct Block currentBlock = { 24, 0, 0, 1, 0};

struct PlayerStatus player = { 0, 0, 1};

struct Screen screen;

struct Item currentItem = { '\0', 0, 0, 0, {0, 0}, 1 };

float speed = 1;

int nextSpeedCheck = 5000;

int main()
{
    Start();

    COORD cursor = {10,10};
    int cmd;
    while(1){
        if(kbhit()) 
            if((cmd = getch()) == 0xE0) break;
            else Update(cmd, &cursor);
        FixedUpdate(cmd, &cursor);
    }
}

void Start()
{
    // Hide Cursor
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

    
    
    srand(1);
}

void Update(char input, COORD* cursor)
{
    float ms = speed;
    speed*=500;
    FixedUpdate(input, cursor);
    speed = ms;

    PlayerPosAdjust(input, cursor);
    CheckAndSpawnBlockByLine();
    Render(cursor);
}

void FixedUpdate(char input, COORD* cursor)
{
    UpdateScreenInfo();
    
    nextSpeedCheck-=speed;

    if(nextSpeedCheck < 0)
    {
        currentBlock.lineYPos++;
        nextSpeedCheck = 5000;
        Render(cursor);
    }


    if(currentBlock.lineYPos > screen.height - 11)
    {
        currentBlock.isEnd = 1;
    }

    

    if((*cursor).Y < currentBlock.lineYPos + 5 && currentBlock.isPlayed == 1)
    {
        speed += 0.3;
        player.point ++ ;
        currentBlock.isPlayed = 0;
    }

    if(7 + currentItem.pos.X == (*cursor).X && 7 + currentItem.pos.Y == (*cursor).Y)
    {
        player.moveSize = currentItem.moveSize;
        speed -= currentItem.speed;
        if(currentItem.ColliderDisable == 1)player.collideDisabled = 1;
        currentItem.isEnd = 1;

        player.point ++;
    }

    CheckAndSpawnBlockByLine();
    CheckAndSpawnItem();

    if((*cursor).Y == currentBlock.lineYPos + 5 && currentBlock.isPlayed == 1)
        if(!((*cursor).X > 5 + currentBlock.holePos && (*cursor).X < 5 + currentBlock.holePos + currentBlock.holeSize + 1))
        {
            exit(0); 
        }
    
    gotoxy(0, 0);
    printf("Speed : ");
    printf("%f\n", speed);
    printf("Point : ");
    for(int i = 0 ;i< player.point ; i++)
    {
        printf("+");
    }
}

void Render(COORD* cursor)
{
    clrscr(); // OnPreRender
    DrawMap();
    DrawPlayerCharacter(cursor);
}

void DrawMap()
{
    COORD cursor = {0 ,0};
    gotoxy(cursor.X, cursor.Y);
    
    int mapViewSize = 5;

    gotoxy(mapViewSize, mapViewSize);
    for(int i = mapViewSize; i < screen.width-mapViewSize; i++)
    {
        printf("#");
    }
    for(int i = mapViewSize; i< screen.height-mapViewSize; i++)
    {
        gotoxy(mapViewSize, i);
        printf("|");
        gotoxy(screen.width-mapViewSize, i);
        printf("|");
    }
    gotoxy(mapViewSize, screen.height-mapViewSize);
    for(int i = mapViewSize; i < screen.width-mapViewSize; i++)
    {
        printf("#");
    }

    if(currentItem.isEnd == 0){
        gotoxy(mapViewSize + 2 + currentItem.pos.X, mapViewSize + 2 + currentItem.pos.Y);

        printf("X");//"%c", currentItem.icon
    }

    gotoxy(mapViewSize + 1, currentBlock.lineYPos + mapViewSize);

    for(int i = mapViewSize + 1; i < screen.width-mapViewSize; i++)
    {
        printf("=");
    }

    gotoxy(currentBlock.holePos + mapViewSize + 1, currentBlock.lineYPos + mapViewSize);

    for(int i = 0; i < currentBlock.holeSize; i++)
    {
        printf(" ");
    }
}

void CheckAndSpawnBlockByLine()
{
    if(currentBlock.isEnd == 0) {
        return;
    }

    // Spawn Block Line

	int holePos = 0;
    int holeSize = 0;

    holeSize = ( rand()%12 + 1 ) * 5;
	holePos = rand()%(screen.width - 12 - holeSize);

    struct Block init = { 0, holePos, holeSize, 0, 1};
    currentBlock = init;
}

void CheckAndSpawnItem()
{
    if(currentItem.isEnd == 0) return;

    struct Item m_item = {'^', 1, 0, 0, {rand() % (screen.width -12), rand() % (screen.height -12)}, 0};

    currentItem = m_item;
}

void DrawPlayerCharacter(COORD* cursor)
{
    gotoxy((*cursor).X, (*cursor).Y - 1);
    printf("@");
    gotoxy((*cursor).X, (*cursor).Y);
    printf("A");
}

void PlayerPosAdjust(char input, COORD* cursor)
{
    
    switch(input) {
        case 's':    // key up
            (*cursor).Y++;
            break;
        case 'w':    // key down
            (*cursor).Y--;
            break;
        case 'd':    // key right
            (*cursor).X++;
            break;
        case 'a':    // key left
            (*cursor).X--;
            break;
        default :
            break;
    }

    if((*cursor).X > screen.width - 6)
    {
        (*cursor).X = 6;
    }
    else if((*cursor).X < 6)
    {
        (*cursor).X = screen.width - 6;
    }

    if((*cursor).Y < 6)
    {
        (*cursor).Y++;
    }
    else if((*cursor).Y > screen.height - 6)
    {
        (*cursor).Y--;
    }
}

void UpdateScreenInfo()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    struct Screen m_screen;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    m_screen.width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    m_screen.height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    screen = m_screen;
}


