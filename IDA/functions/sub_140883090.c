//----- (0000000140883090) ----------------------------------------------------
__int64 __fastcall sub_140883090(__int64 a1, char* a2, __int64 a3, unsigned int a4, _QWORD* a5, char a6)
{
	__int64 v10; // rbx
	unsigned int v11; // edi
	__int64 v12; // rcx
	_QWORD** v13; // r14
	__int64 v14; // rax
	_BYTE* v15; // rdi
	__int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
	char v17; // [rsp+68h] [rbp+10h] BYREF

	if (!a2)
		return 31i64;
	if (a3)
		*(_BYTE*)(a3 + 26) = 0;
	v10 = sub_1408819F0(dword_140C111C0, 40i64);
	if (!v10)
		return 2i64;
	v17 = a6;
	v11 = (*(__int64(__fastcall**)(__int64, char*, _QWORD, __int64, char*, __int64))(*(_QWORD*)qword_140C62938 + 16i64))(
		qword_140C62938,
		a2,
		a4,
		a3,
		&v17,
		v10);
	if (v11 != 1)
	{
		sub_140881720(dword_140C111C0, v10);
		return v11;
	}
	v12 = *(unsigned int*)(v10 + 32);
	if ((unsigned int)v12 < (unsigned int)((qword_140C62948 - qword_140C62940) >> 3))
	{
		v13 = *(_QWORD***)(qword_140C62940 + 8 * v12);
		if (v13)
		{
			v16[0] = 0i64;
			v14 = ((__int64(__fastcall*)(_QWORD**, __int64, _QWORD, __int64*))(*v13)[6])(v13, v10, a4, v16);
			v15 = (_BYTE*)v14;
			if (v14)
			{
				if (v17)
				{
					*(_BYTE*)(v14 + 117) |= 0x10u;
					*(_QWORD*)(v14 + 40) = v10;
				}
				else if ((unsigned int)sub_1408857A0(v14, v10, a2, (_QWORD*)a3, a4) != 1)
				{
					v15[117] = v15[117] & 0xB7 | 8;
					(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v15 + 16i64))(v15);
					return 2i64;
				}
				*a5 = v16[0];
				return 1i64;
			}
			if (v17)
				(*(void(__fastcall**)(_QWORD*, __int64))(*v13[32] + 8i64))(v13[32], v10);
		}
	}
	sub_140881720(dword_140C111C0, v10);
	return 2i64;
}
// 140C111C0: using guessed type int dword_140C111C0;
// 140C62938: using guessed type __int64 qword_140C62938;
// 140C62940: using guessed type __int64 qword_140C62940;
// 140C62948: using guessed type __int64 qword_140C62948;
// 140883090: using guessed type __int64 var_28[5];

