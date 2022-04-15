#include "../winhttp.h"

//----- (000000014044FD50) ----------------------------------------------------
__int64 __fastcall sub_14044FD50(__int64 a1, unsigned int a2)
{
	_QWORD* v2; // rsi
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdi
	__int64 result; // rax
	__int64 v9; // [rsp+30h] [rbp+8h]

	v2 = (_QWORD*)qword_140C65908;
	sub_14044D860(qword_140C65908);
	v4 = v2[31];
	v5 = *(_QWORD*)(v4 + 8);
	v6 = v4;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v4 || (v9 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v9 = v2[31];
	if (v9 == v4)
		return 0i64;
	v7 = 0i64;
	if (!*(_QWORD*)(v9 + 48))
		return 0i64;
	while (1)
	{
		result = sub_14044FC40(v2, *(_DWORD*)(*(_QWORD*)(v9 + 40) + 4 * v7));
		if (result)
			break;
		if ((unsigned __int64)++v7 >= *(_QWORD*)(v9 + 48))
			return 0i64;
	}
	return result;
}
// 140C65908: using guessed type __int64 qword_140C65908;

