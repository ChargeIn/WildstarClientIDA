#include "../winhttp.h"

//----- (00000001403FA490) ----------------------------------------------------
void __fastcall sub_1403FA490(__int64 a1, int a2)
{
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]
	int v8; // [rsp+50h] [rbp+8h] BYREF

	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 160i64))(*(_QWORD*)(a1 + 30088), 0i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 30088) + 168i64))(
		*(_QWORD*)(a1 + 30088),
		205i64,
		1i64);
	v5 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	v8 = 205;
	sub_14001A500(&v4, 0i64, &v8);
	(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 30088) + 120i64))(*(_QWORD*)(a1 + 30088), &v4);
	sub_140048100(a1, *(_QWORD*)(a1 + 32736), 3);
	sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(a1 + 32736) + 96i64), "OpenStore", &unk_1409D13CA);
	sub_140400A20((__int64*)(a1 + 72), *(_QWORD*)(qword_140C635F0 + 5792), a2);
	if (v5)
		sub_14018B900(v5, 0);
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

