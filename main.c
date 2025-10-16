#include <stdio.h>
#include <stdlib.h>

  //실습 4
  
//전역변수는 알아서 0으로 초기화됨 
//추가로 초기화 문법 넣으면 원하는 초기화값 들어감  

void f(void);

//int i; //이거 없애고 for문마다 int i추가  
int main(void)
{
  int i=0;
  for(i=0; i<5; i++) //i가 전역 변수라서 여기서도 ++ , 아래에서도 ++ 
  //따라서 i를 지역변수로 바꾸기  
  {
    f();
  } 
  system("PAUSE");
  return 0;
}

void f(void)
{
  int i=0; 
  for(i=0; i<10; i++)
    printf("#"); 
  
  //여기다가 시스템 퍼즈 넣으면 안됨  
	
 } 
  

