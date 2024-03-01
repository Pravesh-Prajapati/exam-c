#include <st
  if (input_file == NULL) {
    printf("Error opening input file.\n");
    return 1;
  }

  FILE *output_file = fopen("D:\c-language\output-file.txt","w");
  if (output_file == NULL) {
    printf("Error opening output file.\n");
    return 1;
  }

  char sentence[100];
  fgets(sentence, 100, input_file);

  for (i = 0; i < strlen(sentence); i++) {
    sentence[i] = toupper(sentence[i]);
  }
  fputs(sentence, output_file);

  fclose(input_file);
  fclose(output_file);

  return 0;
}
