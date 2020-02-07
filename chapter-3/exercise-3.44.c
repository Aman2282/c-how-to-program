// Exercise 3.44
// (Sides of a Triangle) Write a program that reads three nonzero float values
// and determines and prints if they could represent the sides of a triangle.

#include <stdio.h>

int main() {
  float x, y, z;
  int num;

  printf( "Enter first value: \n" );
  scanf( "%f", &x );
  printf( "Enter second value: \n" );
  scanf( "%f", &y );
  printf( "Enter third value: \n" );
  scanf( "%f", &z );

  if ( x == y && x == z && z == y ) {
    printf( "Could be a triangle!\n" );
  } else {
    printf( "Not an equilateral triangle.\n" );
  }

  return 0;
}



Its in Java:
import java.util.Scanner;

public class Checks_whether_its_a_qualateral_triangle {

	public static void main(String[] args) {
		 
		int a, b, c;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter 1st side of the triangle: ");
		a = input.nextInt();
		System.out.print("Enter 2nd side of the triangle: ");
		b = input.nextInt();
		System.out.print("Enter 3rd side of the triangle: ");
		c = input.nextInt();
		
		System.out.println(a == b && b == c && c == a ?   "The triangle is a qualateral.": "The triangle is not a qualateral.");
		
		/* if(a == b && b == c && c == a) {
			System.out.println("The triangle is a qualateral.");
			
		}
		else
			System.out.println("The triangle is not a qualateral.");   */

	}

}
