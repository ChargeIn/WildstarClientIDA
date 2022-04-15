#include "../winhttp.h"

//----- (0000000140829A50) ----------------------------------------------------
__int64 __fastcall sub_140829A50(__int64 a1, int* a2, unsigned int a3)
{
	unsigned __int64 v3; // rbp
	__int64 v5; // rcx
	unsigned int v7; // esi
	__int64 v8; // rax
	int* v10; // rdi
	_QWORD* v11; // rax

	v3 = a3;
	v5 = *(unsigned int*)(a1 + 40);
	if (dword_140C10F24 - (int)v5 < a3)
	{
		if (!*(_BYTE*)(a1 + 44))
		{
			v7 = *(_DWORD*)(a1 + 36) + 1;
			v8 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
			if (v7 >= (unsigned int)v8)
				v7 = 0;
			if (*(_DWORD*)(a1 + 28) != v7)
			{
				v10 = *(int**)(*(_QWORD*)a1 + 16i64 * v7);
			LABEL_15:
				*(_DWORD*)(a1 + 36) = v7;
				*(_DWORD*)(a1 + 40) = v3;
				sub_1407DB590(v10, a2, v3);
				goto LABEL_16;
			}
			if ((unsigned int)v8 < *(_DWORD*)(a1 + 24))
			{
				v10 = (int*)sub_1408819F0(dword_140C10F20, (unsigned int)dword_140C10F24);
				if (v10)
				{
					v11 = (_QWORD*)sub_140829930(a1, v7);
					if (!v11)
					{
						*(_BYTE*)(a1 + 44) = 1;
						sub_140881720(dword_140C10F20, (__int64)v10);
						return 52i64;
					}
					*v11 = v10;
					++* (_DWORD*)(a1 + 28);
					goto LABEL_15;
				}
			}
			*(_BYTE*)(a1 + 44) = 1;
		}
		return 52i64;
	}
	sub_1407DB590((int*)(*(_QWORD*)(*(_QWORD*)a1 + 16i64 * *(unsigned int*)(a1 + 36)) + v5), a2, a3);
	*(_DWORD*)(a1 + 40) += v3;
LABEL_16:
	*(_DWORD*)(*(_QWORD*)a1 + 16i64 * *(unsigned int*)(a1 + 36) + 8) = *(_DWORD*)(a1 + 40);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F24: using guessed type int dword_140C10F24;

