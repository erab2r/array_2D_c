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
    int is_diagonal = 1;
    if(r==c){
        //
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){

            if(i+j == r-1){
                //we are diagonal
            }
            else
            {
                if(a[i][j]!=0){
                    is_diagonal = 0;
                    printf("this is not diagonal");
                }
            }
        }
    }
    if(is_diagonal == 1){
        printf(" This is secondRY diagonal matrix\n");

    }
    }
    else{
        printf(" Not secondRY diagonal matrix\n");
    }
    return 0; 
}  