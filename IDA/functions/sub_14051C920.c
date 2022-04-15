#include "../winhttp.h"

//----- (000000014051C920) ----------------------------------------------------
__int64 __fastcall sub_14051C920(__int64 a1, __int64 a2)
{
	__int64 v2; // r10
	int v3; // r9d
	unsigned __int64 v4; // r11
	unsigned int v5; // r8d
	__int64 v6; // r10
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	_DWORD* v10; // rdx
	int v11; // eax
	__int64 result; // rax

	v2 = qword_140C63650;
	v3 = 0;
	*(_DWORD*)(a1 + 16) = 0;
	v4 = *(_QWORD*)(v2 + 768);
	v5 = 0;
	if (v4)
	{
		v6 = *(_QWORD*)(v2 + 760);
		v7 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a2)
		{
			v7 = ++v5;
			if (v5 >= v4)
				goto LABEL_5;
		}
		v8 = *(_QWORD*)(v6 + 8i64 * v5);
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v9 = *(_QWORD*)(v8 + 400);
	v10 = &unk_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v9 + 24) + 32i64) < *(_QWORD*)(v9 + 16))
		v10 = (_DWORD*)(*(_QWORD*)(v9 + 24) + 32i64);
	v11 = v10[2];
	if (v11 && (v11 != 1 || *v10))
	{
		LOBYTE(v3) = 1;
		result = 0i64;
		*(_DWORD*)(a1 + 16) = v3;
	}
	else
	{
		LOBYTE(v3) = 0;
		result = 0i64;
		*(_DWORD*)(a1 + 16) = v3;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

