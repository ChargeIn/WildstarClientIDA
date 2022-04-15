#include "../winhttp.h"

//----- (000000014047A060) ----------------------------------------------------
_DWORD* __fastcall sub_14047A060(__int64 a1)
{
	_DWORD* result; // rax
	__int64 v3; // rcx
	__int64 v4; // rbx
	int v5; // eax
	__int64 v6; // rdx
	BOOL v7; // ecx
	_BYTE* v8; // rax

	*(_QWORD*)(a1 + 6408) = a1 + 13688;
	result = (_DWORD*)qword_140C65898;
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v3)
		return result;
	v4 = *(int*)(a1 + 592);
	v5 = sub_14045A950(v3, *(_DWORD*)(a1 + 8));
	v6 = 0i64;
	v7 = v5 < 1;
	v8 = (_BYTE*)(a1 + 6420);
	while (!*v8)
	{
	LABEL_9:
		v6 = (unsigned int)(v6 + 1);
		v8 += 72;
		if ((unsigned int)v6 >= 0x66)
			goto LABEL_12;
	}
	if (v4 && !v8[1] || v7 && !v8[2])
	{
		*v8 = 0;
		goto LABEL_9;
	}
	*(_QWORD*)(a1 + 6408) = a1 + 8 * (v6 + 8 * v6 + 802);
LABEL_12:
	result = *(_DWORD**)(a1 + 6408);
	if (*result != 101 && (*(_DWORD*)(a1 + 484) || *(_DWORD*)(a1 + 684)))
	{
		result = (_DWORD*)(a1 + 6416);
		*(_BYTE*)(a1 + 6420) = 1;
		*(_QWORD*)(a1 + 6408) = a1 + 6416;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

