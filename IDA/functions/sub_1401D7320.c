//----- (00000001401D7320) ----------------------------------------------------
__int64 __fastcall sub_1401D7320(__int64 a1, char* a2, __int64 a3, __int64 a4)
{
	__int64 v6; // rdi
	unsigned __int8 v7; // al
	unsigned int v8; // r15d
	int v9; // r14d
	int v10; // r12d
	unsigned int v11; // ebp
	__int64 v12; // rax
	__int64 v13; // rcx
	unsigned __int64 v14; // rbp
	__int64 v15; // rax

	v6 = (unsigned __int8)a2[1] | (((unsigned __int8)a2[2] | (*(unsigned __int16*)(a2 + 3) << 8)) << 8);
	if ((unsigned int)v6 < 0x1000)
		v6 = 4096i64;
	v7 = *a2;
	if ((unsigned __int8)*a2 >= 0xE1u)
		return 4i64;
	v8 = v7 % 9u;
	v9 = (unsigned __int8)(v7 / 9u) / 5;
	v10 = (unsigned __int8)(v7 / 9u) % 5;
	v11 = (768 << (v10 + v7 % 9u)) + 1846;
	if (*(_QWORD*)(a1 + 16) && v11 == *(_DWORD*)(a1 + 104)
		|| ((*(void(__fastcall**)(__int64))(a4 + 8))(a4),
			*(_QWORD*)(a1 + 16) = 0i64,
			v12 = (*(__int64(__fastcall**)(__int64, __int64))a4)(a4, 2i64 * v11),
			*(_DWORD*)(a1 + 104) = v11,
			(*(_QWORD*)(a1 + 16) = v12) != 0i64))
	{
		v13 = 4095i64;
		if ((unsigned int)v6 < 0x40000000)
		{
			if ((unsigned int)v6 >= 0x400000)
				v13 = 0xFFFFFi64;
		}
		else
		{
			v13 = 0x3FFFFFi64;
		}
		v14 = ~v13 & (v6 + v13);
		if (v14 < (unsigned int)v6)
			v14 = (unsigned int)v6;
		if (*(_QWORD*)(a1 + 24) && v14 == *(_QWORD*)(a1 + 56)
			|| ((*(void(__fastcall**)(__int64))(a4 + 8))(a4),
				*(_QWORD*)(a1 + 24) = 0i64,
				v15 = (*(__int64(__fastcall**)(__int64, unsigned __int64))a4)(a4, v14),
				(*(_QWORD*)(a1 + 24) = v15) != 0i64))
		{
			*(_DWORD*)a1 = v8;
			*(_DWORD*)(a1 + 4) = v10;
			*(_DWORD*)(a1 + 8) = v9;
			*(_DWORD*)(a1 + 12) = v6;
			*(_QWORD*)(a1 + 56) = v14;
			return 0i64;
		}
		(*(void(__fastcall**)(__int64, _QWORD))(a4 + 8))(a4, *(_QWORD*)(a1 + 16));
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	return 2i64;
}

