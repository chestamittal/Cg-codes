// Chesta Mittal 18JE0246
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
void drawCircle(int xc, int yc, int x, int y)
{
	//putpixel(xc+x, yc+y, WHITE);
	//putpixel(xc-x, yc+y, WHITE);
	putpixel(xc+x, yc-y, YELLOW);
	//putpixel(xc-x, yc-y, WHITE);
	//putpixel(xc+y, yc+x, WHITE);
	//putpixel(xc-y, yc+x, WHITE);
	putpixel(xc+y, yc-x, YELLOW);
	//putpixel(xc-y, yc-x, WHITE);
}
void circleBres(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	drawCircle(xc, yc, x, y);
	while (y >= x)
	{
		x++;
		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		drawCircle(xc, yc, x, y);
		delay(10);
	}
}
int main()
{
	int xc = 200, yc = 170, r = 50;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	line(50,175,500,175);
	line(200,25,200,300);
	circleBres(xc, yc, r);
	delay(1000);
	return 0;
}