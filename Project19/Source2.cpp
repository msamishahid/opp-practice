//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class shape {
//protected:
//    float area;
//    float perimeter;
//public:
//    void display() {
//        cout << fixed << setprecision(2); // Set output precision
//        cout << "area:" << area << endl;
//        cout << "perimeter:" << perimeter << endl;
//    }
//};
//
//class circle : public shape {
//private:
//    float r;
//    const float pi = 3.14;
//
//public:
//    circle(float ra) {
//        r = ra;
//    }
//    void c_area() {
//        area = pi * r * r;
//    }
//    void c_perimeter() {
//        perimeter = 2 * pi * r;
//    }
//};
//
//class triangle :public shape {
//private:
//    float a;
//    float b;
//    float c;
//
//public:
//    triangle() {}
//    void set_a(float x) {
//        a = x;
//    }
//    void set_b(float y) {
//        b = y;
//    }
//    void set_c(float z) {
//        c = z;
//    }
//    void input() {
//        cout << "enter a:" << endl;
//        cin >> a;
//        cout << "enter b:" << endl;
//        cin >> b;
//        cout << "enter c:" << endl;
//        cin >> c;
//    }
//    void t_area() {
//        area = 0.5 * a * b;
//    }
//    void t_perimeter() {
//        perimeter = a + b + c;
//    }
//};
//
//class rectangle :public shape {
//private:
//    float l;
//    float w;
//public:
//    rectangle(float x, float y) {
//        l = x;
//        w = y;
//    }
//    void r_area() {
//        area = l * w;
//    }
//    void r_perimeter() {
//        perimeter = 2 * (l + w);
//    }
//};
//
//int main() {
//    circle c(5);
//    c.c_area();
//    c.c_perimeter();
//    c.display();
//
//    cout << endl;
//    rectangle r(5, 6);
//    r.r_area();
//    r.r_perimeter();
//    r.display();
//
//    cout << endl;
//    triangle t1;
//    t1.input();
//    t1.t_area();
//    t1.t_perimeter();
//    t1.display();
//
//    return 0;
//}
