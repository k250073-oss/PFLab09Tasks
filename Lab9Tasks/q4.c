#include <stdio.h>

void updatevalue(int x){
    x+=5;
}

void updateref(int *x){
    *x+=5;
}

int main(){
    int n=80;
    printf("Before updateValue: %d\n",n);
    updatevalue(n);
    printf("After updateValue: %d\n",n);
    printf("Before updateReference: %d\n",n);
    updateref(&n);
    printf("After updateReference: %d\n",n);
    return 0;
}
