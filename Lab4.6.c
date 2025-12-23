#include <stdio.h>

int main() {
    char ch;
    int n;

    printf("Enter char and number: ");
    scanf(" %c %d", &ch, &n);

   int i;
    for (i = 0; i < n; i++) {
        
      int j;
        for (j = 0; j < n; j++) {
            printf("%c", ch);
        }
        
        printf("\n"); 
    }

    return 0;
}
