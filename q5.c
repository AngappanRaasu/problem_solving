#include <stdio.h>
#include <string.h>

int findSubstring(char txt[], char pat[]) {
    int n = strlen(txt);
    int m = strlen(pat);
    int i, j, found;

    for (i = 0; i <= n - m; i++) {
        found = 1;
        for (j = 0; j < m; j++) {
            if (txt[i + j] != pat[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

int main() {
    char txt[] = "GeeksForGeeks";
    char pat[] = "Fr";

    int index = findSubstring(txt, pat);
    printf("%d\n", index);

    return 0;
}
