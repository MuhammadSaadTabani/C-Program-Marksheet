#include<stdio.h>
#include<math.h>

float percentage(float maths, float physics,float elec,float isl,float cp) {
	float perc = (((maths + physics + elec + isl + cp) / 500) *100);
	return perc;
}
void Grade(float perc) {
	if (perc >= 80) {
		printf("\nGrade : A+");
	}
	else if (perc >= 70 && perc<80) {
		printf("\nGrade : A");
	}
	else if (perc >= 60 && perc < 70) {
		printf("\nGrade : B");
	}
	else if (perc >= 50 && perc < 60) {
		printf("\nGrade : C");
	}
	else {
		printf("\nGrade : Fail");
	}
}
float CGPA(float maths, float physics, float elec, float isl, float cp) {
	float gpa[5];
	float marks[5] = { maths,physics,elec,isl,cp };
	for (int i = 0; i < 5;i++) {
		if (marks[i] >= 80) {
			gpa[i] = 4;
		}
		else if (marks[i] >= 70 && marks[i] < 80) {
			gpa[i] = 3.5;
		}
		else if (marks[i] >= 60 && marks[i] < 70) {
			gpa[i] = 3;
		}
		else if (marks[i] >= 50 && marks[i] < 60) {
			gpa[i] = 2.5;
		}
		else {
			gpa[i] = 0;
		}
	}
	float cgpa = ((gpa[0]*3)+(gpa[1] * 3)+ (gpa[2] * 3) + (gpa[3] * 2)+ (gpa[2] * 3))/14;
	return cgpa;
}

void main(void)
{
	
	float maths, physics, elec, isl , cp;
	printf("##### Mark Sheet #####\n");
	printf("\nEnter marks for Maths :");
	scanf_s("%f", &maths);
	printf("\nEnter marks for Physics :");
	scanf_s("%f", &physics);
	printf("\nEnter marks for Electronics :");
	scanf_s("%f", &elec);
	printf("\nEnter marks for Islamiat :");
	scanf_s("%f", &isl);
	printf("\nEnter marks for Computer Programming :");
	scanf_s("%f", &cp);
	float perc = percentage(maths, physics, elec, isl, cp);
	printf("\nPercentage : %f", perc);
	Grade(perc);
	printf("\nCGPA : %f ", CGPA(maths, physics, elec, isl, cp));
}
