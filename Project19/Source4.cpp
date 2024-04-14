//#include<iostream>
//using namespace std;
//
//class person {
//private:
//	string name;
//	string address;
//	string dept;
//
//	public:
//		person(string n, string a, string d):name(n), address(a), dept(d) {}
//		
//		void display()
//		{
//			cout << "name:" << name << endl;
//			cout << "address:" << address << endl;
//			cout << "department:" << dept << endl;
//		}
//		void set_name(const char* name)
//		{
//			name = name;
//		}
//		void set_address(const char* add)
//		{
//			address = add;
//		}
//		void set_dept(const char* d)
//		{
//			dept = d;
//		}
//		string get_name() const
//		{
//			return name;
//		}
//		string get_address() const
//		{
//			return address;
//		}
//		string get_dept() const
//		{
//			return dept;
//		}
//
//		
//		
//
//};
//
//class student : public person 
//{private:
//	;
//	string course;
//	public:
//		 
//		
//		student(string n, string a, string d, int r, string c) :person(n, a, d): reg_no(r), course(c) {}
//		
//
//};