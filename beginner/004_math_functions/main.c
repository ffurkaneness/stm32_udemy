#include <stdio.h>
#include "math.h"

int main(){
    int a , b;
    int value_toplama , value_cikarma , value_carpma;
    float value_bolme;
    printf("iki sayi giriniz: ");
    scanf("%d %d",&a,&b);

    value_toplama = toplama(a,b);
    printf("%d + %d = %d\n",a,b,value_toplama);
    value_cikarma = cikarma(a,b);
    printf("%d - %d = %d\n",a,b,value_cikarma);
    value_carpma = carpma(a,b);
    printf("%d * %d = %d\n",a,b,value_carpma);
    value_bolme = bolme(a,b);
    if(b==0){
        printf("Payda sifir olamaz...");
    }
    else{
        printf("%d / %d = %.2f\n",a,b,value_bolme);
    }
        
    return 0;
}