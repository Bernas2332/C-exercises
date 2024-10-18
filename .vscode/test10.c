#include <stdio.h>
int main() {
    int grade;
    printf("Please enter your grade\n ");
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("Perfect!");
            break;
        case 'B':
            printf("You did really good");
            break;
        case 'C':
            printf("You did okay");
            break;
        default:
            break;
    }



}