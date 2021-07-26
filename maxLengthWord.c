#include <stdio.h>
#include <string.h>

// Input:
// I stepped on a Corn Flake, now I am a Cereal Killer

int main () {
    int i, wordLength = 0, maxLength = 0;
    char str[1001];
    char tempWord[1001], longestWord[1001];
    gets(str);

    for (i = 0; ; i++) {

        if (str[i] == ' ' || str[i] == ',' || str[i] == '\0')
        {
            tempWord[ wordLength ] = '\0';
            if (wordLength >= maxLength)
            {
                maxLength = wordLength;
                strcpy(longestWord, tempWord);
            }
            wordLength = 0;

            if (str[i] == '\0') break;
        }

        tempWord [ wordLength ] = str[i];
        wordLength++;
    }

    puts("");
    puts(longestWord);
    return 0;
}
