/* Task description:
Rest a little, or go to the homepage and solve some practice tasks...

*/


#include <stdio.h>

int main(){
  int awake=0;
  char str[51];
  while(!awake){
    printf("sleeping...");
    scanf("%s",str); //if you know why it is dangerous to do, you are on a right way in programming!
    if(!strcmp(str,"Breakfast!"))
      awake=1;
  }
  return 0;
}
