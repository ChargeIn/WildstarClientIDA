#include "../winhttp.h"

//----- (00000001400E9360) ----------------------------------------------------
void __fastcall sub_1400E9360(__int64 a1, __int64 a2, char a3)
{
	__int64 v4; // rbx
	int* v5; // rdx
	__int64 v6; // [rsp+28h] [rbp-10h]

	if (*(_QWORD*)(a2 + 16))
	{
		v4 = *(_QWORD*)(a1 + 120);
		LOBYTE(v6) = a3;
		v5 = sub_14018B280(32i64, 0);
		if (v5 != (int*)-16i64)
		{
			*((_QWORD*)v5 + 2) = a2;
			*((_QWORD*)v5 + 3) = v6;
		}
		*(_QWORD*)v5 = v4;
		*((_QWORD*)v5 + 1) = *(_QWORD*)(v4 + 8);
		**(_QWORD**)(v4 + 8) = v5;
		*(_QWORD*)(v4 + 8) = v5;
		(**(void(__fastcall***)(__int64))a2)(a2);
	}
}
// 1400E9399: variable 'v6' is possibly undefined

