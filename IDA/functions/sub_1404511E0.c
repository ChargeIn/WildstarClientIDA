#include "../winhttp.h"

//----- (00000001404511E0) ----------------------------------------------------
void __fastcall sub_1404511E0(__int64 a1)
{
	int v2; // ecx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = *(_DWORD*)(a1 + 48) - 1;
	if (!v2 || v2 == 2)
		sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	v3 = *(_QWORD*)(a1 + 72);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	v4 = *(_QWORD*)(a1 + 64);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = *(_QWORD*)(a1 + 40);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = *(_QWORD*)(a1 + 32);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = *(_QWORD*)(a1 + 24);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	v8 = *(_QWORD*)(a1 + 16);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
}

