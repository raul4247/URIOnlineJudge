#include <stdio.h>
int main()
{
    int t;
    long int n;
    scanf("%i", &t);
    int i;
    for (i = 0; i < t; i++)
    {
        scanf("%li", &n);
        printf("%i\n",((n & 1) == 1? 9: 1));
    }
    return 0;
}