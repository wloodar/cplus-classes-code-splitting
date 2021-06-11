#include "Person.h"
#include <string>

using namespace std;

class Employer : public Person {
    protected:    
        string duty;
        int revenue;

    public:

        Employer(string duty = "works", int revenue = 10000);

        void setEmployerDuty (string duty);

        void setEmployerRevenue (int revenue);
        
        void showEmployerData ();
};