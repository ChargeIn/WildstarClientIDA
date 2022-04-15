#include "../winhttp.h"

//----- (0000000140755220) ----------------------------------------------------
__int64 __fastcall sub_140755220(__int64 a1)
{
	__int64 v2; // rbx
	__int64* v3; // rax
	__int64* v4; // rcx
	int v5; // eax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+48h] [rbp+10h] BYREF

	if (!qword_140C65898)
		return 0i64;
	v2 = *(_QWORD*)(qword_140C65898 + 29064);
	if (!v2)
		return 0i64;
	v3 = *(__int64**)(a1 + 24);
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v3 < *(_QWORD*)(a1 + 16))
		v4 = v3;
	v5 = *((_DWORD*)v4 + 2);
	if (v5 == 3)
	{
	LABEL_9:
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 48i64))(v2, (unsigned int)(int)*(double*)v4);
		return 0i64;
	}
	if (v5 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v9))
	{
		v8 = 3;
		v4 = &v7;
		v7 = v9;
		goto LABEL_9;
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 48i64))(v2, 0i64);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

