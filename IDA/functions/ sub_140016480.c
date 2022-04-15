#include "../winhttp.h"

//----- (0000000140016480) ----------------------------------------------------
void __fastcall sub_140016480(__int64 a1)
{
	__int64 v1; // rdx
	_QWORD* v3; // r8
	__int64 v4; // rcx
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64 v7; // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]
	int v9; // [rsp+50h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 5536);
	if (v1)
	{
		if (*(_QWORD*)(v1 + 24))
		{
			v3 = *(_QWORD**)(v1 + 24);
			if (v3)
				*v3 = *(_QWORD*)(v1 + 32);
			v4 = *(_QWORD*)(v1 + 32);
			if (v4)
				*(_QWORD*)(v4 + 24) = *(_QWORD*)(v1 + 24);
			*(_QWORD*)(v1 + 24) = 0i64;
			*(_QWORD*)(v1 + 32) = 0i64;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5536) + 8i64))(*(_QWORD*)(a1 + 5536));
		}
		if (qword_140C65898)
		{
			v6 = 0i64;
			v7 = 0i64;
			v8 = 0i64;
			v9 = 205;
			sub_14001A500(&v5, 0i64, &v9);
			(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(qword_140C65898 + 30088) + 120i64))(
				*(_QWORD*)(qword_140C65898 + 30088),
				&v5);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(qword_140C65898 + 30088) + 160i64))(
				*(_QWORD*)(qword_140C65898 + 30088),
				1i64);
			if (v6)
				sub_14018B900(v6, 0);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

