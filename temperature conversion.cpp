#include <iostream>
using namespace std;
class polygon {
    protected:
        int width, height;
    public:
        void setValues (int a, int b){ width=a; height=b;}
};
class output {
    public:
        void output (int i);
};
void output::output (int i) {
    cout << i;
}
class rectangle: public polygon, public output {
    public:
        int area (){ return (width * height); }
};
class triangle: public polygon, public output {
    public:
        int area (){ return (width * height / 2); }
};
int main (){
    rectangle rct;
    triangle trgl;
    rct.setValues (4,5);
    trgl.setValues (4,5);
    rct.output (rct.area());
    cout << " ";
    trgl.output (trgl.area());
    cout << "\n";
    return 0;
}
