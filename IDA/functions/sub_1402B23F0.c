#include "../winhttp.h"

//----- (00000001402B23F0) ----------------------------------------------------
_QWORD* __fastcall sub_1402B23F0(int a1, __int64 a2, __int64 a3, unsigned __int64* a4, _QWORD* a5, int a6)
{
	__int64 v6; // r10
	__int64 v7; // r11
	int v8; // edx
	__int64* v9; // rcx
	unsigned __int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64* v13; // rcx
	unsigned __int64 v14; // rdx
	_QWORD* result; // rax
	unsigned __int64 v16; // rcx
	char v17; // r8
	__int64 v18; // rdx
	__int64 v19; // rdx
	unsigned __int64 v20; // rdx
	unsigned __int64 v21; // [rsp+20h] [rbp-28h] BYREF
	__int64 v22; // [rsp+28h] [rbp-20h] BYREF
	unsigned __int64 v23; // [rsp+30h] [rbp-18h] BYREF
	__int64 v24; // [rsp+38h] [rbp-10h] BYREF

	v6 = a3;
	v7 = a2;
	if (a1 < 70 || a1 > 84 && (unsigned int)(a1 - 94) > 5)
	{
		if ((unsigned int)(a1 - 68) > 1)
		{
			v17 = a6;
			if ((a6 & 0x10000) != 0)
			{
				v18 = 24i64;
			}
			else if ((a6 & 0x20000) != 0)
			{
				v18 = 16i64;
			}
			else if ((a6 & 0x40000) != 0)
			{
				v18 = 8i64;
			}
			else
			{
				v18 = sub_1402B2300(a1);
			}
			result = a5;
			v19 = v7 * v18;
			if ((v17 & 1) != 0)
				v20 = 4 * ((unsigned __int64)(v19 + 31) >> 5);
			else
				v20 = (unsigned __int64)(v19 + 7) >> 3;
			*a4 = v20;
			*a5 = v6 * v20;
		}
		else
		{
			result = a5;
			v16 = 4 * ((unsigned __int64)(a2 + 1) >> 1);
			*a4 = v16;
			*a5 = a3 * v16;
		}
	}
	else
	{
		if ((unsigned int)(a1 - 70) <= 2 || (v8 = 16, (unsigned int)(a1 - 79) <= 2))
			v8 = 8;
		v9 = (__int64*)&v21;
		v10 = (unsigned __int64)(a3 + 3) >> 2;
		v21 = (unsigned __int64)(v7 + 3) >> 2;
		v11 = v8;
		if (v21 <= 1)
			v9 = &v22;
		v22 = 1i64;
		v23 = v10;
		v12 = *v9;
		v13 = (__int64*)&v23;
		v24 = 1i64;
		v14 = v11 * v12;
		if (v10 <= 1)
			v13 = &v24;
		result = a5;
		*a4 = v14;
		*a5 = v14 * *v13;
	}
	return result;
}
// 1402B2502: variable 'v7' is possibly undefined
// 1402B2506: variable 'v17' is possibly undefined
// 1402B2518: variable 'a4' is possibly undefined
// 1402B251B: variable 'v6' is possibly undefined

