//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	virtual void makesound() {
//		cout << "animal sound" << endl;
//	}
//
//
//};
//
//class dog :public Animal {
//public:
//	void makesound() override {
//			cout << "dog bark" << endl;
//		}
//};
//class cat :public Animal {
//	public:
//		void makesound() override {
//			cout << "cat meeow" << endl;
//		}
//
//	
//};
//
//int main() {
//	Animal* animalPtr;
//
//	dog Dog;
//	cat Cat;
//
//	animalPtr = &Dog;
//	animalPtr->makesound(); // Output: Dog barks
//
//	animalPtr = &Cat;
//	animalPtr->makesound(); // Output: Cat meows
//
//	return 0;
//}