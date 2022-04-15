#include "../winhttp.h"

//----- (0000000140522130) ----------------------------------------------------
__int64 __fastcall sub_140522130(struct _FILETIME a1, __int64 a2)
{
	__int64* v2; // r8
	int v4; // eax
	int v5; // eax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v2 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(a2 + 24) + 32i64) < *(_QWORD*)(a2 + 16))
		v2 = (__int64*)(*(_QWORD*)(a2 + 24) + 32i64);
	v4 = *((_DWORD*)v2 + 2);
	if (v4 == 3)
		goto LABEL_7;
	if (v4 == 4 && sub_14005AC80((char*)(*v2 + 32), (unsigned __int64*)&v9))
	{
		v8 = 3;
		v2 = &v7;
		v7 = v9;
	LABEL_7:
		v5 = (int)*(double*)v2;
		goto LABEL_8;
	}
	v5 = 0;
LABEL_8:
	*(_DWORD*)(*(_QWORD*)&a1 + 16i64) = v5;
	if (sub_140527540(a1))
		*(_DWORD*)(*(_QWORD*)&a1 + 20i64) = 1;
	return 0i64;
}
// 140522194: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

