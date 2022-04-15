#include "../winhttp.h"

//----- (0000000140163460) ----------------------------------------------------
void __fastcall sub_140163460(__int64 a1, int a2, unsigned __int8 a3)
{
	__int64 v3; // rax
	__int64* v4; // rdx
	int v5; // [rsp+20h] [rbp-18h]
	int v6; // [rsp+28h] [rbp-10h]

	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 1144))
	{
		v3 = *(_QWORD*)(a1 + 1136);
		*(_DWORD*)(a1 + 1060) = a2;
		*(_BYTE*)(a1 + 1064) = a3;
		if (*(_BYTE*)(*(_QWORD*)(v3 + 8i64 * a2) + 2i64))
		{
			dword_140C63680 = a2;
			v4 = *(__int64**)(a1 + 1152);
			byte_140C1D18E = a3;
			sub_140168240(a1, v4, *(int*)(a1 + 1160));
		}
		else
		{
			v6 = a3;
			v5 = a2 + 1;
			sub_1400D4070(a1, 0x2Fu, (char*)a1, byte_1409DC9A4, v5, v6);
		}
	}
}
// 1409DC9A4: using guessed type _BYTE byte_1409DC9A4[24];
// 140C1D18E: using guessed type char byte_140C1D18E;
// 140C63680: using guessed type int dword_140C63680;

