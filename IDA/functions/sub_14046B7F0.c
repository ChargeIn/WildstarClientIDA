#include "../winhttp.h"

//----- (000000014046B7F0) ----------------------------------------------------
void __fastcall sub_14046B7F0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // r14
	int* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax

	if (a2 && a3)
	{
		if (*(_DWORD*)(a3 + 188) || (v6 = *(_QWORD*)(a3 + 176)) != 0 && (*(_BYTE*)(v6 + 60) & 2) != 0)
		{
			v7 = *(_QWORD*)(a1 + 5656);
			v8 = sub_14018DB00(*(_QWORD*)(a1 + 5648), v7 + 1, 8i64);
			v9 = v8;
			*(_QWORD*)&v8[2 * v7] = a2;
			v10 = *(int**)(a1 + 5648);
			if (v10 != v8)
			{
				sub_1407DB590(v8, v10, 8i64 * *(_QWORD*)(a1 + 5656));
				v11 = *(_QWORD*)(a1 + 5648);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				*(_QWORD*)(a1 + 5648) = v9;
			}
			*(_QWORD*)(a1 + 5656) = v7 + 1;
		}
		sub_14046B920(a1, a2);
		v12 = *(unsigned int*)(a1 + 8);
		v13 = *(_QWORD*)(qword_140C65898 + 120);
		if (v13 && *(_DWORD*)(v13 + 8) == (_DWORD)v12
			|| (v14 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v14 + 8) == (_DWORD)v12)
		{
			sub_1405A7380(v12, a2, a3);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

