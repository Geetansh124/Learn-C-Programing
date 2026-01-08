#include <stdio.h>

double calc(double a,double b,char o){
    if(o=='+')return a+b;
    if(o=='-')return a-b;
    if(o=='*')return a*b;
    if(o=='/')return b? a/b:(fprintf(stderr,"Error: div by zero\n"),0);
    return 0;
}

int main(void){
    char o; double a,b; long x,y;
    puts("Enter operator (+ - * / %) then numbers:");
    if(scanf(" %c",&o)!=1) return 0;
    if(o=='%'){ if(scanf("%ld %ld",&x,&y)==2) printf("%ld\n", x%y); return 0; }
    if(scanf("%lf %lf",&a,&b)==2) printf("%.6g\n", calc(a,b,o));
    return 0;
}
