#include<stdio.h>
int isEven(int num);
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    isEven(num);
    return 0;
}
isEven(int num){
    if(num%2==0){
        printf("1");
    }
    else{
        printf("0");
    }
}
