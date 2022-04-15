#include "../winhttp.h"

//----- (0000000140860000) ----------------------------------------------------
__int64 __fastcall sub_140860000(__int64 a1, __int128* a2, float a3)
{
	unsigned int v4; // edi
	unsigned __int64 v5; // rdi
	__int64 v6; // rax
	__int128 v8; // [rsp+20h] [rbp-18h] BYREF

	v8 = *a2;
	if (a3 == 1.0)
	{
		v5 = *(_QWORD*)(a1 + 48);
		v6 = *(_QWORD*)(a1 + 56);
		if (v5 != v6)
		{
			do
			{
				if (*(_QWORD*)v5 == (_QWORD)v8 && ((BYTE8(v8) ^ *(_BYTE*)(v5 + 8)) & 1) == 0)
					break;
				v5 += 24i64;
			} while (v5 != v6);
			if (v5 != v6)
			{
				if (v5 < v6 - 24)
					qmemcpy((void*)v5, (const void*)(v5 + 24), 24 * ((v6 - 24 - v5 - 1) / 0x18 + 1));
				*(_QWORD*)(a1 + 56) -= 24i64;
			}
		}
		v4 = 1;
	}
	else
	{
		v4 = 2 - (sub_14084F8A0((__int64*)(a1 + 48), &v8, a3) != 0i64);
	}
	sub_14085D440(a1);
	return v4;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

