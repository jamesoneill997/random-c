#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct item{
        char itemName[20];
        int quantity;
        double price;
        double amount;
    };

    struct item flowers;
    struct item *pItem = &flowers;


    return 0;
}

void readItem(struct item *pItem){
    printf("Please enter the item name: ");
    scanf("%s", &pItem->itemName);

}
