#include <stdio.h>
int *mid(int *a){
    if((*(a)>=*(a+1) && *(a)<=*(a+2)) || (*(a)<=*(a+1) && *(a)>=*(a+2))){
        return a;
    }
    else if((*(a+1)>=*(a) && *(a+1)<=*(a+2)) || (*(a+1)<=*(a) && *(a+1)>=*(a+2))){
        return a+1;
    }
    else {
        return a+2;
    }
}
int main() {
    int a[3];
    for(int* p=a;p<a+3;p++){
        scanf("%d",p);
    }
    int* loc=mid(a);
    for(int i=0;i<3;i++){
        if(a+i==loc){
            printf("%d",i+1);
            return 0;
        }
    }
}