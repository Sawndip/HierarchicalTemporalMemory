################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/HierarchicalTemporalMemory/models/Segment.cpp \
../src/HierarchicalTemporalMemory/models/Synapse.cpp 

OBJS += \
./src/HierarchicalTemporalMemory/models/Segment.o \
./src/HierarchicalTemporalMemory/models/Synapse.o 

CPP_DEPS += \
./src/HierarchicalTemporalMemory/models/Segment.d \
./src/HierarchicalTemporalMemory/models/Synapse.d 


# Each subdirectory must supply rules for building sources it contributes
src/HierarchicalTemporalMemory/models/%.o: ../src/HierarchicalTemporalMemory/models/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/sam/Devel/Java/workspace/HiearchicalTemporalMemory/src/HierarchicalTemporalMemory" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


