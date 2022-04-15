//----- (000000014083F790) ----------------------------------------------------
__int64 __fastcall sub_14083F790(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v5; // r12d
	__int64 v6; // rbp
	__int64 v7; // r15
	int v8; // ecx
	__int64* v9; // rax
	char v10; // r14
	_QWORD* v11; // rdi

	if (*(_DWORD*)(a3 + 52) || !*(_DWORD*)(a3 + 56))
		return 1i64;
	v5 = 52;
	if (!*(_QWORD*)(a3 + 64))
		goto LABEL_25;
	v6 = 0i64;
	while (1)
	{
		v7 = *(_QWORD*)(a3 + 64) + 12 * v6;
		if (*(_DWORD*)v7)
			break;
	LABEL_15:
		++* (_DWORD*)(a3 + 52);
		v6 = (unsigned int)(v6 + 1);
		if ((unsigned int)v6 >= *(_DWORD*)(a3 + 56))
			goto LABEL_22;
	}
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
	v8 = *(_DWORD*)v7;
	v9 = *(__int64**)(a1 + 8i64 * (*(_DWORD*)v7 % 0xC1u) + 224);
	if (!v9)
		goto LABEL_9;
	while (*((_DWORD*)v9 + 2) != v8)
	{
		v9 = (__int64*)*v9;
		if (!v9)
			goto LABEL_9;
	}
	v11 = v9 + 2;
	if (v9 == (__int64*)-16i64)
	{
	LABEL_9:
		v10 = 0;
		v11 = sub_14083E650((int*)(a1 + 216), v8, *(_DWORD*)v7 % 0xC1u);
	}
	else
	{
		v10 = 1;
		if (*v11)
			goto LABEL_13;
	}
	if (!v11)
		goto LABEL_21;
	*((_DWORD*)v11 + 11) = *(_DWORD*)v7;
	v5 = sub_14083DF20((__int64)v11, a2 + *(unsigned int*)(v7 + 4), *(_DWORD*)(v7 + 8), a3);
	if (v5 == 1)
	{
		if (!v10)
		{
		LABEL_14:
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
			goto LABEL_15;
		}
	LABEL_13:
		++* ((_DWORD*)v11 + 10);
		goto LABEL_14;
	}
	sub_140843780((int*)(a1 + 216), *(_DWORD*)v7);
LABEL_21:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
LABEL_22:
	if (*(_DWORD*)(a3 + 56) == (_DWORD)v6)
		return 1i64;
	if (v5 != 1)
		LABEL_25:
	sub_140843180(a1, a3);
	return v5;
}
// 14083F7D5: conditional instruction was optimized away because eax.4!=0

