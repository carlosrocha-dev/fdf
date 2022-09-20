#include <unistd.h>
#include <stdio.h>

int main() {
  char buffer[10];
  int rbytes = 0;
  rbytes = read(STDIN_FILENO, buffer, 2);
  printf("\nReceived: ");
  // printf(buffer);
  printf("\nLength: ");
  printf("%d", rbytes);
}