#include <stdio.h>
#include <string.h> // Include for strcspn function

int main()
{
    int day1, month1, year1; // Order date
    printf("Enter Order Date (DD MM YYYY): ");
    scanf("%d %d %d", &day1, &month1, &year1);

    getchar(); // Consume newline after the date input

    char goods[100]; // Goods declaration
    printf("Enter the goods name you carried: ");
    fgets(goods, sizeof(goods), stdin);
    goods[strcspn(goods, "\n")] = 0; // Remove newline character from goods

    int day2, month2, year2; // Departure date
    printf("Enter Departure Date (DD MM YYYY): ");
    scanf("%d %d %d", &day2, &month2, &year2);

    int hours1, minutes1; // Departure time
    printf("Enter time (HH MM): ");
    scanf("%d %d", &hours1, &minutes1);

    getchar(); // Consume newline after time input

    char Return_Location[100]; // Return Location declaration
    printf("Enter Departure Location: ");
    fgets(Return_Location, sizeof(Return_Location), stdin);
    Return_Location[strcspn(Return_Location, "\n")] = 0; // Remove newline character from Return_Location

    char Depart_Location[100]; // Return Location declaration
    printf("Enter Departure Location: ");
    fgets(Depart_Location, sizeof(Depart_Location), stdin);
    Depart_Location[strcspn(Depart_Location, "\n")] = 0; // Remove newline character from Return_Location

    int hours2, minutes2; // Departure time
    printf("Enter time (HH MM): ");
    scanf("%d %d", &hours2, &minutes2);

    int distance; // Order date
    printf("Enter distance: ");
    scanf("%d", &distance);

    // Output in table format
    printf("\n+-SL-+-----Order date-----+----------------------------------Departure---------------------------------------+---------------------------------Return-------------------+\n");
    printf("| %-2d | %02d-%02d-%02d | On the date of %02d-%02d-%d at %02d:%02d minutes I departed from %s, and arrived at %s at %02d:%02d minutes and performed official duties and stayed there. a total of distance is %dkm by road\n",
           1, day1, month1, year1, day2, month2, year2, hours1, minutes1, Return_Location, Depart_Location, hours2, minutes2, distance);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}
