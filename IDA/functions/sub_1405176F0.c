#include "../winhttp.h"

//----- (00000001405176F0) ----------------------------------------------------
__int64 __fastcall sub_1405176F0(__int64 a1, __int64 a2)
{
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = off_140B6B590;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v3;
	*(_QWORD*)(a1 + 32) = v3;
	*(_QWORD*)(a1 + 40) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 56) = v4;
	*(_QWORD*)(a1 + 64) = v4;
	*(_QWORD*)(a1 + 72) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 88) = v5;
	*(_QWORD*)(a1 + 96) = v5;
	*(_QWORD*)(a1 + 104) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 120) = v6;
	*(_QWORD*)(a1 + 128) = v6;
	*(_QWORD*)(a1 + 136) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	result = a1;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_DWORD*)(a1 + 160) = 2;
	return result;
}
// 140B6B590: using guessed type __int64 (__fastcall *off_140B6B590[51])();

