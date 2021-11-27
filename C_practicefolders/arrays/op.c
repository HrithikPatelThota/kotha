#include<stdio.h>
int main(){
    int a,b,c;
    printf("a\n"); 
    scanf("%d",&a);
    printf("b\n");
    scanf("%d",&b);
    printf("c\n");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("greatest is %d\n",a);    
    }
    else if(b>a&&b>c){
        printf("greatest is %d\n",b);
    }
    else if(c>a&&c>b){
        printf("greatest is %d\n",c);
    }
     else{
        printf("ALL NUMBERS ARE EQUAL\n");
    }
    if(a<b&&a<c){
        printf("smallest is %d\n",a);    
    }
    else if(b<a&&b<c){
        printf("smallest is %d\n",b);
    }
    else if(c<a&&c<b){
        printf("smallest is %d\n",c);
    }
    else{
        printf("ALL NUMBERS ARE EQUAL\n");
    }



    return 0;
}