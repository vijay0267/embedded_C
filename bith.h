#ifndef __BITWISE_H__
#define __BITWISE_H__

extern uint32_t SetBit(uint32_t test_var, uint8_t bit_position);
extern uint32_t ResetBit(uint32_t test_var, uint8_t bit_position);
extern uint32_t ToggleBit(uint32_t test_var, uint8_t bit_position);
extern uint8_t  ReadBit(uint32_t test_var, uint8_t bit_position);

#endif
