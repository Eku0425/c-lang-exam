#include <stdio.h>

int main()
 {
    int n;

    
    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    
    FILE *file = fopen("data.txt", "w");

    
    if (file == NULL)
	 {
        printf("Error opening file.\n");
        return 1; 
    }


    int i;
    for (i = 0; i < n; ++i)
	 {
        char fruitName[50];
        char fruitColor[20];

    
        printf("Enter the name of fruit %d: ", i + 1);
        scanf("%s", fruitname);

        
        printf("Enter the color of %s: ", fruitname);
        scanf("%s", fruitColor);

        
        fprintf(file, "%s - %s\n", fruitname, fruitColor);
    }

    
    fclose(file);

    printf("Data has been written to data.txt.\n");

    return 0; // Exit successfully
}
