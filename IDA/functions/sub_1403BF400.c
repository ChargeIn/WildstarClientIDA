#include "../winhttp.h"

//----- (00000001403BF400) ----------------------------------------------------
__int64 __fastcall sub_1403BF400(__int64* a1, unsigned int a2)
{
	__int64 v3; // rdx
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // [rsp+30h] [rbp+8h]

	v3 = a1[689];
	result = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (result)
	{
		if (*(_DWORD*)(result + 32) < a2)
		{
			result = *(_QWORD*)(result + 24);
		}
		else
		{
			v6 = result;
			result = *(_QWORD*)(result + 16);
		}
	}
	if (v6 == v3 || (v9 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v9 = a1[689];
	if (v9 != v3)
	{
		v7 = *(_QWORD*)(v9 + 40);
		if (*(_QWORD*)(v7 + 48))
			sub_140195D70(v7 + 32);
		v8 = *(_QWORD*)(v9 + 40);
		if (*(_QWORD*)(v8 + 120))
			sub_140195D70(v8 + 104);
		result = sub_1403ACD90(qword_140C65B70, a2, a1[15]);
		if (result)
		{
			result = *(_QWORD*)(result + 112);
			if ((*(_BYTE*)(result + 268) & 0x40) == 0)
				return sub_1400EA3E0(a1[3688], "ClearSpellThreshold", byte_1409E9C64, a2);
		}
	}
	return result;
}
// 1409E9C64: using guessed type _BYTE byte_1409E9C64[32];
// 140C65B70: using guessed type __int64 qword_140C65B70;

