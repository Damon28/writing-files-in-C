#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0*/

int main()
{
    printf("\n===Reading Files in C===\n\n");

    char line[255]; /*NOTE: Variable created*/

    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer); /*Reads line by line everytime it's ran */
    printf("1st line from fgets(): %s\n", line);
    fgets(line, 255, fpointer); /*Reads the 2nd line*/
    printf("2nd line from fgets(): %s", line);

    fclose(fpointer);

    printf("\n\nfgets takes 3 parameters:\n1. Variable\n2. amount of chars (should match var)\n3. file pointer");


    return 0;
}
