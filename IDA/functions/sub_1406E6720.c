#include "../winhttp.h"

//----- (00000001406E6720) ----------------------------------------------------
__int64 __fastcall sub_1406E6720(__int64 a1, __int64 a2)
{
	int* v4; // rax
	unsigned int v5; // ebx
	int* v6; // rdi
	__int64** v7; // rdx
	__int64 v9; // [rsp+30h] [rbp-28h] BYREF
	__int64 v10; // [rsp+38h] [rbp-20h]
	__int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

	v11[1] = 1i64;
	v4 = sub_14018B280(24i64, 0);
	v5 = 0;
	if (v4)
	{
		*((_QWORD*)v4 + 1) = 1i64;
		*(_QWORD*)v4 = off_140B55060;
	}
	else
	{
		v4 = 0i64;
	}
	v6 = v4 + 4;
	v10 = 0i64;
	v9 = 0i64;
	*((_QWORD*)v4 + 2) = a2;
	v7 = *(__int64***)(a1 + 2368);
	v11[0] = (__int64)(v4 + 4);
	if (v7)
	{
		sub_1406E5500(a1, v7, v11, &v9, sub_1406E67F0);
		LOBYTE(v5) = v10 != 0;
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	}
	if (v6)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	return v5;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

