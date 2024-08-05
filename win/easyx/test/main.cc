#include <conio.h>
#include <graphics.h>

int main() {
    initgraph(960, 540);
    circle(480, 270, 100);
    getch();
    closegraph();
    return 0;
}
