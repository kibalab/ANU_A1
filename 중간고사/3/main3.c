#include <stdio.h>
int main()
{
    int n, m;
    printf("������ ������ �Է��Ͻÿ� : ");
    scanf("%d", &n);
    printf("�� �������� 10�̻� ū ������ �Է��Ͻÿ� : ");
    scanf("%d", &m);

    int av = 0;
    for(; n<m; n++)
    {
        if(n%2 == 0)
        {
            av += n;
        }
    }
    printf("n~m �� ¦���� ������ : %d", av);
    scanf("%d", 0);// Wait for Result Check
}