#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int string_to_number(const char* str2)         //CW 26
{
    int i = 0;
    while (str2[i] != '\0')
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            printf("%hhi ", str2[i]);
        }
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            printf("%hhi ", str2[i]);
        }
        else
        {
            printf("%c ", str2[i]);
        }
        i++;
    }
    printf("\n");
}
int number_to_string(char* str3b, int NUM)
{
    int i = 0;
    while (NUM > 0)
    {
        str3b[i] = (NUM % 10)+'0';
        NUM = NUM / 10;
        i++;
    }
    str3b[i] = '\0';
    for (int a = 0; a < i-1; a++)
    {
        char temp = str3b[a];
        str3b[a] = str3b[i-1];
        str3b[i-1] = temp;
        i--;
    }
}

void upper_case(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {

        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[i] += 'A' -'a';
        }
    }
}

void lower_case(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {

        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 'z' - 'Z';
        }
    }
}

int main()
{
    int LEN = 100;
    char str1[LEN];
    const char* str2 = "abcd eftg ATSD 1234 0987";
    char str3b[LEN];

    //	puts(str);
    //	mystrlen(str);

    string_to_number(str2);                      //26
    printf("Enter number:\n");
    int NUM = 0;
    scanf("%d", &NUM);
    number_to_string(str3b, NUM);
    puts(str3b);
    puts("Enter");
    while (getchar() != '\n');
    gets(str1);
    upper_case(str1);
    puts(str1);
    lower_case(str1);
    puts(str1);
//    system("Pause");
    return 0;
}