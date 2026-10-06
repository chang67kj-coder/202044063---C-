#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++)
    {
        // j가 i까지만 반복하도록 수정
        for(int j=1; j<=i; j++) 
        {
            printf("*");
        }
        printf("\n"); // 한 줄 출력이 끝나면 줄바꿈
    }
    
    return 0;
}