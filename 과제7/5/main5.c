#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{ 
    int computerBall[3];
    int i, j;
    int temp;
    int userBall[3];
    int count = 1;
    int strike;
    int ball;

    srand((unsigned)time(NULL)); 

    for (i = 0; i < 3; i++) 

    { 

        temp = (rand() % 9) + 1;

    computerBall[i] = temp;

        for (j = 0; j < i; j++)

            if (temp == computerBall[j] && i != j)

                i--;

    } 

    

    while (1)

    { 

        printf("%d : \n", count); 

    while(1)

    { 

    printf("Input : "); 

    scanf("%d %d %d", &userBall[0], &userBall[1], &userBall[2]); 

    if(userBall[0] < 1 || userBall[0] > 9 || userBall[1] < 1 || userBall[1] > 9 || userBall[2] < 1 || userBall[2] > 9) 

    {

    printf("Error\n"); 

    continue; 

    } 

    else if(userBall[0] == userBall[1] || userBall[0] == userBall[2] || userBall[1] == userBall[2]) 

    {

    printf("Error\n"); 

    continue; 

    } 

    break; 

    } 

        ball = 0; 

        strike = 0; 

        for (i = 0; i < 3; i++)

            for (j = 0; j < 3; j++) 

                if (computerBall[i] == userBall[j])

                    if (i == j) 

                        strike++;

                    else

                        ball++;

        printf("[Result]Strik : %d, ball : %d\n\n", strike, ball); 

    if(strike == 3)

    { 

    printf("***** Win. *****\n\n"); 

    break; 

    } 

    else if(count == 9)

    { 

    printf("***** Failed.. Á¤´ä : %d %d %d *****\n\n", computerBall[0], computerBall[1], computerBall[2]); 

    break; 

    } 

        count++; 

    } 

    return 0; 

} 