#include "../winhttp.h"

//----- (00000001408610B0) ----------------------------------------------------
char __fastcall sub_1408610B0(__int64 a1, int a2, char a3)
{
	__int64 v3; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rax

	LOBYTE(v3) = *(_BYTE*)(a1 + 381);
	if ((v3 & 0x10) == 0)
	{
		LOBYTE(v3) = v3 | 0x10;
		*(_BYTE*)(a1 + 381) = v3;
		if (!a3)
			LOBYTE(v3) = sub_1408587E0(a1);
		if ((a2 & 0xFFFFFFFD) == 0)
		{
			v6 = *(_QWORD*)(a1 + 128);
			if (v6)
			{
				sub_14083B060(qword_140C61B70, v6, a1 + 16);
				*(_QWORD*)(a1 + 128) = 0i64;
			}
			v7 = *(_QWORD*)(a1 + 136);
			if (v7)
			{
				sub_14083B060(qword_140C61B70, v7, a1 + 16);
				*(_QWORD*)(a1 + 136) = 0i64;
			}
			v3 = *(_QWORD*)(a1 + 504);
			if (v3)
			{
				if ((*(_DWORD*)(v3 + 40) & 2) != 0)
				{
					v8 = sub_14084EB00(*(_QWORD*)(a1 + 160));
					*(_QWORD*)(v8 + 8) = 0i64;
					*(_DWORD*)v8 = 0;
				}
				LOBYTE(v3) = sub_14083A6D0((__int64**)qword_140C61B98, *(_QWORD*)(a1 + 504), a1);
				*(_QWORD*)(a1 + 504) = 0i64;
				*(_DWORD*)(a1 + 512) = 0;
			}
			*(_BYTE*)(a1 + 381) &= ~1u;
			*(_BYTE*)(a1 + 381) |= 4u;
		}
	}
	return v3;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B98: using guessed type __int64 qword_140C61B98;

