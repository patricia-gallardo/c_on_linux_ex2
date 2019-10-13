#include "csv.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  if (argc != 3) {
    printf("Usage: ./tokenizer <input file> <output file>\n");
    return EXIT_FAILURE;
  }

  return convert(argv[1], argv[2]);
}