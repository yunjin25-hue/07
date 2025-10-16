#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //실습 1 
  
  int flag=1;
  int y;
  while(flag != 0)
  {
    int y;
    y=3;
    flag=0;
  }
  y=4; 
  
  system("PAUSE");	
  return 0;
}

/*실행 안되는게 정상 
:  15번째 줄이 문제라고 뜸(그 줄이 문제거나 그 위가 문제인 것) 
--> y가 선언되지 않음 이라고 뜸  
--> while 안에 선언 되어 있는데?
y에 집중해서 문제 해결하기
이유: y가 while 내에서만 해당 --> while 바깥은 선언되지 않은 것 
--> 바깥에도 선언해줘야 함 
