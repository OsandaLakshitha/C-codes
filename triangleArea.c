#include <stdio.h>

int main(){
/*
    float adarakaya;
    float lambausa;
    float area;

    printf("Input adarakaya :- ");
    scanf("%f",&adarakaya);

    printf("Input lamba usa :- ");
    scanf("%f",&lambausa);

    area = 0.5*adarakaya*lambausa;

    printf("tringle area is %lf ", area); */
/*
    char sing_ch;  

    printf("Input a character: ");  
    scanf("%c", &sing_ch);  
  
    // Checks whether it is an alphabet //  
    if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='Z'))  
    {  
        printf("This is an alphabet.\n");  
    }  
    else if(sing_ch>='0' && sing_ch<='9') // whether it is digit //
    {  
        printf("This is a digit.\n");  
    }  
    else // Else special character //
    {  
        printf("This is a special character.\n");  
    }  
*/

    int maths;
    int phy;
    int chem;

    printf("Input Maths marks :- ");
    scanf("%d", &maths);

    print("Input physics marks :- ");
    scanf("%d", &phy);

    printf("Input  Chemistry marks :- ");
    scanf("%d", &chem);

    if (maths>=65){
        if(phy>=55){
            if(chem>=55){
                printf("The candidate is eligible for admission");

            }
        }
    }
    else{
        printf("The candidate is not eligible for admission.");
    }
    
}