#include <stdio.h>
#include <stdlib.h>

  //�ǽ� 6-1

int all_files; 

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
