#include <stdio.h>

int main() 
{
    int a,n;
    printf("Enter an integer: ");
    scanf("%d", &n);
      for(int i=1; i<=(2*n)-1; i++){
      a = n;
      for(int j=1; j<=(2*n)-1; j++)
      {
          printf("%d ",a);
          if(j<i)
            a--;
          if(j>((2*n)-1-i))
            a++;
      }
      printf("\n");
  }
    return 0;
}
