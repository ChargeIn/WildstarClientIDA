#include "../winhttp.h"

//----- (00000001400232F0) ----------------------------------------------------
__int64 __fastcall sub_1400232F0(__int64 a1, int a2)
{
	int* v3; // rax
	int* v4; // rax
	int* v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rcx
	unsigned int v9; // ebx
	__int64 v11[24]; // [rsp+20h] [rbp-E8h] BYREF
	__int128 v12; // [rsp+E0h] [rbp-28h]
	int* v13; // [rsp+F0h] [rbp-18h]

	sub_1400B7090((__int64)v11, a2);
	v13 = 0i64;
	v12 = 0i64;
	v11[0] = (__int64)off_140B69230;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v12 = v3;
	*((_QWORD*)&v12 + 1) = v3;
	v13 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = sub_14018B280(88i64, 0);
	v5 = v4;
	if (v4)
	{
		sub_1400B6390(v4);
		*((_QWORD*)v5 + 1) = 0i64;
		*(_QWORD*)v5 = off_140B69300;
	}
	else
	{
		v5 = 0i64;
	}
	sub_1400B7480((__int64)v11, v5);
	v6 = sub_1400B7660(v11);
	v7 = sub_1400481B0(a1, *(_QWORD*)(v6 + 8), 0i64);
	v8 = v12;
	*(_DWORD*)(a1 + 368) = 6;
	v9 = v7;
	if (v8)
		sub_14018B900(v8, 0);
	sub_1400B7390(v11);
	return v9;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();

