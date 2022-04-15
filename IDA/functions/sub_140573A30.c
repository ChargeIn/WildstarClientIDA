#include "../winhttp.h"

//----- (0000000140573A30) ----------------------------------------------------
__int64 __fastcall sub_140573A30(__int64 a1, __int64 a2)
{
	int v2; // edi
	__int64 v4; // r14
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned int v11; // edx
	_DWORD* v12; // rax
	bool v13; // al
	__int64 v14; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v17[2]; // [rsp+20h] [rbp-38h] BYREF

	v2 = 0;
	v4 = *(_QWORD*)(a1 + 88);
	if (!v4 || !a2 || !*(_QWORD*)(a2 + 24))
		return 0i64;
	v6 = *(_QWORD**)(v4 + 16);
	v7 = (_QWORD*)v6[2];
	if (v7 == v6)
		return 0i64;
	while (1)
	{
		v8 = v7[5];
		v9 = *(_QWORD*)(v8 + 48);
		if (*(_DWORD*)(*(_QWORD*)v9 + 12i64) == 4)
		{
			v10 = sub_1402237C0(*(_DWORD*)(*(_QWORD*)v9 + 20i64));
			if (v10)
			{
				v13 = 1;
				if (*(_DWORD*)(v10 + 4) != **(_DWORD**)(a2 + 24))
				{
					v11 = *(_DWORD*)(v10 + 8);
					if (!v11
						|| (v2 |= 1u,
							v17[0] = (__int64)off_140B66440,
							v17[1] = a2,
							v12 = (_DWORD*)sub_1403B4A10((__int64)v17, v11),
							(unsigned int)sub_1403B4A20((__int64)v17, v12)))
					{
						v13 = 0;
					}
				}
				if ((v2 & 1) != 0)
				{
					v2 &= ~1u;
					v17[0] = (__int64)off_140B66400;
				}
				if (v13)
					break;
			}
		}
		v14 = v7[3];
		if (v14)
		{
			v7 = (_QWORD*)v7[3];
			for (i = *(_QWORD**)(v14 + 16); i; i = (_QWORD*)i[2])
				v7 = i;
		}
		else
		{
			for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v7 = (_QWORD*)j;
			if (v7[3] != j)
				v7 = (_QWORD*)j;
		}
		if (v7 == *(_QWORD**)(v4 + 16))
			return 0i64;
	}
	return v8;
}
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();

