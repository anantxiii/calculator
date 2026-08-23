// Including header files
#include <stdio.h>
#include <math.h>

// Function declaration
void average();
void percentage();
void additionSubtractionMultiplicationDivision();
void interest();

// Main function
int main()
{
    int choice;
    // Welcome message
    printf("\nWelcome to Average, percentage & Addition/Subtraction/Multiplication/Division calculator\n\n");
    printf("What do you want to do?\n");
    printf("1. Average\n");
    printf("2. Percentage\n");
    printf("3. Addition/Subtraction/Multiplication/Division\n");
    printf("4. Calculate Interest\n\n");
    printf("Enter choice\n");
    scanf("%d", &choice);

    // Which choice
    if (choice == 1)
    {
        average();
    }
    else if (choice == 2)
    {
        percentage();
    }
    else if (choice == 3)
    {
        additionSubtractionMultiplicationDivision();
    }
    else if (choice == 4)
    {
        interest();
    }

    else
    {
        printf("Enter a valid choice\n");
    }

    return 0;
}

// Average function
void average()
{
    int total;
    float value, totalValue = 0;
    printf("\nEnter the number of values you have for calculating the averages\n");
    scanf("%d", &total);
    printf("\n");
    for (int i = 1; i <= total; i++)
    {
        printf("Enter value %d\n", i);
        scanf("%f", &value);
        totalValue = totalValue + value;
    }
    float average = totalValue / (float)total;
    printf("The average is %.2f\n", average);
}

// Percentage function
void percentage()
{
    int totalNumberOfValues;
    float totalOutOf, value, sum = 0;
    printf("\nEnter the total number of values\n");
    scanf("%d", &totalNumberOfValues);
    printf("\nEnter total out of\n");
    scanf("%f", &totalOutOf);
    printf("\n");
    for (int i = 1; i <= totalNumberOfValues; i++)
    {
        printf("Enter value %d\n", i);
        scanf("%f", &value);
        sum = sum + value;
    }
    float aTotal = totalNumberOfValues * totalOutOf;
    float percentage = (float)sum / aTotal * 100.0;
    printf("Percentage is %.2f\n", percentage);
}

// Addition/Subtraction/Multiplication/Division function
void additionSubtractionMultiplicationDivision()
{
    int choice;
    printf("\nEnter what you want to do?\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter choice by the number\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        int howManyS;
        float numS, sum = 0;
        printf("\nEnter how many numbers do you have\n");
        scanf("%d", &howManyS);
        for (int i = 1; i <= howManyS; i++)
        {
            printf("Enter value %d: ", i);
            scanf("%f", &numS);
            sum = sum + numS;
        }
        printf("\nThe sum is %.2f\n", sum);
        break;
    case 2:
        float num1D, num2D;
        printf("Enter number 1: ");
        scanf("%f", &num1D);
        printf("Enter number 2: ");
        scanf("%f", &num2D);
        float diff = num1D - num2D;
        printf("\nThe difference is %.2f\n", diff);
        break;
    case 3:
        int howManyP;
        float numP, product = 1;
        printf("\nEnter how many numbers do you have\n");
        scanf("%d", &howManyP);
        for (int i = 1; i <= howManyP; i++)
        {
            printf("Enter value %d: ", i);
            scanf("%f", &numP);
            product = product * numP;
        }
        printf("\nThe product is %.2f\n", product);
        break;
    case 4:
        float num1Q, num2Q;
        printf("Enter number 1: ");
        scanf("%f", &num1Q);
        printf("Enter number 2: ");
        scanf("%f", &num2Q);
        float quotient = num1Q / num2Q;
        printf("\nThe difference is %.2f\n", quotient);
        break;

    default:
        printf("Enter a valid value\n");
        break;
    }
}

// Interest function
void interest()
{
    char choice;
    printf("\nWhich type of interest are you interested in\n");
    printf("(c)ompound interest or (s)imple intrest\n");
    while (getchar() != '\n')
        ;
    scanf("%c", &choice);
    if (choice == 'c')
    {
        float principle, rateOfInterest, time;
        printf("\nEnter principle\n");
        scanf("%f", &principle);
        printf("Enter rate of interest\n");
        scanf("%f", &rateOfInterest);
        printf("Enter time(in year)\n");
        scanf("%f", &time);

        float amount = principle * pow((1 + (rateOfInterest / 100)), time);
        printf("New value is: %.2f\n", amount);
    }
    else if (choice == 's')
    {
        float principle, rateOfInterest, time;
        printf("\nEnter principle\n");
        scanf("%f", &principle);
        printf("Enter rate of interest\n");
        scanf("%f", &rateOfInterest);
        printf("Enter time(in year)\n");
        scanf("%f", &time);
        float amount = ((principle * rateOfInterest * time) / 100) + principle;
        printf("New value is: %.2f\n", amount);
    }
    else
    {
        printf("Enter a valid choice\n");
    }
}