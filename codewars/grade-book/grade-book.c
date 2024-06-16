#include <stdio.h>
#include <stdbool.h>

typedef bool (*GradeA)(int avarage);
typedef bool (*GradeB)(int avarage);
typedef bool (*GradeC)(int avarage);
typedef bool (*GradeD)(int avarage);
typedef bool (*GradeF)(int avarage);

typedef struct {
    GradeA A;
    GradeB B;
    GradeC C;
    GradeD D;
    GradeF F;
} Grades;

bool gradeA(int avarage) {
    return 90 <= avarage && avarage <= 100;
}

bool gradeB(int avarage) {
    return 80 <= avarage && avarage < 90;
}

bool gradeC(int avarage) {
    return 70 <= avarage && avarage < 80;
}

bool gradeD(int avarage) {
    return 60 <= avarage && avarage < 70;
}

bool gradeF(int avarage) {
    return 0 <= avarage && avarage < 60;
}

char gradeBook(int x, int y, int z) {
    int avarage = (x + y + z) / 3;
    Grades grades = { gradeA, gradeB, gradeC, gradeD, gradeF };

    if (grades.A(avarage)) return 'A';
    if (grades.B(avarage)) return 'B';
    if (grades.C(avarage)) return 'C';
    if (grades.D(avarage)) return 'D';
    if (grades.F(avarage)) return 'F';

    return 'F';
}

int main() {
    char grade = gradeBook(95, 90, 85);
    printf("grade: %c", grade);
}
