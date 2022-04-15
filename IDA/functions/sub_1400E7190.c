#include "../winhttp.h"

//----- (00000001400E7190) ----------------------------------------------------
void __fastcall sub_1400E7190(__int64 a1, int* a2, char a3)
{
	int* v6; // rax
	__int64 v7; // rbp
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rsi
	int* v11; // rdx
	__int64 v12; // rcx

	if (*(_WORD*)a2 && !sub_1400E8FA0(a1, a2))
	{
		v6 = sub_14018B280(112i64, 0);
		if (v6)
			v7 = sub_1401569A0((__int64)v6, a2, a3);
		else
			v7 = 0i64;
		v8 = *(_QWORD*)(a1 + 3208);
		v9 = sub_14018DB00(*(_QWORD*)(a1 + 3200), v8 + 1, 8i64);
		v10 = v9;
		*(_QWORD*)&v9[2 * v8] = v7;
		v11 = *(int**)(a1 + 3200);
		if (v11 != v9)
		{
			sub_1407DB590(v9, v11, 8i64 * *(_QWORD*)(a1 + 3208));
			v12 = *(_QWORD*)(a1 + 3200);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			*(_QWORD*)(a1 + 3200) = v10;
		}
		*(_QWORD*)(a1 + 3208) = v8 + 1;
	}
}

