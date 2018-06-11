#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Self-Defined class
class Student {
private:
	int StudentNumber;
public:
	Student(int n) {
		this->StudentNumber = n;
	}
	int getStudentNumber() const {
		return this->StudentNumber;
	}
};

// compare Num 
class comparatorNum {
public:
	bool operator()(const int& lhs, const int& rhs) {
		return lhs > rhs;
	}
};

// compare self-defined class
class comparatorSelfDef {
public:
	bool operator()(const Student& lhs, const Student& rhs) {
		return lhs.getStudentNumber() < rhs.getStudentNumber();
	}
};

int main() {

	// Number Example 
	vector<int> a;
	for (int i = 0; i < 10; i++) {
		a.push_back(i + 1);
	}

	cout << "In Ascending Order:\n";
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << "\nIn Descending Order:\n";
	sort(a.begin(), a.end(), comparatorNum());
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << "\nSelf-Defined Class Sorting:\n";

	// Self-Defined Class
	vector<Student> v;
	for (int i = 10; i >= 0; --i) {
		v.push_back(Student(i));
	}
	cout << "Before Sorting: \n";
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i].getStudentNumber() << " ";
	}
	cout << endl;
	cout << "After Sorting: \n";

	sort(v.begin(), v.end(), comparatorSelfDef());

	for (int i = 0; i < v.size(); ++i) {
		cout << v[i].getStudentNumber() << " ";
	}

	//system("pause");
	return 0;
}
