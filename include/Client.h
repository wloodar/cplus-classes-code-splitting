#include "Person.h";
#include <string>;

using namespace std;

class Client : public Person {
    protected:
        string orderDetails;
        string mobile;

    public: 
        void setClientMobile (string mobile) {
            this -> mobile = mobile;
        }

        void setClientOrderDetails (string orderDetails) {
            this -> orderDetails = orderDetails;
        }
};