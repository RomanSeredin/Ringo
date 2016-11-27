#include <stdio.h>
#include <string.h>

int get_s(void);

void InputString(char *str);
void FormatString(char *str);
void main()
{
const int size = 255; 
char str[size];     
InputString(str);
FormatString(str);
}
void InputString(char *str)
{
printf("Vvod stroki: ");
gets(str);
}
void FormatString(char *str)
{
int numWords = 0;
int startWord = 0;
int endWord = 0;
int i;
for (i = 0; i < strlen(str) - 1; i++)   
{
if ((str[i] == ' ') && (str[i+1] != ' ')) 
{
if (numWords == 1)
{
if (str[i] == ' ') 
{
endWord = i-1; 
}
}
numWords = numWords + 1; 
}

if (numWords == 1 && startWord == 0)
{   
startWord = i+1;
}
}
if (str[0] != ' ') 
{
numWords = numWords + 1; 
if (numWords == 2) 
{
endWord = strlen(str) - 1; 
}
}

int halfWordLen = startWord + (int)((endWord-startWord)/2); 
int k, j;
for (j = startWord, k = 0; j <= halfWordLen; j++, k++) 
{
char buf;
buf = str[j];
str[j] = str[endWord-k];
str[endWord-k] = buf;
}
printf("Vsego %d slov v stroke\n" , numWords ); 
puts(str);
getchar();
return ;
}
