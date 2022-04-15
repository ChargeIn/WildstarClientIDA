#include "../winhttp.h"

//----- (000000014002A220) ----------------------------------------------------
__int64 __fastcall sub_14002A220(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)a1 = off_140B55430;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 128) = v2;
	*(_QWORD*)(a1 + 136) = v2;
	*(_QWORD*)(a1 + 144) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	qword_140C63608 = a1;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55430: using guessed type __int64 (__fastcall *off_140B55430[9])();
// 140C63608: using guessed type __int64 qword_140C63608;

