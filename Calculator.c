#include <stdio.h>

int main(){
    
    float num1;
    float num2;
    char opper;
    float result;
    
    printf("Enter valid opperator ( + - * /) : ");
    scanf("%c", &opper);
 
    printf("Enter your first number : ");
    scanf("%f", &num1);

    printf("Enter your second number : ");
    scanf("%f", &num2);

    switch(opper){
        case '+':
            result= num1 + num2;
            printf("\nResult : %lf", result);
            break;
        case '-':
            result= num1 - num2;
            printf("\nResult : %lf", result);
            break;
        case '*':
            result= num1 * num2;
            printf("\nResult : %lf", result);
            break;
        case '/':
            result= num1 / num2;
            printf("\nResult : %lf", result);
            break;
        default:
            printf("%c is not a opperator you dumb bitch", opper);    

    }

return 0;


}