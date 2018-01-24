################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/drive.cpp 

OBJS += \
./src/Commands/drive.o 

CPP_DEPS += \
./src/Commands/drive.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++11 -I"C:\Users\Rishi Khurana\Desktop\Expo-bot/src" -IC:\Users\Rishi Khurana/wpilib/simulation/include -I/usr/include -I/usr/include/gazebo-6.5 -I/usr/include/ignition/math2 -I/usr/include/sdformat-3.7 -O0 -Og -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


