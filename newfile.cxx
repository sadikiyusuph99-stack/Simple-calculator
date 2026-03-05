#include <stdio.h>

float getGradePoint(int marks, char *grade) {
    if (marks >= 70) {
        *grade = 'A';
        return 4.0;
    } else if (marks >= 60) {
        *grade = 'B';  // B+
        return 3.5;
    } else if (marks >= 50) {
        *grade = 'B';
        return 3.0;
    } else if (marks >= 40) {
        *grade = 'C';
        return 2.0;
    } else {
        *grade = 'F';
        return 0.0;
    }
}

int main() {
    int n, i, marks;
    float credits, totalCredits = 0, totalPoints = 0, gpa;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("\nSubject %d\n", i);
        printf("Enter marks: ");
        scanf("%d", &marks);

        printf("Enter credits: ");
        scanf("%f", &credits);

        float gp = getGradePoint(marks, &grade);

        printf("Grade: %c, Grade Point: %.1f\n", grade, gp);

        totalCredits += credits;
        totalPoints += credits * gp;
    }

    gpa = totalPoints / totalCredits;
    printf("\nYour GPA is: %.2f\n", gpa);

    return 0;
}