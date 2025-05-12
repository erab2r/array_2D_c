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
    int specific_cl;
    scanf("%d",&specific_cl);
    for(i= 0;i<r;i++){
        printf("%d ", a[i][specific_cl]);
    }
    return 0;
}