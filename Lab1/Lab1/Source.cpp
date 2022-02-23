#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* f = fopen("in.txt", "r");
    if (f == NULL) {
        printf("Cannot open\n");
        return 0;
    }
    printf("Open ok\n");
    char s[128];
    while (!feof(f)) {
        fscanf(f, "%s", s);
        printf("%s\n", s);
    }    
    fclose(f);

    printf("Introdu propozitia: ");
    fgets(s, 128, stdin);
    printf("%s\n", s);

    return 0;
}