#include "../winhttp.h"

//----- (00000001408657C0) ----------------------------------------------------
__int64 __fastcall sub_1408657C0(__int64 a1, unsigned int a2)
{
	int v2; // r8d
	unsigned int v5; // esi
	__int64 i; // rbx
	_QWORD* v7; // rcx
	__int64 v8; // rax

	v2 = *(_DWORD*)(a1 + 72);
	v5 = 1;
	if (v2 != a2)
	{
		if (v2)
			sub_140839530(qword_140C61BB0, a1);
		*(_DWORD*)(a1 + 72) = a2;
		if (a2)
		{
			v5 = sub_1408377B0(qword_140C61BB0, a1, a2);
			if (v5 != 1)
				*(_DWORD*)(a1 + 72) = 0;
		}
		for (i = *(_QWORD*)(a1 + 32); i != *(_QWORD*)(a1 + 40); i += 40i64)
		{
			v7 = *(_QWORD**)(i + 16);
			if (v7)
			{
				v8 = v7[7];
				if (v8)
				{
					if (*(_WORD*)(v8 + 72))
						(*(void(__fastcall**)(_QWORD*))(*v7 + 408i64))(v7);
				}
			}
		}
	}
	return v5;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

