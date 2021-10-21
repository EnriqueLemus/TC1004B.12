#include <stdio.h>

int main(){
  while(1){
  int pid = fork();
  if(pid==0){
    printf("Soy el proceso hijo");
  } else {
  printf("Soy el padre y mi hijo es d%", pid);
  }
  }
  return 0;
}  
    
  
  
