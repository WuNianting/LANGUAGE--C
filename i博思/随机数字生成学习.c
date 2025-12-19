#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned int)time(NULL));//srand((unsigned int)time(NULL))
    int a;
    a=0+rand()%(50-0+1);//min=rand()%(max-min+1)
    printf("%d",a);
    return 0;
}