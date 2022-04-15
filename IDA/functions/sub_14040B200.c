#include "../winhttp.h"

//----- (000000014040B200) ----------------------------------------------------
__int64 __fastcall sub_14040B200(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rbp
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r14
	unsigned __int64 v12; // rsi
	__int64 v13; // rdi
	__int64 v14; // rbp
	__int64 v15; // rcx
	__int64 v16; // rcx

	v2 = a1[1];
	if (v2 > a2)
	{
		v5 = a2;
		if (a2 < v2)
		{
			v6 = 48 * a2;
			do
			{
				v7 = *a1;
				v8 = *(_QWORD*)(*a1 + v6 + 40);
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				v9 = *(_QWORD*)(v7 + v6 + 32);
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
				++v5;
				v6 += 48i64;
			} while (v5 < a1[1]);
		}
		a1[1] = a2;
	}
	result = (__int64)sub_14018DBC0(*a1, a2, 48i64);
	v11 = result;
	if (*a1 != result)
	{
		v12 = 0i64;
		if (a1[1])
		{
			v13 = 0i64;
			do
			{
				if (v13 + v11)
					result = sub_14040B570(v13 + v11, v13 + *a1);
				v14 = *a1;
				v15 = *(_QWORD*)(*a1 + v13 + 40);
				if (v15)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
				v16 = *(_QWORD*)(v14 + v13 + 32);
				if (v16)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
				++v12;
				v13 += 48i64;
			} while (v12 < a1[1]);
		}
		if (*a1)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = v11;
	}
	return result;
}

