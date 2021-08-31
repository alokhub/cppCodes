#include <iostream>

using namespace std;


struct point
{
    double fg;
    char c;
    char d;

}__attribute__((packed));

union points
{
    int x,y;
    float h;
    char bin[4];
};
int main()
{
    int a=5,b=10,c=25;
    int d=c/b*a;
    cout <<d<< endl;
    cout<<(a=21);
    point p;
    cout<<endl<<sizeof(p);
    points po;
    cout<<endl<<sizeof(po)<<endl;
    po.x=89;
    cout<<endl<<(int)po.bin[3]<<(int)po.bin[2]<<(int)po.bin[1]<<(int)po.bin[0];
    return 0;
}
