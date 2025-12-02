#include <stdio.h>
#include "student_room_module.h"
#include "allocation_fee_module.h"

int main() {
    int choice;

    while (1) {
        printf("\n===== HOSTEL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Room\n");
        printf("2. Add Student\n");
        printf("3. Allocate Room\n");
        printf("4. Calculate Fees\n");
        printf("5. Pay Fees\n");
        printf("6. Display Rooms\n");
        printf("7. Display Students\n");
        printf("8. Fee Report\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRoom(); break;
            case 2: addStudent(); break;
            case 3: allocateRoom(); break;
            case 4: calculateFees(); break;
            case 5: payFees(); break;
            case 6: displayRooms(); break;
            case 7: displayStudents(); break;
            case 8: displayFeeReport(); break;
            case 9: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}



/* OUTPUT
===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice:
1
Enter Room ID: 101
Enter Room Type (Single/Double): Single
Room Added Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 2
Enter Roll Number: 10
Enter Name: Kiara
Enter Age: 20
Student Added Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 3
Enter Student Roll: 10
Enter Room ID to Allocate: 101
Room Allocated Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 4
Enter Student Roll: 10
Enter Base Hostel Fee: 40000
Enter Late Fine (if any): 500
Fees Updated Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 5
Enter Student Roll: 10
Fees Paid Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 1
Enter Room ID: 102
Enter Room Type (Single/Double): Double
Room Added Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 2
Enter Roll Number: 11
Enter Name: Simran
Enter Age: 20
Student Added Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 2
Enter Roll Number: 11
Enter Name: Rahul
Enter Age: 21
Student Added Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 3
Enter Student Roll: 11
Enter Room ID to Allocate: 102
Room Allocated Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 4
Enter Student Roll: 11
Enter Base Hostel Fee: 40000
Enter Late Fine (if any): 500
Fees Updated Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 6

--- Room List ---
Room ID: 101 | Type: Single | Capacity: 1 | Occupied: 1
Room ID: 102 | Type: Double | Capacity: 2 | Occupied: 1

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 7

--- Student List ---
Roll: 10 | Name: Kiara | Age: 20 | Room: 101 | Fees Due: 0.00
Roll: 11 | Name: Simran | Age: 20 | Room: 102 | Fees Due: 40500.00
Roll: 11 | Name: Rahul | Age: 21 | Room: 0 | Fees Due: 0.00

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 8

--- Fee Report ---
Roll: 10 | Name: Kiara | Fees Due: 0.00
Roll: 11 | Name: Simran | Fees Due: 40500.00
Roll: 11 | Name: Rahul | Fees Due: 0.00

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 5
Enter Student Roll: 11
Fees Paid Successfully!

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice: 8

--- Fee Report ---
Roll: 10 | Name: Kiara | Fees Due: 0.00
Roll: 11 | Name: Simran | Fees Due: 0.00
.00

===== HOSTEL MANAGEMENT SYSTEM =====
1. Add Room
2. Add Student
3. Allocate Room
4. Calculate Fees
5. Pay Fees
6. Display Rooms
7. Display Students
8. Fee Report
9. Exit
Enter your choice:*/
