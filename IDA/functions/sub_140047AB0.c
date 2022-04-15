#include "../winhttp.h"

//----- (0000000140047AB0) ----------------------------------------------------
__int64 __fastcall sub_140047AB0(__int64* a1, __int64 a2)
{
	__int64 v2; // r13
	unsigned __int64 v5; // rbp
	int* v6; // r15
	__int64 v7; // rbx
	__int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rdi
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = 0i64;
	v6 = sub_14018DB00(*a1, v2 + 1, 104i64);
	v7 = (__int64)&v6[26 * v2];
	if (v7)
	{
		*(_QWORD*)(v7 + 56) = 0i64;
		*(_QWORD*)(v7 + 64) = 0i64;
		*(_QWORD*)(v7 + 72) = 0i64;
		sub_1407E4830((int*)v7, 0i64, 0x58ui64);
		*(_QWORD*)(v7 + 88) = 0i64;
		*(_QWORD*)(v7 + 96) = 0i64;
		sub_1400A7CF0(v7, a2);
	}
	if ((int*)*a1 != v6)
	{
		if (a1[1])
		{
			v8 = (__int64)v6;
			do
			{
				if (v8)
				{
					v9 = *a1 + v8 - (_QWORD)v6;
					*(_QWORD*)(v8 + 56) = 0i64;
					*(_QWORD*)(v8 + 64) = 0i64;
					*(_QWORD*)(v8 + 72) = 0i64;
					sub_1407E4830((int*)v8, 0i64, 0x58ui64);
					*(_QWORD*)(v8 + 88) = 0i64;
					*(_QWORD*)(v8 + 96) = 0i64;
					sub_1400A7CF0(v8, v9);
				}
				v10 = *a1 + v8 - (_QWORD)v6;
				v11 = *(_QWORD*)(v10 + 96);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				v12 = *(_QWORD*)(v10 + 88);
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
				++v5;
				v8 += 104i64;
			} while (v5 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v6;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

