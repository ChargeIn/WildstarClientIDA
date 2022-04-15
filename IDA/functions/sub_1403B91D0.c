#include "../winhttp.h"

//----- (00000001403B91D0) ----------------------------------------------------
__int64 __fastcall sub_1403B91D0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	int* v4; // rax
	int v6; // ecx
	unsigned int v7; // r9d
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // rcx
	__int64* v10; // rax
	unsigned __int64 v11; // rdx
	__int64 v12; // r10
	unsigned __int64 v13; // rax
	unsigned int v14; // r8d

	v2 = qword_140C65898;
	v4 = sub_1400B5DF0(qword_140C658F0, a2, 0i64);
	if (!v4)
		return 0i64;
	v6 = v4[95];
	v7 = 0;
	v8 = (unsigned int)(v6 - 1) > 5 ? (unsigned int)(v6 != 20) + 6 : (unsigned int)(v6 - 1);
	if (v8 >= *(_QWORD*)(v2 + 1392))
		return 0i64;
	v9 = 0i64;
	v10 = (__int64*)(*(_QWORD*)(v2 + 1384) + 16 * v8);
	v11 = v10[1];
	if (!v11)
		return v7;
	v12 = *v10;
	while (1)
	{
		v13 = v9 + ((v11 - v9) >> 1);
		v14 = *(_DWORD*)(v12 + 4 * v13);
		if (a2 < v14)
		{
			v11 = v9 + ((v11 - v9) >> 1);
			goto LABEL_13;
		}
		if (v14 >= a2)
			return 1;
		v9 = v13 + 1;
	LABEL_13:
		if (v9 >= v11)
			return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

