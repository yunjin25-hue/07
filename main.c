#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //�ǽ� 2
  
  int i;
  
  for (i=0; i<5; i++) //5�� �ݺ�  
  {
      static int temp=1; //���� ������ �߰�ȣ ������ �Ҹ�  
      printf("temp=%d\n",temp);
      temp++; 
      /*temp=1�� 5�� ����  
      1��� ���� �Ҹ� �� ���ο� ���� �����ؼ� �ٽ� 1��� �Ҹ�  
      */ 
  }

  system("PAUSE");	
  return 0;
}

/* �ذ��� 1. static�� ���� ������ ������ �Ҹ���� �ʰ� ������ ��  
            2. int temp=1;�� �ٱ��� ���ֱ� (for�� �ȿ� �ִ� �� �ƿ� ����)  
*/
