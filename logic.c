//logic of calculator
#include<stdio.h>
#define SIZE 100

void enterCredits(int[], char[], int*);
double calcGpa(int[], char[], int);
void printGpa(double);
int main(void)
{ 
    int credit[SIZE];
    char grade[SIZE];
    int count;
    double gpa;
  
    count = 0;
    enterCredits(credit, grade, &count);
    gpa = calcGpa(credit, grade, count);
    printGpa(gpa);
}

    void enterCredits(int credit[], char grade[], int* count)
{ 
    int i;
    int d;
    int end;
    char end1;

      for (i = 0; i < SIZE; i++)
        {
          printf("Enter credits for course or -1 to end --> ");
          scanf("%d", &end);

          if (end == -1)
          {
            i += 100;
          }
          else
          {
            credit[i] = end;
            *count += 1;

            printf("Enter grade for course --> ");
            while (getchar() != '\n');
            scanf("%c", &end1);

            grade[i] = end1;
          
          }
        }
  return;
}

  double calcGpa(int credit[], char grade[], int count) 
{
    double totalPoints = 0;
    int totalCredits = 0;
    double gpa;
  
    for (int i = 0; i < count; i++) {
        double points;
        switch (grade[i]) {
            case 'A':
            case 'a':
                points = 4.0;
                break;
            case 'B':
            case 'b':
                points = 3.0;
                break;
            case 'C':
            case 'c':
                points = 2.0;
                break;
            case 'D':
            case 'd':
                points = 1.0;
                break;
            case 'F':
            case 'f':
                points = 0.0;
                break;
            default:
                printf("Invalid grade %c entered. Skipping...\n", grade[i]);
                continue;
        }
        totalPoints += points * credit[i];
        totalCredits += credit[i];
    }

    if (totalCredits == 0)
    {
        return 0.0;
    } 
    else 
    {
        gpa = totalPoints / totalCredits;
    }
  
  return gpa;
}

  void printGpa(double gpa)
{
    printf("Your GPA: %.2f\n", gpa);
}