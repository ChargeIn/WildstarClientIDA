#include "../winhttp.h"

//----- (0000000140574380) ----------------------------------------------------
__int64 __fastcall sub_140574380(__int64 a1, __int64 a2, __int64* a3)
{
	int v3; // esi
	__int64 v6; // r15
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rbp
	__int64 v10; // rax
	__int64 v11; // rdi
	unsigned int v12; // edx
	_DWORD* v13; // rax
	bool v14; // al
	__int64 v15; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v19[2]; // [rsp+20h] [rbp-38h] BYREF

	v3 = 0;
	if (!a2 || !*(_QWORD*)(a2 + 24))
		return 0i64;
	v6 = *(_QWORD*)(a1 + 88);
	v7 = *(_QWORD**)(v6 + 16);
	v8 = (_QWORD*)v7[2];
	if (v8 == v7)
		return 0i64;
	while (1)
	{
		v9 = v8[5];
		v10 = *(_QWORD*)(v9 + 48);
		if (*(_DWORD*)(*(_QWORD*)v10 + 12i64) == 13)
		{
			v11 = sub_14021E700(*(_DWORD*)(*(_QWORD*)v10 + 20i64));
			if (v11)
			{
				v14 = 1;
				if (*(_DWORD*)(v11 + 12) != **(_DWORD**)(a2 + 24))
				{
					v12 = *(_DWORD*)(v11 + 16);
					if (!v12
						|| (v3 |= 1u,
							v19[0] = (__int64)off_140B66440,
							v19[1] = a2,
							v13 = (_DWORD*)sub_1403B4A10((__int64)v19, v12),
							(unsigned int)sub_1403B4A20((__int64)v19, v13)))
					{
						v14 = 0;
					}
				}
				if ((v3 & 1) != 0)
				{
					v3 &= ~1u;
					v19[0] = (__int64)off_140B66400;
				}
				if (v14)
					break;
			}
		}
		v15 = v8[3];
		if (v15)
		{
			v8 = (_QWORD*)v8[3];
			for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
				v8 = i;
		}
		else
		{
			for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v8 = (_QWORD*)j;
			if (v8[3] != j)
				v8 = (_QWORD*)j;
		}
		if (v8 == *(_QWORD**)(v6 + 16))
			return 0i64;
	}
	if (a3)
		*a3 = v11;
	return v9;
}
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();

