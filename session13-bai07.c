#include<stdio.h>
#define MAX 100



void maTran(int array[][MAX], int a, int b);

int main(){
    int a,b;
    
    printf("nhập số hàng: ");
    scanf("%d", &a);
    printf("nhập số cột: ");
    scanf("%d", &b);

    int array[a][100];
    maTran(array,a,b);

    printf("\n");
    printf("ma trận của mảng là:\n");

    for(int i=0; i<a;i++){
        for(int j=0; j<b;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
  



    return 0;
}

void maTran(int array[][100], int a, int b){
    for(int i=0; i<a;i++){
        for(int j=0; j<b;j++){
            printf("array[%d[%d]=  ", i,j);
            scanf("%d", &array[i][j]);
            
        }
    }
};

