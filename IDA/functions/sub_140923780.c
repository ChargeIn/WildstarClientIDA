#include "../winhttp.h"

//----- (0000000140923780) ----------------------------------------------------
unsigned __int16* __fastcall sub_140923780(__int64 a1, _WORD* a2, unsigned __int64 a3, __int64* a4)
{
	unsigned int* v4; // r12
	int v5; // r14d
	_WORD* v6; // r11
	unsigned __int16* v8; // rsi
	int v11; // r9d
	BOOL v12; // eax
	__int64 v13; // rcx
	_QWORD* v14; // rdi
	_QWORD* v15; // rax
	__int64 v16; // rcx
	unsigned __int16* result; // rax
	int v18[6]; // [rsp+40h] [rbp-58h] BYREF

	v4 = *(unsigned int**)a1;
	v5 = 0;
	v6 = a2;
	v8 = a2;
	v18[0] = 0;
	while ((unsigned __int64)v6 < a3)
	{
		if (*v6 == 29)
		{
			v11 = 1;
			if (*(_DWORD*)(a1 + 316) && (v6[1] & 0xFC00) == 0xD800)
				v11 = 2;
		}
		else
		{
			if (*v6 != 30)
				goto LABEL_25;
			v12 = sub_14091B9D0(a1, v6 + 1);
			if (*(_DWORD*)(a1 + 316))
			{
				if (!v12 || (unsigned int)sub_14091B900(v13, v6 + 1))
				{
					if ((v6[1] & 0xFC00) == 0xD800)
						v11 = 2;
				}
				else
				{
					v11 = 0;
				}
				goto LABEL_12;
			}
			if (v12 && !(unsigned int)sub_14091B900(v13, v6 + 1))
				LABEL_25:
			v11 = 0;
		}
	LABEL_12:
		v5 += 2 * v11;
		v18[0] = v5;
		v6 += v11 + 1;
		if (v11 <= 0 || v5 > 128)
			break;
	}
	if (v5 <= 0)
		return sub_140921800(a1, *v8, v8 + 1, a4);
	sub_140932A90(v4, 25, 6, 0i64, 6, 0i64, 512, v5);
	v14 = sub_140931B80(v4, 4, 6, 0i64, 7, 0i64);
	if (!*v4)
	{
		v15 = sub_14092D590((__int64)v4, 16i64);
		if (v15)
		{
			v16 = *a4;
			*v15 = v14;
			v15[1] = v16;
			*a4 = (__int64)v15;
		}
	}
	v18[1] = -1;
	v18[2] = 0;
	do
	{
		result = sub_14091B5B0(a1, *v8 == 30, v8 + 1, v18, a4);
		v8 = result;
	} while (v18[0] > 0);
	return result;
}
// 14092383C: variable 'v13' is possibly undefined
// 140923838: variable 'v6' is possibly undefined
// 140923855: variable 'v11' is possibly undefined

