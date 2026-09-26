#include <stdio.h>

int main() {
  int seat[100] = {0};
  int choice, seatNo;

  while (1) {
    printf("\n--- Railway Seat Reservation System ---\n");
    printf("1. Book a Seat\n");
    printf("2. Cancel a Seat\n");
    printf("3. Display Seat Status\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter seat number (1-100): ");
        scanf("%d", &seatNo);

        if (seatNo < 1 || seatNo > 100) {
          printf("Invalid seat number!\n");
        } else if (seat[seatNo - 1] == 1) {
          printf("Seat %d is already booked.\n", seatNo);
        } else {
          seat[seatNo - 1] = 1;
          printf("Seat %d booked successfully.\n", seatNo);
        }
        break;

      case 2:
        printf("Enter seat number (1-100): ");
        scanf("%d", &seatNo);

        if (seatNo < 1 || seatNo > 100) {
          printf("Invalid seat number!\n");
        } else if (seat[seatNo - 1] == 0) {
          printf("Seat %d is already available.\n", seatNo);
        } else {
          seat[seatNo - 1] = 0;
          printf("Seat %d cancelled successfully.\n", seatNo);
        }
        break;

      case 3:
        printf("\nSeat Status:\n");

        for (int i = 0; i < 100; i++) {
          printf("Seat %d: %s\n", i + 1, seat[i] == 0 ? "Available" : "Booked");
        }
        break;

      case 4:
        printf("Exiting program...\n");
        break;

      default:
        printf("Invalid choice!\n");
    }
  }

  return 0;
}