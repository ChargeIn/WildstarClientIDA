#include "../winhttp.h"

//----- (000000014088D490) ----------------------------------------------------
void __fastcall sub_14088D490(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rdi
	__int64 v4; // rax
	__int64 v5; // [rsp+20h] [rbp-28h]

	v1 = *(_QWORD*)(a1 + 16);
	v2 = 0i64;
	while (v1)
	{
		if (*(_DWORD*)(v1 + 8) == 1)
		{
			sub_14088A800(qword_140C629C0, *(_QWORD*)(v1 + 16));
			v4 = *(_QWORD*)(v1 + 24);
			v5 = v4;
			if (v1 == *(_QWORD*)(a1 + 16))
				*(_QWORD*)(a1 + 16) = v4;
			else
				*(_QWORD*)(v2 + 24) = v4;
			sub_140881720(dword_140C10F20, v1);
			v1 = v5;
		}
		else
		{
			v2 = v1;
			v1 = *(_QWORD*)(v1 + 24);
		}
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629C0: using guessed type __int64 qword_140C629C0;

