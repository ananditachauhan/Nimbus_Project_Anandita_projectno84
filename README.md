# Nimbus_Project_Anandita_projectno84




//[KARTIKEY SINGH 25LBCS3305]


// ----------------------------
// ADDING STUDENT
// ----------------------------
void addStudent() {
    printf("\nEnter Student ID: ");
    scanf("%d", &students[studentCount].id);

 printf("Enter Student Name: ");
 scanf(" %[^\n]", students[studentCount].name);

  students[studentCount].allocatedRoom = -1; // not allocated yet

 studentCount++;
printf("\nStudent Added Successfully!\n");
}

// ----------------------------
// ALLOCATION FUNCTION (Pointer Based)
// ----------------------------
void allocateRoom() {
    int id, i, found = 0;
    printf("\nEnter Student ID to Allocate Room: ");
    scanf("%d", &id);

    
     
for (i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            found = 1;
            
// show available rooms
            printf("\nAvailable Rooms:\n");
            for (int j = 0; j < roomCount; j++) {
                if (rooms[j].filled < rooms[j].capacity) {
                    printf("Room %d (%s) - Fee: %.2f\n",
                        rooms[j].roomNo, rooms[j].type, rooms[j].fee);
                }
            }

 int roomNo;
  printf("\nEnter Room Number to Allocate: ");
   scanf("%d", &roomNo);

// assign via pointer
  Room *r;
    for (int k = 0; k < roomCount; k++) {
       if (rooms[k].roomNo == roomNo && rooms[k].filled < rooms[k].capacity) {

  r = &rooms[k];  // pointer to the room

students[i].allocatedRoom = r->roomNo;
  r->filled++;

printf("\nRoom Allocated Successfully!\n");
return;
                }
            }
            printf("\nInvalid Room or Room is Full.\n");
        }
    }

 if (!found)
        printf("\nStudent Not Found!\n");
}


// [KARAN YADAV UID-25LBCS3377]

// ----------------------------
// DISPLAY ALL STUDENTS
// ----------------------------
void displayStudents() {
    printf("\n--- Student Records ---\n");

    for (int i = 0; i < studentCount; i++) {
        printf("\nID: %d\nName: %s\nRoom: %d\nMonths: %d\nLate Days: %d\nTotal Fee: %.2f\nFine: %.2f\nFinal Amount: %.2f\nPayment: %s\n",
               students[i].id,
               students[i].name,
               students[i].allocatedRoom,
               students[i].monthsStayed,
               students[i].lateDays,
               students[i].totalFee,
               students[i].fine,
               students[i].finalAmount,
               students[i].paymentStatus);
    }
}

// ----------------------------
// SAVE TO FILE
// ----------------------------
void saveToFile() {
    FILE *fp = fopen("hostel_data.txt", "w");
    if (!fp) {
        printf("Error Saving File!\n");
        return;
    }

    fwrite(&roomCount, sizeof(int), 1, fp);
    fwrite(&rooms, sizeof(Room), roomCount, fp);

    fwrite(&studentCount, sizeof(int), 1, fp);
    fwrite(&students, sizeof(Student), studentCount, fp);

    fclose(fp);
    printf("\nData Saved Successfully!\n");
}

// ----------------------------
// LOAD FROM FILE
// ----------------------------
void loadFromFile() {
    FILE *fp = fopen("hostel_data.txt", "r");
    if (!fp) return;

    fread(&roomCount, sizeof(int), 1, fp);
    fread(&rooms, sizeof(Room), roomCount, fp);

    fread(&studentCount, sizeof(int), 1, fp);
    fread(&students, sizeof(Student), studentCount, fp);

    fclose(fp);
}

// ----------------------------
// MAIN MENU
// ----------------------------
int main() {
    loadFromFile();

    int choice;
    while (1) {
        printf("\n========== HOSTEL MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Room\n2. Add Student\n3. Allocate Room\n4. Calculate Fee\n5. Display Students\n6. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRoom(); break;
            case 2: addStudent(); break;
            case 3: allocateRoom(); break;
            case 4: calculateFees(); break;
            case 5: displayStudents(); break;
            case 6: saveToFile(); return 0;
            default: printf("\nInvalid Choice\n");
        }
    }
}
