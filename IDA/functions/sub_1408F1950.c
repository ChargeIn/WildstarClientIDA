//----- (00000001408F1950) ----------------------------------------------------
__int64 __fastcall sub_1408F1950(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rax
	unsigned int v7; // r9d
	int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // r8

	*(_QWORD*)a1 = off_1409C6070;
	v4 = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 8) = v4;
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 68);
	if (!*(_QWORD*)(a2 + 56) || (v5 = *(unsigned int*)(a2 + 64), !(_DWORD)v5))
	{
		*(_QWORD*)(a1 + 56) = 0i64;
		goto LABEL_8;
	}
	v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 8i64))(v4, 16 * v5);
	v7 = 0;
	*(_QWORD*)(a1 + 56) = v6;
	if (!v6)
	{
	LABEL_8:
		*(_DWORD*)(a1 + 64) = 0;
		return a1;
	}
	v8 = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 64) = v8;
	if (!v8)
		return a1;
	do
	{
		v9 = *(_QWORD*)(a2 + 56);
		v10 = *(_QWORD*)(a1 + 56);
		v11 = 2i64 * v7++;
		*(_DWORD*)(v10 + 8 * v11) = *(_DWORD*)(v9 + 8 * v11);
		*(_DWORD*)(v10 + 8 * v11 + 4) = *(_DWORD*)(v9 + 8 * v11 + 4);
		*(_DWORD*)(v10 + 8 * v11 + 8) = *(_DWORD*)(v9 + 8 * v11 + 8);
		*(_DWORD*)(v10 + 8 * v11 + 12) = *(_DWORD*)(v9 + 8 * v11 + 12);
	} while (v7 < *(_DWORD*)(a1 + 64));
	return a1;
}
// 1409C6070: using guessed type __int64 (__fastcall *off_1409C6070[6])();

