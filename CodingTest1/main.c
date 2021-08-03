#include <stdio.h>

int main(void)
{
    for (int i = 1 ; i <= 50 ; i++)
    {
        
        if (i % 3 == 0)
        {
            printf("Frontend,");
        } else if (i % 5 == 0)
        {
            printf("Backend,");
        } else if (i == 50)
        {
            printf("Backend");
        }
        else  {
            printf("%i,", i);
        }
    }
}
