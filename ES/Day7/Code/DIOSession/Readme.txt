DIO_Driver -> Post Build 
	-> have 2 File 
		1- Header file -> DIO_Interface.h 
			1- Prototype for API's
			2- Object of Macro 
			3- Enum (GroupName) 
			for Example : 
				#define GroupA     1  #define GroupB     2     #define GroupC     3   #define GroupD     4  
				#define Pin0  0 #define Pin1  1 #define Pin2  2 #define Pin3  3 #define Pin4  4 #define Pin5  5 #define Pin6  6 #define Pin7  7
				#define Input 0    #define Output 1 
				#define Low   0    #define High   1 
		2- Source File -> DIO_Program.c 
			1- Implemetation for API's
	-> API's 
		1- ChangeDirectionforPin
			void mDIO_ChangeDirectionForPin(uint8_t GroupName , uint_t PinNumber , uint8_t DirectionState);
				Ex for usage : mDIO_ChangeDirectionForPin(GroupA,Pin0,Output);
		2- WriteValueForPin
			void mDIO_WriteValueForPin(uint8_t GroupName ,  uint_t PinNumber , uint8_t OutputType);
				Ex for usage : mDIO_WriteValueForPin(GroupB, Pin5 , Low);
				Ex for usage : mDIO_WriteValueForPin(GroupB, Pin5 , High);
		3- ReadValueFromPin
			uint8_t mDIO_ReadValueFromPin(uint8  GroupName, uint8_PinNumber);
				Ex for usage : uint8_t ButtonStatus = mDIO_ReadValueFromPin(GroupD,Pin5);
			----------------------------------------------------------------------------------------
		4-ChangeDirectionforGroup
			 void mDIO_ChangeDirectionforGroup(uint8_t GroupName , uint8_t Direcation);
			 	Ex for usage  : mDIO_ChangeDirectionforGroup(GroupA , 0xAA);
			 	 
		5- WriteValueForGroup
			void mDIO_WriteValueForPin(uint8_t GroupName ,  uint8_t OutputValue);
				Ex for usage : mDIO_WriteValueForPin(GroupB,0x3F);
				Ex for usage : mDIO_WriteValueForPin(GroupB,Cathod1_One);
		6-ReadValueFromGroup
			uint8_t mDIO_ReadValueFromGroup(uint8  GroupName);
				Ex for usage : uint8_t ButtonStatus = mDIO_ReadValueFromPin(GroupD);
						
		
							
		