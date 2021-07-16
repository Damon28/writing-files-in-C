#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0*/

int main()
{
    printf("\n===Writing Files in C===\n\n");
    printf("For fopen(): 1st param is the name of the file; 2nd param is the mode\nfopen(\"<file>\", <mode>)\n\n");
    printf("MODES:\nr - read\nw - write (overwrites)\na - append");
    FILE * fpointer = fopen("employees.txt", "w"); /*fpointer is a pointer to the mem addr of the file (employees.txt)*/

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); /*NOTE: fprintf() takes 2 parameters*/

    fclose(fpointer);
    printf("\n\nNOTE: always use fclose() once done w/ the file.\n\n");

    printf("Adding Kelly from customer service to 'employees.txt\n\n'");

    fopen("employees.txt", "a");

    fprintf(fpointer, "\nKelly, Customer Service\n\n");

    fclose(fpointer);


    return 0;
}
