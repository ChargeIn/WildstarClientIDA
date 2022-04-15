#include "../winhttp.h"

//----- (00000001400454D0) ----------------------------------------------------
__int64 __fastcall sub_1400454D0(__int64 a1, __int64 a2, unsigned __int16* a3, __int64 a4)
{
	__int64 v5; // r11
	__int64 v6; // rbx
	__int64* v7; // rax
	unsigned int v8; // edi
	unsigned __int64 v9; // r9
	unsigned __int64 v10; // rcx
	__int64 v11; // r10
	unsigned __int16 v12; // ax
	unsigned int v14; // ecx
	__int64 v15; // [rsp+10h] [rbp+8h] BYREF
	__int64 v16; // [rsp+18h] [rbp+10h] BYREF

	v5 = (a2 - a1) >> 1;
	v6 = (a4 - (__int64)a3) >> 1;
	v7 = &v15;
	v16 = v5;
	v15 = v6;
	if (v6 >= v5)
		v7 = &v16;
	v8 = 0;
	v9 = *v7;
	v10 = 0i64;
	if (*v7)
	{
		v11 = a1 - (_QWORD)a3;
		while (1)
		{
			v12 = *(unsigned __int16*)((char*)a3 + v11);
			if (v12 != *a3)
				break;
			++v10;
			++a3;
			if (v10 >= v9)
				goto LABEL_7;
		}
		v14 = 1;
		if (v12 < *a3)
			return (unsigned int)-1;
		return v14;
	}
	else
	{
	LABEL_7:
		if (v5 >= v6)
		{
			LOBYTE(v8) = v5 > v6;
			return v8;
		}
		else
		{
			return 0xFFFFFFFFi64;
		}
	}
}
// 14004555A: conditional instruction was optimized away because ecx.4 is in (==1|==FFFFFFFF)

