#include "main.h"
#include <stdio.h>

void _puts(char *str) {
  puts(str);
}

int main(void) {
  char *str = "\"Programming is like building a multilingual puzzle\"";
  _puts(str);
  return 0;
}
