/*
** EPITECH PROJECT, 2019
** my_sort_params
** File description:
** Task 06
*/
int my_strlen(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);



void my_sort_params(int argc, char **argv)
{
    // On parcours strlen(argv) fois la chaine, dans laquelle on fait un while
    for (int i = 0; i < my_strlen(argv); i++) { 
    }
    while (i <= argc + 1) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
        argc--;
    }
}

int main(int argc, char **argv)
{
    my_sort_params(argc, argv);
    return (0);
}
