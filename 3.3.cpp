#include <stdio.h>
#include <ctype.h>
 
size_t FindMaxLenWord(char* pstr, char** result)
{
    char* begin;
    char* end;
 
    size_t length = 0;
 
    *result = NULL;
 
    while (*pstr)
    {
        for (; *pstr && !isalpha(*pstr); ++pstr) { ; }
        begin = pstr;
 
        for (; *pstr && isalpha(*pstr); ++pstr) { ; }
        end = pstr;
 
        if (begin < end)
        {
            if (length < end - begin)
            {
                length = end - begin;
                *result = begin;
            }
        }
    }
 
    return length;
}
 
int main()
{
    char text[1024];
    fgets(text, sizeof(text) - 1, stdin);
 
    char* maxWord;
    size_t maxLen = FindMaxLenWord(text, &maxWord);
 
    if (maxWord && maxLen)
    {
        printf("Самое длинное слово: %.*s\nЕго размер: %u\n",
               maxLen, maxWord, maxLen);
    }
	getchar();
    return 0;
}