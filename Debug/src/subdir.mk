################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Api.c \
../src/BaseDeDatos.c \
../src/Text.c \
../src/sqlite3.c 

CPP_SRCS += \
../src/Entrevistado.cpp \
../src/Estadistica.cpp \
../src/Persona.cpp \
../src/Usuario.cpp \
../src/main.cpp 

OBJS += \
./src/Api.o \
./src/BaseDeDatos.o \
./src/Entrevistado.o \
./src/Estadistica.o \
./src/Persona.o \
./src/Text.o \
./src/Usuario.o \
./src/main.o \
./src/sqlite3.o 

C_DEPS += \
./src/Api.d \
./src/BaseDeDatos.d \
./src/Text.d \
./src/sqlite3.d 

CPP_DEPS += \
./src/Entrevistado.d \
./src/Estadistica.d \
./src/Persona.d \
./src/Usuario.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


