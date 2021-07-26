# include <stdio.h>
# define pi 3.1416
    int main ()
    {
        float l,r,circle_area,square_area,gray_part_area;

        printf ("Please enter the value of l:\n");
        scanf ("%f",&l);
        r=l/2.0;
        circle_area=pi*r*r;
        square_area=l*l;
        gray_part_area=square_area-circle_area;

        printf ("The area of the circle is %f\nThe area of the square is %f\nThe area of the gray part is %f",circle_area,square_area,gray_part_area);

    return 0;


    }





