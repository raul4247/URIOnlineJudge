#include <stdio.h>
int main()
{
    const int FINAIS_POT[4] = {1, 7, 9, 3};
    int t;
    long int n;
    scanf("%i", &t);
    int i;
    for (i = 0; i < t; i++)
    {
        scanf("%li", &n);
        printf("%i\n",FINAIS_POT[n & 3]);
    }
    return 0;
}