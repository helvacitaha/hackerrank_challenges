#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
        int internal_age;
        int internal_standard;
        string internal_first_name;
        string internal_last_name;
    public:
        void set_age(int age)
        {
            internal_age=age;
        }
        void set_standard(int standard)
        {
            internal_standard=standard;
        }
        void set_last_name(string last_name)
        {
            internal_last_name=last_name;
        }
        void set_first_name(string first_name)
        {
            internal_first_name=first_name;
        }
        int get_age()
        {
            return internal_age;
        }
        int get_standard()
        {
            return internal_standard;
        }
        string get_last_name()
        {
            return internal_last_name;
        }
        string get_first_name()
        {
            return internal_first_name;
        }
        string to_string()
        {
            string r;
            stringstream s(r);
            s<<internal_age<<','<<internal_first_name<<','<<internal_last_name<<','<<internal_standard;
            s>>r;
            return r;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}