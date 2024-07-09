#include <stdio.h>
void strcopy(int *a,int *b){
    for(int i=0;i<6;i++){
        b[i]=a[i];
    }
}
int main() {
    int a[6];
    int b[6];
    for(int i=0;i<6;i++){
        scanf("%d",a+i);
    }
    strcopy(a,b);
    for(int i=0;i<6;i++){
        printf("%d ",b[i]);
    }
}