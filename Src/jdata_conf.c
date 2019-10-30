/**
 ******************************************************************************
  * File Name          : jdata_conf.c
  * Description        : This file implements LibJPEG file based read/write functions.
  *
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/

/*FatFS is chosen for File storage*/
#include "jdata_conf.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

size_t read_file (FIL  *file, uint8_t *buf, uint32_t sizeofbuf)
{
static size_t BytesReadfile ;  
f_read (file, buf , sizeofbuf, &BytesReadfile); 
return BytesReadfile;    
}

size_t write_file (FIL  *file, uint8_t *buf, uint32_t sizeofbuf)
{
static size_t BytesWritefile;  
f_write (file, buf , sizeofbuf, &BytesWritefile); 
return BytesWritefile; 
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
