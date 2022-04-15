#include "../winhttp.h"

//----- (00000001401DC2B0) ----------------------------------------------------
void __fastcall sub_1401DC2B0(__int64 a1)
{
	const void*** v2; // rbx
	int i; // edi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rbx
	int j; // edi
	__int64 v11; // rcx
	__int64 v12; // rcx

	*(_QWORD*)a1 = off_140B60150;
	sub_1401DC3F0();
	v2 = (const void***)(a1 + 352);
	sub_1401981B0((__int64**)(a1 + 352));
	if (*(_QWORD*)(a1 + 352))
		sub_1401A4A00((const void***)(a1 + 352));
	for (i = 6; i >= 0; --i)
	{
		if (*--v2)
			sub_1401A4A00(v2);
	}
	sub_140019490((_QWORD*)(a1 + 256));
	sub_14018B900(*(_QWORD*)(a1 + 272), 0);
	*(_QWORD*)(a1 + 272) = 0i64;
	if (*(_QWORD*)(a1 + 248))
		sub_1401A4A00((const void***)(a1 + 248));
	if (*(_QWORD*)(a1 + 240))
		sub_1401A4A00((const void***)(a1 + 240));
	v4 = *(_QWORD*)(a1 + 96);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = *(_QWORD*)(a1 + 88);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v6 = *(_QWORD*)(a1 + 80);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	v7 = *(_QWORD*)(a1 + 72);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	v8 = *(_QWORD*)(a1 + 64);
	v9 = a1 + 64;
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	for (j = 3; j >= 0; --j)
	{
		v11 = *(_QWORD*)(v9 - 8);
		v9 -= 8i64;
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	}
	v12 = *(_QWORD*)(a1 + 24);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
}
// 140B60150: using guessed type __int64 (__fastcall *off_140B60150[8])();

