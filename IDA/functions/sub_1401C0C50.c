#include "../winhttp.h"

//----- (00000001401C0C50) ----------------------------------------------------
__int64 __fastcall sub_1401C0C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v4; // rsi
	_WORD* v6; // r8
	__int64 v7; // rdx
	__int64 v8; // r10
	int v9; // edi
	__int64 v10; // r11
	__int16 v11; // ax
	unsigned __int64 v12; // rcx
	__int64 result; // rax
	unsigned __int64 v14; // [rsp+10h] [rbp+8h]

	v4 = a1 + 8;
	v6 = (_WORD*)(a1 + 8);
	v7 = a2 - (a1 + 8);
	v8 = 260i64;
	v9 = 0;
	v10 = 0i64;
	while (v8 != -2147483386)
	{
		v11 = *(_WORD*)((char*)v6 + v7);
		if (!v11)
			break;
		*v6++ = v11;
		++v10;
		if (!--v8)
		{
			--v6;
			v9 = -2147024774;
			--v10;
			break;
		}
	}
	*v6 = 0;
	v12 = v4 + 2 * v10;
	if ((int)(v9 + 0x80000000) >= 0 && v9 != -2147024774)
		v12 = v14;
	result = 0i64;
	if (v12 > v4 && *(_WORD*)(v12 - 2) == 92)
		*(_WORD*)(v12 - 2) = 0;
	*(_QWORD*)(a1 + 528) = a4;
	return result;
}
// 1401C0CAB: conditional instruction was optimized away because r10.8!=0

