#include "../winhttp.h"

//----- (0000000140608780) ----------------------------------------------------
void __fastcall sub_140608780(__int64 a1)
{
	int v2; // edi
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	sub_140608350(a1);
	v2 = 12;
	v3 = a1 + 696;
	do
	{
		v4 = *(_QWORD*)(v3 - 32);
		v3 -= 32i64;
		if (v4)
			sub_14018B900(v4, 0);
		--v2;
	} while (v2 >= 0);
	v5 = *(_QWORD*)(a1 + 256);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	sub_140008410(a1 + 120);
	sub_14018B900(*(_QWORD*)(a1 + 128), 0);
	if (*(_QWORD*)(a1 + 112))
		sub_1401A4A00((const void***)(a1 + 112));
	if (*(_QWORD*)(a1 + 104))
		sub_1401A4A00((const void***)(a1 + 104));
	v6 = *(_QWORD*)(a1 + 96);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	v7 = *(_QWORD*)(a1 + 88);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	v8 = *(_QWORD*)(a1 + 80);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
}

