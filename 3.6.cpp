#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#define N 11
 
int main()
{
    int vals[N],idx,minidx,maxidx,sum=0;
    do {
        srand(time(NULL)|clock());
        for(idx=0;idx<N;idx++)vals[idx]=rand()%10-5;
        for(minidx=0  ;minidx<N&&vals[minidx]< 0; minidx++);
        for(maxidx=N-1;maxidx  &&vals[maxidx]>-1; maxidx--);
        if(minidx>=maxidx)continue;
       } while(0);
    for(idx=0;idx<N;idx++)printf("%d%s",vals[idx],idx<(N-1)?",":"");
    printf("\n");
    printf("min=%d,max=%d\n",minidx,maxidx);
    for(idx=minidx+1;idx<maxidx;idx++)
    {
        sum+=vals[idx];
        printf("Adding %d\n",vals[idx]);
    }
    printf("{%d}\n",sum);
	getchar();
    return 0;
}