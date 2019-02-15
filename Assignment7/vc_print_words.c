/**
 * File              : vc_print_words.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Tue 12 Feb 2018
 */
void vc_print_words(char **words)
{
        int i;
        int j;

        i = 0;
        while (words[i])
        {
                j = 0;
                while (words[i][j])
                        putchar(words[i][j++]);
                putchar('\n');
                i++;
        }
}


