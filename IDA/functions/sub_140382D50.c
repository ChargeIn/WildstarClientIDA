#include "../winhttp.h"

//----- (0000000140382D50) ----------------------------------------------------
void __fastcall sub_140382D50(__int64 a1)
{
	unsigned __int64 v2; // rdi
	_QWORD* v3; // rdx
	__int64 v4; // rax
	_QWORD* v5; // rcx
	__int64 v6; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx

	*(_DWORD*)(a1 + 40) &= 0xFFFE9600;
	sub_140383760((_QWORD*)a1);
	*(_DWORD*)(a1 + 44) &= 0xFFFFFFF6;
	v2 = 0i64;
	if (!*(_QWORD*)(a1 + 1448))
	{
		v3 = (_QWORD*)(*(_QWORD*)a1 + 2280i64);
		*(_QWORD*)(a1 + 1448) = v3;
		*(_QWORD*)(a1 + 1456) = *v3;
		*v3 = a1;
		v4 = *(_QWORD*)(a1 + 1456);
		if (v4)
			*(_QWORD*)(v4 + 1448) = a1 + 1456;
		*(_DWORD*)(*(_QWORD*)a1 + 2288i64) = 0;
		++* (_DWORD*)(*(_QWORD*)a1 + 2164i64);
	}
	if (!*(_QWORD*)(a1 + 1464))
	{
		v5 = (_QWORD*)(*(_QWORD*)a1 + 2296i64);
		*(_QWORD*)(a1 + 1464) = v5;
		*(_QWORD*)(a1 + 1472) = *v5;
		*v5 = a1;
		v6 = *(_QWORD*)(a1 + 1472);
		if (v6)
			*(_QWORD*)(v6 + 1464) = a1 + 1472;
		*(_DWORD*)(*(_QWORD*)a1 + 2304i64) = 0;
		++* (_DWORD*)(*(_QWORD*)a1 + 2168i64);
	}
	if (!*(_QWORD*)(a1 + 1480))
	{
		v7 = (_QWORD*)(*(_QWORD*)a1 + 2312i64);
		*(_QWORD*)(a1 + 1480) = v7;
		*(_QWORD*)(a1 + 1488) = *v7;
		*v7 = a1;
		v8 = *(_QWORD*)(a1 + 1488);
		if (v8)
			*(_QWORD*)(v8 + 1480) = a1 + 1488;
		*(_DWORD*)(*(_QWORD*)a1 + 2320i64) = 0;
		++* (_DWORD*)(*(_QWORD*)a1 + 2172i64);
	}
	if (*(_QWORD*)(a1 + 1032))
	{
		do
		{
			v9 = *(_QWORD*)(*(_QWORD*)(a1 + 1040) + 8 * v2);
			if (v9)
				sub_140393020(v9);
			++v2;
		} while (v2 < *(_QWORD*)(a1 + 1032));
	}
}

