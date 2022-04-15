#include "../winhttp.h"

//----- (0000000140047940) ----------------------------------------------------
__int64 __fastcall sub_140047940(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rbp
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r15
	unsigned __int64 v12; // rbp
	__int64 v13; // rsi
	__int64 v14; // r14
	__int64 v15; // rdi
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // rcx

	v2 = a1[1];
	if (v2 > a2)
	{
		v5 = a2;
		if (a2 < v2)
		{
			v6 = 104 * a2;
			do
			{
				v7 = *a1;
				v8 = *(_QWORD*)(*a1 + v6 + 96);
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				v9 = *(_QWORD*)(v7 + v6 + 88);
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
				++v5;
				v6 += 104i64;
			} while (v5 < a1[1]);
		}
		a1[1] = a2;
	}
	result = (__int64)sub_14018DBC0(*a1, a2, 104i64);
	v11 = result;
	if (*a1 != result)
	{
		v12 = 0i64;
		if (a1[1])
		{
			v13 = result;
			v14 = -result;
			do
			{
				if (v13)
				{
					v15 = *a1 + v14 + v13;
					*(_QWORD*)(v13 + 56) = 0i64;
					*(_QWORD*)(v13 + 64) = 0i64;
					*(_QWORD*)(v13 + 72) = 0i64;
					sub_1407E4830((int*)v13, 0i64, 0x58ui64);
					*(_QWORD*)(v13 + 88) = 0i64;
					*(_QWORD*)(v13 + 96) = 0i64;
					result = sub_1400A7CF0(v13, v15);
				}
				v16 = *a1 + v14 + v13;
				v17 = *(_QWORD*)(v16 + 96);
				if (v17)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
				v18 = *(_QWORD*)(v16 + 88);
				if (v18)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
				++v12;
				v13 += 104i64;
			} while (v12 < a1[1]);
		}
		if (*a1)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = v11;
	}
	return result;
}

