#include"input.h"
#include"global.h"

int input(){
    for(int i=0;i<Strlen;i++){
        str[i]=getchar();
        if(str[i]=='\n'){
            len=i;
            break;
        }
    }
}