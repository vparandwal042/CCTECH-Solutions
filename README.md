# CCTECH-Solutions
This repository contains solutions of CCTECH challenges solutions.

## Program 1 : Check if the given point lies inside or outside a polygon?
To check if the given point lies inside or outside a polygon, InsidePolygon() is used that contain two arguments as a input of array consists of polygon coordinates and coordinates of check point.<br><br>
When a point is given, then a line is drawn (virtually) from a point far away outside from the polygon to the given point. Then, count the number of intersections of the virtual line with the edges of the polygon. If the number of intersections is odd, the point is inside the polygon. Otherwise, the point is outside the polygon.

## Program 2 : Calculate the surface of the building exposed to sunlight?
Calcute the surface of the building exposed to sunlight, calculateLength() is used that contain two arguments as a input of sun coordinates and building coordinates.<br><br>
Case 1: for one building<br>
calForOneBuilding() is to calculate the surface of the building exposed to sunlight.
for any point of sun this function will calculate the surface exposed to sunlight.<br>
Case 2: for more than one building<br>
calculateLength() has some cases--><br><br>
1. If first building is nearer to sun than second.<br>
2. If Second building is nearer to sun than first.<br>
3. Both are equally distant to sun (in this sun is above the buldings).<br>
## Here distance is calculated using coordinates assuming is not infintely far.<br><br>
A special case is also calculated where the one's building shadow is on another's. In this part of shadow is not calculated.<br>
The surface of the building is exposed to sunlight excluding shadow is calculated as:<br><br>
## shadow_height = height_1 - dist * tan_angle
Here,<br>
height_1 = height of building that has shadow.<br>
dist = Distance between two buildings.<br>
tan_angle = Slope of ray of sunlight.
