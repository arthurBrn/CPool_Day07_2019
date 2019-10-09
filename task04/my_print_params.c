/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** Task 04
*/

int my_putstr(char const *c);
void my_putchar(char c);

void *my_print_params(int argc, char **argv)
{
    int i = 0;

    while (i != argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
}

int main(int argc, char **argv)
{
    my_print_params(argc, argv);
    return (0);
}
