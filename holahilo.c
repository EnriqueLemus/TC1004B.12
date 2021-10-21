#include <pthread.h>
#include <stdio.h>

#define NUM _THREADS 1000
int saldo:


void *printHola(void *arg){
  int saldolocal = saldo;
  saldolocal += 100:
  saldo = saldolocal;
  pthread_exit(NULL);
}

int main(){
  pthread_t threads [NUM_THREADS];
  saldo = 0:
  for (int i = 0; i < NUM_THREADS; i++){
    pthread_create(&threads[i],NULL,printHola,NULL);
  }

  for (int i = 0; i < NUM THREADS; i++){
    pthread_join(threads[i],NULL);
  }
  printf("El valor del saldo es %d",saldo);  

  return 0;
  
}
