#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){ 
    srand((unsigned int)time(NULL));
    int x=0+rand()%(2-0+1);
    switch(x){
        case 0:printf("剪刀");break;
        case 1:printf("石头");break;
        case 2:printf("布");break;
    }
    
    return 0;
}
