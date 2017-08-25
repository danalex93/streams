/*
  streams/delete_zeros.c 
  by Daniel Morales Miguel
  https://github.com/danalex93/dd/
  GNU General Public License v3.0
*/

/* deletes one zero after 5 ones in input */
char* delete_zeros(char *input){
  int i, current, one_count, deleted_zeros;
  char *output;

  output = (char *) malloc(sizeof(input));

  current = 0;
  one_count = 0;
  deleted_zeros = 0;
  for (i = 0; i < strlen(input); i++){    
    if (input[i] == '1'){
      if (one_count > 5){
        return "Error: consecutive ones can't be more than 5.";
      } else {
        one_count++;
        output[current] = '1';
        current++;
      }
    } else {
      if (one_count != 5){
        output[current] = '0';
        current++;
      } else {
        deleted_zeros++;
      }
      one_count = 0;
    }
  } 

  /* add remaining zeros */
  for (i = strlen(output); i < strlen(input); i++){
    output[i] = '0';
  }

  return output;
} 