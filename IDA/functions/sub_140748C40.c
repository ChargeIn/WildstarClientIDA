#include "../winhttp.h"

//----- (0000000140748C40) ----------------------------------------------------
__int64 __fastcall sub_140748C40(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	__int64 result; // rax
	_DWORD* v9; // rcx
	_DWORD* v10; // rax

	if (!*(_QWORD*)(qword_140C65898 + 120) || (unsigned int)sub_1403BB8D0())
	{
		v10 = *(_DWORD**)(a1 + 16);
		*v10 = 0;
		v10[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v2 = 0i64;
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		if (v3)
		{
			v4 = *(_QWORD*)(qword_140C63650 + 760);
			v5 = 0i64;
			while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
			{
				v2 = (unsigned int)(v2 + 1);
				v5 = (unsigned int)v2;
				if ((unsigned int)v2 >= v3)
					goto LABEL_7;
			}
			v6 = *(_QWORD*)(v4 + 8 * v2);
		}
		else
		{
		LABEL_7:
			v6 = 0i64;
		}
		v7 = sub_1400F26A0(v6 + 384, 1);
		if (v7)
			LOBYTE(v7) = v7 - 1;
		if ((unsigned __int8)v7 < 4u && (*(_BYTE*)(qword_140C65898 + 4i64 * (unsigned __int8)v7 + 5192) & 1) != 0)
		{
			sub_1403CD800((*(_BYTE*)(qword_140C65898 + 4i64 * (unsigned __int8)v7 + 5192) & 1) != 0, v7);
			return 0i64;
		}
		else
		{
			v9 = *(_DWORD**)(a1 + 16);
			result = 1i64;
			*v9 = 0;
			v9[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

