//----- (00000001408C0690) ----------------------------------------------------
void __fastcall sub_1408C0690(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	double v5; // xmm0_8

	v2 = *(_QWORD*)(a1 + 16);
	if (*(_BYTE*)(v2 + 24))
	{
		HIDWORD(v5) = 0;
		*(float*)&v5 = -2.2 / (float)((float)*(int*)(a1 + 36) * *(float*)(v2 + 16));
		*(float*)(a1 + 84) = sub_1408FC7F0(v5);
		*(_BYTE*)(v2 + 24) = 0;
	}
	if (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 34i64))
	{
		if ((unsigned int)sub_1408C0760(a1) != 1)
			return;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	}
	sub_1408A1640((unsigned int*)(a1 + 76), a2, *(_DWORD*)(a1 + 52));
	if (*(_WORD*)(a2 + 18))
	{
		(*(void(__fastcall**)(__int64, __int64))(a1 + 8))(a1, a2);
		sub_1408C1FE0(
			a2,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 32)),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(*(_QWORD*)(a1 + 16) + 20i64)),
			*(_BYTE*)(*(_QWORD*)(a1 + 16) + 32i64));
		*(_DWORD*)(a1 + 32) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 20i64);
	}
}

