#include <stdio.h>
int main(){
    int i,*p,**l;
    i = 9;
    p = &i;
    l = &p;
    printf("%p\n",&i);
    printf("%d\n",*p);
    printf("%p\n",l);
    printf("%p\n",**l);

    return 0;

}