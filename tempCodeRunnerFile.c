#include<stdio.h>
#include<conio.h>

int main(){

    int a[2][2];
    int i,j;
    printf("enter the elements of array\n");
    for(i =0;i<=1;i++)
    {
        for(j=0;j<=1;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    printf("enter teh two array");
    for (i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++){
        printf(" \n%d",a[i][j]);

        }
        printf("\n");
    }
    return 0;
}