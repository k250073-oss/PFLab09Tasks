#include <stdio.h>
#include <string.h>

char* formatname(char *f,char *l){
    static char full[100];
    strcpy(full,f);
    strcat(full," ");
    strcat(full,l);
    return full;
}

int main(){
    char f[50], l[50];
    printf("Enter first name: ");
    scanf("%s",f);
    printf("Enter last name: ");
    scanf("%s",l);
    printf("Full Name: %s\n",formatname(f,l));
    return 0;
}
