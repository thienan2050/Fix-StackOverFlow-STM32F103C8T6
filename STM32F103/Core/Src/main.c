#include "main.h"
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}


static void MX_GPIO_Init(void)
{ 
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

}


void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
 
}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t *file, uint32_t line)
{

}
#endif /* USE_FULL_ASSERT */












uint16_t i;
int f;

 uint8_t input_arr[600] = {
    //The calculate will use 512 byte (from input_arr[87] to input_arr[559])
    0x01, 0x48, 0x4D, 0x43, 0x03, 0x43, 0x41, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x21,
    0x05, 0x11, 0x22, 0x05, 0x23, 0x00, 0x01, 0x00, 0x02, 0x04, 0x10, 0x00, 0x20, 0x01, 0x00, 0x00,
    0x01, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x4D, 0x43, 0x08,
    0x47, 0x47, 0x43, 0x53, 0x55, 0x50, 0x53, 0x30, 0x00, 0x03, 0x54, 0x39, 0x00, 0x60, 0x00, 0x07,
    0x00, 0x01, 0x00, 0x02, 0x08, 0x40, 0x00, 0x11, 0x35, 0x49, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x9F, 0x47, 0xF8, 0x2E, 0xF4, 0x8A, 0xDC, 0xD6,
    0xFE, 0x43, 0x30, 0x89, 0x90, 0x3D, 0xD9, 0x8B, 0xCF, 0xE3, 0xE8, 0xCB, 0x20, 0x96, 0x06, 0xBD,
    0xE6, 0xCE, 0xFE, 0xA8, 0x90, 0xCC, 0x24, 0xD9, 0x7C, 0xE2, 0x86, 0x9B, 0x79, 0xDF, 0x3D, 0x11,
    0xA0, 0x27, 0xBA, 0x0C, 0x46, 0x02, 0x88, 0xE5, 0xC2, 0x1E, 0xC9, 0x61, 0x23, 0x72, 0x02, 0x82,
    0x0E, 0xC9, 0x4C, 0x16, 0xE1, 0xE0, 0x49, 0x71, 0xD8, 0x69, 0x47, 0xB4, 0x91, 0xAB, 0x34, 0xF1,
    0xE0, 0xFB, 0x63, 0x0B, 0xF9, 0x16, 0x3E, 0x1E, 0x59, 0x45, 0xB9, 0x6D, 0xE9, 0xD2, 0xBF, 0xBF,
    0x93, 0xEF, 0x65, 0xA6, 0xAA, 0xDD, 0xD2, 0xB6, 0xEB, 0x94, 0x15, 0xB0, 0x5E, 0xD5, 0x78, 0x0A,
    0xDB, 0x87, 0x7A, 0x4A, 0x00, 0x65, 0x69, 0x40, 0xA9, 0x29, 0xEB, 0x76, 0xC2, 0x2A, 0x83, 0x10,
    0x91, 0xF1, 0x6E, 0xD0, 0xA0, 0xD2, 0x95, 0xFE, 0xB3, 0x06, 0xBA, 0xC6, 0x3E, 0x1C, 0x91, 0xCF,
    0xA9, 0x20, 0x27, 0x45, 0x8D, 0x62, 0xA7, 0xA7, 0x95, 0x0A, 0xCB, 0x68, 0x98, 0xF6, 0x6E, 0x3E,
    0xD8, 0x92, 0xB4, 0xD7, 0xEE, 0xAD, 0x4F, 0x63, 0x12, 0xC5, 0x21, 0xE9, 0x64, 0x8D, 0x27, 0x85,
    0x58, 0x70, 0x37, 0x32, 0xA4, 0xFE, 0xA5, 0xC3, 0x03, 0xDB, 0x6D, 0xFB, 0x48, 0xD9, 0x10, 0xA6,
    0x88, 0xFE, 0xBE, 0xA5, 0x8C, 0x25, 0xD3, 0x69, 0xC6, 0xF8, 0x62, 0x0A, 0x66, 0x2B, 0xFB, 0xA4,
    0x21, 0xF7, 0x0D, 0x85, 0x5A, 0xF6, 0x43, 0x0C, 0xAF, 0x51, 0xA4, 0xFB, 0xC4, 0xEE, 0xE7, 0xE3,
    0xF4, 0x04, 0xC2, 0x0F, 0xDF, 0x81, 0x6A, 0xAA, 0x45, 0x7E, 0xB2, 0x43, 0x5B, 0x34, 0x31, 0xFD,
    0x7D, 0x00, 0x67, 0x38, 0xD7, 0xF0, 0x85, 0xFB, 0xA2, 0x17, 0x07, 0x42, 0x3B, 0x4A, 0x44, 0x59,
    0x46, 0x0C, 0xC1, 0xA9, 0x2C, 0xC8, 0xDF, 0xE9, 0x70, 0x53, 0x4E, 0x13, 0x5D, 0xA6, 0xFC, 0xB3,
    0x3C, 0x24, 0xDD, 0xA4, 0xB4, 0x04, 0xC1, 0xAD, 0xA9, 0xE5, 0xEE, 0x03, 0xE9, 0xC1, 0x88, 0xE5,
    0x1D, 0xBC, 0x75, 0xA8, 0x9D, 0x0D, 0x48, 0x56, 0x34, 0x7E, 0x28, 0x85, 0x0D, 0x5A, 0x26, 0x5F,
    0xAA, 0x84, 0x0B, 0xD9, 0x0D, 0x54, 0x22, 0xA7, 0x39, 0xE0, 0xD2, 0x66, 0xA2, 0x6E, 0x8E, 0x7A,
    0xB2, 0x76, 0xD6, 0xD9, 0x65, 0x43, 0xE9, 0x36, 0x79, 0xBC, 0xC1, 0x16, 0x96, 0x44, 0xE8, 0x41,
    0xF1, 0xF8, 0x22, 0xFD, 0x48, 0x8B, 0x5C, 0x2E, 0xF0, 0xBC, 0x5D, 0x2C, 0xDA, 0xFD, 0xAE, 0xCE,
    0x5A, 0x43, 0x05, 0x3F, 0x81, 0x03, 0xE3, 0x4E, 0x28, 0xA1, 0xDD, 0x97, 0xE9, 0x8F, 0x1D, 0x27,
    0x91, 0x2B, 0x4B, 0x4E, 0x97, 0x8D, 0x0F, 0x45, 0x46, 0x75, 0xEE, 0x54, 0xA8, 0xB7, 0x51, 0x24,
    0x58, 0x56, 0xD2, 0x56, 0x64, 0xE7, 0x9B, 0x8D, 0x0B, 0x4E, 0x78, 0xF3, 0x4E, 0xF4, 0x3D, 0xEA,
    0x72, 0x28, 0x78, 0x73, 0xF2, 0xAB, 0xE0, 0x5A, 0x1C, 0x9D, 0x61, 0x88, 0x53, 0x9D, 0xA1, 0x1D,
    0x95, 0x0B, 0xBF, 0x2C, 0x73, 0x27, 0x29, 0xEA, 0xAA, 0x04, 0x04, 0x0D, 0xB1, 0x1B, 0x57, 0x4F,
    0x87, 0x17, 0x6B, 0x72, 0x3A, 0x86, 0x3C, 0xF4, 0x88, 0xB1, 0xFE, 0x95, 0xBA, 0x58, 0xBE, 0x9E,
    0x7F, 0xA6, 0x82, 0x51, 0x67, 0xAF, 0xD2, 0xCC, 0xDA, 0xB8, 0x0A, 0xE7, 0x43, 0x68, 0xAE, 0x34,
    0x44, 0xC4, 0xF9, 0x13, 0x21, 0x7A, 0xD0, 0x4A, 0x9B, 0x90, 0x36, 0x69, 0x49, 0xF2, 0xAC, 0xF3,
    0xAA, 0x36, 0x2D, 0x41, 0xA2, 0x67, 0x49, 0xF9, 0x32, 0x39, 0x0B, 0xC8, 0x3F, 0xFA, 0x0F, 0x97,
    0x8F, 0x91, 0xB0, 0x11, 0xE7, 0x11, 0xAE, 0xCB, 0x58, 0x9B, 0x83, 0x1C, 0xC2, 0x84, 0xBA, 0xFD,
    0x37, 0xA1, 0x25, 0x78, 0xCC, 0xE8, 0x6C, 0x3F};
 uint8_t output_arr[256] = {
    0x3D, 0xED, 0xBC, 0xE2, 0x93, 0x27, 0xC5, 0x7C, 0x89, 0xE7, 0x3B, 0xE2, 0x3E, 0x59, 0xD3, 0x49,
    0x2A, 0xEE, 0x23, 0x71, 0xE5, 0x44, 0x7A, 0xFC, 0xD1, 0x86, 0x1E, 0xF4, 0xED, 0x82, 0x99, 0x94,
    0x8D, 0xAB, 0x8A, 0xD8, 0x3D, 0x9B, 0x73, 0x2A, 0x44, 0xF9, 0x1D, 0xFA, 0xD9, 0x08, 0xE8, 0xA2,
    0xD1, 0xAD, 0x7B, 0xA2, 0x6E, 0x78, 0xA4, 0x9B, 0x05, 0xA0, 0x4D, 0x29, 0xD7, 0xA6, 0x3E, 0xAA,
    0xDA, 0xAC, 0x5D, 0x97, 0x04, 0xE6, 0x7A, 0xCB, 0x41, 0xA7, 0xFA, 0x14, 0x13, 0x38, 0xC0, 0x69,
    0x3E, 0x7F, 0xD1, 0xBA, 0xE4, 0x9A, 0xE3, 0xC7, 0xCB, 0x39, 0x24, 0x76, 0x8F, 0xB1, 0xF7, 0xC0,
    0xB7, 0x45, 0x27, 0x06, 0xD0, 0x4C, 0xD6, 0x8E, 0x68, 0x21, 0xAE, 0xF1, 0x4B, 0x14, 0x0A, 0x78,
    0xD0, 0x79, 0x67, 0x7B, 0x61, 0x28, 0xAC, 0xF8, 0xC9, 0x2F, 0xF0, 0x61, 0x7F, 0x92, 0x7A, 0xFC,
    0x1D, 0x89, 0x41, 0xCF, 0xE4, 0x01, 0xA7, 0x7F, 0xE4, 0x8B, 0x49, 0x2B, 0x5D, 0x1E, 0x03, 0x79,
    0x60, 0x3A, 0x3F, 0xE9, 0x93, 0x52, 0xC7, 0x6D, 0x2B, 0x14, 0x32, 0xCB, 0x52, 0x2E, 0x54, 0xCD,
    0xE6, 0x36, 0x27, 0x49, 0xA3, 0x00, 0x5E, 0x22, 0x93, 0x8D, 0xF8, 0x97, 0xA0, 0xC7, 0xFA, 0x0A,
    0xA0, 0x78, 0x40, 0x8C, 0xA0, 0x2A, 0x26, 0x34, 0x39, 0x17, 0xB7, 0xBA, 0x8B, 0x79, 0x1B, 0x22,
    0x28, 0x2D, 0x68, 0x8B, 0x30, 0xFE, 0x30, 0x9A, 0x50, 0xF0, 0xC0, 0x82, 0x9E, 0x0C, 0x77, 0xD9,
    0xAA, 0x03, 0xBB, 0xF5, 0x31, 0x3F, 0xE2, 0xA2, 0x51, 0x79, 0xBD, 0x99, 0x30, 0x95, 0x97, 0xDD,
    0x42, 0x3B, 0x3D, 0xD3, 0x7F, 0xF5, 0xD7, 0x59, 0xF6, 0x41, 0xEC, 0xFF, 0xF2, 0xEA, 0x8E, 0x3E,
    0xE9, 0x2B, 0x8D, 0x09, 0x4D, 0x26, 0xE3, 0x97, 0xF1, 0xE3, 0x1D, 0x2F, 0x14, 0xD4, 0x18, 0x4A};

#define LOBYTE(x) (*((uint8_t *)&(x)))   // low byte
#define LOWORD(x) (*((uint16_t *)&(x)))  // low word
#define LODWORD(x) (*((uint32_t *)&(x))) // low dword
#define HIBYTE(x) (*((uint8_t *)&(x) + 1))
#define HIWORD(x) (*((uint16_t *)&(x) + 1))
#define HIDWORD(x) (*((uint32_t *)&(x) + 1))
#define BYTEn(x, n) (*((uint8_t *)&(x) + n))
#define WORDn(x, n) (*((uint16_t *)&(x) + n))
#define BYTE1(x) BYTEn(x, 1)
#define BYTE2(x) BYTEn(x, 2)
#define BYTE3(x) BYTEn(x, 3)
#define BYTE4(x) BYTEn(x, 4)
#define BYTE5(x) BYTEn(x, 5)
#define BYTE6(x) BYTEn(x, 6)
#define BYTE7(x) BYTEn(x, 7)
#define BYTE8(x) BYTEn(x, 8)
#define BYTE9(x) BYTEn(x, 9)
#define BYTE10(x) BYTEn(x, 10)
#define BYTE11(x) BYTEn(x, 11)
#define BYTE12(x) BYTEn(x, 12)
#define BYTE13(x) BYTEn(x, 13)
#define BYTE14(x) BYTEn(x, 14)
#define BYTE15(x) BYTEn(x, 15)
#define WORD1(x) WORDn(x, 1)
#define WORD2(x) WORDn(x, 2)
#define WORD3(x) WORDn(x, 3)
#define WORD4(x) WORDn(x, 4)
#define WORD5(x) WORDn(x, 5)
#define WORD6(x) WORDn(x, 6)
#define WORD7(x) WORDn(x, 7)


void sub_19A6BA50(uint8_t *pData, uint8_t *pTemp);
bool sub_1054C220(uint8_t *a1, uint8_t *a2);
uint8_t *sub_1054BBF0(uint8_t *a1, uint8_t *a2, int32_t a3);
void sub_1054BF20(uint8_t *pReversedPreparedData, uint8_t *pReversedTesterSeed, uint8_t *pResult);
void sub_19A6C110_2(uint8_t *pBigArray);
int CDQ(uint32_t d);
void sub_19A6C260_3(uint8_t *pInput, uint8_t *pResult);
bool sub_19A6C1F0(int32_t a1, uint32_t a2);
void *qmemcpy(void *dst, const void *src, size_t cnt);
void sub_19A6C330(uint8_t *pCalcBytes1, uint8_t *pCalcBytes2, uint8_t *pReversedTesterSeed, uint16_t *pWordArr1, uint16_t *pWordArr2);
bool sub_1054C1F0(uint8_t *a1, uint32_t a2);
void sub_19A6BA00(uint8_t *pTesterSeed, uint8_t *p8Seed, uint8_t *pSomeData2, uint8_t *pResult);
void GatewaySeedKeyTest(uint8_t *pSeed8Bytes, uint8_t *pKEY);




int main(void)
{
 
  HAL_Init(); 
  SystemClock_Config(); 
  MX_GPIO_Init();
  uint8_t KEY[0x100];
  //uint8_t temp_arr[8] = {0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
	uint8_t temp_arr[8] = {0xB2, 0x80, 0x27, 0x3F, 0xDC, 0x30, 0xF3, 0x3E};
  bool check_ok = true;
  GatewaySeedKeyTest(temp_arr, KEY);
  for(i = 0; i < 0x100; i++) 
	{		
		if(KEY[i] != output_arr[i]) check_ok = false;
	};		
	HAL_Delay(2000);
	while(1);
}
// This file contains the 'main' function. Program execution begins and ends there.
//#include <iostream>



void sub_19A6BA50(uint8_t* pData, uint8_t* pTemp)
{
  if (pData[0x0C] == 2)
  {
    pTemp[0] = 0x00;
    pTemp[1] = 0x00;
    pTemp[2] = 0x0F;
    pTemp[3] = 0x14;
  }
}

uint8_t* sub_1054BBF0(uint8_t* a1, uint8_t* a2, int32_t a3)
{
  uint8_t* result; // eax
  uint16_t v4; // di
  uint8_t* v5; // esi
  int32_t v6; // ecx
  int16_t v7; // dx
  uint32_t v8; // ecx
  int8_t* v9; // edi
  int8_t v10; // cf
  int8_t* v11; // edi
  int32_t i; // ecx

  result = NULL;

  v4 = (uint16_t)a3 >> 1;

  if ((uint16_t)a3 >> 1)

  {
    v5 = a1;
    result = (uint8_t*)((uint16_t)a3 + a2 - 1);
    v6 = v4;
    do
    {
      v5 += 2;
      HIBYTE(v7) = *(result - 1);
      LOBYTE(v7) = *result;
      result -= 2;
      *(uint16_t*)(v5 - 2) = v7;
      --v6;
    } while (v6);
  }
  if (v4 < 0x80u)
  {
    v8 = 128 - v4;
    v9 = (int8_t*)(a1 + 2 * v4);
    result = 0;
    v10 = v8 & 1;
    v8 >>= 1;
    memset(v9, 0, 4 * v8);
    v11 = &v9[4 * v8];
    for (i = v10; i; --i)
    {
      *(uint16_t*)v11 = 0;
      v11 += 2;
    }
  }
  return result;
}

bool sub_1054C220(uint8_t* a1, uint8_t* a2)
{
  bool result; // al
  int16_t v3; // dx

  result = 0;
  v3 = 127;
  while (*(uint16_t*)(2 * v3 + a1) == *(uint16_t*)(2 * v3 + a2))
  {
    if (--v3 < 0)
      return result;
  }
  return *(uint16_t*)(2 * v3 + a1) > *(uint16_t*)(2 * v3 + a2);
}

void sub_1054BF20(uint8_t* pReversedPreparedData, uint8_t* pReversedTesterSeed, uint8_t* pResult)
{
  uint32_t eax = 0;
  uint32_t ebx = 0;
  uint32_t ebp = 0;
  uint32_t ecx = 0;
  uint32_t edi = 0;
  uint32_t edx = 0;
  uint32_t myTmp = 0;
  int32_t esi = 0x7F;
  uint8_t* pECX = pResult;
  uint8_t* pEAX = pReversedTesterSeed;
  uint8_t* pEDX;
  uint8_t* pEBP;
  uint8_t* pEBX;
  int32_t var_4 = 0;
  uint8_t* var_8 = pECX;
  uint8_t* var_C = pEAX;
  uint8_t* var_10;
  uint8_t* arg_0;
  int32_t var_14 = 0xFF;

loc_19A6BF3A:
  edx = esi & 0xFFFF;
  uint16_t wTmp = pEAX[edx * 2] * 0x100 + pEAX[edx * 2 + 1];
  if (wTmp != 0)
    goto loc_19A6BF4A;
  esi--;
  if ((esi & 0xFFFF) >= 0)
    goto loc_19A6BF3A;

loc_19A6BF4A:
  var_14 = 0xFF;
  if ((esi & 0xFFFF) >= 0xFF)
  {
    goto loc_19A6C0E1;
  }

  edx = esi & 0xFFFF;

  pECX = pECX + 0x1FE;
  pEAX = pEAX + edx * 2;

  var_10 = pEAX;
  arg_0 = pECX;
  goto loc_19A6BF7A;

loc_19A6BF76:
  pECX = arg_0;

loc_19A6BF7A:
  eax = pECX[1] * 0x100 + pECX[0];
  if (eax > 0)
  eax = eax;
  pEDX = var_10;
  ebx = 0;
  ebx = *(pECX - 1) * 0x100 + *(pECX - 2);
  ecx = eax & 0xFFFF;
  ecx = ecx << 0x10;
  ebx = ebx | ecx;
  ecx = pEDX[1] * 0x100 + pEDX[0];
  if (eax != ecx)
    goto loc_19A6BFA3;

  eax = 0xFFFF;
  goto loc_19A6BFB1;

loc_19A6BFA3:
  edi = ecx;
  eax = ebx;
  edi = edi & 0xFFFF;
  edx = 0;
  eax = eax / edi;

loc_19A6BFB1:
  ebp = ecx;
  ebp = ebp & 0xFFFF;
  var_4 = ebp;

loc_19A6BFBD:
  edx = eax;
  edx = edx & 0xFFFF;
  ecx = edx;
  ecx = ecx * ebp;
  if (esi <= 0)
    goto loc_19A6BFE2;

  pEBP = var_10;
  edi = *(pEBP - 1) * 0x100 + *(pEBP - 2);
  ebp = var_4;
  edi = edi * edx;
  goto loc_19A6BFE4;

loc_19A6BFE2:
  edi = 0;

loc_19A6BFE4:
  edx = edi;
  edx = edx >> 0x10;
  ecx = ecx + edx;
  if (ecx < ebx)
    goto loc_19A6C002;
  else if (ecx != ebx)
    goto loc_19A6BFFB;

  pECX = arg_0;
  myTmp = *(pECX - 4) * 0x100 + *(pECX - 3);
  if (edi <= myTmp)
    goto loc_19A6C002;

loc_19A6BFFB:
  eax = eax + 0xFFFF;
  goto loc_19A6BFBD;

loc_19A6C002:
  pEBP = var_C;
  ecx = eax;
  edi = 0;
  ebx = 0;
  ecx = ecx & 0xFFFF;
  var_4 = ecx;
  goto loc_19A6C01C;

loc_19A6C018:
  ecx = var_4;

loc_19A6C01C:
  eax = 0;
  edi = edi & 0xFFFF;
  eax = *(pEBP + 1) * 0x100 + *(pEBP + 0);
  eax = eax * ecx;
  eax = eax + edi;
  ecx = ebx;
  edx = eax;
  ecx = ecx - esi;
  edx = edx >> 0x10;
  edi = edx;
  edx = var_14;
  eax = eax & 0xFFFF;
  ecx = ecx + edx - 1;
  pEDX = var_8;
  ecx = ecx & 0xFFFF;
  pEDX = pEDX + ecx * 2;
  ecx = 0;
  ecx = *(pEDX + 1) * 0x100 + *(pEDX + 0);
  ecx = ecx - eax;
  memcpy(pEDX, (uint8_t*) & (ecx), sizeof(int16_t));

  if (false == (ecx & 0xFFFF0000))
    goto loc_19A6C065;

  edi++;

loc_19A6C065:
  ebx++;
  pEBP += 2;
  if (ebx <= esi)
    goto loc_19A6C018;

  pEAX = arg_0;
  myTmp = *(pEAX + 1) * 0x100 + *(pEAX);
  if (myTmp >= edi)
    goto loc_19A6C0BC;
  pEBX = var_C;
  edi = 0;
  ecx = 0;

loc_19A6C07F:
  ecx = ecx;

loc_19A6C0BC:
  pECX = arg_0;
  eax = var_14;
  eax--;
  *(pECX + 1) = 0x00;
  *(pECX + 0) = 0x00;
  pECX = pECX - 2;
  var_14 = eax;
  arg_0 = pECX;
  if (eax > esi)
    goto loc_19A6BF76;

loc_19A6C0E1:
  return;
}


void sub_19A6C110_2(uint8_t* pBigArray)
{
  uint32_t eax = 0;
  uint32_t ebp = 0;
  uint32_t ebx = 0;
  uint32_t ecx = 0;
  uint32_t esi = 0;
  uint32_t edi = 0;
  uint32_t edx = 0;

  uint8_t Local[0x100];
  memcpy(Local, pBigArray + 0x300, 0x100);
  uint8_t* pEAX;
  uint8_t* pEDI = Local;// pBigArray + 0x300;
  uint8_t* pECX = pBigArray + 0x100;
  uint8_t* pEDX = pBigArray + 0x400;
  uint8_t* var_104 = pECX;
  int32_t var_108;
  int32_t var_110 = esi;

  ebx = 0;
  edx = 0;
  uint8_t* var_10C = pBigArray + 0x300;
  var_108 = edx;

loc_19A6C14A:
  if (ebx <= 0x7F)
    goto loc_19A6C155;
  edx = 0x7F;
loc_19A6C155:
  eax = ebx;
  ecx = 0x80;
  eax = eax - edx;
  edx = edx & 0xFFFF;
  eax = eax & 0xFFFF;
  ecx = ecx - eax;
  edi = edx + 1;
  if (ecx < edi)
    goto loc_19A6C174;
  ecx = edi;

loc_19A6C174:
  if (!ecx)
    goto loc_19A6C1AA;
  pEDI = &Local[eax * 2];// pBigArray + 0x300;// Buffer
  pEAX = pBigArray + 0x100;// ReversedPreparedData
  ecx = ecx & 0xFFFF;
  pEDX = pEAX + edx * 2;

loc_19A6C18A:
  eax = 0;
  ebp = 0;
  eax = pEDX[1] * 0x100 + pEDX[0];
  ebp = pEDI[1] * 0x100 + pEDI[0];
  eax = eax * ebp;
  esi = esi + eax;
  if (esi >= eax)
    goto loc_19A6C1A1;
  var_110++;

loc_19A6C1A1:
  pEDI = pEDI + 2;

  {
    pEDX = pEDX - 2;
  }
  ecx--;
  if (ecx != 0)
    goto loc_19A6C18A;

loc_19A6C1AA:
  pEAX = var_10C;
  ecx = var_110;
  edx = var_108;
  var_110 = 0;
  memcpy(pEAX, (uint8_t*) & (esi), sizeof(int16_t));
  pEAX = pEAX + 2;
  esi = esi >> 0x10;
  ecx = ecx << 0x10;
  esi = esi | ecx;
  ebx++;
  edx++;
  var_108 = edx;
  var_10C = pEAX;
  if (ebx < 0x100)
    goto loc_19A6C14A;
}

void sub_19A6C0F0(uint8_t* pBigArray)
{
  sub_19A6C110_2(pBigArray);
}

int CDQ(uint32_t d)
{
  if ((d & 0x80000000) != 0)
    return -1;
  else
    return 0;
}


void sub_19A6C260_3(uint8_t* pInput, uint8_t* pResult)
{
  bool bFlag = false;
  uint32_t eax = 0;
  uint32_t ebp = 0;
  uint32_t ecx = 0;
  uint32_t edx = 0;
  uint32_t esi = 0;
  uint32_t arg_0 = 0;

  int16_t v10[17];

  int16_t* pEAX = NULL;
  uint8_t* pESI = NULL;
  uint8_t* pECX = pInput + 0x200;
  uint32_t ebx = 2;
  uint32_t var_22 = 1;
  v10[1] = var_22;
  edx = pECX[1] * 0x100 + pECX[0];
  arg_0 = ebx & 0xFFFF;

  memcpy(pResult, (uint8_t*) & (edx), sizeof(int16_t));
  if (ebx == 0x10)
    bFlag = true;

loc_19A6C299:
  esi = ebx;
  if (bFlag == true)
    goto loc_19A6C2CC;
  ecx = esi;
  eax = 0;
  ecx = ecx & 0xFF;
  edx = 0;
  edx = pResult[1] * 0x100 + pResult[0];
  ebp = 1;
  eax = v10[ecx - 1];
  eax = eax * edx;
  ebp = ebp << ecx;
  edx = (int)CDQ(eax);
  ebp = ebp & 0xFFFF;

  edx = eax % ebp;
  eax = eax / ebp;

  goto loc_19A6C2D9;

loc_19A6C2CC:
  edx = pResult[1] * 0x100 + pResult[0];
  edx = (edx * v10[15]) & 0x0000FFFF;

loc_19A6C2D9:
  eax = esi;
  esi = 1;
  eax = eax & 0xFF;
  v10[0] = edx;
  ecx = eax - 1;

  pEAX = &v10[eax];
  esi = esi << ecx;
  if (edx >= esi)
    goto loc_19A6C301;
  ecx = v10[eax - 1];
  v10[eax] = ecx & 0xFFFF;
  goto loc_19A6C30B;

loc_19A6C301:
  edx = v10[eax - 1];
  edx = edx + esi;
  v10[eax] = edx & 0xFFFF;

loc_19A6C30B:
  ebx++;
  arg_0 = ebx;
  if (ebx == 0x10)
    bFlag = true;
  if (ebx <= 0x10)
    goto loc_19A6C299;

  eax = v10[16] & 0x0000FFFF;
  eax = ~eax;
  eax++;
  eax = eax & 0x0000FFFF;

  memcpy(pResult, (uint8_t*) & (eax), sizeof(int16_t));
}

bool sub_19A6C1F0(int32_t a1, uint32_t a2)
{
  return ((uint16_t)(1 << (15 - (a2 & 0xF))) & *(uint16_t*)(a1 + 2 * (127 - (a2 >> 4)))) != 0;
}

void* qmemcpy(void* dst, const void* src, size_t cnt)
{
  int8_t* out = (int8_t*)dst;
  const int8_t* in = (const int8_t*)src;
  while (cnt > 0)
  {
    *out++ = *in++;
    --cnt;
  }
  return dst;
}

void sub_19A6C330(uint8_t* pCalcBytes1, uint8_t* pCalcBytes2, uint8_t* pReversedTesterSeed, uint16_t* pWordArr1, uint16_t* pWordArr2)
{
  uint32_t eax = 0;
  uint32_t ebp = 0;
  uint32_t ebx = 0;
  uint32_t ecx = 0;
  uint32_t edi = 0;
  uint32_t edx = 0;
  uint32_t esi = 0;

  bool bFlag = false;

  int EsiIndexOfCalcBytes = 0;
  int EcxIndex = 0;

  uint8_t* pEAX = pCalcBytes2;
  uint8_t* pECX = NULL;
  uint8_t* pESI = NULL;
  uint8_t* pEDI = NULL;
  uint32_t var_210;
  uint8_t* var_214;
  uint16_t LocalArr[0x100];
  uint16_t Results[0x100];

  memset(LocalArr, 0x100, sizeof(uint16_t) * 0x100);
  memset(Results, 0x100, sizeof(uint16_t) * 0x100);

  ecx = 0x41;
  eax = 0;
  var_210 = 0x80;
  var_214 = pEAX;

loc_1C89C361:
  pECX = var_214;
  pESI = pCalcBytes1;
  edx = 0;
  edi = edi;
  edx = pECX[1] * 0x100 + pECX[0];
  eax = 0;
  EcxIndex = 0;
  ebx = 0x80;

loc_1C89C382:
  edi = 0;
  edi = pESI[EcxIndex * 2 + 1] * 0x100 + pESI[EcxIndex * 2 + 0];
  //ecx+=2;
  EcxIndex++;
  edi = edi * edx;
  eax = eax >> 0x10;
  edi = edi + eax;
  eax = 0;
  eax = LocalArr[EcxIndex - 1];
  eax = eax + edi;
  ebx--;
  LocalArr[EcxIndex - 1] = LOWORD(eax);
  if (ebx > 0)
    goto loc_1C89C382;

  //EcxIndex = 0x80;
  //EdxIndexOfWordArray = 0;// Beginning of the array
  ecx = LocalArr[0x80];
  edx = LocalArr[0];
  eax = eax >> 0x10;
  ecx = ecx & 0xFFFF;
  edx = edx & 0xFFFF;
  eax = eax + ecx;
  ecx = pCalcBytes2[0x201] * 0x100 + pCalcBytes2[0x200];
  ecx = ecx * LocalArr[0];
  LocalArr[0x80] = LOWORD(eax);
  ecx = ecx & 0xFFFF;
  eax = eax >> 0x10;
  LocalArr[0x81] = LOWORD(eax);
  eax = 0;
  EsiIndexOfCalcBytes = 0x100 + 2;// Pointer to the reversed seed
  eax = pCalcBytes2[0x101] * 0x100 + pCalcBytes2[0x100];
  eax = eax * ecx;
  eax = eax + edx;
  //EdxIndexOfWordArray = 1;
  EcxIndex = 1;// check if this is true!
  ebx = 0x7F;

loc_1C89C3FB:
  edi = 0;
  //EdxIndexOfWordArray++;
  EcxIndex++;
  edi = pCalcBytes2[EsiIndexOfCalcBytes + 1] * 0x100 + pCalcBytes2[EsiIndexOfCalcBytes];
  EsiIndexOfCalcBytes += 2;
  edi = edi * ecx;
  eax = eax >> 0x10;
  edi = edi + eax;
  eax = 0;
  //eax = LocalArr[EdxIndexOfWordArray - 1];
  eax = LocalArr[EcxIndex - 1];
  eax = eax + edi;
  ebx--;
  //LocalArr[EdxIndexOfWordArray - 2] = eax & 0x0000FFFF;
  LocalArr[EcxIndex - 2] = LOWORD(eax);
  if (ebx != 0)
    goto loc_1C89C3FB;

  ecx = LocalArr[0x80];
  edx = LocalArr[0x81];
  eax = eax >> 0x10;
  ecx = ecx & 0xFFFF;
  eax = eax + ecx;
  pECX = var_214;
  LocalArr[0x7F] = LOWORD(eax);
  pECX = pECX + 2;
  eax = eax >> 0x10;
  eax = eax + edx;
  var_214 = pECX;
  LocalArr[0x80] = LOWORD(eax);
  eax = var_210;
  eax--;
  var_210 = eax;
  if (eax != 0)
    goto loc_1C89C361;


  eax = 0;
  EsiIndexOfCalcBytes = 0x100;
  ecx = 0;
  edi = 0x80;

loc_1C89C476:
  eax = eax >> 0x10;
  eax = (~eax);
  eax++;
  ebx = 0;
  eax = eax & 0xFFFF;

  ebx = LocalArr[EcxIndex - 0x80];
  EcxIndex += 1;
  ebx = ebx - eax;
  eax = 0;
  LOWORD(eax) = pCalcBytes2[EsiIndexOfCalcBytes + 1] * 0x100 + pCalcBytes2[EsiIndexOfCalcBytes];
  EsiIndexOfCalcBytes += 2;
  ebx = ebx - eax;
  edi--;
  eax = ebx;// &0xFFFF;
  Results[EcxIndex - 0x81] = LOWORD(eax);
  if (edi != 0)
    goto loc_1C89C476;

  ecx = LocalArr[0x80];
  EcxIndex = 0x80;
  eax = eax >> 0x10;
  eax = ~eax;
  eax++;
  ecx = ecx & 0xFF;
  eax = eax & 0xFF;
  ecx = ecx - eax;
  if (ecx == 0)
    bFlag = true;
  Results[0x80] = LOWORD(ecx);
  ecx = ecx >> 0x10;
  ecx = 0x40;
  if (bFlag)
  {
    memcpy(pWordArr2, LocalArr, 0x100 * sizeof(uint16_t));
    memcpy(pWordArr1, Results, 0x100 * sizeof(uint16_t));

  }
  else
  {

    memcpy(pWordArr1, LocalArr, 0x100 * sizeof(uint16_t));
    memcpy(pWordArr2, Results, 0x100 * sizeof(uint16_t));
  }
}

bool sub_1054C1F0(uint8_t* a1, uint32_t a2)
{
  return ((uint16_t)(1 << (15 - (a2 & 0xF))) & *(uint16_t*)(a1 + 2 * (127 - (a2 >> 4)))) != 0;
}

void sub_19A6BA00(uint8_t* pTesterSeed, uint8_t* p8Seed, uint8_t* pSomeData2, uint8_t* pResult)
{
  uint8_t Temp4[4];
  uint8_t ReversedSomeData2[0x100];
  uint8_t ReversedPreparedData[0x100];
  uint8_t ReversedTesterSeed[0x100];
  uint8_t CalculatedBytes[0x100];

  uint16_t WordArr1[0x100];
  uint16_t WordArr2[0x100];

  uint8_t SomeParam[64] =
  {
    0x20, 0x7F, 0x87, 0x1B, 0xB4, 0xC3, 0x53, 0x01, 0xB4, 0xC0, 0x53, 0x01,
    0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x00, 0xB8, 0x0B, 0x00, 0x00, 0xB8, 0x0B, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00
  };
  uint8_t unk_19B49DD8[15] =
  {
    0x30, 0x21, 0x30, 0x09, 0x06, 0x05, 0x2B, 0x0E, 0x03, 0x02, 0x1A, 0x05,
    0x00, 0x04, 0x14
  };// SHA1 Decoration

  memset(ReversedSomeData2, 0x00, 0x100);

  uint8_t PreparedData[256];

  sub_19A6BA50(SomeParam, Temp4);

  int si = Temp4[2];
  int dx = Temp4[3];
  int ecx = 0xFD - si;
  ecx = ecx - dx;
  int edi = ecx;
  edi = edi & 0xFFFF;

  PreparedData[0] = 0x00;
  PreparedData[1] = 0x01;
  for (i = 2; i < 0xDC; i++)
  {
    PreparedData[i] = 0xFF;
  }
  PreparedData[0xDC] = 0x00;
  memcpy(&PreparedData[0xDD], unk_19B49DD8, 15);

  memcpy(&PreparedData[0xEC], p8Seed, 8);
  for (i = 0; i < 0x14 - 8; i++)
  {
    PreparedData[i + 0xF4] = 0x00;
  }

  sub_1054BBF0(ReversedSomeData2, pSomeData2, 0x100);
  sub_1054BBF0(ReversedPreparedData, PreparedData, 0x100);
  sub_1054BBF0(ReversedTesterSeed, pTesterSeed, 0x100);

  // sub_19A6BDC0 - below is the code of the function
  uint8_t Buffer[512];
loc_19A6BDF8:
  memset(Buffer, 0x00, 512);
  Buffer[0x100] = 1; // dx == 1
  sub_1054BF20(ReversedPreparedData, ReversedTesterSeed, Buffer);
  memcpy(CalculatedBytes, Buffer, 0x100);

  uint8_t var_404[512];
  memcpy(var_404, Buffer, 512);
  uint8_t ResultBuff[0x100];
  memset(ResultBuff, 0x00, 0x100);

  uint8_t BigArray[5 * 0x100];
  memcpy(&BigArray[0x000], &ReversedSomeData2, 0x100);
  memcpy(&BigArray[0x100], &ReversedPreparedData, 0x100);
  memcpy(&BigArray[0x200], &ReversedTesterSeed, 0x100);
  memcpy(&BigArray[0x300], &Buffer, 0x100);
  memcpy(&BigArray[0x400], &ResultBuff, 0x100);
  sub_19A6C0F0(BigArray);

  memcpy(Buffer, &BigArray[0x300], 0x200);

  sub_1054BF20(Buffer, ReversedTesterSeed, Buffer);

  memcpy(&BigArray[0x300], &Buffer, 0x200);
  sub_19A6C260_3(BigArray, ResultBuff);

  uint8_t JoinedArray[0x202];
  memcpy(&JoinedArray[0x000], CalculatedBytes, 0x100);
  memcpy(&JoinedArray[0x100], &ReversedTesterSeed, 0x100);
  memcpy(&JoinedArray[0x200], ResultBuff, 2);

  int ebx = 0;
loc_19A6BE74:

  sub_19A6C330(JoinedArray, JoinedArray, ReversedTesterSeed, WordArr1, WordArr2);

  if (true == sub_1054C1F0(ReversedSomeData2, ebx))
  {
    memcpy(&JoinedArray[0x000], Buffer, 0x100);
    memcpy(&JoinedArray[0x100], &ReversedTesterSeed, 0x100);
    memcpy(&JoinedArray[0x200], ResultBuff, 2);

    memcpy(&CalculatedBytes, WordArr1, 0x100);

    sub_19A6C330(CalculatedBytes, JoinedArray, ReversedTesterSeed, WordArr1, WordArr2);
  }

  memcpy(&JoinedArray[0x000], WordArr1, 0x100);
  memcpy(&JoinedArray[0x100], &ReversedTesterSeed, 0x100);
  memcpy(&JoinedArray[0x200], ResultBuff, 2);

  ebx++;
  if (ebx < 0x800)
    goto loc_19A6BE74;


  // Last call
  uint8_t LastArray[0x100];
  memset(LastArray, 0x00, 0x100);
  LastArray[0] = 0x01;
  memcpy(&JoinedArray[0x000], LastArray, 0x100);
  memcpy(&JoinedArray[0x100], &ReversedTesterSeed, 0x100);
  memcpy(&JoinedArray[0x200], ResultBuff, 2);

  memcpy(&CalculatedBytes, WordArr1, 0x100);

  sub_19A6C330(CalculatedBytes, JoinedArray, ReversedTesterSeed, WordArr1, WordArr2);

  int Index = 0;
  for (f = 0x7F; f >= 0; f--)
  {
    pResult[Index++] = WordArr1[f] >> 8;
    pResult[Index++] = WordArr1[f] >> 0;
  }
}


void GatewaySeedKeyTest(uint8_t *pSeed8Bytes, uint8_t *pKEY)
{
  // Seed from 27 41 request, taked from arr[87] to arr[599]

  uint8_t TesterSeed1[512] =
  {
    0x9F, 0x47, 0xF8, 0x2E, 0xF4, 0x8A, 0xDC, 0xD6, 0xFE, 0x43, 0x30, 0x89,
    0x90, 0x3D, 0xD9, 0x8B, 0xCF, 0xE3, 0xE8, 0xCB, 0x20, 0x96, 0x06, 0xBD,
    0xE6, 0xCE, 0xFE, 0xA8, 0x90, 0xCC, 0x24, 0xD9, 0x7C, 0xE2, 0x86, 0x9B,
    0x79, 0xDF, 0x3D, 0x11, 0xA0, 0x27, 0xBA, 0x0C, 0x46, 0x02, 0x88, 0xE5,
    0xC2, 0x1E, 0xC9, 0x61, 0x23, 0x72, 0x02, 0x82, 0x0E, 0xC9, 0x4C, 0x16,
    0xE1, 0xE0, 0x49, 0x71, 0xD8, 0x69, 0x47, 0xB4, 0x91, 0xAB, 0x34, 0xF1,
    0xE0, 0xFB, 0x63, 0x0B, 0xF9, 0x16, 0x3E, 0x1E, 0x59, 0x45, 0xB9, 0x6D,
    0xE9, 0xD2, 0xBF, 0xBF, 0x93, 0xEF, 0x65, 0xA6, 0xAA, 0xDD, 0xD2, 0xB6,
    0xEB, 0x94, 0x15, 0xB0, 0x5E, 0xD5, 0x78, 0x0A, 0xDB, 0x87, 0x7A, 0x4A,
    0x00, 0x65, 0x69, 0x40, 0xA9, 0x29, 0xEB, 0x76, 0xC2, 0x2A, 0x83, 0x10,
    0x91, 0xF1, 0x6E, 0xD0, 0xA0, 0xD2, 0x95, 0xFE, 0xB3, 0x06, 0xBA, 0xC6,
    0x3E, 0x1C, 0x91, 0xCF, 0xA9, 0x20, 0x27, 0x45, 0x8D, 0x62, 0xA7, 0xA7,
    0x95, 0x0A, 0xCB, 0x68, 0x98, 0xF6, 0x6E, 0x3E, 0xD8, 0x92, 0xB4, 0xD7,
    0xEE, 0xAD, 0x4F, 0x63, 0x12, 0xC5, 0x21, 0xE9, 0x64, 0x8D, 0x27, 0x85,
    0x58, 0x70, 0x37, 0x32, 0xA4, 0xFE, 0xA5, 0xC3, 0x03, 0xDB, 0x6D, 0xFB,
    0x48, 0xD9, 0x10, 0xA6, 0x88, 0xFE, 0xBE, 0xA5, 0x8C, 0x25, 0xD3, 0x69,
    0xC6, 0xF8, 0x62, 0x0A, 0x66, 0x2B, 0xFB, 0xA4, 0x21, 0xF7, 0x0D, 0x85,
    0x5A, 0xF6, 0x43, 0x0C, 0xAF, 0x51, 0xA4, 0xFB, 0xC4, 0xEE, 0xE7, 0xE3,
    0xF4, 0x04, 0xC2, 0x0F, 0xDF, 0x81, 0x6A, 0xAA, 0x45, 0x7E, 0xB2, 0x43,
    0x5B, 0x34, 0x31, 0xFD, 0x7D, 0x00, 0x67, 0x38, 0xD7, 0xF0, 0x85, 0xFB,
    0xA2, 0x17, 0x07, 0x42, 0x3B, 0x4A, 0x44, 0x59, 0x46, 0x0C, 0xC1, 0xA9,
    0x2C, 0xC8, 0xDF, 0xE9, 0x70, 0x53, 0x4E, 0x13, 0x5D, 0xA6, 0xFC, 0xB3,
    0x3C, 0x24, 0xDD, 0xA4, 0xB4, 0x04, 0xC1, 0xAD, 0xA9, 0xE5, 0xEE, 0x03,
    0xE9, 0xC1, 0x88, 0xE5, 0x1D, 0xBC, 0x75, 0xA8, 0x9D, 0x0D, 0x48, 0x56,
    0x34, 0x7E, 0x28, 0x85, 0x0D, 0x5A, 0x26, 0x5F, 0xAA, 0x84, 0x0B, 0xD9,
    0x0D, 0x54, 0x22, 0xA7, 0x39, 0xE0, 0xD2, 0x66, 0xA2, 0x6E, 0x8E, 0x7A,
    0xB2, 0x76, 0xD6, 0xD9, 0x65, 0x43, 0xE9, 0x36, 0x79, 0xBC, 0xC1, 0x16,
    0x96, 0x44, 0xE8, 0x41, 0xF1, 0xF8, 0x22, 0xFD, 0x48, 0x8B, 0x5C, 0x2E,
    0xF0, 0xBC, 0x5D, 0x2C, 0xDA, 0xFD, 0xAE, 0xCE, 0x5A, 0x43, 0x05, 0x3F,
    0x81, 0x03, 0xE3, 0x4E, 0x28, 0xA1, 0xDD, 0x97, 0xE9, 0x8F, 0x1D, 0x27,
    0x91, 0x2B, 0x4B, 0x4E, 0x97, 0x8D, 0x0F, 0x45, 0x46, 0x75, 0xEE, 0x54,
    0xA8, 0xB7, 0x51, 0x24, 0x58, 0x56, 0xD2, 0x56, 0x64, 0xE7, 0x9B, 0x8D,
    0x0B, 0x4E, 0x78, 0xF3, 0x4E, 0xF4, 0x3D, 0xEA, 0x72, 0x28, 0x78, 0x73,
    0xF2, 0xAB, 0xE0, 0x5A, 0x1C, 0x9D, 0x61, 0x88, 0x53, 0x9D, 0xA1, 0x1D,
    0x95, 0x0B, 0xBF, 0x2C, 0x73, 0x27, 0x29, 0xEA, 0xAA, 0x04, 0x04, 0x0D,
    0xB1, 0x1B, 0x57, 0x4F, 0x87, 0x17, 0x6B, 0x72, 0x3A, 0x86, 0x3C, 0xF4,
    0x88, 0xB1, 0xFE, 0x95, 0xBA, 0x58, 0xBE, 0x9E, 0x7F, 0xA6, 0x82, 0x51,
    0x67, 0xAF, 0xD2, 0xCC, 0xDA, 0xB8, 0x0A, 0xE7, 0x43, 0x68, 0xAE, 0x34,
    0x44, 0xC4, 0xF9, 0x13, 0x21, 0x7A, 0xD0, 0x4A, 0x9B, 0x90, 0x36, 0x69,
    0x49, 0xF2, 0xAC, 0xF3, 0xAA, 0x36, 0x2D, 0x41, 0xA2, 0x67, 0x49, 0xF9,
    0x32, 0x39, 0x0B, 0xC8, 0x3F, 0xFA, 0x0F, 0x97, 0x8F, 0x91, 0xB0, 0x11,
    0xE7, 0x11, 0xAE, 0xCB, 0x58, 0x9B, 0x83, 0x1C, 0xC2, 0x84, 0xBA, 0xFD,
    0x37, 0xA1, 0x25, 0x78, 0xCC, 0xE8, 0x6C, 0x3F
  };


  uint8_t SomeData2[256] =
  {
    0x93, 0xCA, 0x4A, 0x7C, 0xFF, 0x08, 0x6D, 0xBA, 0xCA, 0xB7, 0x7B, 0x2C,
    0xD8, 0xFA, 0x9A, 0x85, 0x40, 0xC2, 0xFE, 0xB8, 0xA3, 0x26, 0xB1, 0x60,
    0xB8, 0xED, 0x6D, 0x9A, 0xE8, 0xA7, 0x92, 0xB5, 0x7E, 0x4C, 0x0D, 0x8B,
    0xEB, 0x7B, 0xF8, 0x85, 0x07, 0x2E, 0x75, 0x51, 0x78, 0x10, 0x58, 0x07,
    0x9F, 0xA3, 0xC3, 0x44, 0xEF, 0x87, 0x94, 0xCE, 0x2A, 0x7C, 0x1A, 0xAE,
    0xCC, 0xAC, 0xB8, 0x58, 0xFA, 0xED, 0x4C, 0xCC, 0x3D, 0xB1, 0x36, 0xF2,
    0x0B, 0xC8, 0x15, 0x72, 0x01, 0x8F, 0xE2, 0xD9, 0x74, 0x09, 0xDE, 0xF1,
    0x1E, 0x59, 0x1E, 0xF3, 0xDA, 0x86, 0xF1, 0xB1, 0xC0, 0xAF, 0x0C, 0x1A,
    0x0F, 0xE2, 0x1A, 0x71, 0xC8, 0xBC, 0x97, 0xA2, 0xB3, 0x69, 0x34, 0x4D,
    0xBF, 0xAA, 0x59, 0x0B, 0xD7, 0x2A, 0x7F, 0x41, 0x75, 0x0D, 0xCF, 0x08,
    0xAB, 0xF1, 0xF1, 0xD9, 0x80, 0xAF, 0x84, 0xDE, 0x15, 0x6C, 0x3D, 0xFA,
    0x7B, 0xE6, 0x79, 0x36, 0xCC, 0x71, 0x6A, 0x47, 0xD6, 0x4A, 0x30, 0xF8,
    0xAF, 0x1A, 0x77, 0x6A, 0xB0, 0x94, 0x98, 0xAC, 0x96, 0x98, 0xA2, 0xA9,
    0x87, 0xDF, 0x4D, 0xC3, 0x8A, 0xF8, 0x80, 0x69, 0x87, 0xB5, 0x7B, 0x74,
    0x28, 0x39, 0xEC, 0x40, 0x96, 0xF1, 0x74, 0xAE, 0x16, 0xE7, 0xA3, 0x14,
    0x06, 0x4E, 0x14, 0xBA, 0x35, 0x4D, 0xB3, 0x2E, 0x12, 0x7B, 0x54, 0x31,
    0x11, 0x20, 0x2D, 0xF4, 0x13, 0x9C, 0x26, 0x51, 0xCC, 0xEE, 0x63, 0xA1,
    0xC6, 0x6D, 0x17, 0xE2, 0x55, 0x17, 0x39, 0xD8, 0x91, 0xE8, 0x57, 0x4E,
    0x93, 0x87, 0x1E, 0xA0, 0xF2, 0x54, 0xDA, 0xCE, 0xF3, 0xE1, 0xFD, 0xBB,
    0x55, 0x23, 0x24, 0x49, 0x67, 0x24, 0x6E, 0xBA, 0x4E, 0xD9, 0x51, 0x7A,
    0xF3, 0x7A, 0x02, 0x43, 0x3B, 0xC6, 0x25, 0xD2, 0x80, 0x7A, 0x07, 0x97,
    0x98, 0x92, 0x55, 0x65
  };

  uint8_t Seed8Bytes1[8];
  memcpy(Seed8Bytes1, pSeed8Bytes, 8);

  uint8_t Result[0x100];
  sub_19A6BA00(TesterSeed1, Seed8Bytes1, SomeData2, Result);
  memcpy(pKEY, Result, 0x100);
}