#include <iostream>

using namespace std;

class pet {
	char* name;
	int age;
public:
	pet() {
		name = nullptr;
		age = 0;
	}
	pet(const char* n, int a) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
	void Input(const char* n, int a) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
	void Show() {
		cout << "Name: " << name << endl << "Age: " << age << endl;
	}
	~pet() {
		delete[] name;
	}
	virtual const char* getName() { return "Hi"; }
};

class Dog : public pet {
	char* color;
	char* breed;
public:
	Dog() {
		color = nullptr;
		breed = nullptr;
	}
	Dog(const char* n, int a, const char* c, const char* b) : pet(n, a) {
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);

		breed = new char[strlen(b) + 1];
		strcpy_s(breed, strlen(b) + 1, b);
	}
	void Input(const char* c, const char* b, const char* n, int a) {
		pet::Input(n, a);
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);

		breed = new char[strlen(b) + 1];
		strcpy_s(breed, strlen(b) + 1, b);
	}
	void Show() {
		pet::Show();
		cout << "Color: " << color << endl << "Breed: " << breed << endl;
	}
	~Dog() {
		delete[] color;
		delete[] breed;
	}
	virtual const char* getName() { return "Gov gov!"; }
};

class Cat : public pet {
	char* color;
	char* breed;
public:
	Cat() {
		color = nullptr;
		breed = nullptr;
	}
	Cat(const char* n, int a, const char* c, const char* b) : pet(n, a) {
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);

		breed = new char[strlen(b) + 1];
		strcpy_s(breed, strlen(b) + 1, b);
	}
	void Input(const char* c, const char* b, const char* n, int a) {
		pet::Input(n, a);
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);

		breed = new char[strlen(b) + 1];
		strcpy_s(breed, strlen(b) + 1, b);
	}
	void Show() {
		pet::Show();
		cout << "Color: " << color << endl << "Breed: " << breed << endl;
	}
	~Cat() {
		delete[] color;
		delete[] breed;
	}
	virtual const char* getName() { return "May may!"; }
};

class Parot : public pet {
	char* color;
	char* breed;
public:
	Parot() {
		color = nullptr;
		breed = nullptr;
	}
	Parot(const char* n, int a, const char* c, const char* b) : pet(n, a) {
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);

		breed = new char[strlen(b) + 1];
		strcpy_s(breed, strlen(b) + 1, b);
	}
	void Input(const char* c, const char* b, const char* n, int a) {
		pet::Input(n, a);
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);

		breed = new char[strlen(b) + 1];
		strcpy_s(breed, strlen(b) + 1, b);
	}
	void Show() {
		pet::Show();
		cout << "Color: " << color << endl << "Breed: " << breed << endl;
	}
	~Parot() {
		delete[] color;
		delete[] breed;
	}
	virtual const char* getName() { return "Crrr!"; }
};

int main() {
	
	Cat barsic("Borsh", 3, "black", "Shpic");
	pet &a = barsic;
	barsic.Show();

	cout << "---" << endl;

	barsic.Input("white", "ret", "Barsik", 5);

	barsic.Show();

	cout << "---" << endl;

	cout << "Sound: " << a.getName();
	

}