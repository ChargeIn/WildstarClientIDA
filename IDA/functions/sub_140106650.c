#include "../winhttp.h"

//----- (0000000140106650) ----------------------------------------------------
__int64 __fastcall sub_140106650(__int64 a1, __int64 a2)
{
	int* v3; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 16) = 2;
	*(_BYTE*)(a1 + 20) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)a1 = off_140B56B50;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 72) = v3;
	*(_QWORD*)(a1 + 80) = v3;
	*(_QWORD*)(a1 + 88) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	return a1;
}
// 140B56B50: using guessed type __int64 (__fastcall *off_140B56B50[41])();

