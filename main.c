#include <stdio.h>
#include <stdlib.h>

  //�ǽ� 3
  
int inc(int counter);

int main(int argc, char *argv[])
{
  int i=10;
  
  printf("�Լ� ȣ���� i=%d\n",i);
  i=inc(i); //inc(i)�� i=inc(i)�� �����ؾ� �Լ��� ��ȯ��(counter��)�� ���� �� ����  
  printf("�Լ� ȣ���� i=%d\n",i);
  
  system("PAUSE");	
  return 0;
}
int inc(int counter)
{
  counter++;
  system("PAUSE");	
  return counter;
 } 
  

