#include <string>

using namespace std;

class Person {
    protected:  
        string firstName, lastName, personalId;

    public:
        void setFirstName (string firstName) {
            this -> firstName = firstName;
        }

        void setLastName (string lastName) {
            this -> lastName = lastName;
        }

        void setPersonalId (string personalId) {
            this -> personalId = personalId;
        }
};