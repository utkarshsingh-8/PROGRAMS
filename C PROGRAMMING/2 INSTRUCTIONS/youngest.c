#include <stdio.h>

int main()
{
    int ram, shyam, ajay;
    printf("Enter the age of Ram  Shyam and Ajay\n");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if (ram < shyam && ram < ajay)
        printf("Ram is youngest\n");

    if (shyam < ram && shyam < ajay)
        printf("Shyam is youngest\n");

    if (ajay < ram && ajay < shyam)
        printf("Ajay is youngest");

    return 0;
}