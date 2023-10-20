/****************************************************************
 ************   - DMA_interface.h		       ******************
 ***********					   		       ******************
 ***********   -Created: 3/10/2020			   ******************
 ***********   -Author: Maged Elnaggar         ******************
 ***********   -Version : _1_				   ******************
 ***********  -								   ******************
 ****************************************************************/ 

/****************************************************************
***********  guard of file will call on time in .c  *************
******************************************************************/ 

#ifndef DMA_INTERFACE_H
#define DMA_INTERFACE_H

 // FUNCTION TO INITIALISATION THE CHANNEL
 void MDMA_voidChannelInit(void) ;
 
 //FUNCTION TO To Take The Source And Distination Block Lenght
 void MDMA_voidChannelStart(u32 *Copy_Ptr32SourceAddres , u32 *Copy_Ptr32DistinationAddres ,u16 Copy_u16BlockLenght );

#endif //DMA_INTERFACE_H
