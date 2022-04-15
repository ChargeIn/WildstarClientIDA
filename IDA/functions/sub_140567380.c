#include "../winhttp.h"

//----- (0000000140567380) ----------------------------------------------------
__int64 __fastcall sub_140567380(__int64 a1, _QWORD* a2)
{
	int* v4; // rax

	*(_DWORD*)(a1 + 52) = 1;
	*(_DWORD*)(a1 + 48) = 8;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_BYTE*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 92) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_DWORD*)(a1 + 120) = 1414420037;
	*(_DWORD*)(a1 + 188) = 0;
	*(_QWORD*)a1 = *a2;
	*(_QWORD*)(a1 + 8) = a2[1];
	*(_QWORD*)(a1 + 16) = a2[2];
	*(_QWORD*)(a1 + 24) = a2[3];
	*(_QWORD*)(a1 + 32) = a2[4];
	*(_QWORD*)(a1 + 40) = a2[5];
	*(_QWORD*)(a1 + 48) = a2[6];
	*(_QWORD*)(a1 + 56) = a2[7];
	*(_QWORD*)(a1 + 64) = a2[8];
	*(_QWORD*)(a1 + 72) = a2[9];
	*(_QWORD*)(a1 + 80) = a2[10];
	*(_QWORD*)(a1 + 88) = a2[11];
	*(_QWORD*)(a1 + 96) = a2[12];
	if (*(_BYTE*)(a1 + 56))
	{
		v4 = sub_14018B280(32i64, 0);
		*(_QWORD*)(a1 + 64) = v4;
		v4[2] = *(_DWORD*)(a2[8] + 8i64);
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 12i64) = *(_DWORD*)(a2[8] + 12i64);
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 4i64) = *(_DWORD*)(a2[8] + 4i64);
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 20i64) = *(_DWORD*)(a2[8] + 20i64);
		**(_DWORD**)(a1 + 64) = *(_DWORD*)a2[8];
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 28i64) = *(_DWORD*)(a2[8] + 28i64);
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_DWORD*)(a2[8] + 16i64);
	}
	return a1;
}

