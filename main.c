#include <stdio.h>
#include <stdlib.h>
int verification(int tab[],int nb,int x){
    for(int i=0;i<nb;i++){
        if(tab[i]==x){
            return 1;
        }else{
            return 0;
        }
    }
}
int main()
{
    int tab[]={9,5,12,8,4,19},v;
    const int nb=sizeof(tab)/sizeof(tab[0]);
    v=verification(tab,nb,19);
    printf("%d",v);
    return 0;
}
