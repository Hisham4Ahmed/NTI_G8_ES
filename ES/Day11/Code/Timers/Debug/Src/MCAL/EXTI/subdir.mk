################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/EXTI/EXTI_Program.c 

OBJS += \
./Src/MCAL/EXTI/EXTI_Program.o 

C_DEPS += \
./Src/MCAL/EXTI/EXTI_Program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/EXTI/%.o: ../Src/MCAL/EXTI/%.c Src/MCAL/EXTI/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


