#include "../winhttp.h"

//----- (0000000140578050) ----------------------------------------------------
__int64 __fastcall sub_140578050(__int64* a1, int a2, int a3)
{
	__int64 v3; // rbx
	int v4; // ebp
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx

	v3 = *a1;
	v4 = 0;
	if (*a1)
	{
		while (*(_DWORD*)(v3 + 216) != a2)
		{
			v3 = *(_QWORD*)(v3 + 32);
			if (!v3)
				goto LABEL_10;
		}
		if (a3 && *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3) + 76))
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 80i64))(v3, 0i64);
		else
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3);
		v4 = 1;
	}
LABEL_10:
	v7 = a1[3];
	v8 = *(_QWORD*)(v7 + 16);
	if (v8 != v7)
	{
		do
		{
			v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v8 + 32));
			if (v9)
			{
				v10 = *(_QWORD*)(v9 + 1440);
				v11 = 0i64;
				if (v10)
				{
					v12 = 0i64;
					while (a2 != *(_DWORD*)(*(_QWORD*)(v9 + 1432) + 36 * v12))
					{
						v11 = (unsigned int)(v11 + 1);
						v12 = (unsigned int)v11;
						if ((unsigned int)v11 >= v10)
							goto LABEL_18;
					}
					sub_140579BF0((__int64*)(v9 + 1432), v11);
					v4 = 1;
				}
			}
		LABEL_18:
			v13 = *(_QWORD*)(v8 + 24);
			if (v13)
			{
				v8 = *(_QWORD*)(v8 + 24);
				for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
					v8 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = j;
				if (*(_QWORD*)(v8 + 24) != j)
					v8 = j;
			}
		} while (v8 != a1[3]);
	}
	if (!v4)
	{
		v16 = a1[1];
		if (v16)
		{
			do
			{
				v17 = *(_QWORD*)(v16 + 32);
				if (*(_DWORD*)(v16 + 40) == a2)
					(**(void(__fastcall***)(__int64, __int64))v16)(v16, 1i64);
				v16 = v17;
			} while (v17);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

