#include "../winhttp.h"

//----- (00000001406A0FE0) ----------------------------------------------------
__int64 __fastcall sub_1406A0FE0(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rdi
	_DWORD* v4; // rcx
	__int64 v5; // rax
	_DWORD* v6; // rax
	_DWORD* v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_11;
	v3 = *(_QWORD**)(v2 + 8);
	if (!v3)
		goto LABEL_11;
	if (v3[1])
	{
		v4 = (_DWORD*)a1[2];
		*v4 = 0;
		v4[2] = 1;
		goto LABEL_12;
	}
	v5 = sub_140056AB0(a1, 2u);
	if (!v5)
	{
	LABEL_11:
		v7 = (_DWORD*)a1[2];
		v7[2] = 1;
		*v7 = 0;
		goto LABEL_12;
	}
	if (*(_DWORD*)(v5 + 8) != 1)
		sub_140056570(a1, 2u, "price must be in credits");
	if (*(__int64*)v5 < 1)
		sub_140056570(a1, 2u, "price must be greater than zero");
	v3[3] = *(_QWORD*)v5;
	v3[4] = *(_QWORD*)v5;
	v6 = (_DWORD*)a1[2];
	*v6 = 1;
	v6[2] = 1;
LABEL_12:
	a1[2] += 16i64;
	return 1i64;
}

