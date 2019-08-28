#include <stdio.h>

#include <stdlib.h>

void CTree(int rows){
  int star, blank;
  printf("\n");
  for(int i=1;i<=rows;i++){
         star = i*2-1;
         blank = i + rows - star;
         for(int j = 0; j < blank; j++)
         {
             printf("%c",' ');
         }
         for(int k = 0; k < star; k++)
         {
             printf("%c",'*');
         }
         printf("\n");
     }
     printf("\n");
}

void rec(int rows){
  printf("\n");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < rows; j++){
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

void tri(int rows){
  printf("\n");
  for(int i = 0; i <= rows; i++){
    for(int j = 1; j <= i; j++){
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

int main(){
  while(1){
  printf("Choose the figure you want to print:\nChristmastree - 1\nRectangle - 2\nTriangle - 3\nI want to exit - 0\n");
  int x;
  scanf("%d", &x);

  if (x == 0){
     break;
  }else if (x == 1){
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d", &rows);
    CTree(rows);
  }else if(x == 2){
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d", &rows);
    tri(rows);
  }else if( x == 3){
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d", &rows);
    rec(rows);
  }
  }
  return 0;
}
