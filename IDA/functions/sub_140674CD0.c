#include "../winhttp.h"

//----- (0000000140674CD0) ----------------------------------------------------
void __fastcall sub_140674CD0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d

	if (*(_DWORD*)(a1 + 1344))
	{
		v3 = *(_QWORD*)(a1 + 168);
		if (v3)
		{
			if ((*(_DWORD*)(v3 + 340) & 0x100) != 0)
			{
				v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
				v6 = *(_QWORD*)(v5 + 16);
				*(_QWORD*)v6 = *v4;
				*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
				*(_QWORD*)(v5 + 16) += 16i64;
				sub_1400F06F0(*(_QWORD*)(a2 + 16), v6, L"nBagSlots", v7);
				*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			}
		}
	}
}
// 140674D18: variable 'v5' is possibly undefined
// 140674D3B: variable 'v7' is possibly undefined
// 140B2FEA8: using guessed type wchar_t aNbagslots[10];

