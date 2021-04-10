################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../DIO.c \
../EXT_INT.c \
../LCD.c \
../LED.c \
../MOTOR.c \
../SEV_SEG.c \
../SPI.c \
../TIMER0.c \
../TIMER1.c \
../TWI.c \
../UART.c \
../main.c 

OBJS += \
./ADC.o \
./DIO.o \
./EXT_INT.o \
./LCD.o \
./LED.o \
./MOTOR.o \
./SEV_SEG.o \
./SPI.o \
./TIMER0.o \
./TIMER1.o \
./TWI.o \
./UART.o \
./main.o 

C_DEPS += \
./ADC.d \
./DIO.d \
./EXT_INT.d \
./LCD.d \
./LED.d \
./MOTOR.d \
./SEV_SEG.d \
./SPI.d \
./TIMER0.d \
./TIMER1.d \
./TWI.d \
./UART.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


