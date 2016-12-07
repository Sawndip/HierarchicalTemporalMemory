################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/HierarchicalTemporalMemory/models/SegmentTest.cpp \
../test/HierarchicalTemporalMemory/models/SynapseTest.cpp 

OBJS += \
./test/HierarchicalTemporalMemory/models/SegmentTest.o \
./test/HierarchicalTemporalMemory/models/SynapseTest.o 

CPP_DEPS += \
./test/HierarchicalTemporalMemory/models/SegmentTest.d \
./test/HierarchicalTemporalMemory/models/SynapseTest.d 


# Each subdirectory must supply rules for building sources it contributes
test/HierarchicalTemporalMemory/models/%.o: ../test/HierarchicalTemporalMemory/models/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/sam/Devel/Java/workspace/HiearchicalTemporalMemory/src/HierarchicalTemporalMemory" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


