/**
 * File              : vc_split_whitespaces.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Tue 12 Feb 2018
 */

#include <stdio.h>
#include <stdlib.h>
static int vc_count_words(char *str) {
    int i = 0;
    int wordNum = 0;
    while(str[i]) {
        while (str[i] == 32 || str[i] == 9 || str[i] == '\n') {
            i++;
        }
        if (str[i] && str[i] != 32 && str[i] != 9 && str[i] != '\n') {
            wordNum++;
            while (str[i] && str[i] != 32 && str[i] != 9 && str[i] != '\n') {
                i++;
            }
        }
    }
    return wordNum;
}

static int vc_count_chars(char *str) {
    int i = 0;
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
        i++;
    }
    return i;
}

static int vc_count_whitespaces(char *str) {
    int i = 0;
    int w = 0;
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
        i++;
    }
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
        w++;
        i++;
    }
    return w;
}

char **vc_split_whitespaces(char *str){
    int numWords = vc_count_words(str);

    char **arrpointer = (char **) malloc(sizeof(char *) * (numWords + 1));
    int i = 0;
    int pos = 0;
    while (str[0] && numWords--) {
        int numChars = vc_count_chars(str);
        arrpointer[i] = (char *) malloc(numChars * sizeof(char));
        for(int j=0; j<numChars; j++) {
            if (i == (numWords+1)) { arrpointer[i][j] = '0'; }
            arrpointer[i][j] = str[j];
            pos++;
        }
        str += pos + vc_count_whitespaces(str);
        i++;
        pos=0;
    }

    return arrpointer;
}

//int main() {
//    char *word = "Hello world\nI like an  apple";
//    char **arr = vc_split_whitespaces(word);
//
//    for (int i = vc_count_words(word); i > 0; --i) {
//        printf("%s", *arr);
//        printf("%c", '\n');
//        arr++;
//    }
//
//    return 0;
//}