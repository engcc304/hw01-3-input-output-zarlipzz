#include <stdio.h>
#include <string.h>

int main() {
    char first_name[50];
    char last_name[50];
    char modified_first_name[4];
    char modified_last_name[5];

    printf("First Name: ");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strcspn(first_name, "\n")] = '\0'; // Remove newline character

    printf("Last Name: ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\n")] = '\0'; // Remove newline character

    // Modify the first name
    strncpy(modified_first_name, first_name, 2);
    modified_first_name[2] = first_name[strlen(first_name) - 1];
    modified_first_name[3] = '\0';

    // Modify the last name
    strncpy(modified_last_name, last_name, 3);
    modified_last_name[3] = last_name[strlen(last_name) - 1];
    modified_last_name[4] = '\0';

    // Display the result
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", modified_first_name, modified_last_name);

    return 0;
}