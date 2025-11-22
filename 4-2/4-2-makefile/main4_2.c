#include<stdio.h>
#include<string.h>
#include"input.h"
#include"atof.h"
#include"global.h"

char s[Strlen];
int e=0;
double num=0,result=0;
int power=0,len=0;

int main(){
    for(int j=0;j<4;j++){
        memset(s, 0, sizeof(s));
        e = 0;
        num = 0;
        result = 0;
        power = 0;
        len = 0;
        input();
        atof();
    }
    return 0;
}