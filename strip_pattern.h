/*
  streams/strip_pattern.h
  by Daniel Morales Miguel
  https://github.com/danalex93/dd/
  GNU General Public License v3.0
*/

/* function that extracts desired pattern from begin and end of a input source */
char* strip_pattern(char *input, char *pattern) { 
  int i;

  /* check if input is smaller than two patterns */ 
  if (strlen(input) < strlen(pattern)*2){
    return "Error: Pattern is larger than input stream.";
  }

  /* check pattern at beginning */
  for (i = 0; i < strlen(pattern); i++){
    if (input[i] != pattern[i]){
      return "Error: input beginning doesn't contain selected pattern.";
    }
  }
 
  /* check pattern at end */
  for (i = 0; i < strlen(pattern); i++){
    if (input[strlen(input)-strlen(pattern)+i] != pattern[i]){
      return "Error: input end doesn't contain selected pattern.";
    }
  }

  /* calculate final size of content */
  int final_size = strlen(input) - (strlen(pattern)*2);
  final_size = final_size*sizeof(char);

  char *output = (char *) malloc(final_size);

  /* remove latest strings */
  int j = 0;
  int end = strlen(input) - strlen(pattern);
  for (i = strlen(pattern); i < end; i++){
    output[j] = input[i];
    j++;
  }

  return output;
}