#include <stdio.h>

int main() {
    
    char message[] = "JAMIE";
    int n = 5;
    int counter;
    int key = 2;
    for(counter = 0; counter<n; ++counter){
        printf("%c", message[counter] + key);  
    }
    
         
  return 0;
}
