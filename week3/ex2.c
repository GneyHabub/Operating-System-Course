#include <stdio.h>

void bubble_sort(int arr[], int len){
  for(int i = 0; i < len-1; i++){
    for( int j = 0; j < len-i-1; j++){
      if(arr[j] > arr[j+1]){
        arr[j] = arr[j] + arr[j+1];
        arr[j+1] = arr[j] - arr[j+1];
        arr[j] = arr[j] - arr[j+1];
      }
    }
  }
}

int main(){
  int a[6] = {4, 7, -3, 12, 0, -1};
  bubble_sort(a, 6);

  for (size_t i = 0; i < 6; i++) {
    printf("%d\n", a[i]);
  }
}
