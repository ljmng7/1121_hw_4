#include"global.h"
#include"output.h"

int output(){
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}