/****************************************************************
 ************  -STK_private.h                  ******************
 ***********					   		       ******************
 ***********   -Created: 2/9/2020			   ******************
 ***********   -Author: Maged Elnaggar         ******************
 ***********   -Version : _1_				   ******************
 ***********								   ******************
 ****************************************************************/ 

/****************************************************************
***********  guard of file will call on time in .c  *************
******************************************************************/ 

/*****************************************************************
		*  The Archictect Give The API	
						- The Name Of Function 
						- What is The Input 
						- What Is The Output
******************************************************************/


#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H

	/*			Global Variable  : Pointer To Function Will Call After Finsh Function And Call At ISR				*/
	
	void (* Callback )( void )  ;
	
		
				

#endif //STK_PRIVATE.H