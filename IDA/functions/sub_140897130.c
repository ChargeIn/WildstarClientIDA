#include "../winhttp.h"

//----- (0000000140897130) ----------------------------------------------------
__int64 __fastcall sub_140897130(__int64 a1, __int64 a2)
{
	int v4; // ecx
	int v5; // ecx
	int v6; // ecx
	__int64 result; // rax
	int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64* v12; // rax
	__int64* i; // rdx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rbx

	*(_QWORD*)a1 = a2;
	*(_BYTE*)(a1 + 10) = *(_BYTE*)(a1 + 10) ^ (*(_BYTE*)(a1 + 10) ^ (2 * (*(_WORD*)(a2 + 20) == 0))) & 2 | 1;
	*(_WORD*)(a1 + 8) = *(_WORD*)(a2 + 20);
	v4 = *(_DWORD*)(a2 + 56);
	if (v4)
	{
		v5 = v4 - 1;
		if (v5)
		{
			v6 = v5 - 1;
			if (!v6)
			{
				v8 = 0;
				if ((unsigned int)((__int64)(*(_QWORD*)(a2 + 40) - *(_QWORD*)(a2 + 32)) >> 3))
				{
					v9 = sub_1408819F0(dword_140C10F20, 80i64);
					if (v9)
						v10 = sub_14087BDE0(v9, (__int64)(*(_QWORD*)(a2 + 40) - *(_QWORD*)(a2 + 32)) >> 3);
					else
						v10 = 0i64;
					*(_QWORD*)(a1 + 16) = v10;
				}
				v11 = *(_QWORD*)(a1 + 16);
				if (v11)
				{
					if ((unsigned int)sub_14087C1E0(v11, *(_WORD*)(a2 + 76)) == 1)
					{
						if (*(_BYTE*)(a2 + 72))
						{
							v12 = *(__int64**)(a2 + 32);
							for (i = *(__int64**)(a2 + 40); v12 != i; v8 += *(_DWORD*)(v14 + 24))
								v14 = *v12++;
							*(_DWORD*)(*(_QWORD*)(a1 + 16) + 28i64) = v8;
							*(_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64) = v8;
						}
						return 1i64;
					}
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 8i64))(*(_QWORD*)(a1 + 16));
					*(_QWORD*)(a1 + 16) = 0i64;
				}
				return 2i64;
			}
			if (v6 != 1)
				return 2i64;
		}
		*(_BYTE*)(a1 + 10) |= 2u;
		return 1i64;
	}
	if ((unsigned int)((__int64)(*(_QWORD*)(a2 + 40) - *(_QWORD*)(a2 + 32)) >> 3))
	{
		v15 = sub_1408819F0(dword_140C10F20, 32i64);
		if (v15)
			v16 = sub_14087BE20(v15);
		else
			v16 = 0i64;
		*(_QWORD*)(a1 + 16) = v16;
	}
	result = 2i64;
	if (*(_QWORD*)(a1 + 16))
		return 1i64;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

