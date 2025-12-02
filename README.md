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

