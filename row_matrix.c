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
    if(r==1){
        printf("Row matrix\n");
    }
    else{
        printf(" Not Row matrix\n");
    }
    return 0;
}