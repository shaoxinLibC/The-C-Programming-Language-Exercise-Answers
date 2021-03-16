#include <stdio.h>
#define OUT 0
#define IN 1

/* write a program to print its input one word per line ;vertion 2nd */

int main(int argc,char const* argv[])
{
  int c;
  int state;

  state=OUT;
  while((c=getchar())!=EOF){
    if(c==' ' || c=='\t'){
      if(state == OUT)
        state=IN;
    }else if(state==IN){
      putchar('\n');
      putchar(c);
      state=OUT;
    }else
      putchar(c);
  }
  
  return 0;
}
  
