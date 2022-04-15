#include "../winhttp.h"

//----- (000000014015CE70) ----------------------------------------------------
void __fastcall sub_14015CE70(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx

	v3 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	if (v3)
		sub_1400579E0(*(_QWORD*)(v3 + 400), a2, *(_DWORD*)(a1 + 176));
	v4 = *(_QWORD*)(a1 + 184);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 184) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 192);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 192) = 0i64;
	}
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 164));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 160));
	v6 = *(_QWORD*)(a1 + 112);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 112) = 0i64;
	}
	v7 = *(_QWORD*)(a1 + 136);
	if (v7)
		sub_14018B900(v7, 0);
	v8 = *(_QWORD*)(a1 + 88);
	if (v8)
		sub_14018B900(v8, 0);
	v9 = *(_QWORD*)(a1 + 56);
	if (v9)
		sub_14018B900(v9, 0);
	v10 = *(_QWORD*)(a1 + 24);
	if (v10)
		sub_14018B900(v10, 0);
}
// 140C63678: using guessed type __int64 qword_140C63678;

