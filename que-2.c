#include <stdio.h>
int main()
{
    char str[100];
    int count[5] = {0};

    printf("Enter a sentence: ");
    gets(str);
    int i;

    for (i=0; i<strlen(str); i++)
    {
        if(str[i] =='a' || str[i] =='A')
        {
            count[0]++;
        }
        else if(str[i] =='e' || str[i] =='E')
        {
            count[1]++;
        }
        else if(str[i] =='i' || str[i] =='I')
        {
            count[2]++;
        }
        else if(str[i] =='o' || str[i] =='O')
        {
            count[3]++;
        }
        else if(str[i] =='u' || str[i] =='U')
        {
            count[4]++;
        }
    }
    printf("Each vowel in the sentence are:\n");
    printf("a: %d\n", count[0]);
    printf("e: %d\n", count[1]);
    printf("i: %d\n", count[2]);
    printf("o: %d\n", count[3]);
    printf("u: %d\n", count[4]);

    return 0;
}
