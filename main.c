#include <stdio.h>
#include <stdlib.h>
#include "stdint.h"
#include "bitwise.h"

int main(void)
{
	uint32_t test_var;
	uint8_t bit_position, task, bit_status = 0;
	
	printf("Please enter 32-bit data:- ");
	scanf("%u",&test_var);
	
	while(1)
	{
		printf("Please enter bit_position:- ");
		scanf("%hhu",&bit_position);
		printf("\nPlease select the operation to do:-\n");
		printf("1. Set a bit\n2. Reset a bit\n3. Toggle a bit\n4. Read a bit\n5.exit()\n");
		scanf("%hhu",&task);
		
		switch(task)
		{
			default:
				printf("Please enter correct option:-\n");
				break;
			case 1:
				test_var = SetBit(test_var, bit_position);
				printf("test_var = %u\n",test_var);
				break;
				
			case 2:
				test_var = ResetBit(test_var, bit_position);
				printf("test_var = %u\n",test_var);
				break;
				
			case 3:
				test_var = ToggleBit(test_var, bit_position);
				printf("test_var = %u\n",test_var);
				break;
				
			case 4:
				bit_status = ReadBit(test_var, bit_position);
				printf("bit_status = %hhu\n",bit_status);
				break;
				
			case 5:
				exit(0);
				break;
		}
	}
	
	return 0;

}

