#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char home_address[50];
    char hostel_address[50];
    char city[50];
    char state[50];
    union address
    {
        char name[50];
        char home_address[60];
        char hostel_address[50];
        char city[50];
        char state[40];
        int zip;
    } a;
    printf("Enter your name: ");
    gets(a.name);
    strcpy(name, a.name);
    printf("Enter your home address: ");
    gets(a.home_address);
    strcpy(home_address, a.home_address);
    printf("Enter your hostel address: ");
    gets(a.hostel_address);
    strcpy(hostel_address, a.hostel_address);
    printf("Enter your city: ");
    gets(a.city);
    strcpy(city, a.city);
    printf("Enter your state: ");
    gets(a.state);
    strcpy(state, a.state);
    printf("Enter your zip: ");
    scanf("%d", &a.zip);
    getchar();
    name[strcspn(name, "\n")] = '\0';
    home_address[strcspn(home_address, "\n")] = '\0';
    hostel_address[strcspn(hostel_address, "\n")] = '\0';
    city[strcspn(city, "\n")] = '\0';
    state[strcspn(state, "\n")] = '\0';
    printf("\n");
    printf("Name : ");
    puts(name);
    printf("Home Address : ");
    puts(home_address);
    printf("Hostel Address : ");
    puts(hostel_address);
    printf("City : ");
    puts(city);
    printf("State : ");
    puts(state);
    printf("Zip Code : %d\n", a.zip);
    printf("\n");
    return 0;
}