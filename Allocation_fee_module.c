#include <stdio.h>
#include <string.h>
#include "allocation_fee_module.h"

void allocateRoom() {
    int roll, rid;
    printf("Enter Student Roll: ");
    scanf("%d", &roll);

    int sIndex = findStudentByRoll(roll);
    if (sIndex == -1) {
        printf("Student Not Found!\n");
        return;
    }

    printf("Enter Room ID to Allocate: ");
    scanf("%d", &rid);

    int rIndex = findRoomByID(rid);
    if (rIndex == -1) {
        printf("Room Not Found!\n");
        return;
    }

    if (rooms[rIndex].occupied < rooms[rIndex].capacity) {
        students[sIndex].roomAllocated = rid;
        rooms[rIndex].occupied++;
        printf("Room Allocated Successfully!\n");
    } else {
        printf("Room is FULL!\n");
    }
}

void calculateFees() {
    int roll;
    float baseFee, lateFine;

    printf("Enter Student Roll: ");
    scanf("%d", &roll);

    int sIndex = findStudentByRoll(roll);
    if (sIndex == -1) {
        printf("Student Not Found!\n");
        return;
    }

    printf("Enter Base Hostel Fee: ");
    scanf("%f", &baseFee);

    printf("Enter Late Fine (if any): ");
    scanf("%f", &lateFine);

    students[sIndex].feesDue = baseFee + lateFine;

    printf("Fees Updated Successfully!\n");
}

void payFees() {
    int roll;
    printf("Enter Student Roll: ");
    scanf("%d", &roll);

    int sIndex = findStudentByRoll(roll);
    if (sIndex == -1) {
        printf("Student Not Found!\n");
        return;
    }

    students[sIndex].feesDue = 0;
    printf("Fees Paid Successfully!\n");
}

void displayFeeReport() {
    printf("\n--- Fee Report ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll: %d | Name: %s | Fees Due: %.2f\n",
               students[i].roll,
               students[i].name,
               students[i].feesDue);
    }
}
