#include "../winhttp.h"

//----- (0000000140932FC0) ----------------------------------------------------
__int64 __fastcall sub_140932FC0(unsigned int* a1, int a2, int a3, __int64 a4, int a5, int a6, int a7)
{
	__int64 result; // rax
	__int64 v8; // rsi
	_QWORD* v12; // rax
	char v13; // bp
	int v14; // r15d
	_BYTE* v15; // rax
	_BYTE* v16; // rdx
	char v17; // al
	char* v18; // rax

	result = *a1;
	v8 = a4;
	if (!(_DWORD)result && a3)
	{
		if (a3 == 267)
			v8 = a4 + 48;
		if (a1[27])
		{
			v12 = sub_14092D610((__int64)a1, 7i64);
			if (v12)
			{
				*(_BYTE*)v12 = 6;
				*((_QWORD*)a1 + 11) += 6i64;
				*(_DWORD*)((char*)v12 + 1) = 1686980765;
				*(_WORD*)((char*)v12 + 5) = -2012;
				a1[27] = a2 & 0x4000;
			}
			else
			{
				result = *a1;
				if ((_DWORD)result)
					return result;
			}
		}
		v13 = sub_14092F340(a7) + 16;
		if (a2 != 6 || (v14 = a3, a3 > 12))
			v14 = 12;
		v15 = sub_14092D610((__int64)a1, 9i64);
		v16 = v15;
		if (v15)
		{
			*v15 = 8;
			*((_QWORD*)a1 + 11) += 8i64;
			v15[1] = (byte_1409D00E0[v14] > 7u) + 64;
			v15[2] = 15;
			v15[3] = v13;
			v15[4] = byte_1409D00E0[v14 + 16] | 0xC0;
			v17 = 69;
			if (byte_1409D00E0[v14] <= 7u)
				v17 = 0;
			v16[5] = v17 | 0x48;
			*((_WORD*)v16 + 3) = -18929;
			v16[8] = byte_1409D00E0[v14 + 16] | (8 * (byte_1409D00E0[v14 + 16] | 0xF8));
			if (v14 == 12)
			{
				if ((int)(a2 & 0xFFFF80FF) >= 25)
				{
					return sub_140932A90(a1, a2, a3, v8, a3, v8, 12, 0i64);
				}
				else
				{
					a1[26] = (a2 & 0xFFFF80FF) != 6;
					v18 = sub_14092D140((__int64)a1, 1, 12, 0i64, a3, v8);
					if (v18)
					{
						*v18 = -119;
						return 0i64;
					}
					else
					{
						return *a1;
					}
				}
			}
			else
			{
				return 0i64;
			}
		}
		else
		{
			return *a1;
		}
	}
	return result;
}
// 1409D00E0: using guessed type _BYTE byte_1409D00E0[32];

