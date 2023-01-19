#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H
/*
  * AUTOSAR Version 4.3.0
  */
#define PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION     (4U)
#define PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION     (3U)
#define PLATFORM_TYPES_AR_RELEASE_PATCH_VERSION     (0U)
typedef unsigned char         uint8;          /*           0 .. 255             */
typedef signed char           sint8;          /*        -128 .. +127            */
typedef unsigned short        uint16;         /*           0 .. 65535           */
typedef signed short          sint16;         /*      -32768 .. +32767          */
typedef unsigned long         uint32;         /*           0 .. 4294967295      */
typedef signed long           sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint64;         /*       0..18446744073709551615  */
typedef signed long long      sint64;
typedef float                 float32;
typedef double                float64;
#define NULL 0 
/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))
/* Read a certain bit in any register */
#define READ_BIT(REG,BIT) ((REG>>BIT) & 0X01)

#endif
