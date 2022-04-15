#include "../winhttp.h"

//----- (00000001405D9680) ----------------------------------------------------
void __fastcall sub_1405D9680(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
	_QWORD* v4; // rax
	_QWORD* v6; // rbx
	_DWORD* v9; // rdx

	if (a4)
	{
		v4 = *(_QWORD**)(a4 + 8);
		v6 = (_QWORD*)*v4;
		if ((_QWORD*)*v4 != v4)
		{
			do
			{
				v9 = (_DWORD*)v6[2];
				if (a3 == v9[2])
					sub_1403FCF80(a2, v9, qword_140C65898 + 31984);
				v6 = (_QWORD*)*v6;
			} while (v6 != *(_QWORD**)(a4 + 8));
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

