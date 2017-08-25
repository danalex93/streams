/*
  streams/hex_to_bin.c 
  by Daniel Morales Miguel & David Sanhueza Andréus
  https://github.com/danalex93/streams/
  GNU General Public License v3.0
*/

char* hex_to_bin(char *input){
  char *output = (char *) malloc(sizeof(input)*4);
  
  int i;
  for (i = 0; i < strlen(input); i++){
    switch (input[i]){
      case '0':
        strcat (output ,"0000");
        break;
      case '1':
        strcat (output ,"0001");
        break;
      case '2':
        strcat (output ,"0010");
        break;
      case '3':
        strcat (output ,"0011");
        break;
      case '4':
        strcat (output ,"0100");
        break;
      case '5':
        strcat (output ,"0101");
        break;
      case '6':
        strcat (output ,"0110");
        break;
      case '7':
        strcat (output ,"0111");
        break;
      case '8':
        strcat (output ,"1000");
        break;
      case '9':
        strcat (output ,"1001");
        break;
      case 'A':
      case 'a':
        strcat (output ,"1010");
        break;
      case 'B':
      case 'b':
        strcat (output ,"1011");
        break;
      case 'C':
      case 'c':
        strcat (output ,"1100");
        break;
      case 'D':
      case 'd':
        strcat (output ,"1101");
        break;
      case 'E':
      case 'e':
        strcat (output ,"1110");
        break;
      case 'F':
      case 'f':
        strcat (output ,"1111");
        break;
      default:
        printf("¡ERROR!\n");
        printf( "No se pudo completar el proceso, debido a que se ingreso un caracter no hexadecimal\n");
        break;
    }
  }

  return output;
}