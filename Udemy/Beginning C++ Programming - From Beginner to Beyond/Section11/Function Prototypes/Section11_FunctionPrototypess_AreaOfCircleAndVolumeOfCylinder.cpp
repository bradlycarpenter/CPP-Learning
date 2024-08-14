// Section 11
// Function Prototypes
// Area of a Circle and Volume of a Cylinder

#include <iostream>

using namespace std;

// Function Prototypes
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

const double PI{3.141589};

int main(){
    area_circle();
    volume_cylinder();
}

double calc_area_circle(double radius){
    return PI * radius * radius;
}

double calc_volume_cylinder(double radius, double height){
    //return PI * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle(){
    double radius{};
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius 
        << " is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    cout << "The volume of a cylinder with radius " << radius << " and height " 
        << height << " is " << calc_volume_cylinder(radius,height) << endl;
}