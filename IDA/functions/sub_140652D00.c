#include "../winhttp.h"

//----- (0000000140652D00) ----------------------------------------------------
__int64 __fastcall sub_140652D00(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v6; // r10
	_DWORD* v8; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && sub_1403D90D0(qword_140C65898, *v2))
	{
		v3 = (int*)sub_1406622C0(a1, 2);
		if (v3 && (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0)
			v5 = *(_DWORD*)(v4 + 8);
		else
			v5 = 0;
		v6 = qword_140C65898;
		if (*(_QWORD*)(qword_140C65898 + 25744) && *(_DWORD*)(qword_140C65898 + 25600) != v5)
		{
			*(_DWORD*)(qword_140C65898 + 25600) = v5;
			Apollo_LUAEvent(*(_QWORD*)(v6 + 29504), "AlternateTargetUnitChanged", L"U", v5);
			return 1i64;
		}
	}
	else
	{
		v8 = *(_DWORD**)(a1 + 16);
		*v8 = 0;
		v8[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return 1i64;
}
// 1409EDFDC: using guessed type wchar_t aU_18[2];
// 140C65898: using guessed type __int64 qword_140C65898;

