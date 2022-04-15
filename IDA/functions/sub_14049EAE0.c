#include "../winhttp.h"

//----- (000000014049EAE0) ----------------------------------------------------
__int64 __fastcall sub_14049EAE0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned __int64 v4; // rdi
	unsigned int v7; // edx
	__int64 v8; // rcx
	__int64* v9; // rax
	__int64 v10; // r11
	unsigned __int64 v11; // r9
	__int64 v12; // r10
	unsigned __int64 v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rax
	unsigned int v16; // r9d
	int v17; // r8d

	v4 = a4;
	if (!a2)
		return a3 == 2;
	v7 = 0;
	v8 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_7;
	while (1)
	{
		v9 = *(__int64**)(qword_140C7DE18 + 8 * v8);
		if (*((_DWORD*)v9 + 4) == 1)
			break;
		if (++v8 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_7;
	}
	v10 = *(_QWORD*)(qword_140C7DE18 + 8 * v8);
	if (!v9 || (v11 = *(_QWORD*)(a2 + 168), v12 = *v9, v13 = 0i64, !v11))
	{
	LABEL_7:
		if (a3 != 2)
			return v7;
		return 1;
	}
	v14 = *(_QWORD**)(a2 + 160);
	while (*v14 != v12)
	{
		++v13;
		++v14;
		if (v13 >= v11)
			goto LABEL_7;
	}
	if (v10 == -528 || v4 >> 6 >= 2)
	{
		v16 = 0;
	}
	else
	{
		v15 = *(_QWORD*)(v10 + 528 + 8 * (v4 >> 6));
		v16 = _bittest64(&v15, v4 & 0x3F);
	}
	v17 = a3 - 1;
	if (!v17)
		return v16;
	if (v17 != 1)
		return v7;
	LOBYTE(v7) = v16 == 0;
	return v7;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

