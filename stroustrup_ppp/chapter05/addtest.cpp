#include "../lib_files/std_lib_facilities.h"

int area(int length, int width)
{
    if (length <= 0 || width <= 0) return -1;
    return length*width;
}

int framed_area(int x, int y)
{
    const int frame_width = 2;
    return area(x-frame_width, y-frame_width);
}

int main()
{
    int x = 1;
    int y = 3;
    int z = 4;
    int area1 = area(x, y);
    if(area1 <= 0) error("non-positive area1");
    int area2 = framed_area(3, z);
    if(area2 <= 0) error("non-positive area2");
    int area3 = framed_area(y, z);
    if(area3 <= 0) error("non-positive area3");

    double ratio = double(area1)/area3;
    cout << area1 << '\t' << area2 << '\t' << area3 << '\t' << ratio << endl;

}
