#include "../winhttp.h"

//----- (0000000140327210) ----------------------------------------------------
__int16 __fastcall sub_140327210(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v3; // r11
	_DWORD* v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rax

	v2 = 1;
	v3 = 0i64;
	v4 = (_DWORD*)(a1 + 176);
	v5 = 11i64;
	do
	{
		if ((*(_WORD*)(a2 + 6) & (unsigned __int16)v2) != 0)
		{
			*v4 = *(unsigned __int8*)(v3 + a2 + 8);
			*(_QWORD*)(a1 + 8 * v3) = *(_QWORD*)(a2 + 40) + *(unsigned __int8*)(v3 + a2 + 19);
			*(_QWORD*)(a1 + 8 * v3 + 88) = *(unsigned __int8*)(a2 + 4);
		}
		v2 = __ROL4__(v2, 1);
		++v3;
		++v4;
		--v5;
	} while (v5);
	LOWORD(v6) = *(_WORD*)(a2 + 6) & 0x300;
	if ((_WORD)v6 == 256)
	{
		*(_DWORD*)(a1 + 212) = *(_DWORD*)(a1 + 208);
		*(_QWORD*)(a1 + 72) = *(_QWORD*)(a1 + 64);
		v6 = *(_QWORD*)(a1 + 152);
		*(_QWORD*)(a1 + 160) = v6;
	}
	return v6;
}

