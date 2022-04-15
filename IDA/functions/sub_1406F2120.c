#include "../winhttp.h"

//----- (00000001406F2120) ----------------------------------------------------
__int64 __fastcall sub_1406F2120(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rcx
	__int64 v5; // rax
	_DWORD* v6; // rax
	_DWORD* v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
		v3 = *(_QWORD*)(v2 + 8);
	else
		v3 = 0i64;
	if (*(_DWORD*)(qword_140C635F0 + 5896) || !v3)
		goto LABEL_14;
	if (*(_QWORD*)(v3 + 8))
	{
		v4 = (_DWORD*)a1[2];
		*v4 = 0;
		v4[2] = 1;
		goto LABEL_15;
	}
	v5 = sub_140056AB0(a1, 2u);
	if (!v5)
	{
	LABEL_14:
		v7 = (_DWORD*)a1[2];
		v7[2] = 1;
		*v7 = 0;
		goto LABEL_15;
	}
	if (*(_DWORD*)(v5 + 8) != 1)
		sub_140056570(a1, 2u, "price must be in credits");
	if (*(__int64*)v5 < 1)
		sub_140056570(a1, 2u, "price must be greater than zero");
	*(_QWORD*)(v3 + 16) = *(_QWORD*)v5;
	v6 = (_DWORD*)a1[2];
	*v6 = 1;
	v6[2] = 1;
LABEL_15:
	a1[2] += 16i64;
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

