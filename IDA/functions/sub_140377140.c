#include "../winhttp.h"

//----- (0000000140377140) ----------------------------------------------------
__int64 __fastcall sub_140377140(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	unsigned __int64 v4; // rbp
	__int64 v5; // rbx
	__int64 v6; // rcx
	int v7; // edi
	__int64 result; // rax
	int v9; // r11d
	int v10; // ebx
	__int64 v11; // r10
	int v12; // r9d
	__int64* v13; // rcx
	int v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+24h] [rbp-14h]
	int v16; // [rsp+28h] [rbp-10h]
	unsigned int v17; // [rsp+2Ch] [rbp-Ch]
	__int64 v18; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	if (*(_DWORD*)(a1 + 72))
	{
		v3 = *(_QWORD*)(a1 + 16) + 5096i64;
		v18 = *(_QWORD*)(a1 + 24);
		v4 = (*(__int64(__fastcall**)(__int64*))(v3 + 24))(&v18);
		v5 = *(_QWORD*)(v3 + 16) + 8 * (v4 % *(_QWORD*)(v3 + 8));
		if (*(_QWORD*)v5)
		{
			while (v4 != **(_QWORD**)v5
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v3 + 32))(&v18, *(_QWORD*)v5 + 16i64))
			{
				v5 = *(_QWORD*)v5 + 8i64;
				if (!*(_QWORD*)v5)
					goto LABEL_10;
			}
			v6 = *(_QWORD*)v5;
			*(_QWORD*)v5 = *(_QWORD*)(*(_QWORD*)v5 + 8i64);
			sub_14018B900(v6, 0);
			--* (_QWORD*)v3;
		}
	LABEL_10:
		*(_DWORD*)(a1 + 72) = 0;
	}
	(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 24) + 192i64))(*(_QWORD*)(a1 + 24), &v14);
	v7 = v15;
	result = v17;
	if (v15 < (int)v17)
	{
		v9 = v16;
		v10 = v14;
		do
		{
			if (v10 < v9)
			{
				do
				{
					v11 = *(_QWORD*)(a1 + 16);
					if (v10 >= *(_DWORD*)(v11 + 2188)
						&& v10 < *(_DWORD*)(v11 + 2196)
						&& v7 >= *(_DWORD*)(v11 + 2192)
						&& v7 < *(_DWORD*)(v11 + 2200))
					{
						v12 = *(_DWORD*)(v11 + 2204);
						v13 = *(__int64**)(*(_QWORD*)(v11 + 2272)
							+ 8i64
							* (v10 % v12
								+ v12
								* (v7 % *(_DWORD*)(v11 + 2208)
									+ *(_DWORD*)(v11 + 2208) * (v7 % *(_DWORD*)(v11 + 2208) < 0))
								+ v12 * (unsigned int)(v10 % v12 < 0)));
						if (v13)
						{
							sub_140383310(v13);
							v9 = v16;
						}
					}
					++v10;
				} while (v10 < v9);
				result = v17;
				v10 = v14;
			}
			++v7;
		} while (v7 < (int)result);
	}
	return result;
}

