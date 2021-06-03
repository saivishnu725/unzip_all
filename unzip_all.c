#include <stdio.h>
#include <stdlib.h>


int main()
{
    puts("Starting to unzip now \n ");
    int r = system("for f in ```ls *.zip``` ; do unzip $f; done");    

    return r;
}