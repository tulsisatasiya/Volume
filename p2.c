#include<stdio.h>
#include<string.h>

struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

int main(){

    struct Marks m[3];
	int i;
    for(i=0; i<2; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no :");
        scanf("%d", &m[i].roll_no);
        printf("Enter name :");
        scanf("%s",m[i].name);
        printf("Enter Chemistry marks :");
        scanf("%f", &m[i].chem_marks);
        printf("Enter Maths marks :");
        scanf("%f", &m[i].maths_marks);
        printf("Enter Physics marks :");
        scanf("%f", &m[i].phy_marks);
    }

    for(i=0; i<2; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/300*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
} 
