typedef struct
{
	int numerator;
	int denominator;
}rational;


void add(rational *q , rational *s );
void subtract(rational *q , rational *s);
void multiply(rational *q , rational *s);
void division(rational *q , rational *s);
int hcf(int a , int b);
