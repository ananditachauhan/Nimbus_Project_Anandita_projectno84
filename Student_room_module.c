#include <stdio.h>
#include <string.h>
#include "student_room_module.h"

Room rooms[MAX];
Student students[MAX];
int roomCount = 0, studentCount = 0;

void addRoom() {
    printf("Enter Room ID: ");
    scanf("%d", &rooms[roomCount].roomID);

    printf("Enter Room Type (Single/Double): ");
    scanf("%s", rooms[roomCount].type);

    if (strcmp(rooms[roomCount].type, "Single") == 0)
        rooms[roomCount].capacity = 1;
    else
        rooms[roomCount].capacity = 2;

    rooms[roomCount].occupied = 0;

    roomCount++;
    printf("Room Added Successfully!\n");
}

void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &students[studentCount].roll);

    printf("Enter Name: ");
    scanf("%s", students[studentCount].name);

    printf("Enter Age: ");
    scanf("%d", &students[studentCount].age);

    students[studentCount].roomAllocated = 0;
    students[studentCount].feesDue = 0;

    studentCount++;
    printf("Student Added Successfully!\n");
}

int findRoomByID(int id) {
    for (int i = 0; i < roomCount; i++)
        if (rooms[i].roomID == id)
            return i;
    return -1;
}

int findStudentByRoll(int roll) {
    for (int i = 0; i < studentCount; i++)
        if (students[i].roll == roll)
            return i;
    return -1;
}

void displayRooms() {
    printf("\n--- Room List ---\n");
    for (int i = 0; i < roomCount; i++) {
        printf("Room ID: %d | Type: %s | Capacity: %d | Occupied: %d\n",
               rooms[i].roomID, rooms[i].type,
               rooms[i].capacity, rooms[i].occupied);
    }
}

void displayStudents() {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll: %d | Name: %s | Age: %d | Room: %d | Fees Due: %.2f\n",
               students[i].roll, students[i].name,
               students[i].age, students[i].roomAllocated,
               students[i].feesDue);
    }
}
