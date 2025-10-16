#include <stdio.h>
#include <stdlib.h>

  //실습 3
  
int inc(int counter);

int main(int argc, char *argv[])
{
  int i=10;
  
  printf("함수 호출전 i=%d\n",i);
  i=inc(i); //inc(i)를 i=inc(i)로 변경해야 함수의 반환값(counter값)을 받을 수 있음  
  printf("함수 호출후 i=%d\n",i);
  
  system("PAUSE");	
  return 0;
}
int inc(int counter)
{
  counter++;
  system("PAUSE");	
  return counter;
 } 
  

