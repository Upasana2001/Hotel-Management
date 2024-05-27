# Hotel Room Booking System

This is a simple C++ program that simulates a hotel room booking system. Users can view available rooms, book a room, and view booking details.

## How to Use

1. **Clone or Download the Repository**: Get the code onto your local machine.
2. **Compile the Program**: Open a terminal, navigate to the directory containing the code, and compile the program using:
   ```sh
   g++ -o hotel_booking hotel_booking.cpp
   ```
3. **Run the Program**: Execute the compiled program:
   ```sh
   ./hotel_booking
   ```

4. **Follow the On-Screen Instructions**: 
   - Enter `a` to view available rooms.
   - Enter `b` to book a room.
   - Enter `s` to show booking details.
   - Enter `e` to exit the program.

## Available Room Types and Prices

- **Non AC Single room**: `A` - Rs. 600
- **Non AC Double room**: `B` - Rs. 750
- **AC Single room**: `C` - Rs. 700
- **AC Double room**: `D` - Rs. 1000
- **Non AC Family room**: `E` - Rs. 1100
- **AC Deluxe Double room**: `F` - Rs. 1350

## Example

```sh
Welcome, What do you want to do? Show all Rooms,Book a Room, Show booking details or exit?
Please enter a for available rooms, b for booking, s for showing booking details and e for exit:
a
The Available rooms are:
Non AC Single room: A: Rs.600
Non AC Double room: B: Rs.750
AC Single room: C Rs.700
AC Double room: D Rs 1000
Non AC Family room: E Rs.1100
AC Deluxe Double room: F Rs.1350
b
Enter your name:
John Doe
What room do you want to book?:
C
Enter Checkin Date (as an integer, e.g., 1 for the 1st of the month):
1
Enter Checkout Date (as an integer, e.g., 5 for the 5th of the month):
5
s
*********BOOKING DETAILS***********
Guest Name: John Doe
Room selected: C
Checkin Date: 1
Check Out Date: 5
4 nights and 5 days.
Total Room Charge: 2800
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- This project was created to demonstrate basic C++ programming concepts and a simple room booking system.
- Inspired by real-world hotel booking systems.

Feel free to contribute by opening issues or submitting pull requests.

Enjoy using the Hotel Room Booking System!
