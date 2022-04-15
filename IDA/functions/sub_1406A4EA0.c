#include "../winhttp.h"

//----- (00000001406A4EA0) ----------------------------------------------------
__int64 __fastcall sub_1406A4EA0(unsigned int a1)
{
	unsigned int v2; // r10d
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v6; // r8
	int v7; // eax
	int v8; // ecx
	__int64 v9; // r8
	unsigned int v10; // eax
	__int64* v11; // r8
	__int64 v12; // r9
	__int64 v13; // rcx
	int v14; // ecx
	int v15; // edx

	if (!qword_140C7DFE0)
		return sub_1403AC840(qword_140C65898 + 160, 2, a1);
	v2 = 0;
	v3 = 0i64;
	if (!qword_140C7DE20)
		return sub_1403AC840(qword_140C65898 + 160, 2, a1);
	while (1)
	{
		v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
		if (*(_DWORD*)(v4 + 16) == 3)
			break;
		if (++v3 >= (unsigned __int64)qword_140C7DE20)
			return sub_1403AC840(qword_140C65898 + 160, 2, a1);
	}
	v6 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
	if (!v4)
		return sub_1403AC840(qword_140C65898 + 160, 2, a1);
	v7 = 200;
	if (*(_DWORD*)(v6 + 16) == 1)
		v7 = 100;
	v8 = 200 - v7;
	if (200 - v7 < 0)
		return 0i64;
	if (v8 >= *(_DWORD*)(v6 + 632))
		return 0i64;
	v9 = *(_QWORD*)(*(_QWORD*)(v6 + 624) + 8i64 * v8);
	if (!v9)
		return 0i64;
	v10 = *(_DWORD*)(v9 + 16);
	if (v10)
	{
		v11 = *(__int64**)(v9 + 8);
		v12 = v10;
		do
		{
			v13 = *v11;
			if (*v11 && **(_DWORD**)(v13 + 64) == a1)
			{
				v14 = *(_DWORD*)(v13 + 120);
				v15 = 1;
				if (v14)
					v15 = v14;
				v2 += v15;
			}
			++v11;
			--v12;
		} while (v12);
	}
	return v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

