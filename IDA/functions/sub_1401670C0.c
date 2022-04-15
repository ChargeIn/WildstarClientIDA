#include "../winhttp.h"

//----- (00000001401670C0) ----------------------------------------------------
__int64 __fastcall sub_1401670C0(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // edi
	int v4; // eax
	unsigned __int64 v5; // r8
	int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rdx
	_DWORD* v9; // rdx
	__int64 v10; // rax
	int* v11; // rcx

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = sub_140056D60(a1, 3u);
	v5 = a1[2];
	v6 = v4 - 1;
	v7 = a1[3];
	v8 = 4294967294i64;
	if ((int)((__int64)(v5 - v7) >> 4) >= 4)
	{
		v9 = dword_140A12138;
		if (v7 + 48 < v5)
			v9 = (_DWORD*)(v7 + 48);
		*(_QWORD*)v5 = *(_QWORD*)v9;
		*(_DWORD*)(v5 + 8) = v9[2];
		a1[2] += 16i64;
		v8 = (unsigned int)sub_1400578C0((__int64)a1);
	}
	if (v3 >= 0 && v3 < *(_DWORD*)(v2 + 1160) && v6 >= 0 && v6 < *(_DWORD*)(v2 + 1144))
	{
		v10 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v3);
		if (v6 < *(_DWORD*)(v10 + 24))
		{
			v11 = *(int**)(*(_QWORD*)(v10 + 16) + 8i64 * v6);
			if (v11)
				sub_14015CF60(v11, v8);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

