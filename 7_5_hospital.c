#include <stdio.h>
#include <string.h>

int age[100];
char name[100][20], disease[100][20], doctor[100][20];
char patient_name[20];
int patient_count = 0;
void add_patient() {
  printf("Enter the name of the patient: ");
  scanf("%s", name[patient_count]);
  printf("Enter the age of the patient: ");
  scanf("%d", &age[patient_count]);
  printf("Enter the disease: ");
  scanf("%s", disease[patient_count]);
  printf("Enter the doctor assigned to the patient: ");
  scanf("%s", doctor[patient_count]);
  // incrementing the count so that next time entry get stored at new index
  patient_count++;
}

void search(char patient_to_search[]) {
  for (int i = 0; i < patient_count; i++) {
    if (strcmp(patient_to_search, name[i]) == 0) {
      printf("Name: %s \n", name[i]);
      printf("Age: %d \n", age[i]);
      printf("Disease: %s \n", disease[i]);
      printf("doctor: %s \n", doctor[i]);
      return;
    }
  }
  printf("Invalid entry, try again");
}

void patient_records() {
  for (int i = 0; i < patient_count; i++) {
    printf("Name: %s \n", name[i]);
    printf("Age: %d \n", age[i]);
    printf("Disease: %s \n", disease[i]);
    printf("doctor: %s \n", doctor[i]);
  }
}

void discharge(char patient_name[]) {
  int index = -1;
  for (int i = 0; i < patient_count; i++) {
    if (strcmp(patient_name, name[i]) == 0) {
      index = i;
      break;
    }
  }
  if (index == -1) {
    printf("Invalid patient name \n");
    return;
  }
  for (int i = index + 1; i < patient_count; i++) {
    strcpy(name[i - 1], name[i]);
    age[i - 1] = age[i];
    strcpy(disease[i - 1], disease[i]);
    strcpy(doctor[i - 1], doctor[i]);
  }
  patient_count--;
}

int main() {
  int choice;
  while (1) {
    printf("Press 1 to add a new patient:\n");
    printf("Press 2 to search a patient by name:\n");
    printf("Press 3 to display all the patient by records: \n");
    printf("Press 4 to discharge a patient: \n");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        add_patient();
        break;
      case 2:
        printf("Enter the patient name: ");
        scanf("%s", &patient_name);
        search(patient_name);
        break;
      case 3:
        patient_records();
        break;
      case 4:
        printf("Enter the name of the patient to be discharged: ");
        scanf("%s", &patient_name);
        discharge(patient_name);
        break;
      default:
        printf("Invalid input \n");
    }
  }
}