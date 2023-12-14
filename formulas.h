namespace formulas{
	float phi = 3.14;
	
	float areaOfRectangle( float length, float width){
		return length * width;
	}
	float areaOfCircle(float radius){
		return phi * (radius*radius);
	}
	float areaOfSquare(float side){
		return (side * side);
	}
	float areaOfSphere(float radius){
		return 4*phi*(radius * radius);
	}
	float areaOfTriangle( float base, float height){
		return 0.5 * (base * height);
	}
	float areaOfTrapezium(float height, float a, float b){
		return 0.5 * height * (a+b);
	}
}