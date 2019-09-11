#include "stdint.h"
#include "bitwise.h"

uint32_t SetBit(uint32_t test_var, uint8_t bit_position)
{
	uint32_t bit_mask = (1U<<bit_position);
	test_var |= bit_mask;
	
	return (test_var);
}

uint32_t ResetBit(uint32_t test_var, uint8_t bit_position)
{
	uint32_t bit_mask = (1U<<bit_position);
	test_var &= ~(bit_mask);
	
	return (test_var);
}

uint32_t ToggleBit(uint32_t test_var, uint8_t bit_position)
{
	uint32_t bit_mask = (1U<<bit_position);
	test_var ^= bit_mask;
	
	return (test_var);
}

uint8_t ReadBit(uint32_t test_var, uint8_t bit_position)
{
	uint8_t bit_status = 0;
	uint32_t bit_mask = (1U<<bit_position);
	bit_status = (test_var & bit_mask)? 1 : 0;
	
	return (bit_status);
}

