#include <stdio.h>

int main() {
    char name[25]; //tamanho
    int age;
    printf("What's your name? ");
    
    fgets(name, 25, stdin);

    printf("\nHow old are you? ");

    scanf("%d", &age);

    printf("Hello %s", name);
    printf("You are %d years old", age);

}