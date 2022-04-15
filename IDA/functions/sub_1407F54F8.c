#include "../winhttp.h"

//----- (00000001407F54F8) ----------------------------------------------------
__int64 __fastcall sub_1407F54F8(int a1)
{
	__int64 v1; // rdi
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // ecx
	DWORD v5; // ecx

	if (a1 >= 0 && a1 < (unsigned int)dword_140DC523C)
	{
		v1 = (__int64)a1 >> 5;
		v2 = 88i64 * (a1 & 0x1F);
		v3 = qword_140C60410[v1];
		if ((*(_BYTE*)(v3 + v2 + 8) & 1) != 0 && *(_QWORD*)(v3 + 88i64 * (a1 & 0x1F)) != -1i64)
		{
			if (dword_140C5FB30 == 1)
			{
				if (!a1)
				{
					v5 = -10;
					goto LABEL_12;
				}
				v4 = a1 - 1;
				if (!v4)
				{
					v5 = -11;
					goto LABEL_12;
				}
				if (v4 == 1)
				{
					v5 = -12;
				LABEL_12:
					SetStdHandle(v5, 0i64);
				}
			}
			*(_QWORD*)(v2 + qword_140C60410[v1]) = -1i64;
			return 0i64;
		}
	}
	*(_DWORD*)sub_1407DE1B0() = 9;
	*(_DWORD*)sub_1407DE140() = 0;
	return 0xFFFFFFFFi64;
}
// 140C5FB30: using guessed type int dword_140C5FB30;
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

