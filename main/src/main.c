#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
  char board [3][3] = 
  {
    '1','2','3',
    '4','5','6',
    '7','8','9',
  }

  //Mov = Movimento
  int mov = 0;

  while (mov < 9) 
  {
    startGame();
    mov++;
  }  
  
  return 0;
}

 
void startGame () 
{
  system('clear');
  printf("\n");
  
  for (int x = 0; x < 3; x++) 
  {
    for(int y = 0; y < 3; y++ )
    {
      printf(" %c ", board[x][y] );
    } 
  }  
}
