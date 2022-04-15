#include "../winhttp.h"

//----- (00000001406B69B0) ----------------------------------------------------
__int64 __fastcall sub_1406B69B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rdi
	int v5; // ebx
	_DWORD* v6; // rax
	int v7; // edx
	bool v8; // zf
	__int64 v9; // rcx
	__int64 v10; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_DWORD**)(v3 + 8)) != 0i64)
	{
		v5 = 0;
		v6 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v7 = 0;
		else
			v7 = sub_140056D60(a1, 2u);
		switch (v4[3])
		{
		case 1:
		case 2:
		case 5:
			v8 = v7 == 0;
			goto LABEL_15;
		case 3:
		case 6:
			v8 = v7 == 1;
		LABEL_15:
			if (v8)
				goto LABEL_16;
			break;
		case 4:
		case 7:
			if (v7 == 2)
			{
			LABEL_16:
				v5 = v4[6];
			}
			else if (v7 == 3)
			{
				v5 = v4[7];
			}
			break;
		default:
			break;
		}
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v5;
	}
	else
	{
		v10 = a1[2];
		*(_QWORD*)v10 = 0i64;
		*(_DWORD*)(v10 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

