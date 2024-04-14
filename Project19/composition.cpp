//#include <iostream>
//using namespace std;
//
//class engine {
//public:
//
//	void start() {
//	
//	cout<< "Engine started"<<endl;
//	}
//	void rev() {
//		cout << "Engine revved" << endl;
//	}
//
//	void stop() {
//		cout << "Engine stopped" << endl;
//	}
//};
//
//class windows {
//public:
//	void rollup() {
//		cout << "Window rolled up" << endl;
//	}
//	void rolldown() {
//		cout << "Window rolled down" << endl;
//	}
//};
//
//class doors {
//	public:
//	
//	void open() {
//		cout << " Door opened" << endl;
//	}
//	void close() {
//		
//		cout << " Door closed" << endl;
//	}
//};
//
//class wheels {
//	public:
//	void inflate(int psi) {
//		cout << "Wheel inflated to " << psi << " psi" << endl;
//
//	}
//};
//
//class car {
//public:
//	engine e;
//	doors left, right;
//	wheels wheel[4];
//	windows w;
//
//	void drive() {
//		e.start(); // Start the engine
//		left.close(); // Close the left door
//		right.close(); // Close the right door
//		w.rolldown(); // Roll down the windows
//		for (int i = 0; i < 4; i++) {
//			wheel[i].inflate(32); // Inflate all wheels to 32 psi
//		}
//		cout << "Car is ready to drive!" << endl;
//	}
//
//	void stop() {
//		e.stop(); // Stop the engine
//		cout << "Car has stopped" << endl;
//	}
//};
//
//int main() {
//	car c;
//	c.drive();
//	c.stop();
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class Where
//{
//private:
//	int x;
//public:
//	void reveal()
//	{
//		cout << "My object address is :" << this << endl;
//	}
//};
//int main()
//{
//	Where w1, w2, w3;
//	w1.reveal();
//	w2.reveal();
//	w3.reveal();
//	return 0;
//}

//class What
//{
//private:
//	int alpha;
//public:
//	void tester()
//	{
//		this->alpha = 10;
//		cout << this->alpha;
//	}
//};
//int main()
//{
//	What w;
//	w.tester();
//	return 0;
//}


//class date {
//private:
//	int day, month, year;
//public:
//	date() {};
//date(int d, int m, int y) {
//		day = d;
//		month = m;
//		year = y;
//	}
//	void display() {
//		cout << day << "/" << month << "/" << year << endl;
//	}
//	
//};
//class employee {
//private:
//	int id;
//	date dob;
//public:
//	date hd;
//
//
//	employee(int i, date &d, date &h) {
//		id = i;
//		dob = d;
//		hd = h;
//	}
//
//
//	void display() {
//		cout << "ID: " << id << endl;
//		cout << "DOB: ";
//		dob.display();
//		cout << "HD: ";
//	   hd.display();
//	
//	}
//};
//
//int main() {
//	date birth(1, 1, 1990);
//	date hire(1, 1, 2010);
//	employee e(1, birth, hire);
//	e.display();
//	return 0;
//}




//#include <iostream>
//#include <string>
//using namespace std;
//
//class person
//{
//private:
//    string name;
//public:
//    person(string n) : name(n) {}
//    void display()
//    {
//        cout << "Name: " << name << endl;
//    }
//};
//
//class student : public person
//{
//private:
//    int rollno;
//public:
//    student(int r, string n) : person(n), rollno(r) {}
//    student(const student& obj) : person(obj)
//    {
//        rollno = obj.rollno;
//    }
//    void display()
//	{
//		cout << "Roll No: " << rollno << endl;
//		person::display();
//	}
//};
//
//int main()
//{
//    student obj(1, "John");
//    student obj2(obj); // Corrected the object name here
//    obj.display();
//    obj2.display(); // Added display for obj2 to see the copied object
//    return 0;
//























