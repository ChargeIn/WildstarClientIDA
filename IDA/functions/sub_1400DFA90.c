#include "../winhttp.h"

//----- (00000001400DFA90) ----------------------------------------------------
__int64 __fastcall sub_1400DFA90(_QWORD* a1)
{
	__int64 v2; // rsi
	_DWORD* v3; // rbp
	_DWORD* v4; // rcx
	int v5; // eax
	_DWORD* v6; // rax
	unsigned int v7; // ecx
	int v8; // eax
	unsigned __int8 v9; // r8
	unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = dword_140A12138;
		v4 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = v4[2];
		if (v5 == 3 || v5 == 4 && sub_14005AC80((char*)(*(_QWORD*)v4 + 32i64), &v11))
		{
			v6 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && *(_DWORD*)(a1[3] + 40i64) == 1)
			{
				v7 = sub_1400584E0((__int64)a1, 2) - 1;
				if (v7 <= 7)
				{
					if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
						v3 = (_DWORD*)(a1[3] + 32i64);
					v8 = v3[2];
					if (v8 && (v8 != 1 || *v3))
					{
						*(_BYTE*)(v2 + 31) |= 1 << v7;
					}
					else
					{
						v9 = *(_BYTE*)(v2 + 31);
						if (((unsigned __int8)(1 << v7) & v9) != 0)
							*(_BYTE*)(v2 + 31) = v9 - (1 << v7);
					}
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

