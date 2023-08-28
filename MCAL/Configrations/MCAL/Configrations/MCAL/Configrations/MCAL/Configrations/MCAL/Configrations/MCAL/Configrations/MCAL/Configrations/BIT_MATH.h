
#ifndef BIT_MATH_H_

#define BIT_MATH_H_

#define SET_BIT(REG, BIT)				REG |= (1<<BIT)			// Set value of bit to logic(1)
#define CLR_BIT(REG, BIT)				REG &= ~(1<<BIT)		// Set value of bit to logic(0)
#define TGL_BIT(REG, BIT)				REG ^= (1<<BIT)			// Toggle value of bit (NOT)
#define GET_BIT(REG, BIT)				((REG >> BIT ) & 1)		// Read value of needed bit

#define SET_REG(REG)				REG |= 0XFF			// Set value of REG to logic(1)
#define CLR_REG(REG)				REG &= 0X00			// Set value of REG to logic(0)
#define TGL_REG(REG)				REG ^= OXFF			// Toggle value of REG (NOT)
#define GET_REG(REG)				REG  & 0xFF			// Read value of needed REG


#endif /* BIT_MATH_H_ */
