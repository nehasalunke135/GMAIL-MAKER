#include <stdio.h>
void copy(char a[], char b[]) {
    int i = 0;
    while (b[i] != ‘\0’){
        a[i] = b[i];
        i++;
    }
}
void concat(char a[], char b[]) {
    int i = 0, j = 0;
    while (a[i] != 0)    i++;
    while (b[j] != 0) {
        a[i] = b[j];
        i++; j++;
    }
    
}
int main() {
    char fname[50], lname[50], username[100],state[50];

    printf("Enter First Name: ");
    scanf("%s", &fname);

    printf("Enter Last Name: ");
    scanf("%s", &lname);
printf("Enter your state: ");
    scanf("%s", &state);

    // username = firstname + lastname
    copy(username, fname);
    concat(username, lname);
concat(username, state);
    printf("\nGenerated gmail : %s@gmail.com\n", username);

    return 0;}



