#include "../winhttp.h"

//----- (00000001405EA8A0) ----------------------------------------------------
__int64 __fastcall sub_1405EA8A0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // eax

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v4 = sub_1405E9400(a1, 1);
		v5 = v4;
		if (v4 && (v7 = sub_14023DC80(*(_DWORD*)(*(_QWORD*)(v4 + 112) + 40i64))) != 0)
		{
			v8 = *(_QWORD*)(a1 + 16);
			v9 = sub_14046A760(
				*(_QWORD*)(qword_140C65898 + 120),
				*(_DWORD*)(*(_QWORD*)(v5 + 112) + 40i64),
				*(_DWORD*)(v7 + 4));
			*(_DWORD*)(v8 + 8) = 3;
			*(double*)v8 = (float)((float)v9 * 0.001);
		}
		else
		{
			v6 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v6 = 0i64;
			*(_DWORD*)(v6 + 8) = 3;
		}
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v2 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v2 = 0i64;
		*(_DWORD*)(v2 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

