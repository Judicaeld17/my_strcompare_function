// Description
// Reproduce the behavior of the function strcmp.
// The strcmp() function compares string1 with string2 to see if there are equals.
#include<ctype.h>
int my_strcmp(char* str1,char* str2){
    int comprtor;
    comprtor=*str1-*str2;
    if(comprtor>0){
        return 1;
    }
    else if(comprtor<0){
        return -1;
    }
    else{
        return 0;
    }
}