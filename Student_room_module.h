#ifndef STUDENT_ROOM_MODULE_H
#define STUDENT_ROOM_MODULE_H

#define MAX 100

typedef struct {
    int roomID;
    char type[10];     // "Single" / "Double"
    int capacity;      // 1 or 2
    int occupied;      // number of students currently in room
} Room;

typedef struct {
    int roll;
    char name[50];
    int age;
    int roomAllocated; // 0 = not allocated, else roomID
    float feesDue;
} Student;

extern Room rooms[MAX];
extern Student students[MAX];
extern int roomCount, studentCount;

void addRoom();
void addStudent();
int findRoomByID(int id);
int findStudentByRoll(int roll);
void displayRooms();
void displayStudents();

#endif
