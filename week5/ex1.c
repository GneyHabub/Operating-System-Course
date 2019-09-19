#include <stdio.h>
#include <stdlib.h> 
#include <pthread.h> 
#include <unistd.h>

void* thread(void* vargp) {
  int* myid = (int*)vargp; 
  sleep(1);
  printf("42\n");
  pthread_exit(NULL);	
}

int main() {
  pthread_t id; 
  int n, val;
  printf("Enter the number of threads: ");
  scanf("%d",&n); 

  for (int i=0; i<n; i++) {
    val = pthread_create(&id, NULL, thread, (void *)&id); 
    printf("Thread id:%d\n",(int)id);
  } 
  
  pthread_exit(NULL);  
  return 0;
}