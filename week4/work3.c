#include <stdio.h>

void print_numbers(int n) {
    if (n < 1) {
        return;
    }
    print_numbers(n - 1);
    printf("%d\n", n);
}

int main() {
    int input_num;
    
    
    printf("출력할 마지막 숫자를 입력하세요: ");
    
   
    scanf("%d", &input_num);
    
    
    print_numbers(input_num);
    
    return 0;
}