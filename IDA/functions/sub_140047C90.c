#include "../winhttp.h"

//----- (0000000140047C90) ----------------------------------------------------
__int64 __fastcall sub_140047C90(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rbp
	__int64 v6; // rsi
	unsigned __int64 v7; // rbx
	_QWORD* v8; // rdi
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r12
	unsigned __int64 v12; // rbp
	_QWORD* v13; // rsi
	__int64 v14; // r15
	__int64* v15; // rcx
	unsigned __int64 v16; // rbx
	__int64* v17; // rdi
	__int64 v18; // rcx

	v2 = a1[1];
	if (v2 > a2)
	{
		v5 = a2;
		if (a2 < v2)
		{
			v6 = 16 * a2;
			do
			{
				v7 = 0i64;
				v8 = (_QWORD*)(v6 + *a1);
				if (v8[1])
				{
					do
					{
						v9 = *(_QWORD*)(*v8 + 8 * v7);
						if (v9)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
						++v7;
					} while (v7 < v8[1]);
				}
				if (*v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16i64) + 8i64))(*v8 - 16i64);
				++v5;
				v6 += 16i64;
			} while (v5 < a1[1]);
		}
		a1[1] = a2;
	}
	result = (__int64)sub_14018DBC0(*a1, a2, 16i64);
	v11 = result;
	if (*a1 != result)
	{
		v12 = 0i64;
		if (a1[1])
		{
			v13 = (_QWORD*)result;
			v14 = -result;
			do
			{
				if (v13)
				{
					v15 = (_QWORD*)((char*)v13 + v14 + *a1);
					v13[1] = v15[1];
					result = *v15;
					*v13 = *v15;
					v15[1] = 0i64;
					*v15 = 0i64;
				}
				v16 = 0i64;
				v17 = (_QWORD*)((char*)v13 + v14 + *a1);
				if (v17[1])
				{
					do
					{
						result = *v17;
						v18 = *(_QWORD*)(*v17 + 8 * v16);
						if (v18)
							result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
						++v16;
					} while (v16 < v17[1]);
				}
				if (*v17)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*v17 - 16) + 8i64))(*v17 - 16);
				++v12;
				v13 += 2;
			} while (v12 < a1[1]);
		}
		if (*a1)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = v11;
	}
	return result;
}

