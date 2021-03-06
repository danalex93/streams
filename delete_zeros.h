/*
  streams/delete_zeros.c 
  by Daniel Morales Miguel & David Sanhueza Andréus
  https://github.com/danalex93/streams/
  GNU General Public License v3.0
*/

/* deletes one zero after 5 ones in input */
char* delete_zeros(char *input){
  int i, current, one_count;
  char *output;

  output = (char *) malloc(sizeof(input));

  current = 0;
  one_count = 0;
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