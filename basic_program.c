# include<stdio.h>

int main() {
    int age;
    
    printf("Enter Age : ");
    scanf("%d", &age);

    if(age<18){
        printf("You Can't Drive \n");
    }else{
        printf("You Can Drive \n");
    }
    
    return 0;
}