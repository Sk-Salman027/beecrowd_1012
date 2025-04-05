## Area
### Problem statement
<p>Make a program that reads three floating point values: A, B and C. Then,<br>calculate and show:
<ol type = "A">
 <li>the area of the rectangled triangle that has base A and height C.</li>
<li> the area of the radius's circle C. (pi = 3.14159)</li>
<li> the area of the trapezium which has A and B by base, and C by height.</li>
<li> the area of ​​the square that has side B.</li>
<li> the area of the rectangle that has sides A and B.</li>
</ol>
</p>

### Input
```c
double A, B, C, areaOfTriangle, areaOfCircle, areaOfTrapezium, areaOfSquare, areaOfRectangle;
// take input
scanf("%lf %lf %lf", &A, &B, &C);
```
### Calculate Area:
`   areaOfTriangle = (A * C) / 2;
    areaOfCircle = pi * pow(C, 2);
    areaOfTrapezium = (A + B) * C / 2;
    areaOfSquare = B * B;
    areaOfRectangle = A * B;
`

### Output
```c
printf("TRIANGULO: %.3lf\n", areaOfTriangle);
printf("CIRCULO: %.3lf\n", areaOfCircle);
printf("TRAPEZIO: %.3lf\n", areaOfTrapezium);
printf("QUADRADO: %.3lf\n", areaOfSquare);
printf("RETANGULO: %.3lf\n", areaOfRectangle);
```