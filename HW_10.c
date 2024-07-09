#include <stdio.h>
int gcd(int a, int b){
    if(a<b){
        int t;
        t=a;
        a=b;
        b=t;
    }
    if(b==0){
        return a;
    }
    else{
        return gcd(a-b,b);
    }
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}
void gcdlcm(int a, int b, int* pa, int* pb){
    *pa=gcd(a,b);
    *pb=lcm(a,b);
}
int main() {
    int gcd,lcm,a,b;
    int* pgcd=&gcd;
    int* plcm=&lcm;
    scanf("%d %d",&a,&b);
    gcdlcm(a,b,pgcd,plcm);
    printf("%d %d",gcd,lcm);
}