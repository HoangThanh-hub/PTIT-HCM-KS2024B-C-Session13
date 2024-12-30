#include<stdio.h>

int ucln(int a, int b);

int main(){
    int a,b;
    printf("nhập số thứ 1: ");
    scanf("%d", &a);
    printf("nhập số thứ 2: ");
    scanf("%d", &b);

    if(a<b){
        a = a;
    }else{
        int temp;
        temp =a;
        a=b;
        b= temp;
    }
    printf("ước chung lớn nhất của %d và %d là: %d\n", a,b,ucln(a,b));


    return 0;
}

int ucln(int a, int b){
    if(a==0){
        return b;
    }
    if(b%a==0){
        return a;
    }
    int x;
    for(int i=0; i<=a; i++){
        if (a%i == 0 && b%i == 0){
            x=i;
        }
    }return x;
};