#include "../winhttp.h"

//----- (00000001403D89D0) ----------------------------------------------------
void __fastcall sub_1403D89D0(__int64 a1, char a2)
{
	int* v4; // rax
	int* v5; // rdx
	int* v6; // rax
	int* v7; // rdx

	if ((a2 & 1) != 0 && *(_QWORD*)(a1 + 56) && (*(_BYTE*)(a1 + 128) & 1) == 0)
	{
		v4 = sub_14018B280(16i64, 0);
		v5 = *(int**)(a1 + 56);
		*v4 = *v5;
		v4[1] = v5[1];
		v4[2] = v5[2];
		v4[3] = v5[3];
		*(_DWORD*)(a1 + 128) |= 1u;
		*(_QWORD*)(a1 + 56) = v4;
	}
	if ((a2 & 2) != 0)
		sub_1403D8950(a1);
	if ((a2 & 4) != 0 && *(_QWORD*)(a1 + 80) && (*(_BYTE*)(a1 + 128) & 4) == 0)
	{
		v6 = sub_14018B280(16i64, 0);
		v7 = *(int**)(a1 + 80);
		*v6 = *v7;
		v6[1] = v7[1];
		v6[2] = v7[2];
		v6[3] = v7[3];
		*(_DWORD*)(a1 + 128) |= 4u;
		*(_QWORD*)(a1 + 80) = v6;
	}
}

