#include<stdio.h>

main(int argc, char* argv[])

    FILE* fp;
    int i ;
    char word[15];

    fp=fopen(argv[1], "w");
    printf("Number of command line arguments = %d", argc)
    for (i=2; i < argc;  i++){
        fprintf(fp, "%s\n", argv[i]);
    }
    fclose(fp);
    printf("contents of %s FILE", argv[1]);
    fp = fopen(argv[1],"r");
    for(i=2;i<argc;i++)
    {
        fscanf(fp, "%s", word);
        printf("s \n", argv);
    }
    fclose(fp);
}
