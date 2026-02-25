#include <stdio.h>
int main() {
int list[]= {3,5,3,8,6,9,4,2,0,1};
int i;

int count=0;
//number of times 3 appears
for (i=0;i<10;i++){
    if (list[i]==3){
        count++;
    }
}
printf("3 appears %d times",count);
return 0;




}