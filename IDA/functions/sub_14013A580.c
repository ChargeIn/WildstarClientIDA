#include "../winhttp.h"

//----- (000000014013A580) ----------------------------------------------------
__int64 __fastcall sub_14013A580(__int64 a1, __int64 a2, int a3)
{
	int v3; // esi
	__int64 i; // r14
	__int64 v8; // rdi
	_QWORD* v9; // rax
	_QWORD* v10; // rbx

	v3 = 0;
	if (!*(_DWORD*)(a1 + 24))
		return 0i64;
	for (i = 0i64; ; i += 8i64)
	{
		v8 = *(_QWORD*)(i + *(_QWORD*)(a1 + 16));
		v9 = *(_QWORD**)(v8 + 456);
		v10 = (_QWORD*)*v9;
		if ((_QWORD*)*v9 != v9)
			break;
	LABEL_6:
		if ((unsigned int)++v3 >= *(_DWORD*)(a1 + 24))
			return 0i64;
	}
	while (!sub_140134C00(v10[2], a2, a3))
	{
		v10 = (_QWORD*)*v10;
		if (v10 == *(_QWORD**)(v8 + 456))
			goto LABEL_6;
	}
	return *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * v3);
}

