#include "../winhttp.h"

//----- (0000000140523050) ----------------------------------------------------
__int64 __fastcall sub_140523050(__int64 a1, _QWORD* a2)
{
	int v2; // r14d
	__int64* v4; // rdi
	__int64* v5; // rcx
	int v7; // eax
	unsigned int v8; // ebx
	int v9; // eax
	__int64 v10; // rdi
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	int v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+50h] [rbp+8h] BYREF

	v2 = 0;
	v4 = (__int64*)dword_140A12138;
	*(_DWORD*)(a1 + 16) = 0;
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a2[3] + 32i64) < a2[2])
		v5 = (__int64*)(a2[3] + 32i64);
	v7 = *((_DWORD*)v5 + 2);
	if (v7 == 3)
		goto LABEL_7;
	if (v7 == 4 && sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v14))
	{
		v13 = 3;
		v5 = &v12;
		v12 = v14;
	LABEL_7:
		v8 = (int)*(double*)v5;
		goto LABEL_8;
	}
	v8 = 0;
LABEL_8:
	if ((unsigned __int64)(a2[3] + 48i64) < a2[2])
		v4 = (__int64*)(a2[3] + 48i64);
	v9 = *((_DWORD*)v4 + 2);
	if (v9 == 3)
		goto LABEL_14;
	if (v9 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v14))
	{
		v13 = 3;
		v4 = &v12;
		v12 = v14;
	LABEL_14:
		v2 = (int)*(double*)v4;
	}
	*(_DWORD*)(a1 + 20) = v2;
	v10 = sub_140527630((__int64)v5, v8);
	if (!v10)
		sub_140056570(a2, 3u, "Must be a valid conversion");
	if ((*(_BYTE*)(*(_QWORD*)v10 + 32i64) & 1) == 0)
		sub_140056570(a2, 3u, "Provided conversion must be done with a creature");
	if (!*(_DWORD*)(a1 + 20))
		sub_140056570(a2, 4u, "Must be non zero amount");
	*(_DWORD*)(a1 + 16) = v8;
	return 0i64;
}
// 140523126: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

