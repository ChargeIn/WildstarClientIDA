#include "../winhttp.h"

//----- (00000001404514F0) ----------------------------------------------------
__int64 __fastcall sub_1404514F0(__int64* a1)
{
	__int64 v1; // r13
	__int64 v3; // rbx
	unsigned __int64 v4; // rbp
	int* v5; // r12
	int* v6; // rcx
	int* v7; // rsi
	_QWORD* v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 result; // rax

	v1 = a1[1];
	v3 = v1 + 1;
	v4 = 0i64;
	v5 = sub_14018DB00(*a1, v1 + 1, 40i64);
	v6 = &v5[10 * v1];
	if (v6)
	{
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 1) = 0i64;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 3) = 0i64;
	}
	if ((int*)*a1 != v5)
	{
		if (a1[1])
		{
			v7 = v5;
			do
			{
				if (v7)
				{
					v8 = (_QWORD*)(*a1 + (char*)v7 - (char*)v5);
					*(_QWORD*)v7 = *v8;
					sub_1403B4F00((__int64*)v7 + 1, (__int64)(v8 + 1));
					sub_1403FE910((__int64*)v7 + 3, (__int64)(v8 + 3));
				}
				v9 = *a1 + (char*)v7 - (char*)v5;
				v10 = *(_QWORD*)(v9 + 24);
				if (v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
				v11 = *(_QWORD*)(v9 + 8);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				++v4;
				v7 += 10;
			} while (v4 < a1[1]);
			v3 = v1 + 1;
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v1;
	a1[1] = v3;
	return result;
}

