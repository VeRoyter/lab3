#include <iostream>
#include <fstream>
#include "string"

struct Poligon{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    std::string fill;
    Poligon (double x_1,double y_1,double x_2,double y_2,double x_3,double y_3,double x_4,double y_4, std::string _fill){
        x1=x_1;
        y1=y_1;
        x2=x_2;
        y2=y_2;
        x3=x_3;
        y3=y_3;
        x4=x_4;
        y4=y_4;
        fill = _fill;
    }
    };
    std::ostream& operator <<(std::ostream& os, const Poligon& p){
        return os <<"<polygon points=\"" << p.x1 << "," << p.y1 << " " << p.x2 << "," << p.y2 << " " << p.x3 << "," << p.y3 << " " << p.x4 << "," << p.y4 << "\" fill=\""<<p.fill<<"\" />";
    }


struct PoligonN{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double x5;
    double y5;
    std::string fill;
    PoligonN (double x_1,double y_1,double x_2,double y_2,double x_3,double y_3,double x_4,double y_4,double x_5,double y_5, std::string _fill){
        x1=x_1;
        y1=y_1;
        x2=x_2;
        y2=y_2;
        x3=x_3;
        y3=y_3;
        x4=x_4;
        y4=y_4;
        x5=x_5;
        y5=y_5;
        fill = _fill;
    }
    };
    std::ostream& operator <<(std::ostream& os, const PoligonN& p){
        return os <<"<polygon points=\"" << p.x1 << "," << p.y1 << " " << p.x2 << "," << p.y2 << " " << p.x3 << "," << p.y3 << " " << p.x4 << "," << p.y4 << " " << p.x5 << "," << p.y5 << "\" fill=\""<<p.fill<<"\" />";
    }

int main() {
    std::ofstream svg("img.svg");
    Poligon poly (400,100,  850,100,  850,1000,  400,1000,"#f5ecdb");
    Poligon poly2(410,360,  835,360,  835,570,   420,570,"#132e25");
    Poligon poly3(550,175,  735,175,  735,670,  550,670,"#c1824f");
    Poligon poly4(460,140,  620,140,  620,500,   460,500,"#af4024");
    PoligonN polyN(540,270,  700,157,  815,320,  755,540,  640,600,  "#cba96a");
    Poligon poly5(640,400,  625,330,  815,150,   780,340,"#192c21");
   svg << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"1000\" height=\"700\">";
   svg <<poly <<poly2 << poly3 << poly4 << polyN << poly5;
   svg << "</svg>";
   svg.close();
    return 0;
}
\
