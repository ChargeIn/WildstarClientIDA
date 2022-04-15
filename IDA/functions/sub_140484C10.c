#include "../winhttp.h"

//----- (0000000140484C10) ----------------------------------------------------
__int64 __fastcall sub_140484C10(__int64* a1)
{
	__int64 v1; // r12
	unsigned __int64 v3; // rbp
	int* v4; // r15
	int* v5; // rcx
	__int64* v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 result; // rax

	v1 = a1[1];
	v3 = 0i64;
	v4 = sub_14018DB00(*a1, v1 + 1, 24i64);
	v5 = &v4[6 * v1];
	if (v5)
	{
		*((_QWORD*)v5 + 1) = 0i64;
		*(_QWORD*)v5 = 0i64;
	}
	if ((int*)*a1 != v4)
	{
		if (a1[1])
		{
			v6 = (__int64*)v4;
			do
			{
				if (v6)
				{
					v7 = *a1 + (char*)v6 - (char*)v4;
					sub_1403B4F00(v6, v7);
					v6[2] = *(_QWORD*)(v7 + 16);
				}
				v8 = *(_QWORD*)(*a1 + (char*)v6 - (char*)v4);
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				++v3;
				v6 += 3;
			} while (v3 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v4;
	}
	result = v1;
	a1[1] = v1 + 1;
	return result;
}

