#include "../winhttp.h"

//----- (000000014049EA30) ----------------------------------------------------
__int64 __fastcall sub_14049EA30(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	unsigned int v6; // ecx
	__int64 v7; // rdx
	__int64* v8; // rax
	unsigned __int64 v9; // r9
	__int64 v10; // r10
	unsigned __int64 v11; // rdx
	_QWORD* v12; // rax
	unsigned int v13; // edx
	int v14; // r8d

	if (!a4)
		return a3 == 2;
	v6 = 0;
	v7 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_7;
	while (1)
	{
		v8 = *(__int64**)(qword_140C7DE18 + 8 * v7);
		if (*((_DWORD*)v8 + 4) == 1)
			break;
		if (++v7 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_7;
	}
	if (!v8)
	{
	LABEL_7:
		if (a3 != 2)
			return v6;
		return 1;
	}
	v9 = *(_QWORD*)(a4 + 168);
	v10 = *v8;
	v11 = 0i64;
	if (v9)
	{
		v12 = *(_QWORD**)(a4 + 160);
		while (*v12 != v10)
		{
			++v11;
			++v12;
			if (v11 >= v9)
				goto LABEL_15;
		}
		v13 = 1;
	}
	else
	{
	LABEL_15:
		v13 = 0;
	}
	v14 = a3 - 1;
	if (!v14)
		return v13;
	if (v14 != 1)
		return v6;
	LOBYTE(v6) = v13 == 0;
	return v6;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

