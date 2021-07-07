#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Create a instance

char ar_nm[30], bk_nm[30];

// Keep the track of the number of
// of patient available in the hospital
int i=0, input=0, count=0;
// Create Structure of Library
struct hospital {
char patient_name[20];
char disease[20];
int age,phone;
};
void add_patient_name(struct hospital hp[100]){
    printf("Enter patient name = ");
    scanf("%s", hp[count].patient_name);
    printf("Enter disease = ");
    scanf("%s", hp[count].disease);
    printf("Enter age = ");
    scanf("%d", &hp[count].age);
    printf("Enter phone = ");
    scanf("%d", &hp[count].phone);
count++;
}
void patient_info(struct hospital hp[100]){
    printf("you have entered"
                   " the following "
                   "information\n");
for (i = 0; i < count; i++) {
   printf("patient name = %s",hp[i].patient_name);
        printf("\n disease = %s",hp[i].disease);
        printf("\n age = %d",hp[i].age);
        printf("\n phone = %d\n",hp[i].phone);
}
}
void patients_by_disease(struct hospital hp[100]){
    printf("Enter disease : ");
scanf("%s", ar_nm);
for (i = 0; i < count; i++) {
   if (strcmp(ar_nm,hp[i].disease)== 0){
       printf(" %s\n %s\n %d\n %d\n",hp[i].patient_name,hp[i].disease,hp[i].age,
hp[i].phone);
}
}
}
void total_patients(){
    printf("\n No of patients in hospital : %d\n",count);
}
// Driver Code
int main()
{
    struct hospital hp[100];
// Iterate the loop
while (input != 5) {

// hospital name
printf("\t\t           ***********************     \n");
    printf("\t\t        **         WELCOME TO      **\n");
    printf("\t\t     **        AKSHRA FOUNDATIONS       **\n");
    printf("\t\t        **         HOSPITAL        **\n");
    printf("\t\t        ***********************     \n\n");
printf("\n\n1. Add patient infor"
"mation\n2. Display "
"patient information\n");
printf("3. List all patients of "
"disease\n");
printf(
"4. List the count of patient"
"s in the hospital\n");
printf("5. Exit");

// Enter the patient details
printf("\n\nEnter one of "
"the above: ");
scanf("%d", &input);

// Process the input
switch (input) {

// Add patient
case 1:
   add_patient_name(&hp[100]);
break;

// Print patient information
case 2:
   patient_info(&hp[100]);
break;

// Take the disease as input
// List all patients of disease
case 3:
   patients_by_disease(&hp[100]);
break;

// Print total count
case 4:
   total_patients();
break;
case 5:
exit(0);
}
}
return 0;
}

