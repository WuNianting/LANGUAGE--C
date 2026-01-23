#include <time.h>
#include <stdio.h>
int main(){
    time_t timep;
    struct tm* p;
    time(&timep);
    p=gmtime(&timep);
    printf("%d/%d/%d",1900+p->tm_year,1+p->tm_mon,p->tm_mday);

    

    return 0;
}