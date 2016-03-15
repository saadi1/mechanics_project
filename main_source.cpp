#include <iostream>
#include "graphics.h"

int main( )
{
    initwindow(400, 300, "Sample");
	setcolor(YELLOW);
    rectangle(20,20,100,100);
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}