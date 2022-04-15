#include "../winhttp.h"

//----- (0000000140838280) ----------------------------------------------------
__int64 __fastcall sub_140838280(__int64 a1, float a2, float a3, int* a4, char a5)
{
	int v5; // eax
	__int64 v7; // rax
	__int64 v9[2]; // [rsp+20h] [rbp-38h] BYREF
	float v10; // [rsp+30h] [rbp-28h]
	float v11; // [rsp+34h] [rbp-24h]
	int v12; // [rsp+38h] [rbp-20h]
	int v13; // [rsp+3Ch] [rbp-1Ch]
	__int16 v14; // [rsp+40h] [rbp-18h]

	v5 = *a4;
	v9[0] = a1;
	v10 = a2;
	v11 = a3;
	v12 = v5;
	v13 = a4[1];
	v9[1] = 0x10000000i64;
	v14 = 0;
	v7 = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)v9, 1, 0);
	*(_QWORD*)(a1 + 16) = v7;
	*(_BYTE*)(a1 + 40) = a5;
	return 2 - (unsigned int)(v7 != 0);
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

