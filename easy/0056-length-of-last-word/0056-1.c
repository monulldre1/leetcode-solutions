#include <string.h>
#include <stdio.h>


int lengthOfLastWord(char* s);


int main()
{
    char* s = {"hallo hey hey loool"};

    int length = lengthOfLastWord(s);
    printf("%d", length);
}

int lengthOfLastWord(char* s) 
{
    int i = 0;
    int slength = strlen(s);
    int length = 0;
    for (i = slength - 1; i >= 0; i--)
    {
        if(s[i] != ' ') 
        {
            length++;
            if(i > 0 && s[i-1] == ' ') break;
        }
    }
    return length;
}
