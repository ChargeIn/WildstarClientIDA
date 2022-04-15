#include "../winhttp.h"

//----- (0000000140515120) ----------------------------------------------------
__int64 __fastcall sub_140515120(__int64 a1, __int64 a2)
{
	int* v3; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = &off_140B6B720;
	*(_DWORD*)(a1 + 16) = 300;
	*(_DWORD*)(a1 + 20) = -1;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 32) = v3;
	*(_QWORD*)(a1 + 40) = v3;
	*(_QWORD*)(a1 + 48) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	return a1;
}
// 140B6B720: using guessed type __int64 (__fastcall *off_140B6B720)();

