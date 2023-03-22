#include <iostream> 
#include<string> 

using namespace std;

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	void init(string n, string sname, int a, float mark) {
		name = n;
		surname = sname;
		age = a;
		avg_mark = mark;
	}

	string convert_to_string() {
		return name + " " + surname + "(age="
			+ to_string(age) = ", avarage mark =" + to_string(avg_mark) + ")";
	}
};

void clean_student(Student st) {
	st.name = "no name";
	st.surname = "no surname";
	st.age = 0;
	st.avg_mark = 0;
}

int main() {
	Student st1, st2, st3;

	st1.init("Ivan", "Ivanov", 14, 10);
	st2.init("Genrih", "Gurshinovich", 14, 10);
	st3.init("Tigran", "Sarkesya", 14, 9);

	cout << st1.convert_to_string() << endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;

}