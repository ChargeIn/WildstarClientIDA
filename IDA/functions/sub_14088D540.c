#include "../winhttp.h"

//----- (000000014088D540) ----------------------------------------------------
void __fastcall sub_14088D540(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	*(_WORD*)(a1 + 60) &= 0xFFFCu;
	if (v1)
	{
		while (1)
		{
			if (*(_DWORD*)(v1 + 8) == 1)
				sub_14088A800(qword_140C629C0, *(_QWORD*)(v1 + 16));
			v3 = *(_QWORD*)(v1 + 24);
			if (v1 == *(_QWORD*)(a1 + 16))
				*(_QWORD*)(a1 + 16) = v3;
			else
				MEMORY[0x18] = *(_QWORD*)(v1 + 24);
			sub_140881720(dword_140C10F20, v1);
			if (!v3)
				break;
			v1 = v3;
		}
	}
	v4 = *(_QWORD*)(a1 + 24);
	if (v4)
	{
		*(_QWORD*)(v4 + 136) = 0i64;
		v5 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 24) = 0i64;
		if (v5)
			sub_14088B630(v5);
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629C0: using guessed type __int64 qword_140C629C0;

