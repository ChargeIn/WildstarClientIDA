#include "../winhttp.h"

//----- (00000001408465C0) ----------------------------------------------------
__int64 __fastcall sub_1408465C0(__int64* a1)
{
	unsigned __int8 v1; // r12
	unsigned int i; // r13d
	unsigned int v4; // r15d
	__int64 v5; // rsi
	__int64* v6; // r14
	__int64 v7; // rax
	unsigned int j; // ebx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 result; // rax
	__int64 v14; // [rsp+70h] [rbp+8h] BYREF
	__int64 v15; // [rsp+78h] [rbp+10h] BYREF

	v1 = 0;
	for (i = 0; v1 < *((_BYTE*)a1 + 137); ++v1)
	{
		v4 = 0;
		v5 = a1[3 * v1 + 3];
		v6 = &a1[3 * v1 + 3];
		if ((unsigned int)((v6[1] - v5) >> 4))
		{
			do
			{
				if (*(_QWORD*)(v5 + 16i64 * v4 + 8))
				{
					v7 = *a1;
					for (j = 0; j < (unsigned int)((a1[1] - *a1) >> 4); ++j)
					{
						sub_140870D60(*(_BYTE**)(v7 + 16i64 * j + 8), v1, *(_DWORD*)(*v6 + 16i64 * v4), &v14, &v15);
						if (v14 && *(_WORD*)(v14 + 18))
						{
							v9 = *(_QWORD*)(v5 + 16i64 * v4 + 8);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 56i64))(v9);
						}
						if (v15 && *(_WORD*)(v15 + 18))
						{
							v10 = *(_QWORD*)(v5 + 16i64 * v4 + 8);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 64i64))(v10);
						}
						v7 = *a1;
					}
					v11 = *(_QWORD*)(v5 + 16i64 * v4 + 8);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 72i64))(v11);
				}
				v5 = *v6;
				++v4;
			} while (v4 < (unsigned int)((v6[1] - *v6) >> 4));
		}
	}
	v12 = *a1;
	result = (a1[1] - *a1) >> 4;
	if ((_DWORD)result)
	{
		do
		{
			sub_140871490(*(_QWORD**)(v12 + 16i64 * i + 8));
			v12 = *a1;
			++i;
			result = (a1[1] - *a1) >> 4;
		} while (i < (unsigned int)result);
	}
	return result;
}

