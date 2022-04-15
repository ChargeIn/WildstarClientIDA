#include "../winhttp.h"

//----- (00000001400B5470) ----------------------------------------------------
__int64 __fastcall sub_1400B5470(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax

	*(_QWORD*)a1 = off_140B56168;
	*(_DWORD*)(a1 + 16) = 0;
	v2 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 32) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 16i64) = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24i64) = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	sub_1400B6000((_QWORD*)(a1 + 112), 0i64);
	sub_1400B6000((_QWORD*)(a1 + 152), 0i64);
	sub_1400B6000((_QWORD*)(a1 + 192), 0i64);
	sub_1400B6000((_QWORD*)(a1 + 232), 0i64);
	sub_1400B6000((_QWORD*)(a1 + 272), 0i64);
	sub_1400B6000((_QWORD*)(a1 + 312), 0i64);
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	*(_QWORD*)(a1 + 376) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	v3 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 400) = 0i64;
	*(_QWORD*)(a1 + 392) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 392) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 392) + 16i64) = *(_QWORD*)(a1 + 392);
	*(_QWORD*)(*(_QWORD*)(a1 + 392) + 24i64) = *(_QWORD*)(a1 + 392);
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 432) = 0i64;
	*(_QWORD*)(a1 + 424) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 424) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 424) + 16i64) = *(_QWORD*)(a1 + 424);
	*(_QWORD*)(*(_QWORD*)(a1 + 424) + 24i64) = *(_QWORD*)(a1 + 424);
	return a1;
}
// 140B56168: using guessed type __int64 (__fastcall *off_140B56168[6])();

