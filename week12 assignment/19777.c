
#include <stdio.h>

int main()
{
    char friend_name[20];
    int friend_age;

    scanf("%s %d", friend_name, &friend_age);

    printf("Your name: Yejun, age: 12\n");
    printf("Friend's name: %s, age: %d\n", friend_name, friend_age);

    return 0;
}
