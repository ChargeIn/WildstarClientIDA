//----- (00000001408BF3A0) ----------------------------------------------------
__int64 __fastcall sub_1408BF3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	int v6; // r10d
	int i; // r8d
	int v8; // eax
	int v9; // eax
	__int64 v10; // rax
	__int64 result; // rax
	double v12; // xmm0_8

	v6 = 0;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v6;
	*(_DWORD*)(a1 + 80) = v6;
	v8 = *a5;
	*(_QWORD*)(a1 + 72) = a4;
	*(_DWORD*)(a1 + 84) = v8;
	if ((a5[1] & 8) != 0 && !*(_BYTE*)(a4 + 72))
		*(_DWORD*)(a1 + 80) = v6 - 1;
	v9 = *(_DWORD*)(a1 + 80);
	if (v9)
	{
		v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, (unsigned int)(48 * v9));
		*(_QWORD*)(a1 + 88) = v10;
		if (!v10)
			return 52i64;
	}
	sub_1407E4830((int*)(a1 + 8), 0i64, 0x3Cui64);
	*(_BYTE*)(*(_QWORD*)(a1 + 72) + 76i64) = 1;
	*(_BYTE*)(*(_QWORD*)(a1 + 72) + 77i64) = 1;
	*(_BYTE*)(*(_QWORD*)(a1 + 72) + 78i64) = 1;
	v12 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(*(_QWORD*)(a1 + 72) + 68i64) * 0.050000001);
	result = 1i64;
	*(_DWORD*)(a1 + 96) = LODWORD(v12);
	return result;
}

