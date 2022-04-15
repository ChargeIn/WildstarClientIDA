#include "../winhttp.h"

//----- (00000001405A5A10) ----------------------------------------------------
__int64 __fastcall sub_1405A5A10(__int64 a1, __int64 a2)
{
	__int64 i; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx

	for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
	{
		v4 = sub_140561C30(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(a2 + 8) + 12 * i));
		if (!v4)
			break;
		v5 = *(_QWORD*)(v4 + 72);
		if (v5)
		{
			while (*(_DWORD*)(v5 + 64) != *(_DWORD*)(*(_QWORD*)(a2 + 8) + 12 * i + 4))
			{
				v5 = *(_QWORD*)(v5 + 40);
				if (!v5)
					goto LABEL_8;
			}
			sub_140718980(v5);
		}
	LABEL_8:
		;
	}
	return 0i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

