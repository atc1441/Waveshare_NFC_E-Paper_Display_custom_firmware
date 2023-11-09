#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void __noreturn pre_init_main_0();
int sub_D4();
unsigned int disable_IRQ_0();
int __fastcall enable_IRQ_0(int result);
int __fastcall sub_168(unsigned int, unsigned int);
unsigned int __fastcall memcpy(unsigned int result, unsigned int, unsigned int);
void nullsub_4();
void Some_GPIOs_low();
void Set_GPIO_modes();
void EPD_sends();
void EPD_sends_0();
void EPD_sends_1();
void EPD_sends_2();
void EPD_sends_3();
void EPD_sends_4();
void EPD_sends_5();
void EPD_sends_6();
void EPD_send_configs();
void EPD_sends_7();
void EPD_sends_8();
void __fastcall EPD_set_window_start(int, __int16);
void EPD_sends_9();
void EPD_sends_10();
void EPD_sends_11();
void EPD_sends_12();
void EPD_sends_13();
void EPD_sends_14();
void EPD_sends_15();
void __fastcall SPI_send_CMD_byte(unsigned __int8 a1);
void __fastcall SPI_send_data_byte(unsigned __int8 a1);
void __fastcall memory_write_en_disable(int result);
void __fastcall GPIO_low(__int16 result);
BOOL __fastcall GPIO_read_bit(__int16);
void __fastcall GPIO_mode_input(__int16 result);
void __fastcall GPIO_mode_output(__int16 result);
void __fastcall GPIO_high(__int16 result);
void __cdecl sub_13F0();
void __cdecl sub_1404();
void sub_1418();
void nullsub_5();
int nullsub_6(void); // weak
void __fastcall sub_1444(int result, int a2);
int __fastcall copy_cmd_into_buffer(unsigned int);
int __fastcall NFC_send_answer(int *a1, char);
int Send_specific_EPD_data_other();
void __fastcall Send_specific_EPD_data();
void __fastcall sub_1D60(char result);
void __fastcall sub_1D74(char result);
int __fastcall sub_1D88(int result, char);
int __fastcall sub_1E00(int result, char);
void __fastcall sub_1EE8();
void __cdecl sub_1F38();
int sub_1F64();
void __noreturn Main_loop(); // weak
void __cdecl sub_1FF0();
int low_level_NFC_handling();
void __fastcall IRQ_2();
void __noreturn NFC_Rx_Loop(); // weak
void __noreturn Sleep_loop(); // weak
int __fastcall sub_2908(int);
int __fastcall check_password(unsigned __int8 *);
void __fastcall write_password(unsigned __int8 *result);
void __fastcall sub_2C04(int a1, int a2);
void __cdecl sub_2D1C();
void __fastcall sub_2DEC(int a1);
int __fastcall sub_2E14(BOOL *);
void __fastcall sub_2E9C(int, int, int, int, _DWORD *);
BOOL __fastcall sub_3028(int);
void __cdecl sub_31C0();
unsigned int __fastcall sub_31E4(_DWORD *);
void __fastcall SPI_send_DC_byte(int, char);
void __fastcall SPI_send_100_DC_byte(__int16);
void __fastcall sub_34A8(int a1, int a2);
void __fastcall sub_3508(_DWORD *a1);
void __fastcall get_Tmr_Idle_values(_DWORD *a1, _DWORD *a2, _DWORD *a3);
int __fastcall get_TmrSvc_values(_DWORD *, _DWORD *, _DWORD *);
void __fastcall sub_355A(_DWORD *result);
void __fastcall sub_3576(_DWORD *result, _DWORD *a2);
void __fastcall sub_35A6(_DWORD *result, _DWORD *a2);
void __cdecl disable_IRQ();
void __cdecl enable_IRQ();
void __fastcall sub_35EC(int result);
void __cdecl sub_3628();
void __fastcall sub_3686(int a1);
void __fastcall sub_36C8(_DWORD *a1, _DWORD *a2);
void __cdecl sub_3794();
void __cdecl sub_3800();
void __cdecl sub_3810();
void __cdecl sub_3860();
void __cdecl sub_3890();
int __fastcall sub_38B4(int, int, int, int, int);
int __fastcall sub_3A18(int, unsigned int, _DWORD *, int);
int __fastcall sub_3B5C(_DWORD *, unsigned int *);
int __fastcall create_task(int, int, int, int, int, int);
int __fastcall create_timer(int, int, int, int, int, int, int);
int sub_3C48();
int sub_3C74();
int __fastcall sub_3D38(_DWORD *a1);
int __fastcall sub_3D8C(int a1);
int sub_3DF0();
int sub_3E94();

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN unk_3F48; // weak
int (*off_3FB0)[25] = &dword_6000; // weak
int dword_3FD0[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // weak
int dword_42C0[11] = { 390070272, 33554432, 1513360, 171966976, 16777217, 921248, 512, 0, 0, 0, 0 }; // weak
_UNKNOWN unk_42EC; // weak
int dword_4314[11] = { 394264576, 33554432, 1513360, 176161280, 16777217, 921168, 512, 0, 0, 0, 0 }; // weak
unsigned __int8 byte_20000000[128]; // weak
int a1[32]; // weak
_DWORD dword_20000900[290]; // weak
_DWORD dword_20000D88[3]; // weak
_UNKNOWN unk_20000D94; // weak
_UNKNOWN unk_20001200; // weak
_UNKNOWN EPD_Config_sending_type; // weak
_UNKNOWN unk_20001202; // weak
unsigned __int8 byte_20001203[9]; // weak
_UNKNOWN unk_2000120C; // weak
_DWORD *dword_20001214; // weak
_UNKNOWN unk_20001218; // weak
_UNKNOWN unk_2000121C; // weak
_UNKNOWN unk_20001220; // weak
_UNKNOWN unk_20001224; // weak
_UNKNOWN unk_20001228; // weak
_UNKNOWN unk_2000122C; // weak
_UNKNOWN unk_20001230; // weak
_UNKNOWN unk_2000123C; // weak
_UNKNOWN unk_20001240; // weak
_UNKNOWN unk_20001244; // weak
_DWORD *dword_20001248; // weak
_UNKNOWN unk_2000124C; // weak
int dword_20001250; // weak
_UNKNOWN unk_20001260; // weak
_UNKNOWN unk_20001264; // weak
_UNKNOWN unk_20001268; // weak
_UNKNOWN unk_2000126C; // weak
_UNKNOWN unk_20001280; // weak
unsigned __int8 byte_20001284[4]; // weak
_BYTE *dword_20001288; // weak
_BYTE *dword_2000128C; // weak
_UNKNOWN unk_20001290; // weak
_UNKNOWN unk_20001294; // weak
_UNKNOWN unk_20001298; // weak
_UNKNOWN unk_200012A0; // weak
_DWORD dword_40000300[1]; // weak
int dword_40000304; // weak
int dword_40000308; // weak
int dword_40000314; // weak
int dword_4000031C; // weak
char byte_40000324; // weak
char byte_40000328; // weak
int dword_40000330; // weak
int dword_40000334; // weak
_UNKNOWN unk_40000404; // weak
_UNKNOWN unk_40000408; // weak
_UNKNOWN unk_4000040C; // weak
__int16 word_40000500; // weak
__int16 word_40000504; // weak
__int16 word_40000508; // weak
int dword_40000600; // weak
unsigned __int8 dword_600006EC[275]; // weak
_UNKNOWN unk_600006F0; // weak


//----- (000000C0) --------------------------------------------------------
void __noreturn pre_init_main_0()
{
  pre_init_main();
}

//----- (000000C8) --------------------------------------------------------
// attributes: thunk
void __noreturn j_Main(void)
{
  Main();
}
// C8: using guessed type void __noreturn j_Main(void);

//----- (000000D4) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int sub_D4()
{
  int v6; // r0
  int v7; // r1
  int (__fastcall *v8)(int, int, int); // r3
  int v9; // r2
  int v11; // [sp-20h] [bp-20h]
  int v12; // [sp-1Ch] [bp-1Ch]
  int (__fastcall *v13)(int, int, int); // [sp-8h] [bp-8h]
  int v14; // [sp-4h] [bp-4h]

  _R0 = *dword_20001214 + 32;
  __asm { MSR.W           PSP, R0 }
  _R0 = 2;
  __asm { MSR.W           CONTROL, R0 }
  __isb(0xFu);
  v6 = v11;
  v7 = v12;
  v8 = v13;
  v9 = v14;
  __enable_irq();
  return v8(v6, v7, v9);
}
// F2: positive sp value 20 has been found
// EA: variable 'v11' is possibly undefined
// EA: variable 'v12' is possibly undefined
// EE: variable 'v13' is possibly undefined
// F0: variable 'v14' is possibly undefined

//----- (000000FC) --------------------------------------------------------
unsigned int disable_IRQ_0()
{
  unsigned int result; // r0

  result = __get_CPSR();
  __disable_irq();
  return result;
}

//----- (00000104) --------------------------------------------------------
int __fastcall enable_IRQ_0(int result)
{
  __asm { MSR.W           PRIMASK, R0 }
  return result;
}

//----- (0000010A) --------------------------------------------------------
void __cdecl IRQ()
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  int v3; // r7
  int v4; // r8
  int v5; // r9
  int v6; // r10
  int v7; // r11
  _DWORD *v8; // r0
  _DWORD **v14; // [sp+0h] [bp-8h]

  v8 = (_DWORD *)(__get_CPSR() - 32);
  *dword_20001214 = v8;
  *v8 = v0;
  v8[1] = v1;
  v8[2] = v2;
  v8[3] = v3;
  v8 += 4;
  *v8 = v4;
  v8[1] = v5;
  v8[2] = v6;
  v8[3] = v7;
  v14 = &dword_20001214;
  __disable_irq();
  sub_3810();
  __enable_irq();
  _R0 = **v14 + 32;
  __asm { MSR.W           PSP, R0 }
}
// 116: variable 'v0' is possibly undefined
// 116: variable 'v1' is possibly undefined
// 116: variable 'v2' is possibly undefined
// 116: variable 'v3' is possibly undefined
// 120: variable 'v4' is possibly undefined
// 120: variable 'v5' is possibly undefined
// 120: variable 'v6' is possibly undefined
// 120: variable 'v7' is possibly undefined
// 20001214: using guessed type _DWORD *dword_20001214;

//----- (0000014C) --------------------------------------------------------
void __noreturn ENTRY()
{
  sub_1EA0();
  pre_init_main_0();
}

//----- (00000168) --------------------------------------------------------
int __fastcall sub_168(unsigned int a1, unsigned int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r5

  result = 0;
  v5 = 32;
  while ( 1 )
  {
    v6 = v5--;
    if ( v6 <= 0 )
      break;
    if ( a1 >> v5 >= a2 )
    {
      a1 -= a2 << v5;
      result += 1 << v5;
    }
  }
  return result;
}

//----- (00000194) --------------------------------------------------------
unsigned int __fastcall memcpy(unsigned int result, unsigned int a2, unsigned int a3)
{
  int v3; // r3

  if ( !((result | a2) << 30) )
  {
    while ( a3 >= 4 )
    {
      v3 = *(_DWORD *)a2;
      a2 += 4;
      a3 -= 4;
      *(_DWORD *)result = v3;
      result += 4;
    }
  }
  while ( a3-- != 0 )
    *(_BYTE *)result++ = *(_BYTE *)a2++;
  return result;
}

//----- (000001B8) --------------------------------------------------------
void __fastcall memset(_BYTE *result, int a2, char a3)
{
  while ( a2-- != 0 )
    *result++ = a3;
}

//----- (000001C6) --------------------------------------------------------
void __cdecl memclr(char *a1, int a2)
{
  ;
}

//----- (000001CA) --------------------------------------------------------
void __fastcall memset_0(_BYTE *a1, char a2, int a3)
{
  memset(a1, a3, a2);
}

//----- (000001DC) --------------------------------------------------------
void __noreturn pre_init_main()
{
  int (**i)[25]; // r4

  for ( i = &off_3FB0; i < (int (**)[25])dword_3FD0; i += 4 )
    ((void (__fastcall *)(int (*)[25], int (*)[25], int (*)[25]))((unsigned int)i[3] | 1))(*i, i[1], i[2]);
  j_Main();
}
// C8: using guessed type void __noreturn j_Main(void);
// 3FB0: using guessed type int (*off_3FB0)[25];
// 3FD0: using guessed type int dword_3FD0[12];

//----- (00000202) --------------------------------------------------------
void Some_GPIOs_low()
{
  GPIO_low(0x80);
  GPIO_low(0x200);
  GPIO_low(0x400);
  GPIO_low(0x100);
  GPIO_low(0x40);
}

//----- (0000022A) --------------------------------------------------------
void Set_GPIO_modes()
{
  GPIO_low(0x80);
  GPIO_mode_output(0x40);
  GPIO_mode_output(0x100);
  GPIO_mode_output(0x200);
  GPIO_mode_output(0x400);
  GPIO_mode_output(0x80);
  GPIO_mode_input(2);
  GPIO_mode_input(0x20);
}

//----- (00000264) --------------------------------------------------------
void EPD_sends()
{
  switch ( EPD_Config_sending_type[0] )
  {
    case 1u:
      SPI_send_CMD_byte(1u);
      SPI_send_data_byte(7u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(8u);
      SPI_send_data_byte(0);
      SPI_send_CMD_byte(6u);
      SPI_send_data_byte(7u);
      SPI_send_data_byte(7u);
      SPI_send_data_byte(7u);
      break;
    case 2u:
      SPI_send_CMD_byte(0);
      SPI_send_data_byte(0xCFu);
      SPI_send_CMD_byte(0x50u);
      SPI_send_data_byte(0x37u);
      SPI_send_CMD_byte(0x30u);
      SPI_send_data_byte(0x39u);
      SPI_send_CMD_byte(0x61u);
      SPI_send_data_byte(0xC8u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0xC8u);
      SPI_send_CMD_byte(0x82u);
      SPI_send_data_byte(0xEu);
      break;
    case 3u:
      EPD_sends_LUTs_4000();
      break;
  }
}
// 304: using guessed type int sub_304(void);
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000304) --------------------------------------------------------
void EPD_sends_LUTs_4000()
{
  unsigned int i; // r4
  unsigned int j; // r4
  unsigned int k; // r4
  unsigned int m; // r4
  unsigned int n; // r4
  unsigned int ii; // r4
  unsigned int jj; // r4
  unsigned int kk; // r4

  SPI_send_CMD_byte(0x20u);
  for ( i = 0; i < 0xF; ++i )
    SPI_send_data_byte(*((_BYTE *)&unk_4000 + i));
  SPI_send_CMD_byte(0x21u);
  for ( j = 0; j < 0xF; ++j )
    SPI_send_data_byte(*((_BYTE *)&dword_4004[2] + j + 3));
  SPI_send_CMD_byte(0x22u);
  for ( k = 0; k < 0xF; ++k )
    SPI_send_data_byte(*((_BYTE *)&dword_4004[6] + k + 2));
  SPI_send_CMD_byte(0x23u);
  for ( m = 0; m < 0xF; ++m )
    SPI_send_data_byte(*((_BYTE *)&dword_4004[10] + m + 1));
  SPI_send_CMD_byte(0x24u);
  for ( n = 0; n < 0xF; ++n )
    SPI_send_data_byte(*((_BYTE *)&dword_4004[14] + n));
  SPI_send_CMD_byte(0x25u);
  for ( ii = 0; ii < 0xF; ++ii )
    SPI_send_data_byte(byte_4049[ii + 2]);
  SPI_send_CMD_byte(0x26u);
  for ( jj = 0; jj < 0xF; ++jj )
    SPI_send_data_byte(*((_BYTE *)dword_4058 + jj + 2));
  SPI_send_CMD_byte(0x27u);
  for ( kk = 0; kk < 0xF; ++kk )
    SPI_send_data_byte(byte_4069[kk]);
}
// 4004: using guessed type int[16];
// 4058: using guessed type int[4];

//----- (000003CC) --------------------------------------------------------
void EPD_sends_0()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(6u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_CMD_byte(4u);
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    SPI_send_CMD_byte(0);
    SPI_send_data_byte(0xFu);
    SPI_send_data_byte(0xDu);
    SPI_send_CMD_byte(0x61u);
    SPI_send_data_byte(0x98u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0x98u);
    SPI_send_CMD_byte(0x50u);
    SPI_send_data_byte(0x77u);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000438) --------------------------------------------------------
void EPD_sends_1()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(1);
    SPI_send_data_byte(0xC7);
    SPI_send_data_byte(0);
    SPI_send_data_byte(1);
    SPI_send_CMD_byte(0x11);
    SPI_send_data_byte(1);
    SPI_send_CMD_byte(0x44);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0x18);
    SPI_send_CMD_byte(0x45);
    SPI_send_data_byte(0xC7);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x3C);
    SPI_send_data_byte(1);
    SPI_send_CMD_byte(0x18);
    SPI_send_data_byte(0x80);
    SPI_send_CMD_byte(0x22);
    SPI_send_data_byte(0xB1);
    SPI_send_CMD_byte(0x20);
    SPI_send_CMD_byte(0x4E);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x4F);
    SPI_send_data_byte(0xC7);
    SPI_send_data_byte(0);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (000004E4) --------------------------------------------------------
void EPD_sends_2()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(6u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_CMD_byte(4u);
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    SPI_send_CMD_byte(0);
    SPI_send_data_byte(0x8Fu);
    SPI_send_CMD_byte(0x50u);
    SPI_send_data_byte(0xF0u);
    SPI_send_CMD_byte(0x61u);
    SPI_send_data_byte(0x68u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0xD4u);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000548) --------------------------------------------------------
void EPD_sends_3()
{
  switch ( EPD_Config_sending_type[0] )
  {
    case 1u:
      SPI_send_CMD_byte(1u);
      SPI_send_data_byte(3u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0x2Bu);
      SPI_send_data_byte(0x2Bu);
      SPI_send_data_byte(3u);
      SPI_send_CMD_byte(6u);
      SPI_send_data_byte(0x17u);
      SPI_send_data_byte(0x17u);
      SPI_send_data_byte(0x17u);
      SPI_send_CMD_byte(4u);
      break;
    case 2u:
      SPI_send_CMD_byte(0);
      SPI_send_data_byte(0xBFu);
      SPI_send_data_byte(0xEu);
      SPI_send_CMD_byte(0x30u);
      SPI_send_data_byte(0x3Au);
      SPI_send_CMD_byte(0x61u);
      SPI_send_data_byte(0x68u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0xD4u);
      SPI_send_CMD_byte(0x82u);
      SPI_send_data_byte(0x28u);
      break;
    case 3u:
      EPD_sends_LUTs_40C4();
      break;
  }
}
// 5EC: using guessed type int sub_5EC(void);
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (000005EC) --------------------------------------------------------
void EPD_sends_LUTs_40C4()
{
  unsigned int i; // r4
  unsigned int j; // r4
  unsigned int k; // r4
  unsigned int m; // r4
  unsigned int n; // r4

  SPI_send_CMD_byte(0x50u);
  SPI_send_data_byte(0xB7u);
  SPI_send_CMD_byte(0x20u);
  for ( i = 0; i < 0x2C; ++i )
    SPI_send_data_byte(*((_BYTE *)&unk_40C4 + i));
  SPI_send_CMD_byte(0x21u);
  for ( j = 0; j < 0x2A; ++j )
    SPI_send_data_byte(*((_BYTE *)&unk_40F0 + j));
  SPI_send_CMD_byte(0x22u);
  for ( k = 0; k < 0x2A; ++k )
    SPI_send_data_byte(*((_BYTE *)dword_4118 + k + 2));
  SPI_send_CMD_byte(0x23u);
  for ( m = 0; m < 0x2A; ++m )
    SPI_send_data_byte(*((_BYTE *)&unk_4144 + m));
  SPI_send_CMD_byte(0x24u);
  for ( n = 0; n < 0x2A; ++n )
    SPI_send_data_byte(*((_BYTE *)dword_416C + n + 2));
}
// 4118: using guessed type int[11];
// 416C: using guessed type int[11];

//----- (00000678) --------------------------------------------------------
void EPD_sends_4()
{
  unsigned int v0; // r4

  v0 = 0;
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(1u);
    SPI_send_data_byte(0xF9u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x11u);
    SPI_send_data_byte(3u);
    SPI_send_CMD_byte(0x44u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0xFu);
    SPI_send_CMD_byte(0x45u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0xF9u);
    SPI_send_CMD_byte(0x4Eu);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x4Fu);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x3Cu);
    SPI_send_data_byte(5u);
    SPI_send_CMD_byte(0x21u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0x80u);
    SPI_send_CMD_byte(0x18u);
    SPI_send_data_byte(0x80u);
    SPI_send_CMD_byte(0x32u);
    do
    {
      SPI_send_data_byte(*(_BYTE *)(v0 + 17458));
      v0 = (unsigned __int8)(v0 + 1);
    }
    while ( v0 < 0x99 );
    SPI_send_CMD_byte(0x3Fu);
    SPI_send_data_byte(0x22u);
    SPI_send_CMD_byte(3u);
    SPI_send_data_byte(0x17u);
    SPI_send_CMD_byte(4u);
    SPI_send_data_byte(0x41u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0x32u);
    SPI_send_CMD_byte(0x2Cu);
    SPI_send_data_byte(0x36u);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (0000077C) --------------------------------------------------------
void EPD_sends_5()
{
  switch ( EPD_Config_sending_type[0] )
  {
    case 1u:
      SPI_send_CMD_byte(1u);
      SPI_send_data_byte(3u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0x2Bu);
      SPI_send_data_byte(0x2Bu);
      SPI_send_data_byte(9u);
      SPI_send_CMD_byte(6u);
      SPI_send_data_byte(7u);
      SPI_send_data_byte(7u);
      SPI_send_data_byte(0x17u);
      SPI_send_CMD_byte(0xF8u);
      SPI_send_data_byte(0x60u);
      SPI_send_data_byte(0xA5u);
      SPI_send_CMD_byte(0xF8u);
      SPI_send_data_byte(0x89u);
      SPI_send_data_byte(0xA5u);
      SPI_send_CMD_byte(0xF8u);
      SPI_send_data_byte(0x90u);
      SPI_send_data_byte(0);
      SPI_send_CMD_byte(0xF8u);
      SPI_send_data_byte(0x93u);
      SPI_send_data_byte(0x2Au);
      SPI_send_CMD_byte(0xF8u);
      SPI_send_data_byte(0xA0u);
      SPI_send_data_byte(0xA5u);
      SPI_send_CMD_byte(0xF8u);
      SPI_send_data_byte(0xA1u);
      SPI_send_data_byte(0);
      SPI_send_CMD_byte(0xF8u);
      SPI_send_data_byte(0x73u);
      SPI_send_data_byte(0x41u);
      SPI_send_CMD_byte(0x16u);
      SPI_send_data_byte(0);
      SPI_send_CMD_byte(4u);
      break;
    case 2u:
      SPI_send_CMD_byte(0);
      SPI_send_data_byte(0xAFu);
      SPI_send_CMD_byte(0x30u);
      SPI_send_data_byte(0x3Au);
      SPI_send_CMD_byte(0x82u);
      SPI_send_data_byte(0x12u);
      break;
    case 3u:
      EPD_sends_LUTs_435E();
      break;
  }
}
// C20: using guessed type int sub_C20(void);
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (0000088C) --------------------------------------------------------
void EPD_sends_6()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(6u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_CMD_byte(4u);
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    SPI_send_CMD_byte(0);
    SPI_send_data_byte(0x8Fu);
    SPI_send_CMD_byte(0x50u);
    SPI_send_data_byte(0x77u);
    SPI_send_CMD_byte(0x61u);
    SPI_send_data_byte(0x80u);
    SPI_send_data_byte(1u);
    SPI_send_data_byte(0x28u);
    SPI_send_CMD_byte(0x82u);
    SPI_send_data_byte(0xAu);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (000008FC) --------------------------------------------------------
void EPD_send_configs()
{
  switch ( EPD_Config_sending_type )
  {
    case 1u:
      SPI_send_CMD_byte(1);
      SPI_send_data_byte(3);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0x2B);
      SPI_send_data_byte(0x2B);
      SPI_send_data_byte(3);
      SPI_send_CMD_byte(6);
      SPI_send_data_byte(0x17);
      SPI_send_data_byte(0x17);
      SPI_send_data_byte(0x17);
      SPI_send_CMD_byte(4);
      break;
    case 2u:
      SPI_send_CMD_byte(0);
      SPI_send_data_byte(0xBF);
      SPI_send_data_byte(0xE);
      SPI_send_CMD_byte(0x30);
      SPI_send_data_byte(0x3A);
      SPI_send_CMD_byte(0x61);
      SPI_send_data_byte(0x80);
      SPI_send_data_byte(1);
      SPI_send_data_byte(0x28);
      SPI_send_CMD_byte(0x82);
      SPI_send_data_byte(0x28);
      break;
    case 3u:
      EPD_Send_Luts();
      break;
  }
}

//----- (000009A0) --------------------------------------------------------
void EPD_sends_7()
{
  switch ( EPD_Config_sending_type[0] )
  {
    case 1u:
      SPI_send_CMD_byte(0x12u);
      break;
    case 2u:
      SPI_send_CMD_byte(1u);
      SPI_send_data_byte(0x27u);
      SPI_send_data_byte(1u);
      SPI_send_data_byte(0);
      SPI_send_CMD_byte(0x11u);
      SPI_send_data_byte(3u);
      SPI_send_CMD_byte(0x44u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0xFu);
      SPI_send_CMD_byte(0x45u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0x27u);
      SPI_send_data_byte(1u);
      SPI_send_CMD_byte(0x3Cu);
      SPI_send_data_byte(5u);
      break;
    case 3u:
      SPI_send_CMD_byte(0x21u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0x80u);
      SPI_send_CMD_byte(0x18u);
      SPI_send_data_byte(0x80u);
      SPI_send_CMD_byte(0x4Eu);
      SPI_send_data_byte(0);
      SPI_send_CMD_byte(0x4Fu);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0);
      break;
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000A60) --------------------------------------------------------
void EPD_sends_8()
{
  unsigned int i; // r4

  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(6u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_CMD_byte(4u);
    SPI_send_CMD_byte(1u);
    SPI_send_data_byte(0x27u);
    SPI_send_data_byte(1u);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0xCu);
    SPI_send_data_byte(0xD7u);
    SPI_send_data_byte(0xD6u);
    SPI_send_data_byte(0x9Du);
    SPI_send_CMD_byte(0x2Cu);
    SPI_send_data_byte(0xA8u);
    SPI_send_CMD_byte(0x3Au);
    SPI_send_data_byte(0x1Au);
    SPI_send_CMD_byte(0x3Bu);
    SPI_send_data_byte(8u);
    SPI_send_CMD_byte(0x3Cu);
    SPI_send_data_byte(3u);
    SPI_send_CMD_byte(0x11u);
    SPI_send_data_byte(3u);
    SPI_send_CMD_byte(0x32u);
    for ( i = 0; i < 0x1E; i = (unsigned __int8)(i + 1) )
      SPI_send_data_byte(*((_BYTE *)&unk_4340 + i));
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    EPD_set_window(0, 0, 128, 296);
  }
}
// BE0: using guessed type int __fastcall sub_BE0(_DWORD, _DWORD, _DWORD, _DWORD);
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000B2C) --------------------------------------------------------
void __fastcall EPD_set_window_start(int a1, __int16 a2)
{
  SPI_send_CMD_byte(0x4Eu);
  SPI_send_data_byte((unsigned int)(a1 << 21) >> 24);
  SPI_send_CMD_byte(0x4Fu);
  SPI_send_data_byte(a2);
  SPI_send_data_byte(HIBYTE(a2));
}

//----- (00000B54) --------------------------------------------------------
void __fastcall EPD_Send_Luts()
{
  unsigned int i; // r4
  unsigned int j; // r4
  unsigned int k; // r4
  unsigned int m; // r4
  unsigned int n; // r4

  SPI_send_CMD_byte(0x50);
  SPI_send_data_byte(0xB7);
  SPI_send_CMD_byte(0x20);
  for ( i = 0; i < 44; ++i )
    SPI_send_data_byte(*((_BYTE *)&unk_4198 + i));
  SPI_send_CMD_byte(0x21);
  for ( j = 0; j < 42; ++j )
    SPI_send_data_byte(*((_BYTE *)&unk_41C4 + j));
  SPI_send_CMD_byte(0x22);
  for ( k = 0; k < 42; ++k )
    SPI_send_data_byte(*((_BYTE *)dword_41EC + k + 2));
  SPI_send_CMD_byte(0x23);
  for ( m = 0; m < 42; ++m )
    SPI_send_data_byte(*((_BYTE *)&unk_4218 + m));
  SPI_send_CMD_byte(0x24);
  for ( n = 0; n < 42; ++n )
    SPI_send_data_byte(*((_BYTE *)dword_4240 + n + 2));
}
// 41EC: using guessed type int dword_41EC[11];
// 4240: using guessed type int dword_4240[4];

//----- (00000BE0) --------------------------------------------------------
void __fastcall EPD_set_window(int a1, __int16 a2, int a3, __int16 a4)
{
  SPI_send_CMD_byte(0x44u);
  SPI_send_data_byte((unsigned int)(a1 << 21) >> 24);
  SPI_send_data_byte((unsigned int)(a3 << 21) >> 24);
  SPI_send_CMD_byte(0x45u);
  SPI_send_data_byte(a2);
  SPI_send_data_byte(HIBYTE(a2));
  SPI_send_data_byte(a4);
  SPI_send_data_byte(HIBYTE(a4));
}

//----- (00000C20) --------------------------------------------------------
void EPD_sends_LUTs_435E()
{
  unsigned int i; // r4
  unsigned int j; // r4
  unsigned int k; // r4
  unsigned int m; // r4
  unsigned int n; // r4

  SPI_send_CMD_byte(0x20u);
  for ( i = 0; i < 0x2C; ++i )
    SPI_send_data_byte(*(_BYTE *)(i + 0x435E));
  SPI_send_CMD_byte(0x21u);
  for ( j = 0; j < 0x2A; ++j )
    SPI_send_data_byte(*(_BYTE *)(j + 17290));
  SPI_send_CMD_byte(0x22u);
  for ( k = 0; k < 0x2A; ++k )
    SPI_send_data_byte(*(_BYTE *)(k + 17332));
  SPI_send_CMD_byte(0x23u);
  for ( m = 0; m < 0x2A; ++m )
    SPI_send_data_byte(*(_BYTE *)(m + 17374));
  SPI_send_CMD_byte(0x24u);
  for ( n = 0; n < 0x2A; ++n )
    SPI_send_data_byte(*(_BYTE *)(n + 17416));
}

//----- (00000CA0) --------------------------------------------------------
void EPD_sends_9()
{
  switch ( EPD_Config_sending_type[0] )
  {
    case 1u:
      SPI_send_CMD_byte(6u);
      SPI_send_data_byte(0x17u);
      SPI_send_data_byte(0x17u);
      SPI_send_data_byte(0x17u);
      SPI_send_CMD_byte(4u);
      break;
    case 2u:
      SPI_send_CMD_byte(0);
      break;
    case 3u:
      SPI_send_data_byte(0xFu);
      break;
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000CE8) --------------------------------------------------------
void EPD_sends_10()
{
  switch ( EPD_Config_sending_type[0] )
  {
    case 1u:
      SPI_send_CMD_byte(1u);
      SPI_send_data_byte(3u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0x2Bu);
      SPI_send_data_byte(0x2Bu);
      SPI_send_CMD_byte(6u);
      SPI_send_data_byte(0x17u);
      SPI_send_data_byte(0x17u);
      SPI_send_data_byte(0x17u);
      SPI_send_CMD_byte(4u);
      break;
    case 2u:
      SPI_send_CMD_byte(0);
      SPI_send_data_byte(0xBFu);
      SPI_send_data_byte(0xDu);
      SPI_send_CMD_byte(0x30u);
      SPI_send_data_byte(0x3Cu);
      SPI_send_CMD_byte(0x61u);
      SPI_send_data_byte(1u);
      SPI_send_data_byte(0x90u);
      SPI_send_data_byte(1u);
      SPI_send_data_byte(0x2Cu);
      SPI_send_CMD_byte(0x82u);
      SPI_send_data_byte(0x28u);
      SPI_send_CMD_byte(0x50u);
      SPI_send_data_byte(0x97u);
      break;
    case 3u:
      EPD_sends_LUTs_426C();
      break;
  }
}
// D98: using guessed type int sub_D98(void);
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000D98) --------------------------------------------------------
void EPD_sends_LUTs_426C()
{
  unsigned int i; // r4
  unsigned int j; // r4
  unsigned int k; // r4
  unsigned int m; // r4
  unsigned int n; // r4

  SPI_send_CMD_byte(0x20u);
  for ( i = 0; i < 0x2C; i = (unsigned __int16)(i + 1) )
    SPI_send_data_byte(*((_BYTE *)&dword_426C + i));
  SPI_send_CMD_byte(0x21u);
  for ( j = 0; j < 0x2A; j = (unsigned __int16)(j + 1) )
    SPI_send_data_byte(*((_BYTE *)&unk_4298 + j));
  SPI_send_CMD_byte(0x22u);
  for ( k = 0; k < 0x2A; k = (unsigned __int16)(k + 1) )
    SPI_send_data_byte(*((_BYTE *)dword_42C0 + k + 2));
  SPI_send_CMD_byte(0x23u);
  for ( m = 0; m < 0x2A; m = (unsigned __int16)(m + 1) )
    SPI_send_data_byte(*((_BYTE *)&unk_42EC + m));
  SPI_send_CMD_byte(0x24u);
  for ( n = 0; n < 0x2A; n = (unsigned __int16)(n + 1) )
    SPI_send_data_byte(*((_BYTE *)dword_4314 + n + 2));
}
// 426C: using guessed type int dword_426C;
// 42C0: using guessed type int[11];
// 4314: using guessed type int[11];

//----- (00000E20) --------------------------------------------------------
void EPD_sends_11()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(1u);
    SPI_send_data_byte(7u);
    SPI_send_data_byte(7u);
    SPI_send_data_byte(0x3Fu);
    SPI_send_data_byte(0x3Fu);
    SPI_send_CMD_byte(4u);
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    SPI_send_CMD_byte(0);
    SPI_send_data_byte(0xFu);
    SPI_send_CMD_byte(0x61u);
    SPI_send_data_byte(3u);
    SPI_send_data_byte(0x20u);
    SPI_send_data_byte(1u);
    SPI_send_data_byte(0xE0u);
    SPI_send_CMD_byte(0x15u);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x50u);
    SPI_send_data_byte(0x11u);
    SPI_send_data_byte(7u);
    SPI_send_CMD_byte(0x60u);
    SPI_send_data_byte(0x22u);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000EB0) --------------------------------------------------------
void EPD_sends_12()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(1u);
    SPI_send_data_byte(0x37u);
    SPI_send_data_byte(0);
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    SPI_send_CMD_byte(0);
    SPI_send_data_byte(0xCFu);
    SPI_send_data_byte(8u);
    SPI_send_CMD_byte(0x30u);
    SPI_send_data_byte(0x3Au);
    SPI_send_CMD_byte(0x82u);
    SPI_send_data_byte(0x28u);
    SPI_send_CMD_byte(6u);
    SPI_send_data_byte(0xC7u);
    SPI_send_data_byte(0xCCu);
    SPI_send_data_byte(0x15u);
    SPI_send_CMD_byte(0x50u);
    SPI_send_data_byte(0x77u);
    SPI_send_CMD_byte(0x60u);
    SPI_send_data_byte(0x22u);
    SPI_send_CMD_byte(0x65u);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x61u);
    SPI_send_data_byte(2u);
    SPI_send_data_byte(0x80u);
    SPI_send_data_byte(1u);
    SPI_send_data_byte(0x80u);
    SPI_send_CMD_byte(0xE5u);
    SPI_send_data_byte(3u);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00000F68) --------------------------------------------------------
void EPD_sends_13()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(1u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x17u);
    SPI_send_data_byte(0x3Fu);
    SPI_send_data_byte(0x3Fu);
    SPI_send_data_byte(0x11u);
    SPI_send_CMD_byte(0x82u);
    SPI_send_data_byte(0x24u);
    SPI_send_CMD_byte(6u);
    SPI_send_data_byte(0x27u);
    SPI_send_data_byte(0x27u);
    SPI_send_data_byte(0x2Fu);
    SPI_send_data_byte(0x17u);
    SPI_send_CMD_byte(0x30u);
    SPI_send_data_byte(6u);
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    SPI_send_CMD_byte(0);
    SPI_send_data_byte(0x3Fu);
    SPI_send_CMD_byte(0x61u);
    SPI_send_data_byte(3u);
    SPI_send_data_byte(0x20u);
    SPI_send_data_byte(1u);
    SPI_send_data_byte(0xE0u);
    SPI_send_CMD_byte(0x15u);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x50u);
    SPI_send_data_byte(0x10u);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x60u);
    SPI_send_data_byte(0x22u);
    SPI_send_CMD_byte(0x65u);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    SPI_send_data_byte(0);
    EPD_sends_LUTs_ARG(0x44D1, 0x44FB, 0x4525, 0x454F, 0x4579);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00001064) --------------------------------------------------------
void EPD_sends_14()
{
  switch ( EPD_Config_sending_type[0] )
  {
    case 1u:
      SPI_send_CMD_byte(0x12u);
      SPI_send_CMD_byte(0x46u);
      SPI_send_data_byte(0xF7u);
      SPI_send_CMD_byte(0x47u);
      SPI_send_data_byte(0xF7u);
      break;
    case 2u:
      SPI_send_CMD_byte(0xCu);
      SPI_send_data_byte(0xAEu);
      SPI_send_data_byte(0xC7u);
      SPI_send_data_byte(0xC3u);
      SPI_send_data_byte(0xC0u);
      SPI_send_data_byte(0x40u);
      SPI_send_CMD_byte(1u);
      SPI_send_data_byte(0xAFu);
      SPI_send_data_byte(2u);
      SPI_send_data_byte(1u);
      SPI_send_CMD_byte(0x11u);
      SPI_send_data_byte(1u);
      SPI_send_CMD_byte(0x44u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0x6Fu);
      SPI_send_data_byte(3u);
      SPI_send_CMD_byte(0x45u);
      SPI_send_data_byte(0xFFu);
      SPI_send_data_byte(2u);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0);
      break;
    case 3u:
      SPI_send_CMD_byte(0x3Cu);
      SPI_send_data_byte(5u);
      SPI_send_CMD_byte(0x18u);
      SPI_send_data_byte(0x80u);
      SPI_send_CMD_byte(0x22u);
      SPI_send_data_byte(0xB1u);
      SPI_send_CMD_byte(0x20u);
      SPI_send_CMD_byte(0x4Fu);
      SPI_send_data_byte(0);
      SPI_send_data_byte(0);
      break;
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00001160) --------------------------------------------------------
void EPD_sends_15()
{
  if ( EPD_Config_sending_type[0] == 1 )
  {
    SPI_send_CMD_byte(1u);
    SPI_send_data_byte(0x37u);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0);
    SPI_send_data_byte(0xCFu);
    SPI_send_data_byte(8u);
    SPI_send_CMD_byte(6u);
    SPI_send_data_byte(0xC7u);
    SPI_send_data_byte(0xCCu);
    SPI_send_data_byte(0x28u);
    SPI_send_CMD_byte(4u);
  }
  else if ( EPD_Config_sending_type[0] == 2 )
  {
    SPI_send_CMD_byte(0x30u);
    SPI_send_data_byte(0x3Cu);
    SPI_send_CMD_byte(0x41u);
    SPI_send_data_byte(0);
    SPI_send_CMD_byte(0x50u);
    SPI_send_data_byte(0x77u);
    SPI_send_CMD_byte(0x60u);
    SPI_send_data_byte(0x22u);
    SPI_send_CMD_byte(0x61u);
    SPI_send_data_byte(2u);
    SPI_send_data_byte(0x80u);
    SPI_send_data_byte(1u);
    SPI_send_data_byte(0x80u);
    SPI_send_CMD_byte(0x82u);
    SPI_send_data_byte(0x1Eu);
    SPI_send_CMD_byte(0xE5u);
    SPI_send_data_byte(3u);
  }
}
// 20001201: using guessed type unsigned __int8 EPD_Config_sending_type[19];

//----- (00001220) --------------------------------------------------------
void __fastcall EPD_sends_LUTs_ARG(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int i; // r4
  unsigned int j; // r4
  unsigned int k; // r4
  unsigned int m; // r4
  unsigned int n; // r4

  SPI_send_CMD_byte(0x20u);
  for ( i = 0; i < 0x2A; i = (unsigned __int8)(i + 1) )
    SPI_send_data_byte(*(_BYTE *)(a1 + i));
  SPI_send_CMD_byte(0x21u);
  for ( j = 0; j < 0x2A; j = (unsigned __int8)(j + 1) )
    SPI_send_data_byte(*(_BYTE *)(a2 + j));
  SPI_send_CMD_byte(0x22u);
  for ( k = 0; k < 0x2A; k = (unsigned __int8)(k + 1) )
    SPI_send_data_byte(*(_BYTE *)(a3 + k));
  SPI_send_CMD_byte(0x23u);
  for ( m = 0; m < 0x2A; m = (unsigned __int8)(m + 1) )
    SPI_send_data_byte(*(_BYTE *)(a4 + m));
  SPI_send_CMD_byte(0x24u);
  for ( n = 0; n < 0x2A; n = (unsigned __int8)(n + 1) )
    SPI_send_data_byte(*(_BYTE *)(a5 + n));
}

//----- (000012A0) --------------------------------------------------------
void __fastcall SPI_send_CMD_byte(unsigned __int8 a1)
{
  unsigned int v2; // r4

  GPIO_low(0x100);
  GPIO_low(0x200);
  GPIO_low(0x400);
  GPIO_high(0x200);
  GPIO_low(0x200);
  LOBYTE(v2) = 0;
  do
  {
    if ( (a1 & 0x80) != 0 )
      GPIO_high(0x400);
    else
      GPIO_low(0x400);
    GPIO_high(0x200);
    GPIO_low(0x200);
    a1 *= 2;
    v2 = (unsigned __int8)(v2 + 1);
  }
  while ( v2 < 8 );
  GPIO_low(0x400);
  GPIO_high(0x100);
}

//----- (00001306) --------------------------------------------------------
void __fastcall SPI_send_data_byte(unsigned __int8 a1)
{
  unsigned int v2; // r4

  GPIO_low(0x100);
  GPIO_low(0x200);
  GPIO_high(0x400);
  GPIO_high(0x200);
  GPIO_low(0x200);
  LOBYTE(v2) = 0;
  do
  {
    if ( (a1 & 0x80) != 0 )
      GPIO_high(0x400);
    else
      GPIO_low(0x400);
    GPIO_high(0x200);
    GPIO_low(0x200);
    a1 *= 2;
    v2 = (unsigned __int8)(v2 + 1);
  }
  while ( v2 < 8 );
  GPIO_low(0x400);
  GPIO_high(0x100);
}

//----- (0000136C) --------------------------------------------------------
void __fastcall memory_write_en_disable(int result)
{
  if ( result )
    dword_40000600 = 0;
  else
    dword_40000600 = 0x93A57B28;
}

//----- (00001388) --------------------------------------------------------
void __fastcall GPIO_low(__int16 result)
{
  word_40000508 &= ~result;
}
// 40000508: using guessed type __int16 word_40000508;

//----- (00001398) --------------------------------------------------------
BOOL __fastcall GPIO_read_bit(__int16 a1)
{
  return (unsigned __int16)(unk_4000050C & a1) != 0;
}

//----- (000013B0) --------------------------------------------------------
void __fastcall GPIO_mode_input(__int16 result)
{
  word_40000500 &= ~result;
  word_40000504 |= result;
}
// 40000500: using guessed type __int16 word_40000500;
// 40000504: using guessed type __int16 word_40000504;

//----- (000013C8) --------------------------------------------------------
void __fastcall sub_13C8(__int16 result)
{
  word_40000500 |= result;
  word_40000504 &= ~result;
}

//----- (000013E0) --------------------------------------------------------
void __fastcall sub_13E0(__int16 result)
{
  word_40000508 |= result;
}

//----- (000013F0) --------------------------------------------------------
void __cdecl sub_13F0()
{
  byte_40000324 &= ~8u;
}

//----- (00001404) --------------------------------------------------------
void __cdecl sub_1404()
{
  byte_40000324 |= 8u;
}

//----- (00001418) --------------------------------------------------------
void sub_1418()
{
  sub_1D88(4, 1);
  sub_1D88(3, 2);
  sub_1D88(5, 2);
  sub_1D60(4);
  sub_1D60(3);
}

//----- (00001444) --------------------------------------------------------
void __fastcall sub_1444(int result, int a2)
{
  if ( a2 )
    LOBYTE(result) = result | 0x80;
  dword_4000031C = result;
}

//----- (00001458) --------------------------------------------------------
int __fastcall sub_1458(unsigned int a1)
{
  if ( (byte_40000328 & 1) == 0 )
    return 0;
  memcpy(a1, dword_20001288 + 1, (unsigned __int8)*dword_20001288);
  return (unsigned __int8)*dword_20001288;
}

//----- (00001490) --------------------------------------------------------
int __fastcall NFC_send_answer(int *a1, char a2)
{
  if ( (byte_40000328 & 1) == 0 )
    return 0;
  *dword_20001288 = a2 + 2;
  dword_20001288[1] = 2;
  memcpy((unsigned int)(dword_20001288 + 2), (unsigned int)a1, a2);
  byte_40000328 = 2 * (byte_40000328 >> 1);
  byte_40000324 |= 0x40u;
  return 1;
}
// 20001288: using guessed type _BYTE *dword_20001288;

//----- (000014E8) --------------------------------------------------------
int Send_specific_EPD_data_other()
{
  int len_cmd; // r0
  bool v1; // zf

  len_cmd = copy_cmd_into_buffer((unsigned int)byte_20000000);
  if ( !len_cmd )
    return len_cmd;
  if ( !((unsigned int)(dword_600006EC[0] << 24) >> 28) )
    byte_20001203[0] = 1;
  memory_write_en_disable(1);
  if ( byte_20000000[0] == 0xFF && byte_20000000[1] == 0xFE )
  {
    switch ( byte_20000000[2] )
    {
      case 0xFCu:
        if ( check_password(byte_20000000) )
        {
          memory_write_en_disable(0);
          *(_DWORD *)dword_600006EC |= 0xF0u;
          memory_write_en_disable(1);
        }
        goto LABEL_28;
      case 0xFDu:
        if ( check_password(byte_20000000) )
        {
          memory_write_en_disable(0);
          *(_DWORD *)dword_600006EC &= 0xFFFFFF0F;
          memory_write_en_disable(1);
        }
        goto LABEL_28;
      case 0xFAu:
        if ( dword_600006EC[0] >> 4 )
          LOWORD(a1[0]) = 0xEEFF;
        else
          LOWORD(a1[0]) = 0xFF;
        break;
      default:
        if ( byte_20000000[2] )
        {
          if ( byte_20000000[2] == 1 )
          {
            if ( check_password(byte_20000000) )
            {
              byte_20001203[0] = 1;
              memory_write_en_disable(0);
              write_password(byte_20000000);
              memory_write_en_disable(1);
            }
          }
          else if ( byte_20000000[2] == 0xF9 )
          {
            LOWORD(a1[0]) = 0x12;
          }
          goto LABEL_28;
        }
        if ( check_password(byte_20000000) )
          byte_20001203[0] = 1;
        break;
    }
    memory_write_en_disable(1);
LABEL_28:
    NFC_send_answer(a1, 2);
  }
  len_cmd = byte_20001203[0];
  if ( byte_20001203[0] == 1 )
  {
    if ( byte_20000000[0] == 0xCD )
    {
      LOWORD(a1[0]) = 0;
      unk_20001202 = 0;
      if ( byte_20000000[1] )
      {
        switch ( byte_20000000[1] )
        {
          case 1u:
            GPIO_high(0x40);
            break;
          case 2u:
            EPD_Config_sending_type = 1;
            break;
          case 3u:
            SPI_send_100_DC_byte(4);
            break;
          case 4u:
            SPI_send_100_DC_byte(2);
            break;
          case 5u:
            EPD_Config_sending_type = 2;
            break;
          case 6u:
            EPD_Config_sending_type = 3;
            break;
          case 7u:
            switch ( unk_20001200 )
            {
              case 0x11u:
                SPI_send_CMD_byte(0x24u);
                break;
              case 2u:
              case 4u:
              case 0x12u:
                SPI_send_100_DC_byte(0x24);
                break;
              case 0xAu:
              case 0xEu:
                SPI_send_100_DC_byte(0x13);
                break;
              default:
                if ( !unk_20001200
                  || unk_20001200 == 1
                  || unk_20001200 == 5
                  || unk_20001200 == 6
                  || unk_20001200 == 8
                  || unk_20001200 == 9
                  || unk_20001200 == 11
                  || unk_20001200 == 12
                  || unk_20001200 == 13
                  || unk_20001200 == 15
                  || unk_20001200 == 16 )
                {
                  SPI_send_100_DC_byte(16);
                }
                break;
            }
            break;
          case 8u:
            EPD_Config_sending_type = 4;
            byte_20001203[1] = byte_20000000[2];
            memcpy(0x200012A4u, (unsigned int)&byte_20000000[3], byte_20000000[2]);
            break;
          case 9u:
            if ( unk_20001200 == 2 || unk_20001200 == 7 || unk_20001200 == 4 || unk_20001200 == 17 || unk_20001200 == 18 )
              EPD_Config_sending_type = 5;
            else
              SPI_send_100_DC_byte(0x12);
            break;
          case 0xAu:
            if ( unk_20001200 == 7 || unk_20001200 == 4 || unk_20001200 == 17 || unk_20001200 == 18 )
            {
              if ( !GPIO_read_bit(2) )
                LOBYTE(a1[0]) = 0xFF;
            }
            else if ( GPIO_read_bit(2) )
            {
              LOBYTE(a1[0]) = 0xFF;
            }
            break;
          case 0xBu:
            if ( GPIO_read_bit(2) )
              LOBYTE(a1[0]) = 0xFF;
            break;
          case 0xCu:
            GPIO_low(0x80);
            break;
          case 0xDu:
            GPIO_high(0x80);
            break;
          case 0xEu:
            if ( GPIO_read_bit(0x20) )
              LOBYTE(a1[0]) = 0xFF;
            break;
          case 0x10u:
            SPI_send_DC_byte(0, byte_20000000[2]);
            break;
          case 0x11u:
            SPI_send_DC_byte(1, byte_20000000[2]);
            break;
          default:
            v1 = byte_20000000[1] == 22;
            while ( !v1 )
            {
              v1 = byte_20000000[1] == 23;
              if ( byte_20000000[1] != 23 )
              {
                if ( byte_20000000[1] == 24 )
                {
                  if ( !unk_20001200
                    || unk_20001200 == 1
                    || unk_20001200 == 5
                    || unk_20001200 == 6
                    || unk_20001200 == 8
                    || unk_20001200 == 9
                    || unk_20001200 == 11
                    || unk_20001200 == 15
                    || unk_20001200 == 16 )
                  {
                    SPI_send_CMD_byte(0x13u);
                  }
                }
                else if ( byte_20000000[1] == 25
                       && (!unk_20001200
                        || unk_20001200 == 1
                        || unk_20001200 == 5
                        || unk_20001200 == 6
                        || unk_20001200 == 8
                        || unk_20001200 == 9
                        || unk_20001200 == 11
                        || unk_20001200 == 15
                        || unk_20001200 == 16) )
                {
                  EPD_Config_sending_type = 5;
                  byte_20001203[1] = byte_20000000[2];
                  memcpy(0x200012A4u, (unsigned int)&byte_20000000[3], byte_20000000[2]);
                }
                return NFC_send_answer(a1, 2);
              }
            }
            break;
        }
      }
      else
      {
        GPIO_low(0x200);
        GPIO_high(0x400);
        GPIO_high(0x100);
        GPIO_low(0x40);
        if ( byte_20000000[2] == 0x12 || byte_20000000[2] == 7 )
        {
          unk_20001200 = 18;
        }
        else if ( byte_20000000[2] )
        {
          switch ( byte_20000000[2] )
          {
            case 1u:
              unk_20001200 = 1;
              break;
            case 2u:
              unk_20001200 = 2;
              break;
            case 3u:
              unk_20001200 = 3;
              break;
            case 4u:
              unk_20001200 = 4;
              break;
            case 5u:
              unk_20001200 = 5;
              break;
            case 6u:
              unk_20001200 = 6;
              break;
            case 8u:
              unk_20001200 = 8;
              break;
            case 9u:
              unk_20001200 = 9;
              break;
            case 0xAu:
              unk_20001200 = 10;
              break;
            case 0xBu:
              unk_20001200 = 11;
              break;
            case 0xCu:
              unk_20001200 = 12;
              break;
            case 0xDu:
              unk_20001200 = 13;
              break;
            case 0xEu:
              unk_20001200 = 14;
              break;
            case 0xFu:
              unk_20001200 = 15;
              break;
            case 0x11u:
              unk_20001200 = 17;
              break;
            case 0x10u:
              unk_20001200 = 16;
              break;
          }
        }
        else
        {
          unk_20001200 = 0;
        }
      }
      return NFC_send_answer(a1, 2);
    }
    else
    {
      return NFC_send_answer(a1, 2);
    }
  }
  return len_cmd;
}
// 0: using guessed type int;
// 20000000: using guessed type unsigned __int8 byte_20000000[128];
// 20000002: using guessed type unsigned __int8;
// 20000080: using guessed type int a1[32];
// 20001203: using guessed type unsigned __int8 byte_20001203[9];
// 20001204: using guessed type unsigned __int8;
// 600006EC: using guessed type unsigned __int8 dword_600006EC[275];

//----- (00001930) --------------------------------------------------------
void __fastcall Send_specific_EPD_data()
{
  unsigned int i; // r4
  unsigned int j; // r4
  unsigned int k; // r4
  unsigned int v3; // r4
  unsigned int v4; // r4
  unsigned int ii; // r4
  char v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r0
  char v9; // r1
  unsigned int m; // r4
  char v11; // r1
  unsigned int n; // r4
  unsigned int jj; // r4

  sub_1404();
  sub_1404();
  if ( EPD_Config_sending_type )
  {
    if ( EPD_Config_sending_type == 1 )
    {
      if ( unk_20001200 == 2 )
      {
        EPD_sends_1();
        goto LABEL_179;
      }
      if ( unk_20001200 )
      {
        if ( unk_20001200 != 1 )
        {
          if ( unk_20001200 == 4 )
          {
            EPD_sends_4();
            goto LABEL_179;
          }
          if ( unk_20001200 != 5 )
          {
            if ( unk_20001200 == 6 )
              goto LABEL_93;
            if ( unk_20001200 != 7 )
            {
              if ( unk_20001200 != 8 )
              {
                switch ( unk_20001200 )
                {
                  case 9u:
                    goto LABEL_94;
                  case 0xAu:
                    goto LABEL_95;
                  case 0xBu:
                    goto LABEL_96;
                }
                if ( unk_20001200 != 12 )
                {
                  if ( unk_20001200 != 13 )
                  {
                    if ( unk_20001200 != 14 )
                    {
                      if ( unk_20001200 != 15 )
                      {
                        if ( unk_20001200 != 17 )
                        {
                          if ( unk_20001200 != 16 )
                          {
                            if ( unk_20001200 != 18 )
                              goto LABEL_179;
                            goto LABEL_99;
                          }
LABEL_98:
                          EPD_sends_5();
                          goto LABEL_179;
                        }
                        goto LABEL_42;
                      }
LABEL_41:
                      EPD_sends_11();
                      goto LABEL_179;
                    }
LABEL_40:
                    EPD_sends_13();
                    goto LABEL_179;
                  }
LABEL_39:
                  EPD_sends_12();
                  goto LABEL_179;
                }
LABEL_38:
                EPD_sends_15();
                goto LABEL_179;
              }
LABEL_34:
              EPD_sends_6();
              goto LABEL_179;
            }
LABEL_33:
            EPD_sends_8();
            goto LABEL_179;
          }
LABEL_31:
          EPD_sends_2();
          goto LABEL_179;
        }
LABEL_29:
        EPD_sends_0();
        goto LABEL_179;
      }
    }
    else
    {
      if ( EPD_Config_sending_type != 2 )
      {
        if ( EPD_Config_sending_type != 3 )
        {
          if ( EPD_Config_sending_type == 4 )
          {
            switch ( unk_20001200 )
            {
              case 2u:
              case 1u:
              case 4u:
              case 5u:
              case 8u:
              case 0xAu:
              case 0xBu:
              case 0xCu:
              case 0xDu:
              case 0x11u:
              case 0x12u:
                for ( i = 0; i < byte_20001203[1]; i = (unsigned __int8)(i + 1) )
                  SPI_send_DC_byte(1, *(_BYTE *)(i + 0x200012A4));
                break;
              case 0xEu:
                for ( j = 0; j < byte_20001203[1]; j = (unsigned __int8)(j + 1) )
                  SPI_send_DC_byte(1, ~*(_BYTE *)(j + 0x200012A4));
                break;
              case 7u:
                EPD_set_window_start(0, *(__int16 *)&byte_20001203[5]);
                SPI_send_100_DC_byte(0x24);
                for ( k = 0; k < byte_20001203[1]; k = (unsigned __int8)(k + 1) )
                  SPI_send_DC_byte(1, *(_BYTE *)(k + 0x200012A4));
                ++*(_WORD *)&byte_20001203[5];
                break;
              case 9u:
                LOWORD(v3) = 0;
                do
                {
                  SPI_send_DC_byte(1, 0);
                  v3 = (unsigned __int16)(v3 + 1);
                }
                while ( v3 < 0x1280 );
                break;
              case 6u:
                LOWORD(v4) = 0;
                do
                {
                  SPI_send_DC_byte(1, 0);
                  v4 = (unsigned __int16)(v4 + 1);
                }
                while ( v4 < 2756 );
                break;
              default:
                if ( unk_20001200 )
                {
                  if ( unk_20001200 == 15 )
                  {
                    for ( m = 0; m < byte_20001203[1]; m = (unsigned __int8)(m + 1) )
                    {
                      v11 = ~*(_BYTE *)(m + 0x200012A4);
                      *(_BYTE *)(m + 0x200012A4) = v11;
                      SPI_send_DC_byte(1, v11);
                    }
                  }
                  else if ( unk_20001200 == 16 )
                  {
                    for ( n = 0; n < byte_20001203[1]; n = (unsigned __int8)(n + 1) )
                      SPI_send_DC_byte(1, 255);
                  }
                }
                else
                {
                  for ( ii = 0; ii < byte_20001203[1]; ii = (unsigned __int8)(ii + 1) )
                  {
                    byte_20001203[2] = *(_BYTE *)(ii + 0x200012A4);
                    LOBYTE(v7) = 0;
                    byte_20001203[3] = 0;
                    do
                    {
                      v6 = 4 * byte_20001203[3];
                      byte_20001203[3] *= 4;
                      if ( (byte_20001203[2] & 0x80) != 0 )
                        byte_20001203[3] = v6 | 3;
                      byte_20001203[2] *= 2;
                      v7 = (unsigned __int8)(v7 + 1);
                    }
                    while ( v7 < 4 );
                    SPI_send_DC_byte(1, byte_20001203[3]);
                    LOBYTE(v8) = 0;
                    byte_20001203[3] = 0;
                    do
                    {
                      v9 = 4 * byte_20001203[3];
                      byte_20001203[3] *= 4;
                      if ( (byte_20001203[2] & 0x80) != 0 )
                        byte_20001203[3] = v9 | 3;
                      byte_20001203[2] *= 2;
                      v8 = (unsigned __int8)(v8 + 1);
                    }
                    while ( v8 < 4 );
                    SPI_send_DC_byte(1, byte_20001203[3]);
                  }
                }
                break;
            }
          }
          else if ( EPD_Config_sending_type == 5 )
          {
            if ( !unk_20001200
              || unk_20001200 == 1
              || unk_20001200 == 5
              || unk_20001200 == 6
              || unk_20001200 == 8
              || unk_20001200 == 9
              || unk_20001200 == 11
              || unk_20001200 == 15
              || unk_20001200 == 16 )
            {
              for ( jj = 0; jj < byte_20001203[1]; jj = (unsigned __int8)(jj + 1) )
                SPI_send_DC_byte(1, *(_BYTE *)(jj + 0x200012A4));
            }
            else
            {
              switch ( unk_20001200 )
              {
                case 7u:
                  SPI_send_CMD_byte(0x22u);
                  SPI_send_data_byte(0xC4u);
                  SPI_send_CMD_byte(0x20u);
                  SPI_send_CMD_byte(0xFFu);
                  break;
                case 4u:
                  SPI_send_CMD_byte(0x22u);
                  SPI_send_data_byte(0xC7u);
                  SPI_send_CMD_byte(0x20u);
                  break;
                case 2u:
                case 0x11u:
                case 0x12u:
                  SPI_send_CMD_byte(0x22u);
                  SPI_send_data_byte(0xF7u);
                  SPI_send_CMD_byte(0x20u);
                  break;
              }
            }
          }
          goto LABEL_179;
        }
        if ( !unk_20001200 )
          EPD_sends();
        if ( unk_20001200 != 6 )
        {
          if ( unk_20001200 != 9 )
          {
            if ( unk_20001200 != 10 )
            {
              if ( unk_20001200 != 11 )
              {
                if ( unk_20001200 != 17 )
                {
                  if ( unk_20001200 != 16 )
                  {
                    if ( unk_20001200 != 18 )
                      goto LABEL_179;
LABEL_99:
                    EPD_sends_7();
                    goto LABEL_179;
                  }
                  goto LABEL_98;
                }
                EPD_sends_14();
                SPI_send_CMD_byte(0x4Fu);
                SPI_send_data_byte(0);
                SPI_send_data_byte(0);
LABEL_179:
                EPD_Config_sending_type = 0;
                return;
              }
LABEL_96:
              EPD_sends_9();
              goto LABEL_179;
            }
LABEL_95:
            EPD_sends_10();
            goto LABEL_179;
          }
LABEL_94:
          EPD_send_configs();
          goto LABEL_179;
        }
LABEL_93:
        EPD_sends_3();
        goto LABEL_179;
      }
      if ( unk_20001200 )
      {
        if ( unk_20001200 != 1 )
        {
          if ( unk_20001200 != 5 )
          {
            if ( unk_20001200 == 6 )
              goto LABEL_93;
            if ( unk_20001200 != 7 )
            {
              if ( unk_20001200 != 8 )
              {
                switch ( unk_20001200 )
                {
                  case 9u:
                    goto LABEL_94;
                  case 0xAu:
                    goto LABEL_95;
                  case 0xBu:
                    goto LABEL_96;
                }
                if ( unk_20001200 != 12 )
                {
                  if ( unk_20001200 != 13 )
                  {
                    if ( unk_20001200 != 14 )
                    {
                      if ( unk_20001200 != 15 )
                      {
                        if ( unk_20001200 != 17 )
                        {
                          if ( unk_20001200 != 16 )
                          {
                            if ( unk_20001200 != 18 )
                              goto LABEL_179;
                            goto LABEL_99;
                          }
                          goto LABEL_98;
                        }
LABEL_42:
                        EPD_sends_14();
                        goto LABEL_179;
                      }
                      goto LABEL_41;
                    }
                    goto LABEL_40;
                  }
                  goto LABEL_39;
                }
                goto LABEL_38;
              }
              goto LABEL_34;
            }
            goto LABEL_33;
          }
          goto LABEL_31;
        }
        goto LABEL_29;
      }
    }
    EPD_sends();
    goto LABEL_179;
  }
}
// 0: using guessed type int;
// 4: using guessed type void *;
// 20001203: using guessed type unsigned __int8 byte_20001203[9];
// 20001205: using guessed type unsigned __int8;
// 20001206: using guessed type unsigned __int8;
// 20001208: using guessed type unsigned __int8;

//----- (00001D60) --------------------------------------------------------
void __fastcall sub_1D60(char result)
{
  MEMORY[0xE000E280] = 1 << (result & 0x1F);
}

//----- (00001D74) --------------------------------------------------------
void __fastcall sub_1D74(char result)
{
  MEMORY[0xE000E100] = 1 << (result & 0x1F);
}

//----- (00001D88) --------------------------------------------------------
int __fastcall sub_1D88(int result, char a2)
{
  if ( result >= 0 )
    *(_DWORD *)(4 * ((unsigned int)result >> 2) - 0x1FFF1C00) = *(_DWORD *)(4 * ((unsigned int)result >> 2) - 536812544) & ~(255 << ((8 * result) & 0x1F)) | ((unsigned __int8)(a2 << 6) << ((8 * result) & 0x1F));
  else
    *(_DWORD *)(4 * (((result & 0xFu) - 8) >> 2) - 0x1FFF12E4) = *(_DWORD *)(4 * (((result & 0xFu) - 8) >> 2)
                                                                           - 0x1FFF12E4) & ~(255 << ((8 * result) & 0x1F)) | ((unsigned __int8)(a2 << 6) << ((8 * result) & 0x1F));
  return result;
}

//----- (00001E00) --------------------------------------------------------
int __fastcall sub_1E00(int result, char a2)
{
  if ( result >= 0 )
    *(_DWORD *)(4 * ((unsigned int)result >> 2) - 536812544) = *(_DWORD *)(4 * ((unsigned int)result >> 2) - 536812544) & ~(255 << ((8 * result) & 0x1F)) | ((unsigned __int8)(a2 << 6) << ((8 * result) & 0x1F));
  else
    *(_DWORD *)(4 * (((result & 0xFu) - 8) >> 2) - 536810212) = *(_DWORD *)(4 * (((result & 0xFu) - 8) >> 2) - 536810212) & ~(255 << ((8 * result) & 0x1F)) | ((unsigned __int8)(a2 << 6) << ((8 * result) & 0x1F));
  return result;
}

//----- (00001E78) --------------------------------------------------------
void __cdecl sub_1E78()
{
  unk_40000404 &= ~0x80u;
  MEMORY[0xE000E280] = 0x40;
}

//----- (00001EA0) --------------------------------------------------------
void __cdecl sub_1EA0()
{
  unk_20001280 = 9000000;
}

//----- (00001EB0) --------------------------------------------------------
int __fastcall _rt_switch8(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // lr
  unsigned int v5; // r5

  v5 = *(unsigned __int8 *)(v4 - 1);
  if ( a4 < v5 )
    v5 = a4;
  return ((int (*)(void))(v4 + 2 * *(unsigned __int8 *)(v4 + v5)))();
}
// 1EB4: variable 'v4' is possibly undefined

//----- (00001ECA) --------------------------------------------------------
int *__fastcall memcpyint(int *result, _DWORD *a2, int a3)
{
  int v3; // r3

  while ( a3 )
  {
    v3 = *result++;
    a3 -= 4;
    *a2++ = v3;
  }
  return result;
}

//----- (00001EDA) --------------------------------------------------------
int __fastcall memclrint(int a1, _DWORD *a2, int a3)
{
  int result; // r0

  result = 0;
  while ( a3 )
  {
    *a2++ = 0;
    a3 -= 4;
  }
  return result;
}

//----- (00001EE8) --------------------------------------------------------
void __fastcall sub_1EE8()
{
  word_40000500 = HIBYTE(word_40000500) << 8;
  word_40000504 = HIBYTE(word_40000504) << 8;
  word_40000508 = HIBYTE(word_40000508) << 8;
  GPIO_mode_input(0x20);
  GPIO_mode_input(0x40);
  GPIO_mode_input(0x80);
  GPIO_mode_input(0x80);
  sub_1F38();
  sub_13F0();
  sub_1418();
  nullsub_4();
}
// 40000500: using guessed type __int16 word_40000500;
// 40000504: using guessed type __int16 word_40000504;
// 40000508: using guessed type __int16 word_40000508;

//----- (00001F38) --------------------------------------------------------
void __cdecl sub_1F38()
{
  int i; // r0

  for ( i = 0; i < 16; i = (unsigned __int8)(i + 1) )
    dword_40000300[i] = *(unsigned __int8 *)(unk_20001298 + i);
  byte_40000328 = 0;
}
// 40000300: using guessed type _DWORD dword_40000300[1];
// 40000328: using guessed type char byte_40000328;

//----- (00001F64) --------------------------------------------------------
int sub_1F64()
{
  return (unsigned __int8)(byte_40000324 & 8) >> 3;
}

//----- (00001F76) --------------------------------------------------------
void __noreturn Main_loop()
{
  while ( 1 )
    sub_3686(3);
}
// 1F76: using guessed type void __noreturn Main_loop();

//----- (00001F80) --------------------------------------------------------
void __fastcall IRQ_1()
{
  int v0; // [sp+0h] [bp-8h] BYREF

  byte_40000324 |= 0x80u;
  unk_200012A0 = 0;
  sub_13F0();
  if ( !low_level_NFC_handling() )
  {
    v0 = 0;
    sub_36C8(unk_2000120C, &v0);
    if ( v0 )
      MEMORY[0xE000ED04] = 0x10000000;
    unk_20001294 |= 1u;
  }
  byte_40000324 &= ~0x20u;
  sub_1D60(4);
}

//----- (00001FF0) --------------------------------------------------------
void __cdecl sub_1FF0()
{
  sub_2908(1000);
}

//----- (00002000) --------------------------------------------------------
int low_level_NFC_handling()
{
  int v0; // r0
  bool v1; // zf
  int v2; // r1
  int i; // r0
  int v4; // r4

  byte_40000328 = 2 * ((unsigned __int8)byte_40000328 >> 1);
  v0 = (unsigned __int8)dword_20001288[1];
  if ( v0 == 0x93 )
  {
    if ( dword_20001288[2] == 0x20 )
    {
      byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 3);
      if ( byte_20001284[0] <= 1u )
      {
        byte_40000324 &= ~0x80u;
      }
      else
      {
        *dword_20001288 = 7;
        dword_20001288[1] = 0;
        dword_20001288[2] = 0x88;
        dword_20001288[3] = *dword_2000128C;
        dword_20001288[4] = dword_2000128C[1];
        dword_20001288[5] = dword_2000128C[2];
        dword_20001288[6] = dword_20001288[2] ^ dword_20001288[3] ^ dword_20001288[4] ^ dword_20001288[5];
        byte_40000324 |= 0x40u;
      }
    }
    else if ( dword_20001288[2] == 0x70 )
    {
      if ( dword_20001288[4] == *dword_2000128C
        && dword_20001288[5] == dword_2000128C[1]
        && dword_20001288[6] == dword_2000128C[2] )
      {
        byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 4);
        if ( byte_20001284[0] <= 1u )
        {
          byte_40000324 &= ~0x80u;
        }
        else
        {
          *dword_20001288 = 3;
          dword_20001288[1] = 2;
          dword_20001288[2] = 4;
          byte_40000324 |= 0x40u;
        }
      }
      else
      {
        byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 12);
        byte_40000324 &= ~0x80u;
      }
    }
    else
    {
      byte_40000324 &= ~0x80u;
    }
    return 1;
  }
  if ( (unsigned __int8)dword_20001288[1] > 0x93u )
  {
    if ( v0 == 0x95 )
    {
      if ( dword_20001288[2] == 0x20 )
      {
        byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 5);
        if ( byte_20001284[0] <= 1u )
        {
          byte_40000324 &= ~0x80u;
        }
        else
        {
          *dword_20001288 = 7;
          dword_20001288[1] = 0;
          dword_20001288[2] = dword_2000128C[3];
          dword_20001288[3] = dword_2000128C[4];
          dword_20001288[4] = dword_2000128C[5];
          dword_20001288[5] = dword_2000128C[6];
          dword_20001288[6] = dword_20001288[2] ^ dword_20001288[3] ^ dword_20001288[4] ^ dword_20001288[5];
          byte_40000324 |= 0x40u;
        }
      }
      else if ( dword_20001288[2] == 0x70 )
      {
        if ( dword_20001288[3] == dword_2000128C[3]
          && dword_20001288[4] == dword_2000128C[4]
          && dword_20001288[5] == dword_2000128C[5]
          && dword_20001288[6] == dword_2000128C[6] )
        {
          byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 6);
          if ( byte_20001284[0] <= 1u )
          {
            byte_40000324 &= ~0x80u;
          }
          else
          {
            *dword_20001288 = 3;
            dword_20001288[1] = 2;
            dword_20001288[2] = 0;
            byte_40000324 |= 0x40u;
          }
        }
        else
        {
          byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 12);
          byte_40000324 &= ~0x80u;
        }
      }
      else
      {
        byte_40000324 &= ~0x80u;
      }
      return 1;
    }
    if ( v0 == 0xA2 )
    {
      byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 11);
      if ( byte_20001284[0] <= 1u )
      {
        byte_40000324 &= ~0x80u;
      }
      else
      {
        v4 = (unsigned __int8)dword_20001288[2];
        memory_write_en_disable(0);
        if ( (dword_40000308 & 3) == 3 )
          *(_DWORD *)(unk_20001290 + 4 * ((byte_20001284[1] << 8) + v4)) = (unsigned __int8)dword_20001288[3] | ((unsigned __int8)dword_20001288[4] << 8) | ((unsigned __int8)dword_20001288[5] << 16) | ((unsigned __int8)dword_20001288[6] << 24);
        memory_write_en_disable(1);
        byte_40000328 |= 2u;
        *dword_20001288 = 3;
        dword_20001288[1] = 1;
        dword_20001288[2] = 0xA;
        byte_40000324 |= 0x40u;
      }
      return 1;
    }
    v1 = v0 == 0xC2;
    if ( v0 == 0xC2 )
    {
      if ( (unsigned __int8)dword_20001288[2] == 255 )
      {
        if ( byte_20001284[0] <= 5u )
        {
          byte_40000324 &= ~0x80u;
        }
        else
        {
          *dword_20001288 = 3;
          dword_20001288[1] = 1;
          dword_20001288[2] = 10;
          byte_40000324 |= 0x40u;
          byte_20001284[2] = 1;
        }
      }
      else
      {
        byte_40000324 &= ~0x80u;
      }
      return 1;
    }
    goto LABEL_7;
  }
  switch ( v0 )
  {
    case 0x26:
      byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 1);
      if ( byte_20001284[0] <= 1u )
      {
        byte_40000324 &= ~0x80u;
      }
      else
      {
        *dword_20001288 = 4;
        dword_20001288[1] = 0;
        dword_20001288[2] = 68;
        dword_20001288[3] = 0;
        byte_40000324 |= 0x40u;
      }
      return 1;
    case 0x30:
LABEL_51:
      byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 10);
      if ( byte_20001284[0] <= 1u )
      {
        byte_40000324 &= ~0x80u;
      }
      else
      {
        v2 = (unsigned __int8)dword_20001288[2];
        *dword_20001288 = 18;
        dword_20001288[1] = 2;
        for ( i = 0; i < 16; i = (unsigned __int8)(i + 1) )
        {
          if ( (dword_40000308 & 3u) <= 1 )
            dword_20001288[i + 2] = 0;
          else
            dword_20001288[i + 2] = dword_2000128C[1024 * byte_20001284[1] + 4 * v2 + i];
        }
        byte_40000324 |= 0x40u;
      }
      return 1;
    case 0x50:
      byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 9);
      unk_200012A0 = 10;
      byte_40000324 &= ~0x80u;
      goto LABEL_51;
  }
  v1 = v0 == 0x52;
LABEL_7:
  if ( v1 )
  {
    byte_20001284[0] = *((_BYTE *)&unk_3F48 + 13 * byte_20001284[0] + 2);
    if ( byte_20001284[0] <= 1u )
    {
      byte_40000324 &= ~0x80u;
    }
    else
    {
      *dword_20001288 = 4;
      dword_20001288[1] = 0;
      dword_20001288[2] = 68;
      dword_20001288[3] = 0;
      byte_20001284[1] = 0;
      byte_40000324 |= 0x40u;
    }
  }
  else if ( !byte_20001284[2] || dword_20001288[2] || dword_20001288[3] || dword_20001288[4] )
  {
    if ( byte_20001284[0] > 5u )
    {
      byte_40000328 |= 1u;
      return 0;
    }
    byte_40000324 &= ~0x80u;
  }
  else
  {
    byte_20001284[2] = 0;
    if ( byte_20001284[0] <= 5u )
    {
      byte_40000324 &= ~0x80u;
    }
    else if ( (unsigned __int8)dword_20001288[1] >= 2u )
    {
      *dword_20001288 = 3;
      dword_20001288[1] = 1;
      dword_20001288[2] = 0;
      byte_40000324 |= 0x40u;
    }
    else
    {
      byte_20001284[1] = dword_20001288[1];
      byte_40000324 &= ~0x80u;
    }
  }
  return 1;
}
// 20001284: using guessed type unsigned __int8 byte_20001284[4];
// 20001285: using guessed type unsigned __int8;
// 20001286: using guessed type unsigned __int8;
// 20001288: using guessed type _BYTE *dword_20001288;
// 2000128C: using guessed type _BYTE *dword_2000128C;
// 40000308: using guessed type int dword_40000308;
// 40000324: using guessed type char byte_40000324;
// 40000328: using guessed type char byte_40000328;

//----- (00002694) --------------------------------------------------------
void __fastcall __noreturn Main()
{
  sub_1EE8();
  dword_40000304 = 8;
  dword_40000314 = 8;
  dword_40000334 = 3;
  Set_GPIO_modes();
  Some_GPIOs_low();
  create_task((int)Main_loop, (int)"Main", 96, 0, 40, 0x20001210);
  create_task((int)NFC_Rx_Loop, (int)"NFCRTX", 96, 0, 50, 0x2000120C);
  create_task((int)Sleep_loop, (int)"SLEEP", 64, 0, 10, 0);
  sub_3794();
  while ( 1 )
    ;
}
// 1F76: using guessed type void __noreturn Main_loop();
// 27D0: using guessed type void __noreturn NFC_Rx_Loop();
// 28E4: using guessed type void __noreturn Sleep_loop();

//----- (00002724) --------------------------------------------------------
void __fastcall IRQ_2()
{
  int v0; // [sp+0h] [bp-8h] BYREF

  byte_20001284[0] = 0;
  if ( (byte_40000328 & 0x40) != 0 )
  {
    LOBYTE(dword_40000330) = dword_40000330 | 0x80;
  }
  else
  {
    byte_40000328 = 2 * ((unsigned __int8)byte_40000328 >> 1);
    byte_40000324 &= ~0x40u;
    byte_40000324 &= ~0x80u;
    unk_200012A0 = 0;
    sub_13F0();
  }
  byte_20001284[1] = 0;
  v0 = 0;
  sub_36C8(unk_2000120C, &v0);
  if ( v0 )
    MEMORY[0xE000ED04] = 0x10000000;
  unk_20001294 |= 4u;
  byte_40000324 = 2 * ((unsigned __int8)byte_40000324 >> 1);
  sub_1D60(5);
}
// 20001284: using guessed type unsigned __int8 byte_20001284[4];
// 20001285: using guessed type unsigned __int8;
// 40000324: using guessed type char byte_40000324;
// 40000328: using guessed type char byte_40000328;
// 40000330: using guessed type int dword_40000330;

//----- (000027D0) --------------------------------------------------------
void __noreturn NFC_Rx_Loop()
{
  sub_1D74(4);
  sub_1D74(3);
  sub_1D74(5);
  while ( 1 )
  {
    while ( 1 )
    {
      sub_34A8(0, 0xFFFFFFFF);
      if ( (unk_20001294 & 1) == 0 )
        break;
      unk_20001294 = 2 * (unk_20001294 >> 1);
      Send_specific_EPD_data_other();
    }
    if ( (unk_20001294 & 2) != 0 )
    {
      unk_20001294 &= ~2u;
      Send_specific_EPD_data();
    }
    else if ( (unk_20001294 & 4) != 0 )
    {
      unk_20001294 &= ~4u;
      if ( (byte_40000328 & 0x40) != 0 )
        nullsub_6();
      else
        nullsub_5();
    }
  }
}
// 1442: using guessed type int nullsub_6(void);
// 27D0: using guessed type void __noreturn NFC_Rx_Loop();
// 40000328: using guessed type int dword_40000328;

//----- (00002860) --------------------------------------------------------
void __fastcall IRQ_0()
{
  int v0; // [sp+0h] [bp-8h] BYREF

  byte_40000324 &= ~0x40u;
  byte_40000324 &= ~0x80u;
  if ( byte_20001284 >= 6u || byte_20001284 == 1 )
    unk_200012A0 = 10;
  v0 = 0;
  sub_36C8(unk_2000120C, &v0);
  if ( v0 )
    MEMORY[0xE000ED04] = 0x10000000;
  unk_20001294 |= 2u;
  byte_40000324 &= ~0x10u;
  sub_1D60(3);
}

//----- (000028E4) --------------------------------------------------------
void __noreturn Sleep_loop()
{
  while ( 1 )
  {
    __disable_irq();
    __dsb(0xFu);
    __wfi();
    __isb(0xFu);
    __enable_irq();
  }
}
// 28E4: using guessed type void __noreturn Sleep_loop();

//----- (000028F6) --------------------------------------------------------
void IRQ_3()
{
  sub_1E78();
  sub_3890();
  sub_3440();
}

//----- (00002908) --------------------------------------------------------
int __fastcall sub_2908(int a1)
{
  unsigned int v2; // r5

  if ( !a1 )
    return -1;
  v2 = sub_168(unk_20001280, a1) - 1;
  if ( v2 > 0xFFFFFF )
    return -1;
  sub_1E00(6, 0);
  unk_40000404 = unk_40000404 & 0xF0 | 3;
  unk_40000404 |= 2u;
  unk_40000404 &= ~0x80u;
  unk_40000408 = 0;
  unk_4000040C = v2;
  unk_40000404 |= 1u;
  MEMORY[0xE000E100] = 64;
  return 0;
}

//----- (00002990) --------------------------------------------------------
int __fastcall sub_2990(unsigned __int8 *a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r3
  unsigned int v3; // r3
  unsigned int v5; // r1
  unsigned int v6; // r3
  int i; // r1
  unsigned int v8; // r1
  unsigned int v9; // r3

  v1 = 0;
  v2 = dword_600006EC & 0xF;
  if ( a1[3] == v2 )
  {
    if ( a1[4] == dword_600006EC << 16 >> 24 && a1[5] == dword_600006EC << 8 >> 24 && a1[6] == HIBYTE(dword_600006EC) )
    {
      if ( v2 > 7 )
      {
        if ( v2 > 11 )
        {
          while ( (unsigned __int8)(unk_600006F0 >> (8 * v1)) == a1[v1 + 7] )
          {
            if ( (int)++v1 >= 4 )
            {
              for ( i = 0; i < 4; ++i )
              {
                if ( (unsigned __int8)(unk_600006F4 >> (8 * i)) != a1[i + 11] )
                {
                  LOWORD(::a1[0]) = 0x1FF;
                  return 0;
                }
              }
              v8 = 0;
              v9 = v2 - 11;
              while ( v9 > v8 )
              {
                if ( (unsigned __int8)(unk_600006F8 >> (8 * v8)) != a1[v8 + 15] )
                {
                  LOWORD(::a1[0]) = 0x1FF;
                  return 0;
                }
                ++v8;
              }
              LOWORD(::a1[0]) = 0xFF;
              return 1;
            }
          }
        }
        else
        {
          while ( (unsigned __int8)(unk_600006F0 >> (8 * v1)) == a1[v1 + 7] )
          {
            if ( (int)++v1 >= 4 )
            {
              v5 = 0;
              v6 = v2 - 7;
              while ( v6 > v5 )
              {
                if ( (unsigned __int8)(unk_600006F4 >> (8 * v5)) != a1[v5 + 11] )
                  goto LABEL_21;
                ++v5;
              }
              goto LABEL_11;
            }
          }
        }
LABEL_21:
        LOWORD(::a1[0]) = 0x1FF;
        return 0;
      }
      else
      {
        v3 = v2 - 3;
        while ( v3 > v1 )
        {
          if ( (unsigned __int8)(unk_600006F0 >> (8 * v1)) != a1[v1 + 7] )
            goto LABEL_21;
          ++v1;
        }
LABEL_11:
        LOWORD(::a1[0]) = 0xFF;
        return 1;
      }
    }
    else
    {
      LOWORD(::a1[0]) = 0x1FF;
      return 0;
    }
  }
  else
  {
    LOWORD(::a1[0]) = 0x1FF;
    return 0;
  }
}
// 0: using guessed type int;
// 20000080: using guessed type int a1[32];

//----- (00002AE8) --------------------------------------------------------
void __fastcall sub_2AE8(unsigned __int8 *result)
{
  signed int v1; // r1
  int v2; // r3
  unsigned int v3; // r2
  int v4; // r3
  signed int v5; // r2
  int v6; // r3
  signed int v7; // r1
  signed int v8; // r2
  int v9; // r3
  signed int i; // r1
  int v11; // r3
  signed int v12; // r1
  signed int v13; // r2

  v1 = 0;
  v2 = result[3];
  v3 = result[v2 + 4];
  dword_600006EC = dword_600006EC & 0xF0 | v3 | (result[v2 + 5] << 8) | (result[v2 + 6] << 16) | (result[v2 + 7] << 24);
  v4 = 0;
  if ( v3 >= 4 )
  {
    if ( v3 > 7 )
    {
      if ( v3 > 11 )
      {
        if ( v3 <= 15 )
        {
          while ( v1 < (int)(v3 - 3) )
          {
            v4 |= result[result[3] + 8 + v1] << (8 * v1);
            v1 = (unsigned __int8)(v1 + 1);
          }
          unk_600006F0 = v4;
          v9 = 0;
          for ( i = 0; i < (int)(v3 - 7); i = (unsigned __int8)(i + 1) )
            v9 |= result[result[3] + 12 + i] << (8 * i);
          unk_600006F4 = v9;
          v11 = 0;
          v12 = 0;
          v13 = v3 - 11;
          while ( v12 < v13 )
          {
            v11 |= result[result[3] + 16 + v12] << (8 * v12);
            v12 = (unsigned __int8)(v12 + 1);
          }
          unk_600006F8 = v11;
        }
      }
      else
      {
        while ( v1 < (int)(v3 - 3) )
        {
          v4 |= result[result[3] + 8 + v1] << (8 * v1);
          v1 = (unsigned __int8)(v1 + 1);
        }
        unk_600006F0 = v4;
        v6 = 0;
        v7 = 0;
        v8 = v3 - 7;
        while ( v7 < v8 )
        {
          v6 |= result[result[3] + 12 + v7] << (8 * v7);
          v7 = (unsigned __int8)(v7 + 1);
        }
        unk_600006F4 = v6;
      }
    }
    else
    {
      v5 = v3 - 3;
      while ( v1 < v5 )
      {
        v4 |= result[result[3] + 8 + v1] << (8 * v1);
        v1 = (unsigned __int8)(v1 + 1);
      }
      unk_600006F0 = v4;
    }
  }
  else
  {
    LOWORD(a1[0]) = 0x2FF;
  }
}
// 20000080: using guessed type int a1[32];

//----- (00002C04) --------------------------------------------------------
void __fastcall sub_2C04(int a1, int a2)
{
  unsigned int v4; // r5
  unsigned int v5; // r4

  v4 = unk_20001220;
  sub_3508((_DWORD *)(dword_20001214 + 4));
  if ( a1 == 0xFFFFFFFF && a2 )
  {
    sub_35A6(dword_20000DB0, (_DWORD *)(dword_20001214 + 4));
  }
  else
  {
    v5 = v4 + a1;
    *(_DWORD *)(dword_20001214 + 4) = v5;
    if ( v5 >= v4 )
    {
      sub_3576(dword_20001248, (_DWORD *)(dword_20001214 + 4));
      if ( v5 < unk_2000123C )
        unk_2000123C = v5;
    }
    else
    {
      sub_3576(unk_2000124C, (_DWORD *)(dword_20001214 + 4));
    }
  }
}
// 20000DB0: using guessed type _DWORD[281];
// 20001248: using guessed type _DWORD *dword_20001248;

//----- (00002C5C) --------------------------------------------------------
void __fastcall sub_2C5C(int a1)
{
  unsigned int v2; // r0

  disable_IRQ();
  ++unk_2000121C;
  if ( dword_20001214 )
  {
    if ( !unk_20001228 && *(_DWORD *)(dword_20001214 + 44) <= *(_DWORD *)(a1 + 44) )
      dword_20001214 = a1;
  }
  else
  {
    dword_20001214 = a1;
    if ( unk_2000121C == 1 )
      sub_2F40();
  }
  ++unk_20001238;
  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 > unk_20001224 )
    unk_20001224 = *(_DWORD *)(a1 + 44);
  sub_35A6((_DWORD *)(20 * v2 + 536873216), (_DWORD *)(a1 + 4));
  enable_IRQ();
  if ( unk_20001228 )
  {
    if ( *(_DWORD *)(dword_20001214 + 44) < *(_DWORD *)(a1 + 44) )
      sub_3628();
  }
}
// 2F40: using guessed type int sub_2F40(void);

//----- (00002CD4) --------------------------------------------------------
void sub_2CD4()
{
  disable_IRQ();
  if ( !dword_20001250 )
  {
    sub_355A(0x20000E5C);
    sub_355A(0x20000E70);
    dword_2000125C = 0x20000E5C;
    unk_20001260 = 0x20000E70;
    dword_20001250 = sub_38B4(5, 16, 0x20000E0C);
  }
  enable_IRQ();
}
// 355A: using guessed type int __fastcall sub_355A(_DWORD);
// 38B4: using guessed type int __fastcall sub_38B4(_DWORD, _DWORD, _DWORD);

//----- (00002D1C) --------------------------------------------------------
void __cdecl sub_2D1C()
{
  int v0; // r4

  while ( unk_20001218 )
  {
    disable_IRQ();
    v0 = *(_DWORD *)(unk_20000DA8 + 12);
    sub_3508((_DWORD *)(v0 + 4));
    --unk_2000121C;
    --unk_20001218;
    enable_IRQ();
    sub_2DEC(v0);
  }
}

//----- (00002D58) --------------------------------------------------------
void __fastcall sub_2D58(_DWORD *result, unsigned int a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r1

  v3 = result[16];
  if ( v3 )
  {
    v4 = result[3] + v3;
    result[3] = v4;
    if ( v4 >= result[1] )
      result[3] = *result;
    memcpy(a2, result[3], v3);
  }
}

//----- (00002D7C) --------------------------------------------------------
int __fastcall sub_2D7C(unsigned int *a1, unsigned int a2, int a3)
{
  int v5; // r7
  unsigned int v6; // r5
  unsigned int v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r0

  v5 = 0;
  v6 = a1[14];
  v7 = a1[16];
  if ( v7 )
  {
    if ( a3 )
    {
      memcpy(a1[3], a2, v7);
      v8 = a1[16];
      v9 = a1[3] - v8;
      a1[3] = v9;
      if ( v9 < *a1 )
        a1[3] = a1[1] - v8;
      if ( a3 == 2 && v6 )
        --v6;
    }
    else
    {
      memcpy(a1[2], a2, v7);
      v10 = a1[2] + a1[16];
      a1[2] = v10;
      if ( v10 >= a1[1] )
        a1[2] = *a1;
    }
  }
  else if ( !*a1 )
  {
    v5 = sub_3D38(a1[1]);
    a1[1] = 0;
  }
  a1[14] = v6 + 1;
  return v5;
}
// 3D38: using guessed type int __fastcall sub_3D38(_DWORD);

//----- (00002DEC) --------------------------------------------------------
void __fastcall sub_2DEC(int a1)
{
  int v2; // r0

  v2 = *(unsigned __int8 *)(a1 + 81);
  if ( v2 )
  {
    if ( v2 == 1 )
      sub_35EC(a1);
  }
  else
  {
    sub_35EC(*(_DWORD *)(a1 + 48));
    sub_35EC(a1);
  }
}

//----- (00002E14) --------------------------------------------------------
int __fastcall sub_2E14(BOOL *a1)
{
  int v1; // r2
  BOOL v2; // r1

  v1 = dword_2000125C;
  v2 = *dword_2000125C == 0;
  *a1 = v2;
  if ( v2 )
    return 0;
  else
    return **(_DWORD **)(v1 + 12);
}

//----- (00002E38) --------------------------------------------------------
void __cdecl sub_2E38()
{
  dword_20001278 = 0x20000100;
  unk_2000127C = 0;
  unk_20001268 = 0x200008F8;
  unk_200008FC = 0;
  unk_200008F8 = 0;
  unk_20000104 = 2040;
  unk_20000100 = 0x200008F8;
  unk_20001270 = 2040;
  unk_2000126C = 2040;
  unk_20001274 = 0x80000000;
}
// 20001278: using guessed type _DWORD dword_20001278;

//----- (00002E84) --------------------------------------------------------
void __noreturn Idlee_loop()
{
  while ( 1 )
  {
    do
      sub_2D1C();
    while ( dword_20000900[0] <= 1u );
    sub_3628();
  }
}
// 2E84: using guessed type void __noreturn Idlee_loop();
// 20000900: using guessed type _DWORD dword_20000900[290];

//----- (00002E9C) --------------------------------------------------------
void __fastcall sub_2E9C(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  if ( a2 )
    *a5 = a3;
  else
    *a5 = a5;
  a5[15] = a1;
  a5[16] = a2;
  sub_38CE((int)a5, 1);
}

//----- (00002EB8) --------------------------------------------------------
void __fastcall sub_2EB8(int a1, int a2, int a3, int a4, unsigned int a5, _DWORD *a6, int a7)
{
  unsigned int v7; // r5
  unsigned int i; // r0
  unsigned int v11; // [sp+0h] [bp-28h]

  v7 = a5;
  memset(*(_BYTE **)(a7 + 48), 4 * a3, 165);
  v11 = 8 * ((unsigned int)(*(_DWORD *)(a7 + 48) + 4 * (a3 - 1)) >> 3);
  for ( i = 0; i < 0x10; ++i )
  {
    *(_BYTE *)(a7 + i + 52) = *(_BYTE *)(a2 + i);
    if ( !*(_BYTE *)(a2 + i) )
      break;
  }
  *(_BYTE *)(a7 + 67) = 0;
  if ( a5 >= 0x38 )
    v7 = 55;
  *(_DWORD *)(a7 + 44) = v7;
  *(_DWORD *)(a7 + 68) = v7;
  *(_DWORD *)(a7 + 72) = 0;
  sub_3570(a7 + 4);
  sub_3570(a7 + 24);
  *(_DWORD *)(a7 + 16) = a7;
  *(_DWORD *)(a7 + 24) = 56 - v7;
  *(_DWORD *)(a7 + 36) = a7;
  *(_DWORD *)(a7 + 76) = 0;
  *(_BYTE *)(a7 + 80) = 0;
  *(_DWORD *)a7 = sub_3390(v11, a1, a4);
  if ( a6 )
    *a6 = a7;
}
// 3390: using guessed type int __fastcall sub_3390(_DWORD, _DWORD, _DWORD);
// 3570: using guessed type int __fastcall sub_3570(_DWORD);

//----- (00002F40) --------------------------------------------------------
void __cdecl sub_2F40()
{
  unsigned int i; // r4

  for ( i = 0; i < 0x38; ++i )
    sub_355A((_DWORD *)(20 * i + 0x20000900));
  sub_355A(&dword_20000900[280]);
  sub_355A(&dword_20000900[285]);
  sub_355A(dword_20000D88);
  sub_355A(dword_20000D9C);
  sub_355A(dword_20000DB0);
  dword_20001248 = dword_20000900 + 1120;
  unk_2000124C = 0x20000D74;
}
// 20000900: using guessed type _DWORD dword_20000900[290];
// 20000D88: using guessed type _DWORD dword_20000D88[3];
// 20000D9C: using guessed type _DWORD dword_20000D9C[3];
// 20000DB0: using guessed type _DWORD dword_20000DB0[43];
// 20001248: using guessed type _DWORD *dword_20001248;

//----- (00002F94) --------------------------------------------------------
void __fastcall sub_2F94(_DWORD *result)
{
  _DWORD *i; // r1
  _DWORD *v2; // r2
  int v3; // r3
  int v4; // r3

  for ( i = &dword_20001278; ; i = (_DWORD *)*i )
  {
    v2 = (_DWORD *)*i;
    if ( *i >= (unsigned int)result )
      break;
  }
  v3 = i[1];
  if ( (_DWORD *)((char *)i + v3) == result )
  {
    i[1] = v3 + result[1];
    result = i;
  }
  v4 = result[1];
  if ( (_DWORD *)((char *)result + v4) == (_DWORD *)*i )
  {
    if ( v2 == (_DWORD *)unk_20001268 )
    {
      *result = unk_20001268;
    }
    else
    {
      result[1] = v4 + v2[1];
      *result = *(_DWORD *)*i;
    }
  }
  else
  {
    *result = v2;
  }
  if ( i != result )
    *i = result;
}

//----- (00002FE8) --------------------------------------------------------
int __fastcall sub_2FE8(_DWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r4

  v4 = 0;
  a1[1] = a2;
  a1[4] = a1;
  if ( a2 > a3 )
  {
    if ( a3 >= a4 || a2 < a4 )
      sub_3576(dword_2000125C, a1 + 1);
    else
      return 1;
  }
  else if ( a3 - a4 < a1[6] )
  {
    sub_3576(unk_20001260, a1 + 1);
  }
  else
  {
    return 1;
  }
  return v4;
}

//----- (00003028) --------------------------------------------------------
BOOL __fastcall sub_3028(int a1)
{
  BOOL v2; // r4

  disable_IRQ();
  v2 = *(_DWORD *)(a1 + 56) == 0;
  enable_IRQ();
  return v2;
}

//----- (00003044) --------------------------------------------------------
BOOL __fastcall sub_3044(int a1)
{
  BOOL v2; // r4

  disable_IRQ();
  v2 = *(_DWORD *)(a1 + 56) == *(_DWORD *)(a1 + 60);
  enable_IRQ();
  return v2;
}

//----- (00003064) --------------------------------------------------------
int __fastcall sub_3064(int a1, int a2)
{
  int v4; // r4

  v4 = *(_DWORD *)(*(_DWORD *)(dword_2000125C + 12) + 12);
  sub_3508((_DWORD *)(v4 + 4));
  if ( *(_DWORD *)(v4 + 28) == 1 && sub_2FE8(v4, *(_DWORD *)(v4 + 24) + a1, a2, a1) )
    sub_3EEC(v4, 0, a1, 0);
  return (*(int (__fastcall **)(int))(v4 + 36))(v4);
}
// 2FE8: using guessed type int __fastcall sub_2FE8(_DWORD, _DWORD, _DWORD, _DWORD);
// 3EEC: using guessed type int __fastcall sub_3EEC(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (000030AC) --------------------------------------------------------
void __cdecl sub_30AC()
{
  int v0; // r4
  unsigned int v1; // r2
  void (__fastcall *v2)(int, int); // r0
  char v3[4]; // [sp+8h] [bp-20h] BYREF
  int v4; // [sp+Ch] [bp-1Ch] BYREF
  void (__fastcall *v5)(int, int); // [sp+10h] [bp-18h]
  int v6; // [sp+14h] [bp-14h]
  int v7; // [sp+18h] [bp-10h]

LABEL_14:
  while ( sub_3A7E(dword_20001250, (unsigned int)&v4, 0) )
  {
    if ( v4 < 0 )
      v5(v6, v7);
    if ( v4 >= 0 )
    {
      v0 = v6;
      if ( *(_DWORD *)(v6 + 20) )
        sub_3508((_DWORD *)(v6 + 4));
      v1 = sub_31E4(v3);
      switch ( (char)v4 )
      {
        case 0:
        case 1:
        case 2:
        case 6:
        case 7:
          if ( sub_2FE8((_DWORD *)v0, (unsigned int)v5 + *(_DWORD *)(v0 + 24), v1, (unsigned int)v5) )
          {
            (*(void (__fastcall **)(int))(v0 + 36))(v0);
            if ( *(_DWORD *)(v0 + 28) == 1 )
              sub_3EEC(v0, 0, (char *)v5 + *(_DWORD *)(v0 + 24), 0);
          }
          break;
        case 4:
        case 9:
          v2 = v5;
          *(_DWORD *)(v0 + 24) = v5;
          sub_2FE8((_DWORD *)v0, (unsigned int)v2 + v1, v1, v1);
          break;
        case 5:
          if ( !*(_BYTE *)(v0 + 40) )
            sub_35EC(v0);
          break;
        default:
          goto LABEL_14;
      }
    }
  }
}
// 3EEC: using guessed type int __fastcall sub_3EEC(_DWORD, _DWORD, _DWORD, _DWORD);
// 30AC: using guessed type char var_20[4];

//----- (0000315C) --------------------------------------------------------
void __fastcall sub_315C(unsigned int a1, BOOL a2)
{
  unsigned int v4; // r4
  int v5; // [sp+0h] [bp-18h] BYREF

  sub_3800();
  v4 = sub_31E4(&v5);
  if ( v5 )
  {
    sub_3DF0();
  }
  else if ( a2 || a1 > v4 )
  {
    if ( a2 )
      a2 = *unk_20001260 == 0;
    sub_3640(dword_20001250, a1 - v4, a2);
    if ( !sub_3DF0() )
      sub_3628();
  }
  else
  {
    sub_3DF0();
    sub_3064(a1, v4);
  }
}
// 31E4: using guessed type int __fastcall sub_31E4(_DWORD);
// 3640: using guessed type int __fastcall sub_3640(_DWORD, _DWORD, _DWORD);

//----- (000031C0) --------------------------------------------------------
void __cdecl sub_31C0()
{
  if ( *dword_20001248 )
    unk_2000123C = *(_DWORD *)(*(_DWORD *)(dword_20001248[3] + 12) + 4);
  else
    unk_2000123C = -1;
}
// 20001248: using guessed type _DWORD *dword_20001248;

//----- (000031E4) --------------------------------------------------------
unsigned int __fastcall sub_31E4(_DWORD *a1)
{
  unsigned int v2; // r4

  v2 = sub_3C68();
  if ( v2 >= unk_20001258 )
  {
    *a1 = 0;
  }
  else
  {
    sub_3210();
    *a1 = 1;
  }
  unk_20001258 = v2;
  return v2;
}
// 3C68: using guessed type int sub_3C68(void);

//----- (00003210) --------------------------------------------------------
void __cdecl sub_3210()
{
  unsigned int *v0; // r0
  unsigned int v1; // r5
  unsigned int v2; // r4
  unsigned int v3; // r0
  _DWORD *v4; // r0

  while ( *dword_2000125C )
  {
    v0 = (unsigned int *)dword_2000125C[3];
    v1 = *v0;
    v2 = v0[3];
    sub_3508((_DWORD *)(v2 + 4));
    (*(void (__fastcall **)(unsigned int))(v2 + 36))(v2);
    if ( *(_DWORD *)(v2 + 28) == 1 )
    {
      v3 = *(_DWORD *)(v2 + 24) + v1;
      if ( v3 <= v1 )
      {
        sub_3EEC(v2, 0, v1, 0);
      }
      else
      {
        *(_DWORD *)(v2 + 4) = v3;
        *(_DWORD *)(v2 + 16) = v2;
        sub_3576(dword_2000125C, (_DWORD *)(v2 + 4));
      }
    }
  }
  v4 = dword_2000125C;
  dword_2000125C = (_DWORD *)unk_20001260;
  unk_20001260 = v4;
}
// 3EEC: using guessed type int __fastcall sub_3EEC(_DWORD, _DWORD, _DWORD, _DWORD);
// 2000125C: using guessed type _DWORD *dword_2000125C;

//----- (0000326C) --------------------------------------------------------
void __noreturn wait_forever()
{
  __disable_irq();
  while ( 1 )
    ;
}

//----- (00003270) --------------------------------------------------------
void __fastcall __noreturn sub_3270(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  BOOL a2a; // [sp+0h] [bp-8h] BYREF

  a2a = a4;
  while ( 1 )
  {
    v4 = sub_2E14(&a2a);
    sub_315C(v4, a2a);
    sub_30AC();
  }
}

//----- (00003284) --------------------------------------------------------
void __fastcall sub_3284(int a1)
{
  int i; // r5
  int v3; // r0
  int j; // r5
  int v5; // r0

  disable_IRQ();
  for ( i = *(char *)(a1 + 69); i > 0 && *(_DWORD *)(a1 + 36); i = (char)(i - 1) )
  {
    v3 = sub_3D8C(a1 + 36);
    if ( v3 )
      sub_36BC(v3);
  }
  *(_BYTE *)(a1 + 69) = -1;
  enable_IRQ();
  disable_IRQ();
  for ( j = *(char *)(a1 + 68); j > 0 && *(_DWORD *)(a1 + 16); j = (char)(j - 1) )
  {
    v5 = sub_3D8C(a1 + 16);
    if ( v5 )
      sub_36BC(v5);
  }
  *(_BYTE *)(a1 + 68) = -1;
  enable_IRQ();
}
// 36BC: using guessed type int __fastcall sub_36BC(_DWORD);

//----- (000032F4) --------------------------------------------------------
int __fastcall sub_32F4(unsigned int a1)
{
  int v2; // r6
  _DWORD *v3; // r1
  _DWORD *i; // r4
  unsigned int v5; // r1
  int v6; // r1
  unsigned int v7; // r0

  v2 = 0;
  sub_3800();
  if ( !unk_20001268 )
    sub_2E38();
  if ( (a1 & unk_20001274) == 0 )
  {
    if ( a1 )
    {
      a1 += 8;
      if ( a1 << 29 )
        a1 += 8 - (a1 & 7);
    }
    if ( a1 && a1 <= unk_2000126C )
    {
      v3 = &dword_20001278;
      for ( i = (_DWORD *)dword_20001278; i[1] < a1 && *i; i = (_DWORD *)*i )
        v3 = i;
      if ( i != (_DWORD *)unk_20001268 )
      {
        v2 = *v3 + 8;
        *v3 = *i;
        v5 = i[1] - a1;
        if ( v5 > 0x10 )
        {
          *(_DWORD *)((char *)i + a1 + 4) = v5;
          i[1] = a1;
          sub_2F94((_DWORD *)((char *)i + a1));
        }
        v6 = i[1];
        v7 = unk_2000126C - v6;
        unk_2000126C = v7;
        if ( v7 < unk_20001270 )
          unk_20001270 = v7;
        i[1] = v6 | unk_20001274;
        *i = 0;
      }
    }
  }
  sub_3DF0();
  return v2;
}
// 20001278: using guessed type _DWORD dword_20001278;

//----- (00003390) --------------------------------------------------------
void (__noreturn **__fastcall sub_3390(int a1, void (__noreturn *a2)(), void (__noreturn *a3)()))()
{
  void (__noreturn **v3)(); // r0

  v3 = (void (__noreturn **)())(a1 - 4);
  *v3-- = (void (__noreturn *)())0x1000000;
  *v3-- = a2;
  *v3 = wait_forever;
  v3 -= 5;
  *v3 = a3;
  return v3 - 8;
}

//----- (000033B0) --------------------------------------------------------
void __fastcall SPI_send_DC_byte(int a1, char a2)
{
  unsigned int v4; // r4

  GPIO_low(0x100);
  GPIO_low(0x200);
  if ( a1 )
    GPIO_high(0x400);
  else
    GPIO_low(0x400);
  GPIO_high(0x200);
  GPIO_low(0x200);
  LOBYTE(v4) = 0;
  do
  {
    if ( (a2 & 0x80) != 0 )
      GPIO_high(0x400);
    else
      GPIO_low(0x400);
    GPIO_high(0x200);
    GPIO_low(0x200);
    a2 *= 2;
    v4 = (unsigned __int8)(v4 + 1);
  }
  while ( v4 < 8 );
  GPIO_low(0x400);
  GPIO_high(0x100);
}

//----- (00003424) --------------------------------------------------------
void __fastcall SPI_send_100_DC_byte(__int16 a1)
{
  if ( (a1 & 0x100) != 0 )
    SPI_send_DC_byte(1, a1);
  else
    SPI_send_DC_byte(0, a1);
}

//----- (00003440) --------------------------------------------------------
void sub_3440()
{
  if ( unk_200012A0[0] )
  {
    switch ( unk_200012A0[0] )
    {
      case 5u:
        sub_1444(0, 0);
        break;
      case 9u:
        if ( sub_1F64() )
          --unk_200012A0[0];
        else
          sub_1404();
        break;
      case 10u:
        unk_200012A0[0] = 9;
        sub_1444(32, 0);
        sub_1404();
        break;
      default:
        --unk_200012A0[0];
        break;
    }
  }
  else
  {
    sub_13F0();
  }
}
// 200012A0: using guessed type unsigned __int8;

//----- (000034A8) --------------------------------------------------------
void __fastcall sub_34A8(int a1, int a2)
{
  int v4; // r4

  disable_IRQ();
  if ( !dword_20001214[19] )
  {
    *((_BYTE *)dword_20001214 + 80) = 1;
    if ( a2 )
    {
      sub_2C04(a2, 1);
      sub_3628();
    }
  }
  enable_IRQ();
  disable_IRQ();
  v4 = dword_20001214[19];
  if ( v4 )
  {
    if ( a1 )
      dword_20001214[19] = 0;
    else
      dword_20001214[19] = v4 - 1;
  }
  *((_BYTE *)dword_20001214 + 80) = 0;
  enable_IRQ();
}
// 20001214: using guessed type _DWORD *dword_20001214;

//----- (00003508) --------------------------------------------------------
void __fastcall sub_3508(_DWORD *a1)
{
  _DWORD *v1; // r1

  v1 = (_DWORD *)a1[4];
  *(_DWORD *)(a1[1] + 8) = a1[2];
  *(_DWORD *)(a1[2] + 4) = a1[1];
  if ( (_DWORD *)v1[1] == a1 )
    v1[1] = a1[2];
  a1[4] = 0;
  --*v1;
}

//----- (00003530) --------------------------------------------------------
void __fastcall sub_3530(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  *a1 = 0x20000E84;
  *a2 = 0x20000ED8;
  *a3 = 96;
}

//----- (00003544) --------------------------------------------------------
int __fastcall sub_3544(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0

  *a1 = 0x20001058;
  *a2 = 0x200010AC;
  result = 80;
  *a3 = 80;
  return result;
}

//----- (0000355A) --------------------------------------------------------
void __fastcall sub_355A(_DWORD *result)
{
  result[1] = result + 2;
  result[2] = 0xFFFFFFFF;
  result[3] = result + 2;
  result[4] = result + 2;
  *result = 0;
}

//----- (00003570) --------------------------------------------------------
void __fastcall sub_3570(int result)
{
  *(_DWORD *)(result + 16) = 0;
}

//----- (00003576) --------------------------------------------------------
void __fastcall sub_3576(_DWORD *result, _DWORD *a2)
{
  _DWORD *i; // r2
  int v3; // r3

  if ( *a2 == -1 )
  {
    i = (_DWORD *)result[4];
  }
  else
  {
    for ( i = result + 2; *(_DWORD *)i[1] <= *a2; i = (_DWORD *)i[1] )
      ;
  }
  v3 = i[1];
  a2[1] = v3;
  *(_DWORD *)(v3 + 8) = a2;
  a2[2] = i;
  i[1] = a2;
  a2[4] = result;
  ++*result;
}

//----- (000035A6) --------------------------------------------------------
void __fastcall sub_35A6(_DWORD *result, _DWORD *a2)
{
  int v2; // r2

  v2 = result[1];
  a2[1] = v2;
  a2[2] = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4) = a2;
  *(_DWORD *)(v2 + 8) = a2;
  a2[4] = result;
  ++*result;
}

//----- (000035C0) --------------------------------------------------------
void __cdecl disable_IRQ()
{
  __disable_irq();
  ++unk_20001264;
  __dsb(0xFu);
  __isb(0xFu);
}

//----- (000035D8) --------------------------------------------------------
void __cdecl enable_IRQ()
{
  if ( !--unk_20001264 )
    __enable_irq();
}

//----- (000035EC) --------------------------------------------------------
void __fastcall sub_35EC(int result)
{
  _DWORD *v1; // r4
  int v2; // r0

  if ( result )
  {
    v1 = (_DWORD *)(result - 8);
    v2 = *(_DWORD *)(result - 4);
    if ( (v2 & unk_20001274) != 0 && !*v1 )
    {
      v1[1] = v2 & ~unk_20001274;
      sub_3800();
      unk_2000126C += v1[1];
      sub_2F94(v1);
      sub_3DF0();
    }
  }
}

//----- (00003628) --------------------------------------------------------
void __cdecl sub_3628()
{
  MEMORY[0xE000ED04] = 0x10000000;
  __dsb(0xFu);
  __isb(0xFu);
}

//----- (00003640) --------------------------------------------------------
void __fastcall sub_3640(int a1, int a2, int a3)
{
  disable_IRQ();
  if ( *(char *)(a1 + 68) == -1 )
    *(_BYTE *)(a1 + 68) = 0;
  if ( *(char *)(a1 + 69) == -1 )
    *(_BYTE *)(a1 + 69) = 0;
  enable_IRQ();
  if ( !*(_DWORD *)(a1 + 56) )
    sub_3768((_DWORD *)(a1 + 36), a2, a3);
  sub_3284(a1);
}

//----- (00003686) --------------------------------------------------------
void __fastcall sub_3686(int a1)
{
  int v2; // r0
  int v3; // r2

  v2 = 0;
  if ( a1 )
  {
    sub_3800();
    sub_2C04(v3, 0);
    v2 = sub_3DF0();
  }
  if ( !v2 )
    sub_3628();
}
// 3698: variable 'v3' is possibly undefined

//----- (000036AC) --------------------------------------------------------
void __fastcall sub_36AC(_DWORD *result)
{
  *result = unk_20001234;
  result[1] = unk_20001220;
}

//----- (000036BC) --------------------------------------------------------
void __cdecl sub_36BC()
{
  unk_20001230 = 1;
}

//----- (000036C8) --------------------------------------------------------
void __fastcall sub_36C8(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r5
  unsigned int v5; // r7
  int v6; // r0
  unsigned int v7; // r0

  v4 = a1 + 16;
  disable_IRQ_0();
  v5 = disable_IRQ_0();
  v6 = *((unsigned __int8 *)v4 + 16);
  *((_BYTE *)v4 + 16) = 2;
  ++a1[19];
  if ( v6 == 1 )
  {
    if ( unk_20001244 )
    {
      sub_35A6(dword_20000D88, a1 + 6);
    }
    else
    {
      sub_3508(a1 + 1);
      v7 = a1[11];
      if ( v7 > unk_20001224 )
        unk_20001224 = a1[11];
      sub_35A6((_DWORD *)(20 * v7 + 0x20000900), a1 + 1);
    }
    if ( a1[11] > dword_20001214[11] )
    {
      if ( a2 )
        *a2 = 1;
      else
        unk_20001230 = 1;
    }
  }
  enable_IRQ_0(v5);
}
// 104: using guessed type int __fastcall enable_IRQ_0(_DWORD);
// 20000D88: using guessed type _DWORD dword_20000D88[3];
// 20001214: using guessed type _DWORD *dword_20001214;

//----- (0000374C) --------------------------------------------------------
void __fastcall sub_374C(_DWORD *a1, int a2)
{
  sub_3576(a1, (_DWORD *)(dword_20001214 + 24));
  sub_2C04(a2, 1);
}

//----- (00003768) --------------------------------------------------------
void __fastcall sub_3768(_DWORD *a1, int a2, int a3)
{
  sub_35A6(a1, (_DWORD *)(dword_20001214 + 24));
  if ( a3 )
    a2 = -1;
  sub_2C04(a2, a3);
}

//----- (00003794) --------------------------------------------------------
void __cdecl sub_3794()
{
  int v0; // r0
  int a3; // [sp+10h] [bp-18h] BYREF
  int a2; // [sp+14h] [bp-14h] BYREF
  int a1; // [sp+18h] [bp-10h] BYREF

  a1 = 0;
  a2 = 0;
  get_Tmr_Idle_values(&a1, &a2, &a3);
  unk_20001240 = create_timer((int)Idlee_loop, (int)"IDLE", a3, 0, 0, a2, a1);
  v0 = unk_20001240 != 0;
  if ( v0 == 1 )
    v0 = sub_3E94();
  if ( v0 == 1 )
  {
    __disable_irq();
    unk_2000123C = -1;
    unk_20001228 = 1;
    unk_20001220 = 0;
    sub_3860();
  }
}
// 2E84: using guessed type void __noreturn Idlee_loop();

//----- (00003800) --------------------------------------------------------
void __cdecl sub_3800()
{
  ++unk_20001244;
}

//----- (00003810) --------------------------------------------------------
void __cdecl sub_3810()
{
  int i; // r0
  int v1; // r2

  if ( unk_20001244 )
  {
    unk_20001230 = 1;
  }
  else
  {
    unk_20001230 = 0;
    for ( i = unk_20001224; !dword_20000900[5 * i]; --i )
      ;
    v1 = *(_DWORD *)(dword_20000900[5 * i + 1] + 4);
    dword_20000900[5 * i + 1] = v1;
    if ( v1 == 20 * i + 536873224 )
      dword_20000900[5 * i + 1] = *(_DWORD *)(v1 + 4);
    dword_20001214 = *(_DWORD **)(dword_20000900[5 * i + 1] + 12);
    unk_20001224 = i;
  }
}
// 20000900: using guessed type _DWORD dword_20000900[290];
// 20001214: using guessed type _DWORD *dword_20001214;

//----- (00003860) --------------------------------------------------------
void __cdecl sub_3860()
{
  MEMORY[0xE000ED20] |= 0xFF0000u;
  MEMORY[0xE000ED20] |= 0xFF000000;
  sub_1FF0();
  unk_20001264 = 0;
  sub_D4();
}

//----- (00003890) --------------------------------------------------------
void __cdecl sub_3890()
{
  unsigned int v0; // r4

  v0 = disable_IRQ_0();
  if ( sub_3C74() )
    MEMORY[0xE000ED04] = 0x10000000;
  enable_IRQ_0(v0);
}
// 104: using guessed type int __fastcall enable_IRQ_0(_DWORD);

//----- (000038B4) --------------------------------------------------------
int __fastcall sub_38B4(int a1, int a2, int a3, int a4, int a5)
{
  if ( a4 )
  {
    *(_BYTE *)(a4 + 70) = 1;
    sub_2E9C(a1, a2, a3, a5, (_DWORD *)a4);
  }
  return a4;
}

//----- (000038CE) --------------------------------------------------------
void __fastcall sub_38CE(int a1, int a2)
{
  _DWORD *v4; // r0

  disable_IRQ();
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 60) * *(_DWORD *)(a1 + 64) + *(_DWORD *)a1;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 12) = (*(_DWORD *)(a1 + 60) - 1) * *(_DWORD *)(a1 + 64) + *(_DWORD *)a1;
  *(_BYTE *)(a1 + 68) = -1;
  *(_BYTE *)(a1 + 69) = -1;
  v4 = (_DWORD *)(a1 + 16);
  if ( a2 )
  {
    sub_355A(v4);
    sub_355A((_DWORD *)(a1 + 36));
  }
  else if ( *(_DWORD *)(a1 + 16) && sub_3D8C((int)v4) )
  {
    sub_3628();
  }
  enable_IRQ();
}

//----- (00003936) --------------------------------------------------------
int __fastcall sub_3936(int a1, unsigned int a2, int a3, int a4)
{
  int v6; // r5
  int v7; // r0
  char v9[8]; // [sp+4h] [bp-2Ch] BYREF
  int v10; // [sp+Ch] [bp-24h]
  unsigned int v11; // [sp+10h] [bp-20h]
  int v12[7]; // [sp+14h] [bp-1Ch] BYREF

  v10 = a1;
  v11 = a2;
  v12[0] = a3;
  v12[1] = a4;
  v6 = 0;
  while ( 1 )
  {
    disable_IRQ();
    if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)(a1 + 60) || a4 == 2 )
    {
      v7 = sub_2D7C((unsigned int *)a1, v11, a4);
      if ( *(_DWORD *)(a1 + 36) )
      {
        if ( sub_3D8C(a1 + 36) )
          goto LABEL_11;
      }
      else if ( v7 )
      {
LABEL_11:
        sub_3628();
      }
      enable_IRQ();
      return 1;
    }
    if ( !v12[0] )
    {
      enable_IRQ();
      return 0;
    }
    if ( !v6 )
    {
      sub_36AC(v9);
      v6 = 1;
    }
    enable_IRQ();
    sub_3800();
    disable_IRQ();
    if ( *(char *)(a1 + 68) == -1 )
      *(_BYTE *)(a1 + 68) = 0;
    if ( *(char *)(a1 + 69) == -1 )
      *(_BYTE *)(a1 + 69) = 0;
    enable_IRQ();
    if ( sub_3B5C(v9, v12) )
      break;
    if ( sub_3044(a1) )
    {
      sub_374C(a1 + 16, v12[0]);
      sub_3284(a1);
      if ( !sub_3DF0() )
        sub_3628();
    }
    else
    {
      sub_3284(a1);
      sub_3DF0();
    }
  }
  sub_3284(a1);
  sub_3DF0();
  return 0;
}
// 3044: using guessed type int __fastcall sub_3044(_DWORD);
// 3284: using guessed type int __fastcall sub_3284(_DWORD);
// 36AC: using guessed type int __fastcall sub_36AC(_DWORD);
// 374C: using guessed type int __fastcall sub_374C(_DWORD, _DWORD);
// 3B5C: using guessed type int __fastcall sub_3B5C(_DWORD, _DWORD);
// 3936: using guessed type int var_1C[7];

//----- (00003A18) --------------------------------------------------------
int __fastcall sub_3A18(int a1, unsigned int a2, _DWORD *a3, int a4)
{
  int v6; // r4
  int v8; // r5
  unsigned int v9; // [sp+0h] [bp-28h]

  v9 = disable_IRQ_0();
  if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)(a1 + 60) || a4 == 2 )
  {
    v8 = *(char *)(a1 + 69);
    sub_2D7C((unsigned int *)a1, a2, a4);
    if ( v8 == -1 )
    {
      if ( *(_DWORD *)(a1 + 36) && sub_3D8C(a1 + 36) && a3 )
        *a3 = 1;
    }
    else
    {
      *(_BYTE *)(a1 + 69) = v8 + 1;
    }
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  enable_IRQ_0(v9);
  return v6;
}
// 104: using guessed type int __fastcall enable_IRQ_0(_DWORD);

//----- (00003A7E) --------------------------------------------------------
int __fastcall sub_3A7E(int a1, unsigned int r1_0, int a3)
{
  int v4; // r5
  int v5; // r7
  _DWORD v7[3]; // [sp+0h] [bp-28h] BYREF
  unsigned int a2; // [sp+Ch] [bp-1Ch]
  int v9; // [sp+10h] [bp-18h] BYREF

  v7[2] = a1;
  a2 = r1_0;
  v9 = a3;
  v4 = 0;
  while ( 1 )
  {
    disable_IRQ();
    v5 = *(_DWORD *)(a1 + 56);
    if ( v5 )
      break;
    if ( !v9 )
    {
      enable_IRQ();
      return 0;
    }
    if ( !v4 )
    {
      sub_36AC(v7);
      v4 = 1;
    }
    enable_IRQ();
    sub_3800();
    disable_IRQ();
    if ( *(char *)(a1 + 68) == -1 )
      *(_BYTE *)(a1 + 68) = 0;
    if ( *(char *)(a1 + 69) == -1 )
      *(_BYTE *)(a1 + 69) = 0;
    enable_IRQ();
    if ( sub_3B5C(v7, &v9) )
    {
      sub_3284(a1);
      sub_3DF0();
      if ( sub_3028(a1) )
        return 0;
    }
    else if ( sub_3028(a1) )
    {
      sub_374C(a1 + 36, v9);
      sub_3284(a1);
      if ( !sub_3DF0() )
        sub_3628();
    }
    else
    {
      sub_3284(a1);
      sub_3DF0();
    }
  }
  sub_2D58((_DWORD *)a1, a2);
  *(_DWORD *)(a1 + 56) = v5 - 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    if ( sub_3D8C(a1 + 16) )
      sub_3628();
  }
  enable_IRQ();
  return 1;
}
// 3028: using guessed type int __fastcall sub_3028(_DWORD);
// 3284: using guessed type int __fastcall sub_3284(_DWORD);
// 36AC: using guessed type int __fastcall sub_36AC(_DWORD);
// 374C: using guessed type int __fastcall sub_374C(_DWORD, _DWORD);
// 3B5C: using guessed type int __fastcall sub_3B5C(_DWORD, _DWORD);

//----- (00003B5C) --------------------------------------------------------
int __fastcall sub_3B5C(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // r3
  unsigned int v5; // r0
  unsigned int v6; // r1
  int v7; // r4

  disable_IRQ();
  v4 = a1[1];
  v5 = unk_20001220 - v4;
  v6 = *a2;
  if ( *a2 == -1 )
  {
    v7 = 0;
  }
  else if ( *a1 == unk_20001234 || v4 > unk_20001220 )
  {
    if ( v6 <= v5 )
    {
      *a2 = 0;
      v7 = 1;
    }
    else
    {
      *a2 = v6 - v5;
      sub_36AC(a1);
      v7 = 0;
    }
  }
  else
  {
    v7 = 1;
  }
  enable_IRQ();
  return v7;
}

//----- (00003BAC) --------------------------------------------------------
int __fastcall create_task(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r5
  int v8; // r0
  int v9; // r4

  v7 = sub_32F4(4 * a3);
  if ( v7 )
  {
    v8 = sub_32F4(84);
    v9 = v8;
    if ( v8 )
      *(_DWORD *)(v8 + 48) = v7;
    else
      sub_35EC(v7);
  }
  else
  {
    v9 = 0;
  }
  if ( !v9 )
    return -1;
  *(_BYTE *)(v9 + 81) = 0;
  sub_2EB8(a1, a2, a3, a4, a5, (_DWORD *)a6, v9);
  sub_2C5C(v9);
  return 1;
}
// 2C5C: using guessed type int __fastcall sub_2C5C(_DWORD);
// 32F4: using guessed type int __fastcall sub_32F4(_DWORD);
// 35EC: using guessed type int __fastcall sub_35EC(_DWORD);

//----- (00003C0C) --------------------------------------------------------
int __fastcall sub_3C0C(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8[6]; // [sp+10h] [bp-18h] BYREF

  if ( !a7 || !a6 )
    return 0;
  *(_DWORD *)(a7 + 48) = a6;
  *(_BYTE *)(a7 + 81) = 2;
  sub_2EB8(a1, a2, a3, a4, a5, v8, a7);
  sub_2C5C(a7);
  return v8[0];
}
// 3C0C: using guessed type int var_18[6];

//----- (00003C48) --------------------------------------------------------
int sub_3C48()
{
  if ( !unk_20001228 )
    return 1;
  if ( unk_20001244 )
    return 0;
  return 2;
}

//----- (00003C68) --------------------------------------------------------
int sub_3C68()
{
  return unk_20001220;
}

//----- (00003C74) --------------------------------------------------------
int sub_3C74()
{
  int v0; // r6
  unsigned int v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  unsigned int v5; // r0

  v0 = 0;
  if ( unk_20001244 )
  {
    ++unk_2000122C;
    nullsub_3();
  }
  else
  {
    v2 = unk_20001220 + 1;
    unk_20001220 = v2;
    if ( !v2 )
    {
      v3 = dword_20001248;
      dword_20001248 = (_DWORD *)unk_2000124C;
      unk_2000124C = v3;
      ++unk_20001234;
      sub_31C0();
    }
    if ( v2 >= unk_2000123C )
    {
      while ( *dword_20001248 )
      {
        v4 = *(_DWORD **)(dword_20001248[3] + 12);
        if ( v2 < v4[1] )
        {
          unk_2000123C = v4[1];
          goto LABEL_13;
        }
        sub_3508(v4 + 1);
        if ( v4[10] )
          sub_3508(v4 + 6);
        v5 = v4[11];
        if ( v5 > unk_20001224 )
          unk_20001224 = v4[11];
        sub_35A6((_DWORD *)(20 * v5 + 536873216), v4 + 1);
        if ( v4[11] >= *(_DWORD *)(dword_20001214 + 44) )
          v0 = 1;
      }
      unk_2000123C = -1;
    }
LABEL_13:
    if ( dword_20000900[5 * *(_DWORD *)(dword_20001214 + 44)] > 1u )
      v0 = 1;
    if ( !unk_2000122C )
      nullsub_3();
  }
  if ( unk_20001230 )
    return 1;
  return v0;
}
// 3558: using guessed type int nullsub_3(void);
// 20000900: using guessed type _DWORD[290];
// 20001248: using guessed type _DWORD *dword_20001248;

//----- (00003D38) --------------------------------------------------------
int __fastcall sub_3D38(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r0
  unsigned int v5; // r0

  result = 0;
  if ( a1 )
  {
    v3 = a1[18] - 1;
    a1[18] = v3;
    if ( a1[11] != a1[17] && !v3 )
    {
      sub_3508(a1 + 1);
      v4 = a1[17];
      a1[11] = v4;
      a1[6] = 56 - v4;
      v5 = a1[11];
      if ( v5 > unk_20001224 )
        unk_20001224 = a1[11];
      sub_35A6((_DWORD *)(20 * v5 + 536873216), a1 + 1);
      return 1;
    }
  }
  return result;
}

//----- (00003D8C) --------------------------------------------------------
int __fastcall sub_3D8C(int a1)
{
  _DWORD *v1; // r4
  int result; // r0
  unsigned int v3; // r0

  v1 = *(_DWORD **)(*(_DWORD *)(a1 + 12) + 12);
  sub_3508(v1 + 6);
  if ( unk_20001244 )
  {
    sub_35A6(dword_20000D88, v1 + 6);
  }
  else
  {
    sub_3508(v1 + 1);
    v3 = v1[11];
    if ( v3 > unk_20001224 )
      unk_20001224 = v1[11];
    sub_35A6((_DWORD *)(20 * v3 + 0x20000900), v1 + 1);
  }
  if ( v1[11] <= dword_20001214[11] )
    return 0;
  result = 1;
  unk_20001230 = 1;
  return result;
}
// 20000D88: using guessed type _DWORD dword_20000D88[3];

//----- (00003DF0) --------------------------------------------------------
int sub_3DF0()
{
  _DWORD *v0; // r4
  int v1; // r7
  unsigned int v2; // r0
  int v3; // r4

  v0 = 0;
  v1 = 0;
  disable_IRQ();
  if ( !--unk_20001244 && unk_2000121C )
  {
    while ( dword_20000D88[0] )
    {
      v0 = *(_DWORD **)(unk_20000D94 + 12);
      sub_3508(v0 + 6);
      sub_3508(v0 + 1);
      v2 = v0[11];
      if ( v2 > unk_20001224 )
        unk_20001224 = v0[11];
      sub_35A6((_DWORD *)(20 * v2 + 0x20000900), v0 + 1);
      if ( v0[11] >= dword_20001214[11] )
        unk_20001230 = 1;
    }
    if ( v0 )
      sub_31C0();
    v3 = unk_2000122C;
    if ( unk_2000122C )
    {
      do
      {
        if ( sub_3C74() )
          unk_20001230 = 1;
        --v3;
      }
      while ( v3 );
      unk_2000122C = 0;
    }
    if ( unk_20001230 )
    {
      v1 = 1;
      sub_3628();
    }
  }
  enable_IRQ();
  return v1;
}
// 20000D88: using guessed type _DWORD dword_20000D88[3];
// 20001214: using guessed type _DWORD *dword_20001214;

//----- (00003E94) --------------------------------------------------------
int sub_3E94()
{
  int v0; // r4
  int v2; // [sp+10h] [bp-18h] BYREF
  int v3; // [sp+14h] [bp-14h] BYREF
  int v4; // [sp+18h] [bp-10h] BYREF

  v0 = 0;
  sub_2CD4();
  if ( dword_20001250 )
  {
    v4 = 0;
    v3 = 0;
    get_TmrSvc_values(&v4, &v3, &v2);
    unk_20001254 = create_timer((int)Tmr_Svc_loop, (int)"Tmr Svc", v2, 0, 40, v3, v4);
    if ( unk_20001254 )
      return 1;
  }
  return v0;
}

//----- (00003EEC) --------------------------------------------------------
int __fastcall sub_3EEC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v6; // r3
  int v8[10]; // [sp+0h] [bp-28h] BYREF

  v6 = 0;
  if ( dword_20001250 )
  {
    v8[0] = a2;
    v8[1] = a3;
    v8[2] = a1;
    if ( a2 >= 6 )
    {
      return sub_3A18(dword_20001250, (unsigned int)v8, a4, 0);
    }
    else if ( sub_3C48(dword_20001250, a2, a3) == 2 )
    {
      return sub_3936(dword_20001250, (unsigned int)v8, a5, 0);
    }
    else
    {
      return sub_3936(dword_20001250, (unsigned int)v8, 0, 0);
    }
  }
  return v6;
}
// 3C48: using guessed type int __fastcall sub_3C48(_DWORD, _DWORD, _DWORD);
// 20001250: using guessed type int dword_20001250;

// nfuncs=166 queued=153 decompiled=153 lumina nreq=0 worse=0 better=0
// ALL OK, 153 function(s) have been successfully decompiled
