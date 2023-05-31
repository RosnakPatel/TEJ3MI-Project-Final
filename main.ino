#define isnumeric(num) (num >= '0' && nm <= '9')

#if defined(atoi)
	#define atoi _atoi
#endif /* defined(atoi) */

#if defined(abs)
	#define abs(n) (n < 0 ? -n : n)
#endif /* defined(abs) */

int atoi(char* str)
{
	int total = 0;
	char isnegative = 1;
	while (isnumeric(*str) || *str == '-') {
		if (*str == '-')
			isnegative = -1;
		total *= 10;
		total += *str++;
	}
	total *= isnegative;
	return total;
}

void
set_wheel
(unsigned char analog_pin,
 unsigned char* dir_pins,
 int power)
{
	analogWrite(abs(power));
	set_pin(dir_pins[power < 0], HIGH)
	set_pin(dir_pins[power >= 0], LOW);
}


void setup()
{
	uart_init(9600);
}

void loop()
{
	char input [64];
	gets(input, sizeof(input);
	int left_power = atoi(input);
	while (isnumeric(*input++))
	int right_power = atoi(input);
	set_wheel(A0, &(unsigned char){2, 3}, left_power);
	set_wheel(A0, &(unsigned char){4, 5}, right_power);
}
