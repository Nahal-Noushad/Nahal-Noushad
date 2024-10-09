#include <stdio.h>
#include <stdlib.h> 

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

/*admin password*/
#define password 9671

/*minimum threshold of each item*/
#define min_cofbean 8
#define min_water 40
#define min_milk 160
#define min_chocosyrup 30

int admin_menu(int val);
void replenish_ad(int numeric);
void change_price(int numeri);
int main(){
int value;
printf("Enter 1: Order a coffee type\nEnter 2: Admin mode for the coffee maker operator\nEnter 3: End the application execution\n");
scanf("%d", &value);
while(value != 1 && value != 2 && value != 3)
{
printf("Enter 1: Order a coffee type\n Enter 2: Admin mode for the coffee maker operator\n Enter 3: End the application execution\n");
}
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
    change_price(j);
    replenish_ad(j);
}
else
{
    printf("Wrong password");
}
}
}

void replenish_ad(int numeric)
{
    if (numeric == 2){
    int k;
    printf("Type 1: To refill all ingredients\n");
    scanf("%d", &k);

    if (k == 1){
    int quantity_cofbean = rand() % 100 + 8;
    printf(quantity_cofbean);
    int quantity_water = rand() % 300 + 40;
    int quantity_milk = rand() % 400 + 160;
    int quantity_chosyrup = rand() % 100 + 30;
    printf("Ingredients have been refilled\n");
    }
    }
}

void change_price(int numeri)
{
    if (numeri == 3){
    int l;
    printf("Type 1: To change price of espresso\nType 2: To change price of cappuccino\nType 3: To chnage price of mocha\n");
    scanf("%d", &l);

    if (l == 1)
    {
        printf("Type the new price of espresso: ");
        scanf("%d", e_p);
        printf("Espresso Price has been changed\n");
    }
    if (l == 2)
    {
        printf("Type the new price of cappuccino: ");
        scanf("%d", c_p);
        printf("Capuccino Price has been changed\n");
    }
    if (l == 3)
    {
        printf("Type the new price of mocha: ");
        scanf("%d", m_p);
        printf("Mocha Price has been changed\n");
    }
    }

}

