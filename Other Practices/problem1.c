#include<stdio.h>
#include<string.h>


char removeR[] (char[] *s, char[] a, int count){
    if(s.length == 0){
        return a;
    }
    char temp = s[0];
    if(temp == 'r'){
        count ++;
    }
    char small[] ;
    strncpy(small,&s[1],s.length);
    if(count  == 2 && temp == 'r'){
        return(removeR(small, a, count));

    }
    else{
       return(removeR(small, a + temp, count)); 
    }
}

int main(){
    printf(removeR("jerry","",0));
    return 0;
}
