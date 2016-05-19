/**
  ******************************************************************************
  * @file			main.c
  * @author		Fotona d.d.
  * @version	V1
  * @date			30-Sept-2013
  * @brief   	Initialization and main app. loop wrapper file
  *	
  */

/** @addtogroup PFM6_Application
* @brief PFM6 application group
* @{
*/
#include	"app.h"
#include	"math.h"
//______________________________________________________________________________
int				main(void) { 
					_thread_init();
					while(1)
						_thread_loop();
} 
/** 
* @}
*/
