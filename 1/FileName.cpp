#include <iostream>
#include <string>

using namespace std;

class mouse {
	string name;
public:
	mouse()
	{
		name = "Logitech";
	}
	mouse(string n)
	{
		name = n;
	}
	void Setname(string n) {
		name = n;
	}
	string Getname() {
		return name;
	}
};

class keyboard {
	string name;
public:
	keyboard()
	{
		name = "Tech Bloody";
	}
	keyboard(string n)
	{
		name = n;
	}
	void Setname(string n) {
		name = n;
	}
	string Getname() {
		return name;
	}
};

class columns {
	string name;
public:
	columns()
	{
		name = "EDIFIER GAMING";
	}
	columns(string n)
	{
		name = n;
	}
	void Setname(string n) {
		name = n;
	}
	string Getname() {
		return name;
	}
};

class laptop {

	class processor{
		string name;
	public:
		processor()
		{
			name = '---';
		}
		processor(string n)
		{
			name = n;
		}
		void Setname(string n) {
			name = n;
		}
		void Show()
		{
			cout << "processor: " << name << endl;
		}
	};

	class ssdmemory {
		double ssd;
	public:
		ssdmemory()
		{
			ssd = 500;
		}
		ssdmemory(double n)
		{
			ssd = n;
		}
		void Setmemory(double n) {
			ssd = n;
		}
		void Show()
		{
			cout << "Ssd memory: " << ssd << endl;
		}
	};
	
	class osmemory {
		double os;
	public:
		osmemory()
		{
			os = 16;
		}
		osmemory(double n)
		{
			os = n;
		}
		void Setmemory(double n) {
			os = n;
		}
		void Show()
		{
			cout << "Os memory: " << os << endl;
		}
	};

	class vicard {
		string name;
	public:
		vicard()
		{
			name = "GeForce";
		}
		vicard(string n)
		{
			name = n;
		}
		void Setname(string n) {
			name = n;
		}
		void Show()
		{
			cout << "Video card: " << name << endl;
		}
	};

	vicard vc;
	osmemory os;
	ssdmemory ssd;
	processor proc;

	mouse mouse;
	keyboard keyboard;
	columns cs;

public:
	laptop() {
		proc.Setname("AMD");
	}
	void Show() {
		proc.Show();
		ssd.Show();
		os.Show();
		vc.Show();
		cout << "Mouse: " << mouse.Getname() << endl;
		cout << "Keyboard: " << keyboard.Getname()<<endl;
		cout << "Colums: " << cs.Getname();
	}
	void Setprocessor(string n) {
		proc.Setname(n);
	}
	void Setssdmemory(double n) {
		ssd.Setmemory(n);
	}
	void Setosmemory(double n) {
		os.Setmemory(n);
	}
	void Setvcard(string n) {
		vc.Setname(n);
	}
};

int main() {
	laptop lap;
	lap.Show();

	cout << endl << "------------------" << endl;
	
	lap.Setosmemory(64);
	lap.Setprocessor("Intel");
	lap.Show();

}