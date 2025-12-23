#include <stdio.h>

int main() {
    char ch;
    int n;

    
    printf("Enter char and number : ");
    scanf(" %c %d", &ch, &n); 

    int i;
    for (i = 0; i < n; i++) {
        printf("%c", ch);
    }

    return 0;
}
