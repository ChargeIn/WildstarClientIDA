#include "../winhttp.h"

//----- (0000000140080EE0) ----------------------------------------------------
void __fastcall sub_140080EE0(__int64 a1, _QWORD* a2, int* a3)
{
	unsigned __int64 v6; // rax
	int v7; // eax

	if (a3)
	{
		if ((int)sub_14006C090(a1, a3, 3ui64) >= 0)
		{
			v6 = *a3;
			if (v6 < 6)
			{
				((void(__fastcall*)(__int64, _QWORD*))funcs_140080F3E[v6])(a1, a2);
				if (v7 >= 0 && (int)sub_14006C090(a1, a3 + 14, 0x20ui64) >= 0)
					sub_140336980(a1, a2, (_QWORD*)a3 + 8);
			}
		}
	}
}
// 140080F44: variable 'v7' is possibly undefined
// 140C1ECF0: using guessed type __int64 (__fastcall *funcs_140080F3E[31])();

