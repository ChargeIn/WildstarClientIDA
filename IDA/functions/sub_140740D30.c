#include "../winhttp.h"

//----- (0000000140740D30) ----------------------------------------------------
__int64 __fastcall sub_140740D30(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int* v3; // rbp
	int v4; // ecx
	__int64 v5; // rax
	_DWORD* v6; // rax
	unsigned int v8; // edi
	__int64 v9; // rsi
	int v10; // eax
	int v11; // edx
	_DWORD* v12; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_5;
	v3 = *(unsigned int**)(v2 + 8);
	if (!v3)
		goto LABEL_5;
	v4 = sub_140056D60(a1, 2u);
	if ((unsigned int)(v4 - 1) > 5)
	{
		if (v4 != 20)
			goto LABEL_5;
		v5 = 6i64;
	}
	else
	{
		v5 = (unsigned int)(v4 - 1);
		if ((unsigned int)v5 >= 7)
		{
		LABEL_5:
			v6 = (_DWORD*)a1[2];
			v6[2] = 1;
			*v6 = 0;
			goto LABEL_6;
		}
	}
	v8 = 0;
	v9 = (__int64)&v3[3 * v5 + 35];
	do
	{
		v10 = sub_140056D60(a1, v8 + 3);
		v11 = 0;
		v9 += 4i64;
		if (v10 > 0)
			v11 = v10;
		++v8;
		*(_DWORD*)(v9 - 4) = v11;
	} while (v8 < 3);
	sub_14073FA10(v3);
	v12 = (_DWORD*)a1[2];
	*v12 = 1;
	v12[2] = 1;
LABEL_6:
	a1[2] += 16i64;
	return 1i64;
}

