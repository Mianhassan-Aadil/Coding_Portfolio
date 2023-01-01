#include<stdio.h>  
#include<conio.h>

int fun(int *p1,int *p2); //to avoid declaration conflict.

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("You Entered %d and %d", a,b);
    fun(&a,&b);
    printf("\nFlipped numbers are %d and %d", a,b);

    return 0;
}

int fun(int *p1, int *p2){
    int c,d;
    c = *p1;
    d = *p2;

    *p1 = d;
    *p2 = c;
}
