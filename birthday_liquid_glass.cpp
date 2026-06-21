#include <iostream>
#include <string>
using namespace std;

// สร้างโค้ดสี ANSI truecolor (เทอร์มินัลยุคใหม่ส่วนใหญ่รองรับ)
string grad(int r, int g, int b) {
    return "\033[38;2;" + to_string(r) + ";" + to_string(g) + ";" + to_string(b) + "m";
}
const string RESET = "\033[0m";

int main() {
    // ไล่เฉดสีแบบ "liquid glass": ฟ้าใส -> ขาวมุก -> ม่วงอ่อน ให้ดูเหมือนกระจกเหลวสะท้อนแสง
    int colors[8][3] = {
        {120,200,255}, {150,212,250}, {190,225,250}, {230,240,255},
        {255,255,255}, {235,225,250}, {210,200,245}, {180,190,240}
    };
    string lines[8] = {
        "============================================",
        "                                            ",
        "          ~  H A P P Y   B I R T H D A Y  ~ ",
        "                                            ",
        "                  วี  *  16                 ",
        "             22 มิถุนายน                     ",
        "          ~~~ liquid glass ~~~              ",
        "============================================"
    };

    for (int i = 0; i < 8; i++) {
        cout << grad(colors[i][0], colors[i][1], colors[i][2]) << lines[i] << RESET << "\n";
    }
    return 0;
}
