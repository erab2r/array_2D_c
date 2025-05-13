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
    int total_matrix = r*c;
    int zero_matrix = 0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==0){
                zero_matrix++;
            }
        }
    }
    if(total_matrix==zero_matrix){
        printf("Zero matrix\n");
    }
    else{
        printf("Not Zero matrix\n");
    }
    return 0;
}