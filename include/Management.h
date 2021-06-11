#include "Person.h";
#include <string>;

using namespace std;

class Management : public Person {
    protected:
        string duty;
    
    public:
        void setDuty (string duty) {
            this -> duty = duty;
        }
};