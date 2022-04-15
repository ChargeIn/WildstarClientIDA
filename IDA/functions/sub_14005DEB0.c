#include "../winhttp.h"

//----- (000000014005DEB0) ----------------------------------------------------
void __fastcall sub_14005DEB0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // r8
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rdx

	v1 = *(_QWORD*)(a1 + 32);
	v2 = a1;
	v3 = *(_QWORD*)(v1 + 176);
	*(_QWORD*)(v1 + 56) = 0i64;
	*(_QWORD*)(v1 + 64) = 0i64;
	*(_QWORD*)(v1 + 72) = 0i64;
	if ((*(_BYTE*)(v3 + 9) & 3) != 0)
		sub_14005C960(v1, v3);
	v4 = *(_QWORD*)(v1 + 176);
	if (*(int*)(v4 + 128) >= 4)
	{
		v5 = *(_QWORD*)(v4 + 120);
		if ((*(_BYTE*)(v5 + 9) & 3) != 0)
			sub_14005C960(v1, v5);
	}
	v6 = *(_QWORD*)(v2 + 32);
	if (*(int*)(v6 + 168) >= 4)
	{
		v7 = *(_QWORD*)(v6 + 160);
		if ((*(_BYTE*)(v7 + 9) & 3) != 0)
			sub_14005C960(v1, v7);
	}
	sub_14005DD80(v1);
	*(_BYTE*)(v1 + 33) = 1;
}
// 14005DF02: variable 'v2' is possibly undefined

