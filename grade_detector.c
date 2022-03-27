# include<stdio.h>

int main() {
    int marks;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    if(marks<50){
        printf("Fail, Pitoge bahut apni mummy se \n");
    }else if(marks>50 && marks<60){
        printf("D Grade, Tum Bhi Pitoge \n");
    }else if(marks>60 && marks<75){
        printf("C Grade, 50-50 Chance hai pitne ke \n");
    }else if(marks>75 && marks<90){
        printf("B Grade, Kam se kam maar nahi khaaoge mummy se \n");
    }else if(marks>90 && marks<100){
        printf("A Grade, Tumhari Mummy tumhe appreciate karengi \n");
    }else if(marks>100){
        printf("Invalid \n");
    }

    return 0;
}