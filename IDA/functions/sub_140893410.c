#include "../winhttp.h"

//----- (0000000140893410) ----------------------------------------------------
__int64 __fastcall sub_140893410(int a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	unsigned int v5; // eax
	int v6; // ecx
	bool v7; // al

	EnterCriticalSection(&stru_140C61BB8);
	v2 = sub_1408819F0(dword_140C10F20, 320i64);
	if (v2)
	{
		v3 = sub_140893240(v2, a1);
		v4 = v3;
		if (v3)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
			v7 = 0;
			if (v5 <= 0xC)
			{
				v6 = 5121;
				if (_bittest(&v6, v5))
					v7 = 1;
			}
			*(_BYTE*)(v4 + 91) &= ~2u;
			*(_BYTE*)(v4 + 91) |= 2 * v7;
			sub_140851A00(v4);
		}
	}
	else
	{
		v4 = 0i64;
	}
	LeaveCriticalSection(&stru_140C61BB8);
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

