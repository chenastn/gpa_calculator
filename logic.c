// calculator logic

int enterCredits(void);
char enterGrade(void);
double calcGrade(int, char);

int main(void) { 
    int credits;
    char grade;
    double gpa;

    credits = enterCredits();
    grade = enterGrade();
    gpa = calcGrade(credits, grade);
}

int enterCredits(void) { 
    int credits;
    
    scanf("%d", &credits);
    
    return(credits);
}

char enterGrade(void) {
    char grade;

    scanf("%c", &grade);

    return(grade);
}

    double calcGrade(int credits, char grade) {

}