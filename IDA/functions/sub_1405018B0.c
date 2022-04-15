#include "../winhttp.h"

//----- (00000001405018B0) ----------------------------------------------------
__int64 __fastcall sub_1405018B0(_QWORD* a1)
{
	__int64* v2; // rdi
	__int64 v3; // rax
	unsigned __int64 v4; // rdx
	unsigned int v5; // r8d
	__int64 v6; // rcx
	_QWORD* v7; // rbx
	int v8; // edi
	__int64* v9; // rbx
	__int64 v10; // rcx
	__int64 v12[7]; // [rsp+38h] [rbp-1E0h] BYREF
	__int64 v13[50]; // [rsp+70h] [rbp-1A8h] BYREF
	char v14; // [rsp+208h] [rbp-10h] BYREF

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = sub_14012AAF0(a1, 2u);
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0;
	if (v4)
	{
		v6 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v6) + 400i64) == a1)
				break;
			v6 = ++v5;
		} while (v5 < v4);
	}
	v7 = (_QWORD*)sub_14012B2B0(v3, a1);
	if (v7)
	{
		sub_140503450((__int64)v13);
		v12[0] = *v2;
		v12[1] = v2[1];
		v12[2] = v2[2];
		v12[4] = 1i64;
		v12[5] = 0i64;
		v12[3] = 0i64;
		sub_1405042B0(v13, v7, (__int64)v12);
		v8 = 3;
		v9 = (__int64*)&v14;
		v13[0] = (__int64)off_140B6A420;
		do
		{
			v10 = *(v9 - 6);
			v9 -= 11;
			if (v10)
				sub_14018B900(v10, 0);
			if (*v9)
				sub_14018B900(*v9, 0);
			--v8;
		} while (v8 >= 0);
	}
	return 0i64;
}
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 140C63650: using guessed type __int64 qword_140C63650;

