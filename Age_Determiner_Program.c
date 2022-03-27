# include<stdio.h>

int main() {
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);
    
    if(age<14){
        printf("You Are A Kid \n");
    }else if(age>14 && age<25){
        printf("You Are Young \n");
    }else if(age>25 && age<50){
        printf("You Are Adult \n");
    }else if(age>50){
        printf("You Are Old \n");
    }

    return 0;

}