#include "../winhttp.h"

//----- (0000000140862060) ----------------------------------------------------
void __fastcall sub_140862060(__int64 a1)
{
	__int64 v1; // rbx
	__int64* v3; // rdi
	unsigned int v4; // edx
	__int64 v5; // rdx

	v1 = *(_QWORD*)a1;
	if (*(_QWORD*)a1 != *(_QWORD*)(a1 + 8))
	{
		v3 = (__int64*)(v1 + 24);
		do
		{
			if (*(v3 - 2))
			{
				v4 = *((_DWORD*)v3 - 1);
				if (v4 != -1)
				{
					sub_1408420F0((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, v4);
					if (*v3)
						sub_140841FE0(*v3, 0);
				}
			}
			v1 += 32i64;
			v3 += 4;
		} while (v1 != *(_QWORD*)(a1 + 8));
	}
	v5 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = v5;
		sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B58: using guessed type __int64 qword_140C61B58;

