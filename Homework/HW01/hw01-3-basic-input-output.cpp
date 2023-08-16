#include <stdio.h>

int main() {
    char first_name[50];
    char last_name[50];

    printf("First Name: ");
    scanf("%s", first_name );

    printf("Last Name: ");
    scanf("%s", last_name );
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", first_name, last_name);

    return 0;
}