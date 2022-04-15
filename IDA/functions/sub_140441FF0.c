#include "../winhttp.h"

//----- (0000000140441FF0) ----------------------------------------------------
void __fastcall sub_140441FF0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // r14
	int* v7; // rdx
	__int64 v8; // rcx

	if (a2 && *(_QWORD*)(a1 + 16) < 0xFFui64)
	{
		v4 = *(_QWORD*)(a1 + 16);
		v5 = sub_14018DB00(*(_QWORD*)(a1 + 8), v4 + 1, 8i64);
		v6 = v5;
		*(_QWORD*)&v5[2 * v4] = a2;
		v7 = *(int**)(a1 + 8);
		if (v7 != v5)
		{
			sub_1407DB590(v5, v7, 8i64 * *(_QWORD*)(a1 + 16));
			v8 = *(_QWORD*)(a1 + 8);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			*(_QWORD*)(a1 + 8) = v6;
		}
		*(_QWORD*)(a1 + 16) = v4 + 1;
		*(float*)(a1 + 4) = *(float*)(a2 + 8) + *(float*)(a1 + 4);
	}
}

