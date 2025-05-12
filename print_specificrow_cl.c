#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int specific_row;
    scanf("%d",&specific_row);
    for(i= 0;i<c;i++){
        printf("%d ", a[specific_row][i]);
    }
    return 0;
}