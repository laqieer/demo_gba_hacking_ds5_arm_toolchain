/*
 ============================================================================
 Name        : demo.c
 Author      : laqieer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

void sub_8000AF4(short *buffer)
{
	((void(*)(short*,char*))0x8004E4D)(buffer, "Tiki's demo");
}

#pragma arm section code = "AT_8000AF4"
void call_sub_8000AF4(short *buffer)
{
	sub_8000AF4(buffer);
}
