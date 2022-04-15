#include "../winhttp.h"

//----- (0000000140737800) ----------------------------------------------------
__int64 __fastcall sub_140737800(__int64 a1)
{
	int v1; // r11d
	__int64 v3; // rdx
	__int64 v4; // rax
	_DWORD* v5; // rax
	__int64 result; // rax
	unsigned __int64 v7; // rax
	__int64 v8; // rdx
	int v9; // eax
	_DWORD* v10; // rcx
	bool v11; // zf

	v1 = 0;
	v3 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
		if (*(_DWORD*)(v4 + 16) == 7)
			break;
		if (++v3 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	if (v4)
	{
		v7 = *(int*)(v4 + 772);
		if (v7 < 0xA && (v8 = *(_QWORD*)(qword_140C7DE18 + 8 * v3) + 8 * (v7 + 4 * v7 + 3)) != 0)
			v9 = *(_DWORD*)(v8 + 8) >> 31;
		else
			v9 = 0;
		v10 = *(_DWORD**)(a1 + 16);
		v11 = v9 == 0;
		result = 1i64;
		LOBYTE(v1) = !v11;
		v10[2] = 1;
		*v10 = v1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
	LABEL_4:
		v5 = *(_DWORD**)(a1 + 16);
		*v5 = 0;
		v5[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

