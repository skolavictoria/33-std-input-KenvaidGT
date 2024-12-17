#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100

typedef struct {
    char word[100];
    int count;
} WordCount;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: No words to count.\n");
        return 1;
    }

    WordCount word_counts[MAX_WORDS];
    int word_count = 0;

    for (int i = 1; i < argc; i++) {
        int found = 0;
        for (int j = 0; j < word_count; j++) {
            if (strcmp(word_counts[j].word, argv[i]) == 0) {
                word_counts[j].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(word_counts[word_count].word, argv[i]);
            word_counts[word_count].count = 1;
            word_count++;
        }
    }

    for (int i = 0; i < word_count; i++) {
        printf("%s: %d\n", word_counts[i].word, word_counts[i].count);
    }

    return 0;
}
