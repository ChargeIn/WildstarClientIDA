#include "../winhttp.h"

//----- (000000014004C2D0) ----------------------------------------------------
__int64 __fastcall sub_14004C2D0(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B55B10;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 380) = 0;
	*(_DWORD*)(a1 + 384) = 1065353216;
	*(_QWORD*)(a1 + 392) = 0i64;
	*(_QWORD*)(a1 + 400) = 0i64;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 424) = 0i64;
	*(_QWORD*)(a1 + 416) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 416) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 416) + 16i64) = *(_QWORD*)(a1 + 416);
	*(_QWORD*)(*(_QWORD*)(a1 + 416) + 24i64) = *(_QWORD*)(a1 + 416);
	*(_QWORD*)(a1 + 448) = 0i64;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55B10: using guessed type __int64 (__fastcall *off_140B55B10[3])();

