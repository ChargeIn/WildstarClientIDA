#include "../winhttp.h"

//----- (00000001400E14F0) ----------------------------------------------------
__int64 __fastcall sub_1400E14F0(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)a1 = 0i64;
	*(_BYTE*)(a1 + 8) = 0;
	*(_DWORD*)(a1 + 12) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	v2 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 72) = v2;
	*(_QWORD*)(a1 + 80) = v2;
	*(_QWORD*)(a1 + 88) = v2 + 2;
	if (v2)
		*(_BYTE*)v2 = 0;
	*(_DWORD*)(a1 + 96) = 0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 112) = 0;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	sub_1401095E0(a1 + 136);
	return a1;
}

