#include "../winhttp.h"

//----- (0000000140590A90) ----------------------------------------------------
__int64 __fastcall sub_140590A90(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rax
	__int64 v4; // rcx

	v3 = (_DWORD*)sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	if (v3)
	{
		v3[106] = *(_DWORD*)(a2 + 16);
		v3[107] = *(_DWORD*)(a2 + 20);
		v3[108] = *(_DWORD*)(a2 + 24);
		v3[109] = *(_DWORD*)(a2 + 28);
		v3[110] = *(_DWORD*)(a2 + 32);
		v4 = qword_140C65898;
		v3[111] = *(_DWORD*)(a2 + 36);
		v3[112] = *(_DWORD*)(a2 + 40);
		v3[113] = *(_DWORD*)(a2 + 44);
		v3[114] = *(_DWORD*)(a2 + 48);
		v3[115] = *(_DWORD*)(a2 + 52);
		v3[116] = *(_DWORD*)(a2 + 56);
		v3[117] = *(_DWORD*)(a2 + 60);
		sub_1400EA3E0(*(_QWORD*)(v4 + 29504), "GuildStandard", byte_1409EA60C);
	}
	return 0i64;
}
// 1409EA60C: using guessed type _BYTE byte_1409EA60C[48];
// 140C65898: using guessed type __int64 qword_140C65898;

