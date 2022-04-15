#include "../winhttp.h"

//----- (00000001404210F0) ----------------------------------------------------
__int64 __fastcall sub_1404210F0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64* v3; // rcx
	_QWORD* v5; // rdx
	__int64 v6; // r11
	__int64 v7; // r10
	unsigned __int64 v8; // r9
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // rcx
	__int64 v11; // rcx

	*a3 += 8i64;
	v3 = *(__int64**)(*a3 - 8i64);
	v5 = *(_QWORD**)(qword_140C65898 + 27728);
	v6 = *v3;
	v7 = v3[1];
	if (v5 && (v8 = v5[12], v9 = 0i64, v8))
	{
		while (1)
		{
			v10 = v9;
			if (v9 >= v8)
			{
				v11 = 0i64;
			}
			else if (v9)
			{
				if (v9 <= v5[13])
					v10 = v9 - 1;
				v11 = *(_QWORD*)(v5[11] + 8 * v10);
			}
			else
			{
				v11 = *(_QWORD*)(v5[11] + 8i64 * v5[13]);
			}
			if (*(_DWORD*)(v11 + 16) == (_DWORD)v6 && *(_QWORD*)(v11 + 24) == v7)
				break;
			if (++v9 >= v8)
				goto LABEL_13;
		}
	}
	else
	{
	LABEL_13:
		v9 = -1i64;
	}
	return sub_1406054D0(qword_140C65898 + 27664, a2, v9);
}
// 140C65898: using guessed type __int64 qword_140C65898;

