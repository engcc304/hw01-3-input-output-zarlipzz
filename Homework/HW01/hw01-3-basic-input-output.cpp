#include <stdio.h>
#include <string.h>

int main() {
    char first_name[50];
    char last_name[50];

    printf("First Name: ");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strcspn(first_name, "\n")] = '\0'; 

    printf("Last Name: ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\n")] = '\0'; 
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", first_name, last_name);

    return 0;
}