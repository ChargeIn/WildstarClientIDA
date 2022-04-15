//----- (00000001408F7670) ----------------------------------------------------
__int64 __fastcall sub_1408F7670(__int64 a1)
{
	int v2; // ecx
	unsigned __int64 v3; // rsi
	unsigned __int64 v4; // rdi
	int* v5; // rax
	int* v7; // rax

	v2 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 172i64);
	*(_DWORD*)(a1 + 560) = v2;
	if (v2)
	{
		v3 = (unsigned int)(28 * v2);
		v4 = 112 * ((unsigned int)(v2 + 3) >> 2);
		v5 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 8i64))(
			*(_QWORD*)(a1 + 32),
			(unsigned int)v3);
		*(_QWORD*)(a1 + 40) = v5;
		if (!v5)
			return 52i64;
		sub_1407E4830(v5, 0i64, v3);
		v7 = (int*)(*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 32) + 8i64))(
			*(_QWORD*)(a1 + 32),
			v4);
		*(_QWORD*)(a1 + 48) = v7;
		if (!v7)
			return 52i64;
		sub_1407E4830(v7, 0i64, v4);
		*(_BYTE*)(a1 + 610) = 1;
		sub_1408F7780(a1);
	}
	*(_DWORD*)(a1 + 572) &= 0xFFFFFFFC;
	return 1i64;
}

