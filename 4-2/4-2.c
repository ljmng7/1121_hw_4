#include<stdio.h>
#include<math.h>
#define Strlen 100
int main(){
    char s[Strlen];
    bool e=false;
    double num=0,result=0;
    int power=0,len=0;
    for(int i=0;i<Strlen;i++){
        s[i]=getchar();
        if(s[i]=='\n'){
            len=i;
            break;
        }
        else if(s[i]=='e'){
            e=true;
        }
    }
    s[len]='\0';
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
    return 0;
}
