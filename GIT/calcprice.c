#include <stdio.h>

int main()
{
    float initialPrice, discount, VAT, priceWithVAT, priceWithDiscount;
    VAT          = 0.20;
    discount     = 0.125;

    printf("Please enter the initial price: ");
    scanf("%f", &initialPrice);
    
    priceWithVAT      = initialPrice * (1.0 + VAT);
    priceWithDiscount = priceWithVAT * (1.0 - discount);
        
    printf("Initial Price      %10.2f\n", initialPrice);
    printf(" + VAT @ %4.1f%%     %10.2f\n", VAT*100,      priceWithVAT);
    printf(" - discount @ %4.1f%%%10.2f\n", discount*100, priceWithDiscount);
    return 0;
}
