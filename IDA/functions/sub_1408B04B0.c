//----- (00000001408B04B0) ----------------------------------------------------
__int64 __fastcall sub_1408B04B0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // rax
	unsigned int v5; // ecx

	*(_DWORD*)(a1 + 8) = a3;
	v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 8i64 * ((a3 >> 1) + 1));
	v5 = 1;
	*(_QWORD*)a1 = v4;
	if (!v4)
		return 52;
	return v5;
}

