#include "../winhttp.h"

//----- (00000001400FAFE0) ----------------------------------------------------
__int64 __fastcall sub_1400FAFE0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
	unsigned __int64 v4; // rdi
	__int64 i; // rsi
	__int64 v10; // r10
	int v11; // ecx
	unsigned __int16* v12; // r11
	__int64 v13; // r9
	_DWORD* v14; // rdx
	__int64 v15; // rcx
	double v17; // [rsp+78h] [rbp+20h]

	v4 = 0i64;
	for (i = 1i64; v4 < a4; *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64)
	{
		v10 = *(_QWORD*)(a1 + 16);
		v11 = *(_DWORD*)(a1 + 8);
		v12 = *(unsigned __int16**)(a3 + 8 * v4);
		v13 = *(_QWORD*)(*(_QWORD*)(v10 + 32) + 160i64);
		if ((unsigned int)(v11 - 1) >= *(_DWORD*)(v13 + 56))
		{
			if ((double)v11 == 0.0)
			{
				v14 = *(_DWORD**)(v13 + 32);
			}
			else
			{
				v17 = (double)v11;
				v14 = (_DWORD*)(*(_QWORD*)(v13 + 32)
					+ 40 * ((unsigned int)(LODWORD(v17) + HIDWORD(v17)) % (((1i64 << *(_BYTE*)(v13 + 11)) - 1) | 1)));
			}
			while (v14[6] != 3 || (double)v11 != *((double*)v14 + 2))
			{
				v14 = (_DWORD*)*((_QWORD*)v14 + 4);
				if (!v14)
				{
					v14 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v14 = (_DWORD*)(*(_QWORD*)(v13 + 24) + 16i64 * (v11 - 1));
		}
		v15 = *(_QWORD*)(v10 + 16);
		*(_QWORD*)v15 = *(_QWORD*)v14;
		*(_DWORD*)(v15 + 8) = v14[2];
		*(_QWORD*)(v10 + 16) += 16i64;
		sub_1400F0630(*(_QWORD*)(a1 + 16), (__int64)v14, v12, (i & a2) != 0);
		++v4;
		i = __ROL8__(i, 1);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

