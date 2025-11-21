#include<stdio.h>
#define Strlen 80
int main(){
    char str[Strlen];
    int len=0;
    for(int i=0;i<Strlen;i++){
        str[i]=getchar();
        if(str[i]=='\n'){
            len=i;
            break;
        }
    }
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}