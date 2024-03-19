#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    scanf("%d",&k);
    int count=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(k==arr[i][j]){
                count = 1;
            }
        }
    }if(count==1){
        printf("1");
    }
    else{
        printf("0");
    }
    
}