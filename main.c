#include <stdio.h>
#include <stdlib.h>

  //�ǽ� 6-1

static int all_files; //static ���̸� main.c������ ��� ����  

extern void sub();

int main(void)
{
    sub();
    printf("%d\n",all_files);
    system("PAUSE");
    return 0;
}

// main �Լ� ���� �� sub �Լ� ����  
// sub �Լ� : extern�� ���� �����  
