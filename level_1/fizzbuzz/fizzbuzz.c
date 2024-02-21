#include <unistd.h>

int main()
{
    int i = 1;
    char c;
    while (i < 101)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            write(1, "fizzbuzz\n", 9);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else
        {
            if (i > 0 && i < 10)
            {
                c = i + '0';
                write(1, &c, 1);
                write(1, "\n", 1);
            }
            else
            {
                c = i / 10 + '0';
                write(1, &c, 1);
                c = i % 10 + '0';
                write(1, &c, 1);
                write(1, "\n", 1);
            }
        }
    i++;
    }
}