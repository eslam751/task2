#include "Cpu_Driver.h"
static uint_8_ flag=0;
Void CpuDriver_EnableGlobalInterrupt (void){
	__enable_irq();
}
Void CpuDriver_disableGlobalInterrupt (void){
	__disable_irq();
}
Void CpuDriver _ StartCriticalSection (void){
	flag++;
	__disable_irq();
}
Void CpuDriver _ StopCriticalSection (void){
	
	if(flag==1)
	{
		__disable_irq();
		flag--;
	}
	flag--;
}