
#ifndef STD_TYPES_H_

#define STD_TYPES_H_

typedef unsigned char			UINT8_t;
typedef unsigned short int		UINT16_t;
typedef unsigned long int		UINT32_t;
typedef unsigned long long int	UINT64_t;
typedef signed char				SINT8_t;
typedef signed short int		SINT16_t;
typedef signed long int			SINT32_t;
typedef signed long long int	SINT64_t;
typedef float					fint32_t;
typedef double					fint64_t;
#define HIGH 1
#define LOW 0
typedef enum{
	false = 0,
	true = 1
}bool;
typedef enum{
	FAIL = 0,
	SUCCESS = 1
}ERROR_STATE;

#endif /* STD_TYPES_H_ */
