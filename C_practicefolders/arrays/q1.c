#include<stdio.h>
int main (){
int array[10];
int *ptr=&array[0];
printf("the addres of array[2] is %d\n",&array[2]);
printf("%d\n",(ptr+2));


    return 0;
}