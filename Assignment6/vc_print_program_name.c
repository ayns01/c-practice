/**
 * File              : vc_print_program_name.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

int main(int argc, char *argv[]) {
    int i;
    for (i = 0;i < argc;i++)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");
}



