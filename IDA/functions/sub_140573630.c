//----- (0000000140573630) ----------------------------------------------------
__int64 __fastcall sub_140573630(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64* a5)
{
	int v5; // esi
	__int64 v7; // r15
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rdi
	unsigned int v14; // edx
	_DWORD* v15; // rax
	bool v16; // al
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v20[2]; // [rsp+20h] [rbp-38h] BYREF

	v5 = 0;
	v7 = *(_QWORD*)(a1 + 88);
	if (!v7 || !a2 || !*(_QWORD*)(a2 + 24))
		return 0i64;
	v9 = *(_QWORD**)(v7 + 16);
	v10 = (_QWORD*)v9[2];
	if (v10 == v9)
		return 0i64;
	while (1)
	{
		v11 = v10[5];
		v12 = *(_QWORD*)(v11 + 48);
		if (*(_DWORD*)(*(_QWORD*)v12 + 12i64) == 17)
		{
			v13 = sub_14021CD80(*(_DWORD*)(*(_QWORD*)v12 + 20i64));
			if (v13)
			{
				v16 = 1;
				if (*(_DWORD*)(v13 + 4) != **(_DWORD**)(a2 + 24))
				{
					v14 = *(_DWORD*)(v13 + 8);
					if (!v14
						|| (v5 |= 1u,
							v20[0] = (__int64)off_140B66440,
							v20[1] = a2,
							v15 = (_DWORD*)sub_1403B4A10((__int64)v20, v14),
							(unsigned int)sub_1403B4A20((__int64)v20, v15)))
					{
						v16 = 0;
					}
				}
				if ((v5 & 1) != 0)
				{
					v5 &= ~1u;
					v20[0] = (__int64)off_140B66400;
				}
				if (v16)
					break;
			}
		}
		v17 = v10[3];
		if (v17)
		{
			v10 = (_QWORD*)v10[3];
			for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
				v10 = i;
		}
		else
		{
			for (j = v10[1]; v10 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v10 = (_QWORD*)j;
			if (v10[3] != j)
				v10 = (_QWORD*)j;
		}
		if (v10 == *(_QWORD**)(v7 + 16))
			return 0i64;
	}
	if (a5)
		*a5 = v13;
	return v11;
}
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();

