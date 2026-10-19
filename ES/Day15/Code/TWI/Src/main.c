#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include "../Inc/Common/Macros.h"
#include "../Inc/MCAL/TWI/TWI_Interface.h"
void main()
{
    mDIO_ChangeDirectionForPin(GroupC,Pin0,Output);
    mDIO_ChangeDirectionForPin(GroupC,Pin1,Output);
    mTWI_MasterInit();
    while (1)
    {
        mTWI_StartCondition();
        mTWI_SLAWithWriteWithACK(60);
        mTWI_SentDataPacketWithACK(128);
        mTWI_StopCondition();
    }
    
}