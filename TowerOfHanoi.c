#include<stdio.h>
void TOH(int n,char beg,char aux,char end);

int main()
{

    int n,A,B,C;
    printf("enter number of disk:");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}

void TOH(int n,char BEG,char AUX,char END)
{
  if(n>=1)
  {

      TOH(n-1,BEG,END,AUX);
      printf("%c to %c\n",BEG,END);
      TOH(n-1,AUX,BEG,END);
  }
}
