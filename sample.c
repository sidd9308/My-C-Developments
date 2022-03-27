# include<stdio.h>

int main() {
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    int result = num % 97;

    if(result=0){
        printf("%d is divisible by 97 \n", num);
    }else if(result=1){
        printf("%d is not divisible by 97 \n", num);
    }else if(result>0){
        printf("%d is not divisible by 97 \n", num);
    }
    return 0;
}