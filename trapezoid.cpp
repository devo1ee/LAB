#include <iostream>
using namespace std;

double perimeter(double a, double b, double c, double d){
    cout<<"Периметр трапеции равен: "<<a+b+c+d<<endl;
    return 0;
}

double square(double a, double b, double h){
    cout<<"Площадь трапеции равна: "<<0.5*(a+b)*h<<endl;
    return 0;
}

double midline(double a, double b){
    cout<<"Средняя линия равна: "<<0.5*(a+b)<<endl;
    return 0;
}

int main()
{
    double osn1, osn2, side1, side2, h;
    cout<<"Введите длины оснований трапеции:"<<endl;
    cin>>osn1>>osn2;
    while (osn1<=0 || osn2<=0){
        cin.clear();
        cin.ignore(100, '\n');
        cout<<"Введите корректные длины оснований:"<<endl;
        cin>>osn1>>osn2;
    }
    cout<<"Введите длины боковых сторон трапеции:"<<endl;
    cin>>side1>>side2;
    while (side1<=0 || side2<=0){
        cin.clear();
        cin.ignore(100, '\n');
        cout<<"Введите корректные длины боковых сторон:"<<endl;
        cin>>side1>>side2;
    }
    if (osn1+osn2+side1<side2 || osn1+osn2+side2<side1 || osn1+side1+side2<osn2 || osn2+side1+side2<osn1){
        cout<<"У вас трапеция не существует, начинайте заново)"<<endl;
        return 0;
    }
    cout<<"Введите длину высоты трапеции:"<<endl;
    cin>>h;
    while (h<=0){
        cin.clear();
        cin.ignore(100, '\n');
        cout<<"Введите корректную длину высоты:"<<endl;
        cin>>h;
    }
    
    perimeter(osn1, osn2, side1, side2);
    square(osn1, osn2, h);
    midline(osn1, osn2);

    return 0;
}
