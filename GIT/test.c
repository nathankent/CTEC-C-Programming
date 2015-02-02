#include<stdio.h>
#define SIZE 100

/* Uses a single global shopping basket */

typedef struct { char name[40]; int price; } ShopItem;
typedef struct { ShopItem items[SIZE]; int nextItem; } Basket;

Basket b; // Shopping basket instance declared (globally)

void clearBasket() {
   b.nextItem = 0;
}

int isFull() {
    return b.nextItem == SIZE;
}

int addItem(ShopItem item) {
   if (isFull())
       return 0;
   else {
       b.items[b.nextItem] = item;
       b.nextItem ++;
       return 1;
   }
}

int cost() {
   int i;
   int c = 0;
   for (i=0; i<b.nextItem; i++)
       c += b.items[i].price;
   return c;
}

int readItem(ShopItem *item) {
   int r = scanf("(\"%[^\"]\", %d)\n", (*item).name, &((*item).price));
   return r && (r!=EOF);
}

void readItems() {
   int i;
   ShopItem item;
   while ( readItem(&item) ) {
       if ( addItem(item) )
           continue;
       else
           break;
   }
}

void writeItem(ShopItem item) {
   printf("Name = %s\tPrice = %i\n", item.name, item.price);
}

void writeItems() {
   int i;
   for (i=0; i<b.nextItem; i++)
       writeItem(b.items[i]);
}

int main(void) {
   clearBasket();
   readItems();
   writeItems();
   printf("Total cost is %i\n", cost());
   return 0;
}
