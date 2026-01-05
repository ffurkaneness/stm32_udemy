#include <stdio.h>


int toplama(int num1 , int num2);
int cikarma(int num1 , int num2);
int carpma(int num1 , int num2);
float bolme(int num1 , int num2);
void print_result(int num1 , int num2);


int main(){
    print_result(5,10);


    return 0;
}

int toplama(int num1 , int num2){
    return num1+num2;
}
int cikarma(int num1 , int num2){
    return num1-num2;
}
int carpma(int num1 , int num2){
    return num1*num2;
}
float bolme(int num1 , int num2){
    return (float) num1/num2;
}
void print_result(int num1 , int num2){
    int toplam = toplama(num1 , num2);
    int cikart = cikarma(num1 , num2);
    int carp = carpma(num1 , num2);
    float bol = bolme(num1 , num2);
    printf("%d + %d = %d\n",num1,num2,toplam);
    printf("%d - %d = %d\n",num1,num2,cikart);
    printf("%d * %d = %d\n",num1,num2,carp);
    printf("%d / %d = %f\n",num1,num2,bol);
}