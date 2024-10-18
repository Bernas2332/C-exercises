#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are now signed up");


    }
    else{
        printf("you do not met the required age");

    }

    return 0;
}