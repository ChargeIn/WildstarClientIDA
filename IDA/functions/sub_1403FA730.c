#include "../winhttp.h"

//----- (00000001403FA730) ----------------------------------------------------
void __fastcall sub_1403FA730(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rcx
	_QWORD* v4; // rdx
	__int64 v5; // rdx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	__int64 v8; // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]
	int v10; // [rsp+50h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 32736);
	if (v1 && *(_QWORD*)(v1 + 24))
	{
		*(_DWORD*)(v1 + 40) = 4;
		sub_1404351E0(*(_QWORD*)(a1 + 32736));
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v10 = 205;
		sub_14001A500(&v6, 0i64, &v10);
		(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 30088) + 120i64))(*(_QWORD*)(a1 + 30088), &v6);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 160i64))(*(_QWORD*)(a1 + 30088), 1i64);
		v3 = *(_QWORD*)(a1 + 32736);
		v4 = *(_QWORD**)(v3 + 24);
		if (v4)
			*v4 = *(_QWORD*)(v3 + 32);
		v5 = *(_QWORD*)(v3 + 32);
		if (v5)
			*(_QWORD*)(v5 + 24) = *(_QWORD*)(v3 + 24);
		*(_QWORD*)(v3 + 24) = 0i64;
		*(_QWORD*)(v3 + 32) = 0i64;
		if (v7)
			sub_14018B900(v7, 0);
	}
}

