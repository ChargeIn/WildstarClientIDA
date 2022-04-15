#include "../winhttp.h"

//----- (00000001400B0F80) ----------------------------------------------------
int __fastcall sub_1400B0F80(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rax

	*(_QWORD*)a1 = off_140B56130;
	*(_QWORD*)(a1 + 8) = off_140B56128;
	if (*(_QWORD*)(a1 + 344))
		CloseHandle(*(HANDLE*)(a1 + 344));
	v2 = *(_QWORD*)(a1 + 304);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = *(_QWORD*)(a1 + 248);
	if (v3)
		sub_14018B900(v3, 0);
	v4 = *(_QWORD*)(a1 + 216);
	if (v4)
		sub_14018B900(v4, 0);
	v5 = *(_QWORD*)(a1 + 168);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = *(_QWORD*)(a1 + 128);
	if (v6)
		sub_14018B900(v6, 0);
	v7 = *(_QWORD*)(a1 + 88);
	if (v7)
		sub_14018B900(v7, 0);
	sub_1400B4BE0(a1 + 48);
	sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	v8 = *(_QWORD*)(a1 + 40);
	if (v8)
		LODWORD(v8) = CloseHandle(*(HANDLE*)(a1 + 40));
	return v8;
}
// 140B56128: using guessed type __int64 (__fastcall *off_140B56128[5])();
// 140B56130: using guessed type __int64 (__fastcall *off_140B56130[4])();

