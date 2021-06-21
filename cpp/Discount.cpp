#include <iostream>
#include "VirtualDemo.c++"

using namespace std;

class DiscountSale : public Sale
{
public:
    DiscountSale();
    DiscountSale(double thePrice, double theDiscount);

    double getDiscount() const;
    void setDiscount(double newDiscount);
    double bill() const;

private:
    double discount;
};

DiscountSale:: DiscountSale( ) : discount(0){};
DiscountSale::DiscountSale(double thePrice, double theDiscount){
    discount = theDiscount;
}

double DiscountSale:: getDiscount() const {
    return discount;
}


double DiscountSale::bill() const
{
    double fraction = discount / 100;
    return (1 - fraction) * getPrice();
}