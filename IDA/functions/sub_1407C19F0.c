//----- (00000001407C19F0) ----------------------------------------------------
__int64 __fastcall sub_1407C19F0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v6; // ebp
	unsigned int v7; // esi
	__int64 v8; // rdi
	unsigned __int16** i; // rbx

	if ((unsigned int)sub_14018E2C0(*(_QWORD*)a2, *(unsigned __int16**)(a3 + 8))
		|| *(_DWORD*)(a2 + 8) != *(_DWORD*)(a3 + 16))
	{
		return 2147500037i64;
	}
	v6 = *(_DWORD*)(a2 + 12);
	if (v6 != *(_DWORD*)(a3 + 24))
		return 2147500037i64;
	v7 = 0;
	if (!v6)
		return 0i64;
	v8 = *(_QWORD*)(a2 + 16);
	for (i = (unsigned __int16**)(*(_QWORD*)(a3 + 32) + 16i64);
		!(unsigned int)sub_14018E2C0(*(_QWORD*)v8, *(i - 1)) && *(_WORD*)(v8 + 8) == *(_WORD*)i;
		i += 3)
	{
		++v7;
		v8 += 40i64;
		if (v7 >= v6)
			return 0i64;
	}
	return 2147500037i64;
}

