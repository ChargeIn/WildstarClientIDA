#include "../winhttp.h"

//----- (00000001402F6790) ----------------------------------------------------
void __fastcall sub_1402F6790(__int64 a1, unsigned int a2)
{
	__int64 i; // rbx
	__int64 v5; // rcx

	if (*(_QWORD*)(a1 + 1128))
	{
		for (i = 0i64; (unsigned int)i < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 696i64); i = (unsigned int)(i + 1))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 1128) + 40 * i);
			if (v5)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 80i64))(v5, a2);
		}
	}
}

