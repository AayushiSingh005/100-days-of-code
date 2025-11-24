#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};  // ASCII frequency map
    int left = 0, right = 0;
    int maxLen = 0;

    while (s[right] != '\0') {
        char c = s[right];

        // If character already exists in current window
        while (freq[(int)c] > 0) {
            freq[(int)s[left]]--;
            left++;
        }

        freq[(int)c]++;
        int windowLen = right - left + 1;

        if (windowLen > maxLen)
            maxLen = windowLen;

        right++;
    }

    printf("%d", maxLen);

    return 0;
}
int main() {
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};  // ASCII frequency map
    int left = 0, right = 0;
    int maxLen = 0;

    while (s[right] != '\0') {
        char c = s[right];

        // If character already exists in current window
        while (freq[(int)c] > 0) {
            freq[(int)s[left]]--;
            left++;
        }

        freq[(int)c]++;
        int windowLen = right - left + 1;

        if (windowLen > maxLen)
            maxLen = windowLen;

        right++;
    }

    printf("%d", maxLen);

    return 0;
}
