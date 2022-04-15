//----- (00000001408A16D0) ----------------------------------------------------
__int64 __fastcall sub_1408A16D0(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v4; // ebx
	__int64 v7; // rax

	v4 = 0;
	*(_DWORD*)(a1 + 56) = a4;
	*(_QWORD*)(a1 + 48) = (a3 + 3) & 0xFFFFFFFC;
	if (((a3 + 3) & 0xFFFFFFFC) == 0 || !a4)
		return 1i64;
	while (1)
	{
		v7 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 4i64 * *(unsigned int*)(a1 + 48));
		*(_QWORD*)(a1 + 8i64 * v4) = v7;
		if (!v7)
			break;
		if (++v4 >= *(_DWORD*)(a1 + 56))
			return 1i64;
	}
	return 52i64;
}

