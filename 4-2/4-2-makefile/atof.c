#include"atof.h"
#include"global.h"
#include<math.h>

int atof(){
    if(e){
        int i=0,p=0;
        int sgn1=1,sgn2=1;
        if(s[0]=='-'){
            i++;
            sgn1=-1;
        }
        for(;s[i]!='.';i++){
            num=num*10+(s[i]-'0');
        }
        i++;
        for(;s[i]!='e';i++){
            p--;
            num+=(s[i]-'0')*pow(10.0,p);
        }
        num*=sgn1;
        i++;
        if(s[i]=='-'){
            sgn2=-1;
            i++;
        }
        for(;i<len;i++){
            power=power*10+(s[i]-'0');
        }
        power*=sgn2;
        result=num*pow(10.0,power);
    }
    else{
        int i=0,p=0;
        int sgn=1;
        if(s[0]=='-'){
            i++;
            sgn=-1;
        }
        for(;s[i]!='.';i++){
            result=result*10+(s[i]-'0');
        }
        i++;
        for(;i<len;i++){
            p--;
            result+=(s[i]-'0')*pow(10.0,p);
        }
        result*=sgn;
    }
    printf("%f\n",result);
}