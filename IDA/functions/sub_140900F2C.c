#include "../winhttp.h"

//----- (0000000140900F2C) ----------------------------------------------------
void __fastcall sub_140900F2C(double a1, int* a2)
{
	__int64 v3; // rdi
	int v4; // eax
	__int64 v5; // r9
	double v6; // xmm3_8

	if (!a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return;
	}
	v3 = sub_1407F65B0(8064, 65472);
	if ((HIWORD(a1) & 0x7FF0) == 32752)
	{
		*a2 = -1;
		v4 = sub_1407F83D0(a1);
		if (v4 > 0)
		{
			if (v4 <= 2)
			{
				v6 = *(double*)&qword_140C10A98;
			LABEL_9:
				sub_1407F5C18(8, 23, a1, v6, v3);
				return;
			}
			if (v4 == 3)
			{
				sub_1407F6070(23, a1, v3, v5);
				return;
			}
		}
		v6 = a1 + 1.0;
		goto LABEL_9;
	}
	sub_1407F8264(a1, a2);
	sub_1407F65B0(v3, 65472);
}
// 140900FAA: variable 'v5' is possibly undefined
// 140C10A98: using guessed type __int64 qword_140C10A98;

