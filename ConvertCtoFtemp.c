#include <stdio.h>
#include <ctype.h>


int main(){

    float temp;
    char unit;

    printf("\nIs the temp in C or F : ");  //Kelwin walatath passe liypn
    scanf("%c", &unit);


    unit = toupper(unit);
    
    if(unit == 'C'){
        printf("\nEnter the Temp in C : ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5 ) + 32;
        printf ("\nThe temp in F is : %lf ", temp);


    }

    else if(unit == 'F'){
        printf("\nEnter the Temp in F : ");
        scanf("%f", &temp);
        temp = (temp - 32 ) * 5 / 9;
        printf ("\nThe temp in C is : %lf ", temp);
    }

    else{
    printf("\nPut C or F you fucking retarded");

    }



}
