
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


 char* dirnameunix(char* fullpath) 
 {
     char *e = strrchr( fullpath, '/');
     if(!e){
         char* buf = strdup(fullpath);
         return buf;
     }
     int index = (int)(e - fullpath);
     char* s = (char*) malloc(sizeof(char)*(index+1));
     strncpy(s, fullpath, index);
     s[index] = '\0';
     return s;
 }


///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
int main( int argc, char *argv[])
{


    ////////////////////////////////////////////////////////
    if ( argc == 2)
     if ( strcmp( argv[1] , "" ) !=  0 ) 
     {
       printf( "%s\n", dirnameunix( argv[ 1 ]) );
       return 0;
     }

   return 0;
}




