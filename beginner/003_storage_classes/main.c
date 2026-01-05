#include <stdio.h>

int value;
//static int value; // disaridaki bir dosyadan modifiye edilemez
void my_func();

int main(){

    value = 10;
    printf("Value: %d\n",value);

    my_func();
    printf("Value: %d\n",value);

    return 0;
}