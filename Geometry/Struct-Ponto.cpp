
struct pt {

    double x, y;
    pt(double x = 0, double y = 0): x(x), y(y) {}

    pt operator + (const pt &P){
        return pt(x + P.x, y + P.y);}
    pt operator - (const pt &P){
        return pt(x-P.x, y-P.y);}

    pt operator * (const double d){
        return pt(x*d, y*d);}
    pt operator / (const double d){
        return pt(x/d, y/d);}

    bool operator < (const pt &P){
        if(x == P.x) return y < P.y;
        return x < P.x;
    }
    bool operator == (const pt &P){
        return (x==P.x && y==P.y);}

    double abs(){
        return x*x + y*y;}
};

bool cw(pt a, pt b, pt c) {
    return a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y) < 0;
}

bool ccw(pt a, pt b, pt c) {
    return a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y) > 0;
}
