#include<iostream>

using namespace std;

#define MIN(x,y) (x < y ? x : y)
#define MAX(x,y) (x > y ? x : y)

struct Point {
double x,y;
};

bool InsidePolygon(Point *polygon, int N, Point p)
{
	int counter = 0;
	int i;
	double xinters;
	Point p1,p2;

	p1 = polygon[0];
	for (i = 1;i <= N;i ++) 
	{
		p2 = polygon[i % N];
		if (p.y > MIN(p1.y,p2.y)) 
		{
			if (p.y <= MAX(p1.y,p2.y)) 
			{
				if (p.x <= MAX(p1.x,p2.x)) 
				{
					if (p1.y != p2.y) 
					{
						xinters = (p.y-p1.y)*(p2.x-p1.x)/(p2.y-p1.y)+p1.x;
						if (p1.x == p2.x || p.x <= xinters)
							counter++;                  // Counting intersection if even count point lies outside else lies inside
					}
				}
			}
		}
		p1 = p2;
	}

	if (counter % 2 == 0)
		return false;
	else
		return true;
}


int main()
{
	Point p = {0, 0}; // Check point
	Point polygon[] = {{-3, 2}, {-2, -0.8}, {0, 1.2}, {2.2, 0}, {2, 4.5}}; // Polygon Coordinates
	int N = sizeof(polygon)/sizeof(polygon[0]);
	InsidePolygon(polygon, N, p)? cout << "True\n" : cout << "False\n";	
	return 0;
}
