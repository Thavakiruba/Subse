#include<stdio.h>
int main(){
    int n,m,i,j,a1[10],a2[10],flag=0;
    scanf("%d %d",&m,&n);
    
    for(i=0;i<m;i++)
    scanf("%d",&a1[i]);
    for(i=0;i<n;i++)
    scanf("%d",&a2[i]);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a1[j]==a2[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("a1 is not a subset of a2");
            return 0;
        }
        flag=0;
    }
    printf("Subset");
    return 0;
    
}
