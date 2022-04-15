#include "../winhttp.h"

//----- (0000000140898D00) ----------------------------------------------------
void __fastcall sub_140898D00(__int64 a1, int a2)
{
	char v2; // al
	double v4; // xmm1_8
	double v5; // xmm0_8
	int v6; // [rsp+30h] [rbp+8h] BYREF
	int v7; // [rsp+34h] [rbp+Ch]

	v2 = *(_BYTE*)(a1 + 98);
	++* (_DWORD*)(a1 + 80);
	if ((v2 & 0xF) != 0)
	{
		if ((v2 & 1) != 0)
		{
			v4 = (double)(*(_DWORD*)(a1 + 112) - a2) * 1000.0 / (double)dword_140C110B4;
			if (v4 <= 0.0)
				v5 = -0.5;
			else
				v5 = 0.5;
			v7 = 4;
			v6 = (int)(v5 + v4);
			sub_14088BB90(a1, &v6, 0xFFFFFFFF);
		}
		sub_14088B630(a1);
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
		sub_14088B630(a1);
	}
}
// 140C110B4: using guessed type int dword_140C110B4;

