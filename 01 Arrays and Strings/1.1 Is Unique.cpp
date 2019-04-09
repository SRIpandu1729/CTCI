#include <stdio.h>
#include <stdlib.h>

bool uniqueCharacters(char str[]) {
    int map[128] = {0}, curr = 0;
    while (str[curr]) {
        if (map[(str[curr])]) return false;
        else map[(str[curr])] = 1;
        curr++;
    }
    return true;
}

int main(void) {
    int T;
    char str[1000];
    scanf("%d\n", & T);
    while (T--) {
        scanf("%s\n", str);
        if (uniqueCharacters(str)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}