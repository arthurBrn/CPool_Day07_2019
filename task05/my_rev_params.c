/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** Task 05
*/

void my_putchar(char c);
int my_putstr(char const *c);

void my_rev_params(int argc, char **argv)
{
    int i = 0;

    while (i != argc) {
        my_putstr(argv[argc-1]);
        my_putchar('\n');
        argc--;
    }
}

int main(int argc, char **argv)
{
    my_rev_params(argc, argv);
    return (0);
}
