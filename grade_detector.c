# include<stdio.h>

int main() {
    int marks;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    if(marks<50){
        printf("Fail \n");
    }else if(marks>50 && marks<60){
        printf("D Grade \n");
    }else if(marks>60 && marks<75){
        printf("C Grade \n");
    }else if(marks>75 && marks<90){
        printf("B Grade \n");
    }else if(marks>90 && marks<100){
        printf("A Grade \n");
    }else if(marks>100){
        printf("Invalid \n");
    }

    return 0;
}
