#include <stdio.h>

int main() {
    char ch,a;
    int n;

    printf("Enter alphabet char and number: ");
    scanf(" %c %c %d",&a, &ch, &n);

   int i;
    for (i = 0; i < n; i++) {
        
      int j;
        for (j = 0; j < n; j++) {
            printf("%c", a);
        }
        
        printf("\n"); 
    }

    return 0;
}
