#include <stdio.h>

int main(){

    int acc_num;
    float btbm;
    float acl;
    float tot_cred;
    float tot_charge;
    float new_bl;

    printf("Enter Your account Number : ");
    scanf("%d", &acc_num);

    printf("Enter balance at begining of the month : ");
    scanf("%f", &btbm);

    printf("enter Allowed Credit Limit : ");
    scanf("%f", &acl);

    printf("Enter Total Credits : ");
    scanf("%f", &tot_cred);

    printf("Enter Total charge : ");
    scanf("%f", &tot_charge);

    new_bl= btbm + tot_charge - tot_cred ;

    printf("Your New balance is %f ", new_bl);

    return 0;

    

}