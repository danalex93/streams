/*
  streams/remove_pattern.c
  by Daniel Morales Miguel & David Sanhueza Andréus
  https://github.com/danalex93/streams/
  GNU General Public License v3.0
*/

int min(int a, int b){
  if (a <= b){
    return a;
  } else {
    return b;
  }
}

/* remove all ocurrencies of pattern in input string */
char* remove_pattern(char *input, char *pattern) {
  int i, j, k, current, end, exists;
  char *output, *final_output;

  /* check if input is smaller than pattern */ 
  if (strlen(input) < strlen(pattern)){
    return "Error: Pattern is larger than input stream.";
  }

  /* remove all ocurrencies of pattern */
  output = (char *) malloc(sizeof(input));
  current = 0;
  end = strlen(input) - strlen(pattern) + 1;

  for (i = 0; i < end; i++){
    k = 0;
    exists = 1;
    for (j = i; j < min(i+strlen(pattern), end); j++){
      if (input[j] != pattern[k]){
        exists = 0;
        break;
      }
      k++;
    }

    if (exists){
      i += strlen(pattern) - 1;
    } else {
      output[current] = input[i];
      current += 1;
    }
  }

  /* send the right string of acording size */
  final_output = (char *) malloc((current+1)*sizeof(char));

  for (i = 0; i < current; i++){
    final_output[i] = output[i];
  }

  return output;
}