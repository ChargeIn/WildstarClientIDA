//----- (00000001408A63A0) ----------------------------------------------------
__int64 __fastcall sub_1408A63A0(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	__int64 a4,
	float a5,
	float a6,
	float a7,
	float a8)
{
	int v8; // eax
	unsigned int v11; // eax
	__int64 v12; // rax

	v8 = 8;
	if (a3 > 8)
		v8 = a3;
	*(_DWORD*)a1 = (v8 + 3) & 0xFFFFFFFC;
	sub_1408A64D0(a1, a5, a6, a7, a8);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a1 + 44);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 48);
	v11 = 2 * *(_DWORD*)a1 + 1024;
	*(_DWORD*)(a1 + 8) = v11;
	v12 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 4i64 * v11);
	*(_QWORD*)(a1 + 16) = v12;
	if (!v12)
		return 52i64;
	*(_DWORD*)(a1 + 24) = 0;
	return 1i64;
}

