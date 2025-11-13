#include <stdio.h>

void findroads(int a[], int n, int t){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                printf("Road %d and Road %d\n",i+1,j+1);
                return;
            }
        }
    }
}

int main(){
    int n,t;
    printf("Enter number of roads: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter vehicles on road %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter target: ");
    scanf("%d",&t);
    findroads(a,n,t);
    return 0;
}
