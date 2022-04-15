#include "../winhttp.h"

//----- (00000001405F00E0) ----------------------------------------------------
__int64 __fastcall sub_1405F00E0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int v4; // eax
	__int64 result; // rax

	sub_1405F8030(a1);
	*(_QWORD*)a1 = off_140B6F140;
	v2 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 160) = v2;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 160) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 160) + 16i64) = *(_QWORD*)(a1 + 160);
	*(_QWORD*)(*(_QWORD*)(a1 + 160) + 24i64) = *(_QWORD*)(a1 + 160);
	v3 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 208) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 16i64) = *(_QWORD*)(a1 + 208);
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 24i64) = *(_QWORD*)(a1 + 208);
	sub_1405F8DC0((_DWORD*)(a1 + 236));
	v4 = dword_140C636A8;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 432) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 448) = 0i64;
	*(_DWORD*)(a1 + 480) = 0;
	*(_DWORD*)(a1 + 476) = v4 - 1;
	*(_DWORD*)(a1 + 484) = 1;
	*(_DWORD*)(a1 + 488) = 1;
	result = a1;
	*(_DWORD*)(a1 + 492) = 1;
	return result;
}
// 140B6F140: using guessed type __int64 (__fastcall *off_140B6F140[325])();
// 140C636A8: using guessed type int dword_140C636A8;

