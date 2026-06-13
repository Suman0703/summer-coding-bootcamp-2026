#include <stdio.h>

int main() {
    char str1[50], str2[50], str3[50];

    // 1. scanf("%s")
    printf("Enter a word: ");
    scanf("%s", str1);

    // Clear input buffer
    getchar();

    // 2. fgets()
    printf("Enter a line using fgets: ");
    fgets(str2, sizeof(str2), stdin);

    // 3. scanf("%[^\n]")
    printf("Enter a line using scanf(\"%%[^\\n]\"): ");
    scanf("%%[^\n]", str3);

    printf("\n--- Output ---\n");
    printf("scanf(\"%%s\") = %s\n", str1);
    printf("fgets() = %s", str2);
    printf("scanf(\"%%[^\\n]\") = %s\n", str3);

    return 0;
}