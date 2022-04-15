#include "../winhttp.h"

//----- (0000000140574200) ----------------------------------------------------
__int64 __fastcall sub_140574200(__int64 a1, __int64 a2, int a3, __int64 a4, __int64* a5)
{
	int v5; // esi
	__int64 v8; // r15
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	__int64 v12; // rbp
	__int64 v13; // rax
	__int64 v14; // rdi
	unsigned int v15; // edx
	_DWORD* v16; // rax
	bool v17; // al
	__int64 v18; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v21[2]; // [rsp+20h] [rbp-38h] BYREF

	v5 = 0;
	v8 = *(_QWORD*)(a1 + 88);
	if (!v8 || !a2 || !*(_QWORD*)(a2 + 24))
		return 0i64;
	v10 = *(_QWORD**)(v8 + 16);
	v11 = (_QWORD*)v10[2];
	if (v11 == v10)
		return 0i64;
	while (1)
	{
		v12 = v11[5];
		v13 = *(_QWORD*)(v12 + 48);
		if (*(_DWORD*)(*(_QWORD*)v13 + 12i64) == a3)
		{
			v14 = sub_140223380(*(_DWORD*)(*(_QWORD*)v13 + 20i64));
			if (v14)
			{
				v17 = 1;
				if (*(_DWORD*)(v14 + 4) != **(_DWORD**)(a2 + 24))
				{
					v15 = *(_DWORD*)(v14 + 8);
					if (!v15
						|| (v5 |= 1u,
							v21[0] = (__int64)off_140B66440,
							v21[1] = a2,
							v16 = (_DWORD*)sub_1403B4A10((__int64)v21, v15),
							(unsigned int)sub_1403B4A20((__int64)v21, v16)))
					{
						v17 = 0;
					}
				}
				if ((v5 & 1) != 0)
				{
					v5 &= ~1u;
					v21[0] = (__int64)off_140B66400;
				}
				if (v17)
					break;
			}
		}
		v18 = v11[3];
		if (v18)
		{
			v11 = (_QWORD*)v11[3];
			for (i = *(_QWORD**)(v18 + 16); i; i = (_QWORD*)i[2])
				v11 = i;
		}
		else
		{
			for (j = v11[1]; v11 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v11 = (_QWORD*)j;
			if (v11[3] != j)
				v11 = (_QWORD*)j;
		}
		if (v11 == *(_QWORD**)(v8 + 16))
			return 0i64;
	}
	if (a5)
		*a5 = v14;
	return v12;
}
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();

