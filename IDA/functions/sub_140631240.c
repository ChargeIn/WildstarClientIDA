#include "../winhttp.h"

//----- (0000000140631240) ----------------------------------------------------
__int64 __fastcall sub_140631240(__int64 a1, __int64 a2, int a3, int* a4, int* a5)
{
	__int64 v5; // rbx
	unsigned int v6; // edi
	int* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64* v12; // rax
	__int64 v13; // rax
	int v15[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v16; // [rsp+30h] [rbp-38h]
	__int64 v17; // [rsp+38h] [rbp-30h]
	char v18[16]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v19; // [rsp+50h] [rbp-18h]
	__int64 v20; // [rsp+58h] [rbp-10h]
	int v21; // [rsp+80h] [rbp+18h] BYREF

	v21 = a3;
	v5 = qword_140C65C18;
	sub_14062FCB0((__int64)v15, a2, a4, a5);
	v6 = v15[0];
	v7 = sub_140631600(v5 + 168, &v21);
	v8 = *((_QWORD*)v7 + 7);
	if (v8 == *((_QWORD*)v7 + 9) - 32i64)
	{
		sub_140632770((__int64)v18, (__int64)v15);
		if ((unsigned __int64)(*((_QWORD*)v7 + 2) - ((__int64)(*((_QWORD*)v7 + 10) - *((_QWORD*)v7 + 1)) >> 3)) < 2)
			sub_140633010((__int64)v7, v9);
		*(_QWORD*)(*((_QWORD*)v7 + 10) + 8i64) = sub_14018B280(480i64, 0);
		v10 = *((_QWORD*)v7 + 7);
		if (v10)
			sub_140632770(v10, (__int64)v18);
		v11 = v20;
		v12 = (__int64*)(*((_QWORD*)v7 + 10) + 8i64);
		*((_QWORD*)v7 + 10) = v12;
		v13 = *v12;
		*((_QWORD*)v7 + 8) = v13;
		*((_QWORD*)v7 + 9) = v13 + 480;
		*((_QWORD*)v7 + 7) = *((_QWORD*)v7 + 8);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	}
	else
	{
		if (v8)
			sub_140632770(v8, (__int64)v15);
		*((_QWORD*)v7 + 7) += 32i64;
	}
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	return v6;
}
// 1406312DB: variable 'v9' is possibly undefined
// 140C65C18: using guessed type __int64 qword_140C65C18;

