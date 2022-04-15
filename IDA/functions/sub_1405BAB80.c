#include "../winhttp.h"

//----- (00000001405BAB80) ----------------------------------------------------
void __fastcall sub_1405BAB80(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_QWORD* v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx

	*(_QWORD*)a1 = off_140B6D860;
	v2 = *(_QWORD*)(a1 + 1024);
	if (v2)
		v3 = *(_QWORD*)(v2 + 16);
	else
		v3 = 0i64;
	v4 = (_QWORD*)qword_140C65B88;
	if (!qword_140C65B88)
	{
		v4 = sub_14018B280((unsigned int)(qword_140C65B88 + 72), 0);
		if (v4)
			v4 = sub_1405B92D0(v4);
		qword_140C65B88 = (__int64)v4;
	}
	sub_1405BC5A0((__int64)v4, v3, (_DWORD*)a1);
	v6 = *(_QWORD*)(a1 + 1024);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 1024) = 0i64;
	}
	v7 = *(_QWORD*)(a1 + 1080);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 1080) = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 1104);
	if (v8)
		sub_14018B900(v8, 0);
	v9 = *(_QWORD*)(a1 + 1032);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 1032) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 1056);
	if (v10)
		sub_14018B900(v10, 0);
	sub_1400C6030(a1, v5);
}
// 1405BAC6D: variable 'v5' is possibly undefined
// 140B6D860: using guessed type __int64 (__fastcall *off_140B6D860[25])();
// 140C65B88: using guessed type __int64 qword_140C65B88;

