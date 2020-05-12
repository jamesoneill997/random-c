#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct item{
        char itemName[20];
        int quantity;
        double price;
        double amount;
};
void readItem(struct item *pItem);

int main(){
    //struct item *pFlowers = (struct item *) calloc(1, sizeof(struct item));
    struct item flowers, *pFlowers;

    pFlowers=&flowers;
    pFlowers = (struct item *) malloc(1* sizeof(struct item));
    

    readItem(pFlowers);
    
    free(pFlowers);

    
    return 0;
}



void readItem(struct item *pItem){ 
    printf("Please enter the item name: ");
    scanf("%s", pItem->itemName);
    printf("\nPlease eneter the quantity of the item: ");
    scanf("%d", &(pItem->quantity));
    printf("\nPlease enter the price of the item: ");
    scanf("%lf", &(pItem->price));
    pItem->amount = pItem->price * pItem->quantity;

    //printf("\n%s\n, %d\n. %.2lf\n, %.2lf\n", pItem->itemName, pItem->quantity,pItem->price,pItem->amount);
}