#include "../winhttp.h"

//----- (00000001405A5980) ----------------------------------------------------
__int64 __fastcall sub_1405A5980(__int64 a1, __int64 a2)
{
	__int64 i; // rbx
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx

	for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
	{
		v4 = 12 * i;
		v5 = sub_140561C30(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(a2 + 8) + 12 * i));
		if (v5)
		{
			v6 = *(_QWORD*)(v5 + 72);
			if (v6)
			{
				v7 = *(_QWORD*)(a2 + 8);
				while (*(_DWORD*)(v6 + 64) != *(_DWORD*)(v7 + v4 + 4))
				{
					v6 = *(_QWORD*)(v6 + 40);
					if (!v6)
						goto LABEL_9;
				}
				sub_1407188D0(v6, *(_DWORD*)(v7 + v4 + 8));
			}
		}
	LABEL_9:
		;
	}
	return 0i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

