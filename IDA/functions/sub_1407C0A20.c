//----- (00000001407C0A20) ----------------------------------------------------
__int64 __fastcall sub_1407C0A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v8; // ebp
	unsigned int v9; // esi
	__int64 v10; // rbx
	_WORD* i; // rdi

	if ((unsigned int)sub_14018E2C0(*(_QWORD*)a2, (unsigned __int16*)(a4 + *(_QWORD*)(a3 + 8)))
		|| *(_DWORD*)(a2 + 8) != *(_DWORD*)(a3 + 16))
	{
		return 2147500037i64;
	}
	v8 = *(_DWORD*)(a2 + 12);
	if (v8 != *(_DWORD*)(a3 + 24))
		return 2147500037i64;
	v9 = 0;
	if (!v8)
		return 0i64;
	v10 = *(_QWORD*)(a2 + 16);
	for (i = (_WORD*)(*(_QWORD*)(a3 + 32) + a4 + 16);
		!(unsigned int)sub_14018E2C0(*(_QWORD*)v10, (unsigned __int16*)(a4 + *((_QWORD*)i - 1)))
		&& *(_WORD*)(v10 + 8) == *i;
		i += 12)
	{
		++v9;
		v10 += 40i64;
		if (v9 >= v8)
			return 0i64;
	}
	return 2147500037i64;
}

