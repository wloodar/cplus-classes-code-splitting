#include "Person.h";
#include <string>;

using namespace std;

class Trainee : public Person {
    protected:
        string courseName;

    public:
        void setCourseName (string courseName) {
            this -> courseName = courseName;
        }
};