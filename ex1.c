#include <stdio.h>
#include <string.h>

void tempCategory(int temp, int* noH, int* noP, int* noC, int* noDay, int* sum);

int main() {
    int temp = 0;
    int noDay = 0;
    int noH = 0;
    int noP = 0;
    int noC = 0;
    int sum = 0;
    char category;
    
    printf("Lets check the weather !\nKeep entering the integer temperature, enter -1000 to quit\n\n");
    
    do
    {
        printf("Temperature: ");
        scanf("%d", &temp);
        tempCategory(temp, &noH, &noP, &noC, &noDay, &sum);

    } while(temp != -1000);

    int average = sum/noDay;
    
    printf("Total Hot days: %d\n", noH);
    printf("Total Pleasant days: %d\n", noP);
    printf("Total Cold days: %d\n", noC);
    printf("Average temperature for %d days is %d", noDay, average);

    return 0;
}

void tempCategory(int temp, int* noH, int* noP, int* noC, int* noDay, int* sum){
    
    if (temp == -1000)
    {
        printf("End.\n\n");
    }
    else if (temp >= 85)
    {
        *noH += 1;
        *noDay += 1;
        *sum += temp;
        printf("Day:  h\n\n");
    }
    else if (temp >= 60 && temp <= 84)
    {
        *noP += 1;
        *noDay += 1;
        *sum += temp;
        printf("Day:  p\n\n");
    }
    else
    {
        *noC += 1;
        *noDay += 1;
        *sum += temp;
        printf("Day:  c\n\n");
    }
}
