#include "../winhttp.h"

//----- (0000000140133E40) ----------------------------------------------------
__int64 __fastcall sub_140133E40(__int64 a1, __int64 a2, int* a3)
{
	_QWORD* v4; // rcx
	__int64 v5; // rax
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = off_140B57F50;
	v4 = (_QWORD*)(a1 + 16);
	v5 = 0i64;
	v4[1] = 0i64;
	v4[2] = 0i64;
	v4[3] = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v5;
		while (*((_WORD*)a3 + v5));
	}
	sub_14001C1B0(v4, a3, (__int64)a3 + 2 * v5);
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 80) = 1;
	*(_DWORD*)(a1 + 64) = -2;
	*(_QWORD*)(a1 + 56) = off_140B569F0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 104) = v6;
	*(_QWORD*)(a1 + 112) = v6;
	*(_QWORD*)(a1 + 120) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	v7 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 136) = v7;
	*(_QWORD*)(a1 + 144) = v7;
	*(_QWORD*)(a1 + 152) = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v8 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 168) = v8;
	*(_BYTE*)v8 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 16i64) = *(_QWORD*)(a1 + 168);
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24i64) = *(_QWORD*)(a1 + 168);
	v9 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 200) = v9;
	*(_BYTE*)v9 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 200) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 200) + 16i64) = *(_QWORD*)(a1 + 200);
	*(_QWORD*)(*(_QWORD*)(a1 + 200) + 24i64) = *(_QWORD*)(a1 + 200);
	*(_BYTE*)(a1 + 224) = 0;
	return a1;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B57F50: using guessed type __int64 (__fastcall *off_140B57F50[15])();

