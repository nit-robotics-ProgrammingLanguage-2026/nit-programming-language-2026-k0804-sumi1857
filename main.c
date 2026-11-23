#include <stdio.h>

/*整数の2進数表現を逆順にした値を計算する*/
void reverse_bits(int *originalvalue,int *reversedvalue)
{
  int workvalue = *originalvalue;
  int resultvalue = 0;

  /*下位ビットから順に取り出して逆順に並べる*/
  while(workvalue>0)
  {
    resultvalue = (resultvalue << 1) | (workvalue & 1);
    workvalue >>= 1;
  }
  
  /*計算結果を呼び出し元へ返す*/
  *reversedvalue = resultvalue;
}

int main(void)
{
  int inputvalue;
  int outputvalue;
  
  scanf("%d",&inputvalue);
  
  if(inputvalue <= 0)
  {
    printf("NG");
    return 0;
  }
  reverse_bits(&inputvalue,&outputvalue);
  
  printf("%d,%d",inputvalue,outputvalue);
  
  return 0;
}
