#include <iostream>

class Rectangle {
private:
	double width;
	double length;

public:
	Rectangle() : width(0.0), length(0.0) {}

	void setWidth(double newWidth) {
		width = newWidth;
	}

	void setLength(double newLength) {
		length = newLength;
	}

	double getWidth() const {
		return width;
	}

	double getLength() const {
		return length;
	}

	double area() const {
		return width * length;
	}

	double perimeter() const {
		return 2.0 * (width + length);
	}
};

int main() {
	Rectangle firstRectangle;
	firstRectangle.setWidth(5.0);
	firstRectangle.setLength(3.0);

	Rectangle secondRectangle;
	secondRectangle.setWidth(8.0);
	secondRectangle.setLength(2.5);

	std::cout << "First rectangle: width = " << firstRectangle.getWidth()
			  << ", length = " << firstRectangle.getLength()
			  << ", area = " << firstRectangle.area()
			  << ", perimeter = " << firstRectangle.perimeter() << '\n';

	std::cout << "Second rectangle: width = " << secondRectangle.getWidth()
			  << ", length = " << secondRectangle.getLength()
			  << ", area = " << secondRectangle.area()
			  << ", perimeter = " << secondRectangle.perimeter() << '\n';

	return 0;
}
