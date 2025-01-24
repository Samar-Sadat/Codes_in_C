#include <stdio.h>
#include <string.h>

enum device_status
{
    on,
    off,
    standby,
};

struct elec_device
{
    int device_id;
    char name[50];
    enum device_status status;
} d1;

void print_device_status(struct elec_device d)
{
    static int x = 0;
    printf("\nDevice ID : %d\n", d.device_id);
    printf("Device Name : ");
    puts(d.name);
    if (x == 0)
    {
    switch(d.status)
    {
        case on:
        printf("Device Status : On\n");
        break;
        case off:
        printf("Device Status : Off\n");
        break;
        case standby:
        printf("Device Status : Stand-by\n");
        break;
        default:
        printf("Error! Device status not entered.\n");
        break;
    }
    }
    else
    {
        switch(d.status)
    {
        case on:
        printf("Updated Device Status : On\n");
        break;
        case off:
        printf("Updated Device Status : Off\n");
        break;
        case standby:
        printf("Updated Device Status : Stand-by\n");
        break;
        default:
        printf("Device status not updated.\n");
        break;
    }
    }
    printf("\n");
    x++;
}

int main()
{
    char choice;
    printf("\nEnter device ID: ");
    scanf("%d", &d1.device_id);
    getchar();
    printf("Enter device name: ");
    gets(d1.name);
    d1.name[strcspn(d1.name, "\n")] = '\0';
    printf("Enter device status (0 for on, 1 for off, 2 for stand-by): ");
    scanf("%d", &d1.status);
    getchar();
    print_device_status(d1);
    printf("Do you want to update device status? (Y/N)\n");
    printf("Enter your choice: ");
    scanf("%c", &choice);
    getchar();
    if (choice == 'Y' || choice == 'y')
    {
        printf("\nEnter updated device status (0 for on, 1 for off, 2 for stand-by): ");
        scanf("%d", &d1.status);
        getchar();
        print_device_status(d1);
    }
    else
    {
        printf("\n");
    }
}