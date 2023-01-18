#include <stdio.h>
#include <stdlib.h>
#define CHAR_LENGTH 30

typedef struct date {
	int day;
	int month;
	int year;
} Date;

typedef struct student
{
	char *name;
	int roll;
	int marks;
	Date date;

} Student;

Student *list;
int count;
FILE *fo;

void init(void) {
	fo = fopen("student.bin", "rb+");
	list = malloc(sizeof(Student) * 1000);
	count = 0;
}
void displayRecord(Student s) {
	printf("\n------------Student-Information------------\n");
	printf("Name: %s", s.name);
	printf("Roll No.: %d\n", s.roll);
	printf("Marks: %d\n", s.marks);
	printf("Date of Birth: %d/%d/%d\n", s.date.day, s.date.month, s.date.year);
	printf("----------------------------------------------\n");
}
void loadData(void) {


	while (!feof(fo)) {
		list[count].name = malloc(sizeof(char) * CHAR_LENGTH);
		fgets(list[count].name, CHAR_LENGTH, fo);

		fscanf(fo, "%d", &list[count].roll);

		fscanf(fo, "%d", &list[count].marks);

		fscanf(fo, "%d/%d/%d", &list[count].date.day, &list[count].date.month, &list[count].date.year);
		fgetc(fo);
		count++;
	}

}


void addRecord(void) {

	printf("\nEnter Student Name: ");
	list[count].name = malloc(sizeof(char) * CHAR_LENGTH);
	fgets(list[count].name, CHAR_LENGTH, stdin);

	printf("\nEnter Roll No. : ");
	scanf("%d", &list[count].roll);


	printf("\nEnter Marks: ");
	scanf("%d", &list[count].marks);

	printf("\nEnter DOB(DD/MM/YYYY): ");
	scanf("%d/%d/%d", &list[count].date.day, &list[count].date.month, &list[count].date.year);

	printf("\nSTUDENT ADDED\n");

	displayRecord(list[count]);
	count++;

}
void deleteRecord(void) {

	printf("Enter Roll Number: ");
	int roll;
	scanf("%d", &roll);

	int found = 0;
	int indx = -1;
	int i;
	for (i = 0 ; i < count; i++) {
		if (list[i].roll == roll) {
			found = 1;
			indx = i;
			break;
		}
	}

	if (found) {

		for (i = indx; i < count - 1; i++) {
			list[i] = list[i + 1];
		}
		printf("\nSTUDENT RECORD DELETED\n");
		count--;

	} else {
		printf("\nROLL NUMBER NOT FOUND\n");
		return;
	}

}
void modifyRecord(void) {
	int i;
	for (i = 0 ; i < count; i++) {
		if (list[i].marks < 50 && list[i].marks > 40) list[i].marks += 10;
	}

	printf("\nMARKS MODIFIED\n\n");


}
void displayAllRecord(void) {
	int i;

	for (i = 0; i < count; i++) {
		displayRecord(list[i]);
	}

}
void exportData(void) {
	int i;
	for (i = 0; i < count; i++) {
		fprintf(fo, "%s", list[i].name);
		fprintf(fo, "%d\n", list[i].roll);
		fprintf(fo, "%d\n", list[i].marks);
		fprintf(fo, "%d/%d/%d\n", list[i].date.day, list[i].date.month, list[i].date.year);

	}
}


int main()
{
	init();
	loadData();

	while (1) {
		printf("----------Menu------------\n");
		printf("1.Add New Record\n");
		printf("2.Delete Record\n");
		printf("3.Modify Marks\n");
		printf("4.Display all Record\n");
		printf("5.Exit\n");
		printf("---------------------------\n");

		int choice;
		printf("Enter choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			addRecord();
			break;
		case 2:
			deleteRecord();
			break;
		case 3:
			modifyRecord();
			break;
		case 4:
			displayAllRecord();
			break;
		case 5:
			printf("\nThank You\n\n");
			exportData();
			exit(1);
			break;
		default:
			printf("\nWrong Choice\n");
		}
		printf("\n");

	}

	return 0;
}

