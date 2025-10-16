#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //실습 2
  
  int i;
  
  for (i=0; i<5; i++) //5번 반복  
  {
      static int temp=1; //지역 변수는 중괄호 닫히고 소멸  
      printf("temp=%d\n",temp);
      temp++; 
      /*temp=1만 5번 찍힘  
      1찍고 변수 소멸 후 새로운 변수 생성해서 다시 1찍고 소멸  
      */ 
  }

  system("PAUSE");	
  return 0;
}

/* 해결방법 1. static을 지역 변수에 넣으면 소멸되지 않고 끝까지 감  
            2. int temp=1;을 바깥에 써주기 (for문 안에 있던 건 아예 삭제)  
*/
