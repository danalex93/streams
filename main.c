/*
  streams/remove_pattern.c 
  by Daniel Morales Miguel
  https://github.com/danalex93/streams/
  GNU General Public License v3.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hex_to_bin.h"
#include "strip_pattern.h"
#include "remove_pattern.h"
#include "delete_zeros.h"

int main(int argc, char const *argv[]) {
  /* 1 */
  char *hex = hex_to_bin("A13D24FA");
  char *stripped = strip_pattern(hex, "1010");

  printf("INPUT: %s, STRIPPED: %s\n", hex, stripped);

  /* 2 */
  char *removed = remove_pattern(stripped, "00");
  printf("INPUT: %s, REMOVED: %s\n", stripped, removed);

  /* 3 */
  printf("INPUT: %s, DELETED: %s\n", "011111011101", delete_zeros("011111011101"));

  return 0;
}

