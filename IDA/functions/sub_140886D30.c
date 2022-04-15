#include "../winhttp.h"

//----- (0000000140886D30) ----------------------------------------------------
__int64 __fastcall sub_140886D30(__int64 a1, __int64 a2, int a3)
{
	unsigned int v4; // esi
	__int64 v5; // rdi
	unsigned __int64 v6; // rax
	unsigned __int64 v8; // rdx
	__int64 v9; // rcx

	v4 = sub_140884CC0((_DWORD*)a1, a2, a3);
	if (v4 == 1)
	{
		v5 = 24i64 * (unsigned int)(*(_DWORD*)(a1 + 244) + 1);
		v6 = sub_1408819F0(dword_140C111C0, v5);
		*(_QWORD*)(a1 + 288) = v6;
		if (!v6)
			return 2i64;
		v8 = v5 + v6;
		do
		{
			if (v6)
			{
				*(_DWORD*)(v6 + 20) &= ~4u;
				*(_DWORD*)(v6 + 20) |= 0xBu;
				*(_QWORD*)v6 = 0i64;
				*(_QWORD*)(v6 + 8) = 0i64;
				*(_DWORD*)(v6 + 16) = 0;
			}
			v9 = *(_QWORD*)(a1 + 280);
			if (v9)
			{
				*(_QWORD*)v6 = v9;
				*(_QWORD*)(a1 + 280) = v6;
			}
			else
			{
				*(_QWORD*)(a1 + 280) = v6;
				*(_QWORD*)v6 = 0i64;
			}
			v6 += 24i64;
		} while (v6 < v8);
	}
	return v4;
}
// 140C111C0: using guessed type int dword_140C111C0;

