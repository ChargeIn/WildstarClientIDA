#include "../winhttp.h"

//----- (0000000140725E90) ----------------------------------------------------
void __fastcall sub_140725E90(__int64 a1, _DWORD* a2, float* a3)
{
	int* v5; // rbx
	int* v6; // rax

	if (a3 && (float)((float)(*(float*)a2 - *a3) * (float)(*(float*)a2 - *a3)) < 0.00000095367432)
	{
		if (*(_DWORD*)a1)
		{
			sub_14018B900(*(_QWORD*)(a1 + 8), 0);
			sub_14018B900(*(_QWORD*)(a1 + 16), 0);
			*(_DWORD*)a1 = 0;
			*(_QWORD*)(a1 + 8) = 0i64;
			*(_QWORD*)(a1 + 16) = 0i64;
		}
	}
	else
	{
		if (*(_DWORD*)a1 != 1)
		{
			v5 = sub_14018C320(*(_QWORD*)(a1 + 8), 4ui64, 2u);
			v6 = sub_14018C320(*(_QWORD*)(a1 + 16), 4ui64, 2u);
			*(_QWORD*)(a1 + 8) = v5;
			*(_QWORD*)(a1 + 16) = v6;
			*(_DWORD*)a1 = 1;
		}
		**(_DWORD**)(a1 + 8) = 0;
		**(_DWORD**)(a1 + 16) = *a2;
	}
}

