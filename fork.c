#include <stdio.h>

int main(){
  int pid = fork();
  if(pid==0){
    printf("Soy el proceso hijo");
  } else {
  printf("Soy el proceso padre");
  }
  return 0;
}  
    
  
  
