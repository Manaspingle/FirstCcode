#include <stdio.h>
void main(){
    int i,j,rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=(rows+i-1);j++){
            if(j<=rows-i)
            printf("  ");
            else
            printf("* ");
        }
        printf("\n");
    }
}