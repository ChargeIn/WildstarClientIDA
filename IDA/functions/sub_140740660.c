#include "../winhttp.h"

//----- (0000000140740660) ----------------------------------------------------
__int64 __fastcall sub_140740660(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int v4; // ecx
	unsigned int v5; // eax
	_DWORD* v6; // rax
	int v7; // ecx
	_DWORD* v8; // rdx
	unsigned __int8 v9; // cf

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_10;
	}
	v4 = sub_140056D60(a1, 2u);
	if ((unsigned int)(v4 - 1) > 5)
	{
		if (v4 != 20)
			goto LABEL_5;
		v5 = 6;
	LABEL_8:
		v7 = *(_DWORD*)(v3 + 52);
		v8 = (_DWORD*)a1[2];
		v9 = _bittest(&v7, v5);
		v8[2] = 1;
		*v8 = v9;
		goto LABEL_10;
	}
	v5 = v4 - 1;
	if ((unsigned int)(v4 - 1) < 7)
		goto LABEL_8;
LABEL_5:
	v6 = (_DWORD*)a1[2];
	*v6 = 0;
	v6[2] = 1;
LABEL_10:
	a1[2] += 16i64;
	return 1i64;
}

