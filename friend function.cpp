#include<iostream>
using namespace std;
//friend function
class assets{
    private:
    int premium_to_pay;
    friend int addpayment(assets);

    public:
    assets() : premium_to_pay(0) {}
        
};
int addpayment(assets price)
{

    price.premium_to_pay=5000;
    return price.premium_to_pay;
}
int main() {
    assets price;
    cout << "Premium Payment : " << addpayment(price);
    return 0;
}
