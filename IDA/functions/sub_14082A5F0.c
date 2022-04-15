#include "../winhttp.h"

//----- (000000014082A5F0) ----------------------------------------------------
__int64 __fastcall sub_14082A5F0(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v6; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rax
	_QWORD* v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // [rsp+28h] [rbp-20h]

	LODWORD(v12) = 0;
	if (!*(_QWORD*)(a1 + 88))
	{
		if (*(_DWORD*)(a1 + 104) >= *(_DWORD*)(a1 + 100))
			return 2i64;
		v6 = (_QWORD*)sub_1408819F0(dword_140C10F20, 32i64);
		if (!v6)
			return 2i64;
		*v6 = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(a1 + 88) = v6;
	}
	v7 = *(_QWORD**)(a1 + 80);
	v8 = *(_QWORD*)(a1 + 88);
	if (v7)
		*v7 = v8;
	else
		*(_QWORD*)(a1 + 72) = v8;
	v10 = *(_QWORD**)(a1 + 88);
	*(_QWORD*)(a1 + 80) = v10;
	*(_QWORD*)(a1 + 88) = *v10;
	*v10 = 0i64;
	v11 = *(_QWORD**)(a1 + 80);
	++* (_DWORD*)(a1 + 104);
	v11[1] = a2;
	v11[2] = v12;
	v11[3] = a3;
	return 1i64;
}
// 14082A695: variable 'v12' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

