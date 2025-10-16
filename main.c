#include <stdio.h>
#include <stdlib.h>

  //실습 6-1

int all_files; 

extern void sub();

int main(void)
{
    sub();
    printf("%d\n",all_files);
    system("PAUSE");
    return 0;
}

// main 함수 실행 후 sub 함수 실행  
// sub 함수 : extern을 통해 연결됨  
