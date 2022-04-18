#include "../winhttp.h"

//----- (000000014051F440) ----------------------------------------------------
__int64 __fastcall sub_14051F440(__int64 a1)
{
	__int64 result; // rax
	int* v2; // rbx
	__int64 v3; // rcx
	unsigned int v4; // edi
	int v5; // eax
	__int64 v6; // rsi
	int v7; // ebp
	__int64 v8; // rax
	__int64 v9; // rbx
	int v10; // [rsp+20h] [rbp-18h]

	result = *(unsigned int*)(a1 + 16);
	v2 = (int*)(a1 + 16);
	if ((int)result < 300)
	{
		v3 = *(unsigned int*)(a1 + 20);
		if ((_DWORD)v3 != -1)
		{
			v4 = 0;
			if ((_DWORD)result || (result = (unsigned int)v3 < 0x1F) != 0)
			{
				v5 = sub_1403B8F00(v3, v2);
				v6 = qword_140C65898;
				v7 = v5;
				v8 = sub_1403AC780(qword_140C65898 + 160, v2);
				if (v8)
					v4 = **(_DWORD**)(v8 + 64);
				v9 = *(_QWORD*)(v6 + 29504);
				result = (__int64)sub_1400B5DF0(qword_140C658F0, v4, 0i64);
				if (result)
				{
					v10 = v7;
					return Apollo_LUAEvent(v9, "CostumeUnlockResult", "oi", result, v10);
				}
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

