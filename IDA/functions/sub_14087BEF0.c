//----- (000000014087BEF0) ----------------------------------------------------
__int64 __fastcall sub_14087BEF0(__int64 a1, unsigned __int16 a2)
{
	__int64 v5; // rax
	__int64 v6; // rsi
	int v7; // eax
	int v8; // eax
	__int64 v9; // rbx
	__int64 v10; // rbp
	int* v11; // rax
	__int16* v12; // rbx
	__int16 v13; // r15
	unsigned __int64 v14; // rbp
	_WORD* v15; // rcx

	if (!a2)
		return 0i64;
	v5 = sub_1408819F0(dword_140C10F20, 80i64);
	v6 = v5;
	if (!v5)
		return 0i64;
	*(_WORD*)(v5 + 32) = a2;
	*(_WORD*)(v5 + 34) = a2;
	*(_QWORD*)v5 = off_1409A73A0;
	v7 = 50000 * a2;
	*(_DWORD*)(v6 + 24) = v7;
	*(_DWORD*)(v6 + 28) = v7;
	*(_QWORD*)(v6 + 40) = 0i64;
	*(_QWORD*)(v6 + 48) = 0i64;
	*(_DWORD*)(v6 + 56) = 0;
	*(_QWORD*)(v6 + 64) = 0i64;
	*(_QWORD*)(v6 + 72) = 0i64;
	*(_DWORD*)(v6 + 24) = *(_DWORD*)(a1 + 24);
	*(_DWORD*)(v6 + 28) = *(_DWORD*)(a1 + 28);
	*(_WORD*)(v6 + 32) = *(_WORD*)(a1 + 32);
	*(_WORD*)(v6 + 34) = *(_WORD*)(a1 + 34);
	if (*(_QWORD*)(a1 + 64))
	{
		v8 = (a2 + 7) / 8;
		v9 = v8;
		v10 = (unsigned int)(2 * v8);
		v11 = (int*)sub_1408819F0(dword_140C10F20, v10);
		*(_QWORD*)(v6 + 64) = v11;
		if (!v11)
		{
		LABEL_14:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			return 0i64;
		}
		*(_QWORD*)(v6 + 72) = (char*)v11 + v9;
		sub_1407DB590(v11, *(int**)(a1 + 64), (unsigned int)v10);
	}
	sub_14087C300(v6 + 40, (__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 1);
	v12 = *(__int16**)(a1 + 40);
	if (v12 != *(__int16**)(a1 + 48))
	{
		while (1)
		{
			v13 = *v12;
			v14 = (unsigned int)((__int64)(*(_QWORD*)(v6 + 48) - *(_QWORD*)(v6 + 40)) >> 1);
			if (v14 >= *(unsigned int*)(v6 + 56) && !sub_14086D230(v6 + 40, 1))
				break;
			if (v14 >= *(unsigned int*)(v6 + 56))
				break;
			v15 = *(_WORD**)(v6 + 48);
			*(_QWORD*)(v6 + 48) = v15 + 1;
			if (!v15)
				break;
			++v12;
			*v15 = v13;
			if (v12 == *(__int16**)(a1 + 48))
				return v6;
		}
		goto LABEL_14;
	}
	return v6;
}
// 1409A73A0: using guessed type __int64 (__fastcall *off_1409A73A0[9])();
// 140C10F20: using guessed type int dword_140C10F20;

