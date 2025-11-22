#include"input.h"
#include"global.h"

int input(){
    for(int i=0;i<Strlen;i++){
        s[i]=getchar();
        if(s[i]=='\n'){
            len=i;
            break;
        }
        else if(s[i]=='e'){
            e=1;
        }
    }
    s[len]='\0';
}