#include <stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    setlocale(0,"");
int n=8;
int i,t;
char *ss1=new char[n];
strcpy(ss1,"");
ss1="ѕривет мир";
cout<<"»сходна€ строка: "<<ss1<<endl;
cout<<" онечный вариант: ";
char ord[]="јаЅб¬в√гƒд≈е1234567890";
for (i=0,t=0; ord[i]!='\0', t<strlen(ss1); i++,t++)
{
for(int i=0; i<=23; i++)
{
if (ss1[t]==ord[i])
cout<<ss1[t];
}
}
cout<<endl;
getchar();
return 0;
}
