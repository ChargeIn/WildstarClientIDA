#include "../winhttp.h"

//----- (00000001408815D0) ----------------------------------------------------
void __fastcall sub_1408815D0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
	unsigned int i; // ebx
	__int64 v9; // r8
	unsigned int v10; // eax

	if (*(_QWORD*)(a1 + 8))
	{
		if ((*(_BYTE*)(a2 + 8) & 4) != 0)
		{
			for (i = 0; i < *(_DWORD*)a1; ++i)
			{
				v9 = *(_QWORD*)(a1 + 8) + 16i64 * i;
				v10 = *(_DWORD*)(v9 + 4);
				if (v10 >= a3 && v10 < a4)
					sub_14083BA60(qword_140C61B80, a2, v9);
			}
		}
	}
}
// 140C61B80: using guessed type __int64 qword_140C61B80;

