#include <iostream>
#include <cmath>

class Circle {
	public:
	double radius;
	
	Circle(double rr){
		radius = rr;
	}
	
	void findArea() {
		std::cout << "Area of circle is " << (3.14 * radius * radius) << std::endl;
	}
	void perimeter() {
		std::cout << "Perimeter of circle is " << (2.0 * 3.14 * radius) << std::endl;  // แก้คำว่า cicle เป็น circle
	}
};

int main(){
	Circle c(20);
	
	c.findArea();
	c.perimeter();
	
	return 0;  // เพิ่ม return 0; เพื่อให้ main ส่งค่ากลับอย่างถูกต้อง
}
