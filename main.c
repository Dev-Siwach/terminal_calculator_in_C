#include<stdio.h>

int summation(int a, int b){
    int c = a + b;
    printf("%d\n", c);
    return 0;
}

int subtraction(int a, int b){
    int c = a - c;
    printf("%d\n", c);
    return 0;
}

int multiplicaiton(int a, int b){
    int c = a * b;
    printf("%d\n", c);
    return 0;
}

int division(int a, int b){
    int c = a / b;
    printf("%d\n", c);
    return 0;
}

int main(){
    char user_input, sum = '+', minus = '-', multiply = '*', divide = '/';
    int num1, num2, solution;
    printf("Enter your operation (+ , - , * , /) : ");
    scanf("%c", &user_input);

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter number two : ");
    scanf("%d", &num2);

    if (user_input == sum)
    {
        summation(num1,num2);
    }
    else if (user_input == minus)
    {
        subtraction(num1,num2);
    }else if(user_input == multiply){
        multiplicaiton(num1, num2);
    }else if(user_input = divide){
        division(num1,num2);
    }
    
    return 0;
}