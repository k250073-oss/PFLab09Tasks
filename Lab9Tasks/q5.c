#include <stdio.h>

void analyzedata(int *a,int n,int *mx,int *mn,float *avg){
    *mx=*mn=a[0];
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]>*mx)*mx=a[i];
        if(a[i]<*mn)*mn=a[i];
        s+=a[i];
    }
    *avg=(float)s/n;
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n],mx,mn;
    float avg;
    for(int i=0;i<n;i++){
        printf("Enter val %d: ",i+1);
        scanf("%d",&a[i]);
    }
    analyzedata(a,n,&mx,&mn,&avg);
    printf("Maximum = %d\n",mx);
    printf("Minimum = %d\n",mn);
    printf("Average = %.2f\n",avg);
    return 0;
}
