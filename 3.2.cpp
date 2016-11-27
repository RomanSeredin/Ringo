#include <stdio.h>
 
#define PROBEL ' '
 
 
int main()
{
    char str[255];
    char sym = 0;
    int ptr = 0;
    int inWord = 0; // inWord
    int countWord = 0;
    int countSyminWord = 0;
    
    while ((sym=getchar())!='\n')
    {
        if (sym == PROBEL)
            inWord = 0;
        else
        {
            if (!inWord)
            {
                inWord = 1;             
                if (countWord > 0)
                    printf("Number word #:[%3d] %30s [%3d] <=Length word\n", countWord, str, countSyminWord);
                for(; ptr>0; ptr --)
                    str[ptr]=0;
                ptr = 0;
                countSyminWord = 0;
                countWord++;
                
            }
        }
        if (inWord) 
            countSyminWord++;       
        str[ptr++] = sym;   
    }   
    printf("Number word #:[%3d] %30s [%3d] <=Length word\n", countWord, str, countSyminWord);
   getchar();                             
    return 0;
}