#include "../winhttp.h"

//----- (0000000140644D30) ----------------------------------------------------
__int64 __fastcall sub_140644D30(__int64 a1, unsigned int a2)
{
	unsigned int v2; // ebx
	unsigned int v3; // edi
	__int64 v4; // rax

	v2 = a2;
	if (a2)
	{
		while (1)
		{
			v3 = v2;
			if (qword_140C63840)
			{
				v4 = qword_140C63840(off_140A69170, v2, qword_140C63858);
			}
			else
			{
				if (dword_140C638BC || (int)sub_1401E9680() < 0)
					return v3;
				v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(qword_140C64768, v2);
			}
			if (v4)
			{
				v2 = *(_DWORD*)(v4 + 12);
				if (v2)
					continue;
			}
			return v3;
		}
	}
	return 0i64;
}
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;

