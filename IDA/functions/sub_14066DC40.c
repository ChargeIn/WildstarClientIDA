#include "../winhttp.h"

//----- (000000014066DC40) ----------------------------------------------------
__int64 __fastcall sub_14066DC40(__int64 a1, __int64 a2)
{
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax

	*(_QWORD*)a1 = a2;
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 12) = -1;
	*(_DWORD*)(a1 + 16) = 0;
	v3 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 32) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 16i64) = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24i64) = *(_QWORD*)(a1 + 32);
	v4 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = *(_QWORD*)(a1 + 64);
	v5 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 16i64) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 24i64) = *(_QWORD*)(a1 + 96);
	v6 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 128) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 16i64) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 24i64) = *(_QWORD*)(a1 + 128);
	*(_DWORD*)(a1 + 152) = 0;
	sub_14040FAE0(a1 + 160);
	return a1;
}

