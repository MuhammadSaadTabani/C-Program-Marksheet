#include<conio.h>
#include<stdio.h>

void main(void) {
    float maths, phys, elec, isl, comp;
    float gpa_maths, gpa_phys, gpa_elec, gpa_isl, gpa_comp;
    float cgpa, percentage, marks_obt;
    printf("MarkSheet Program");
    printf("\nEnter Marks of maths:");
    scanf_s("%f", &maths);
    printf("\nEnter Marks of physics:");
    scanf_s("%f", &phys);
    printf("\nEnter Marks of electronics:");
    scanf_s("%f", &elec);
    printf("\nEnter Marks of islamiat:");
    scanf_s("%f", &isl);
    printf("\nEnter Marks of computer programming:");
    scanf_s("%f", &comp);
    if (maths > 100 || maths < 0 || phys > 100 || phys < 0 || elec > 100 || elec < 0
        || isl > 100 || isl < 0 || comp > 100 || comp < 0) {

        printf("\nYou have entered invalid marks");
    }
    else {
        //grading for maths
        if (maths <= 100 && maths>=96) {
            printf("\nGrade in Maths : A+");
            gpa_maths = 4;
        }
        else if (maths <= 95 && maths >= 90) {
            printf("\nGrade in Maths : A");
            gpa_maths = 3.5;
        }
        else if (maths <= 89 && maths >= 80) {
            printf("\nGrade in Maths : B+");
            gpa_maths = 3;
        }
        else if (maths <= 79 && maths >= 70) {
            printf("\nGrade in Maths : B");
            gpa_maths = 2.75;
        }
        else if (maths <= 69 && maths >= 60) {
            printf("\nGrade in Maths : C+");
            gpa_maths = 2.50;
        }
        else if (maths <= 59 && maths >= 50) {
            printf("\nGrade in Maths : C");
            gpa_maths = 2.25;
        }
        else {
            printf("\nGrade in Maths : F");
            gpa_maths = 2;
        }
        //grading for elec
        if (elec <= 100 && elec >= 96) {
            printf("\nGrade in Electronics : A+");
            gpa_elec = 4;
        }
        else if (elec <= 95 && elec >= 90) {
            printf("\nGrade in Electronics : A");
            gpa_elec = 3.5;
        }
        else if (elec <= 89 && elec >= 80) {
            printf("\nGrade in Electronics : B+");
            gpa_elec = 3;
        }
        else if (elec <= 79 && elec >= 70) {
            printf("\nGrade in Electronics : B");
            gpa_elec = 2.75;
        }
        else if (elec <= 69 && elec >= 60) {
            printf("\nGrade in Electronics : C+");
            gpa_elec = 2.50;
        }
        else if (elec <= 59 && elec >= 50) {
            printf("\nGrade in Electronics : C");
            gpa_elec = 2.25;
        }
        else {
            printf("\nGrade in Electronics : F");
            gpa_elec = 2;
        }
        //grading for phys
        if (phys <= 100 && phys >= 96) {
            printf("\nGrade in Physics : A+");
            gpa_phys = 4;
        }
        else if (phys <= 95 && phys >= 90) {
            printf("\nGrade in Physics : A");
            gpa_phys = 3.5;
        }
        else if (phys <= 89 && phys >= 80) {
            printf("\nGrade in Physics : B+");
            gpa_phys = 3;
        }
        else if (phys <= 79 && phys >= 70) {
            printf("\nGrade in Physics : B");
            gpa_phys = 2.75;
        }
        else if (phys <= 69 && phys >= 60) {
            printf("\nGrade in Physics : C+");
            gpa_phys = 2.5;
        }
        else if (phys <= 59 && phys >= 50) {
            printf("\nGrade in Physics : C");
            gpa_phys = 2.25;
        }
        else {
            printf("\nGrade in Physics : F");
            gpa_phys = 2;
        }
        // grading for isl
        if (isl <= 100 && isl >= 96) {
            printf("\nGrade in Islamiat : A+");
            gpa_isl = 4;
        }
        else if (isl <= 95 && isl >= 90) {
            printf("\nGrade in Islamiat : A");
            gpa_isl = 3.5;
        }
        else if (isl <= 89 && isl >= 80) {
            printf("\nGrade in Islamiat : B+");
            gpa_isl = 3;
        }
        else if (isl <= 79 && isl >= 70) {
            printf("\nGrade in Islamiat : B");
            gpa_isl = 2.75;
        }
        else if (isl <= 69 && isl>= 60) {
            printf("\nGrade in Islamiat : C+");
            gpa_isl = 2.5;
        }
        else if (isl <= 59 && isl >= 50) {
            printf("\nGrade in Islamiat : C");
            gpa_isl = 2.25;
        }
        else {
            printf("\nGrade in Islamiat : F");
            gpa_isl = 2;
        }
        //grading for comp
        if (comp <= 100 && comp >= 96) {
            printf("\nGrade in Computer : A+");
            gpa_comp = 4;
        }
        else if (comp <= 95 && comp >= 90) {
            printf("\nGrade in Computer : A");
            gpa_comp = 3.5;
        }
        else if (comp <= 89 && comp >= 80) {
            printf("\nGrade in Computer : B+");
            gpa_comp = 3;
        }
        else if (comp <= 79 && comp >= 70) {
            printf("\nGrade in Computer : B");
            gpa_comp = 2.75;
        }
        else if (comp <= 69 && comp >= 60) {
            printf("\nGrade in Computer : C+");
            gpa_comp = 2.5;
        }
        else if (comp <= 59 && comp >= 50) {
            printf("\nGrade in Computer : C");
            gpa_comp = 2.25;
        }
        else {
            printf("\nGrade in Computer : F");
            gpa_comp = 2;
        }
        
        //calculating Percentage
        marks_obt = maths + phys + elec + isl + comp;
        percentage = (marks_obt / 500) * 100;
        printf("\nPercentage = %.2f", percentage);
        cgpa = ((gpa_maths * 3) + (gpa_phys * 3) + (gpa_elec * 3) + (gpa_comp * 3) + (gpa_isl * 2)) / 14;
        printf("\nCGPA = %.2f", cgpa);

    }

}
