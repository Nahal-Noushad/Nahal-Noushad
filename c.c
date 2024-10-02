#include <stdio.h>
int admin_menu(int val);
int main(){
/*ESPRESSO INGREDIENT*/
#define e_c 8
#define e_w 30
#define e_m 0
#define e_choc 0
#define e_p 3.5

/*CAPPUCCINO INGREDIENTS*/
#define c_c 8
#define c_w 30
#define c_m 70
#define c_cho 0
#define c_p 4.5

/*MOCHA INGREDIENTS*/
#define m_c 8
#define m_w 39
#define m_m 160
#define m_cho 30
#define m_p 5.5

#define password 'uowdcafe99'

int value;
printf("Enter 1: Order a coffee type\nEnter 2: Admin mode for the coffee maker operator\nEnter 3: End the application execution\n");
scanf("%d", &value);
while(value != 1 && value != 2 && value != 3)
{
printf("Enter 1: Order a coffee type\n Enter 2: Admin mode for the coffee maker operator\n Enter 3: End the application execution\n");
}
printf(admin_menu(value));
printf(admin_menu(value));
}


int admin_menu(int val)
{
if (val == 2)
{
int m;
printf("entering admin mode\n");
printf("Enter admin password\n");
scanf("%d", &m);
if (m == password)
{
    int j;
    printf("Enter 1: Display the quantity of each ingredient in the machine and the total sale amount\nEnter 2: Replenish ingredients in the machine\nEnter 3: Change coffee price\nEnter 0: Exit the Admin Mode function\n");
    scanf("%d", &j);
    return j;
}
}
}
