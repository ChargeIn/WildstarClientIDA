//----- (00000001408ADBD0) ----------------------------------------------------
__int64 __fastcall sub_1408ADBD0(__int64 a1, __int64 a2, int a3)
{
	unsigned int v3; // r8d
	__int64 v5; // rax

	v3 = a3 & 0xFFFFFFFC;
	*(_DWORD*)a1 = v3;
	if (v3)
	{
		v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 4i64 * v3);
		*(_QWORD*)(a1 + 8) = v5;
		if (!v5)
			return 52i64;
	}
	*(_DWORD*)(a1 + 16) = 0;
	return 1i64;
}

