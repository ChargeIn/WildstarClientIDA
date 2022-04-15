#include "../winhttp.h"

//----- (00000001407F5750) ----------------------------------------------------
__int64 __fastcall sub_1407F5750(const CHAR* a1, int a2, int a3, int a4, int* a5, int a6)
{
	int v7; // eax
	unsigned int v8; // edi
	__int64 v9; // rax
	int v10[6]; // [rsp+40h] [rbp-18h] BYREF

	v10[0] = 0;
	if (!a5 || (*a5 = -1, !a1) || a6 && (a4 & 0xFFFFFE7F) != 0)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	else
	{
		v7 = sub_1407F582C(v10, a5, a1, a2, a3, a4);
		v8 = v7;
		v10[1] = v7;
		if (v10[0])
		{
			if (v7)
			{
				v9 = qword_140C60410[(__int64)*a5 >> 5];
				*(_BYTE*)(v9 + 88i64 * (*a5 & 0x1F) + 8) &= ~1u;
			}
			sub_1407F56C8(*a5);
		}
		if (v8)
			*a5 = -1;
		return v8;
	}
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

