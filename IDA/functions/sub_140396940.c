#include "../winhttp.h"

//----- (0000000140396940) ----------------------------------------------------
void __fastcall sub_140396940(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int v3; // edi
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // r14
	int* v7; // rdx
	__int64 v8; // rcx

	if (a2)
	{
		v2 = qword_140C65898;
		v3 = *(_DWORD*)(a2 + 8);
		v4 = *(_QWORD*)(qword_140C65898 + 26432);
		v5 = sub_14018DB00(*(_QWORD*)(qword_140C65898 + 26424), v4 + 1, 4i64);
		v6 = v5;
		v5[v4] = v3;
		v7 = *(int**)(v2 + 26424);
		if (v7 != v5)
		{
			sub_1407DB590(v5, v7, 4i64 * *(_QWORD*)(v2 + 26432));
			v8 = *(_QWORD*)(v2 + 26424);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			*(_QWORD*)(v2 + 26424) = v6;
		}
		*(_QWORD*)(v2 + 26432) = v4 + 1;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

