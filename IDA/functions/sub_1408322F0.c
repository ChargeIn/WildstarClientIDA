#include "../winhttp.h"

//----- (00000001408322F0) ----------------------------------------------------
__int64 __fastcall sub_1408322F0(__int64 a1, int a2, unsigned __int16 a3)
{
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	int v8; // ebx

	if (a1 && (*(_BYTE*)(a1 + 91) & 8) != 0)
	{
		v5 = sub_1408819F0(dword_140C10F28, 1168i64);
		v6 = v5;
		if (v5)
		{
			sub_1408315A0(v5, a1);
			goto LABEL_7;
		}
		return 0i64;
	}
	v7 = sub_1408819F0(dword_140C10F28, 1136i64);
	v6 = v7;
	if (!v7)
		return 0i64;
	sub_140831750(v7);
LABEL_7:
	*(_QWORD*)(v6 + 864) = 0i64;
	if ((unsigned int)sub_140862F90(v6 + 32, a2, a3, a1) != 1 || !sub_140831840((__int64)&qword_140C61CC8, v6))
	{
		*(_QWORD*)(v6 + 8) = 0i64;
		*(_QWORD*)(v6 + 16) = 0i64;
		*(_DWORD*)v6 = 0;
		v8 = dword_140C10F28;
		sub_1408317B0(v6);
		sub_140881720(v8, v6);
		return 0i64;
	}
	return v6;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;

