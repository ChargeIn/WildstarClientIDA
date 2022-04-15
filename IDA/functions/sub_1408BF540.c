//----- (00000001408BF540) ----------------------------------------------------
void __fastcall sub_1408BF540(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	char v5; // r14
	__int64 v6; // rax
	char v7; // si
	__int64 v8; // rax
	char v9; // bp
	double v10; // xmm0_8

	if (*(_DWORD*)(a1 + 80) && *(_WORD*)(a2 + 18))
	{
		v4 = *(_QWORD*)(a1 + 72);
		v5 = *(_BYTE*)(v4 + 24);
		if (*(_BYTE*)(v4 + 76))
		{
			sub_1408BF6B0(a1, 0, v4 + 8);
			*(_BYTE*)(*(_QWORD*)(a1 + 72) + 76i64) = 0;
		}
		v6 = *(_QWORD*)(a1 + 72);
		v7 = *(_BYTE*)(v6 + 44);
		if (*(_BYTE*)(v6 + 77))
		{
			sub_1408BF6B0(a1, 1, v6 + 28);
			*(_BYTE*)(*(_QWORD*)(a1 + 72) + 77i64) = 0;
		}
		v8 = *(_QWORD*)(a1 + 72);
		v9 = *(_BYTE*)(v8 + 64);
		if (*(_BYTE*)(v8 + 78))
		{
			sub_1408BF6B0(a1, 2, v8 + 48);
			*(_BYTE*)(*(_QWORD*)(a1 + 72) + 78i64) = 0;
		}
		v10 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(*(_QWORD*)(a1 + 72) + 68i64) * 0.050000001);
		if (v5)
			sub_1408BF0C0(a2, (float*)(a1 + 8), *(_QWORD*)(a1 + 88), *(_DWORD*)(a1 + 80));
		if (v7)
			sub_1408BF0C0(
				a2,
				(float*)(a1 + 28),
				*(_QWORD*)(a1 + 88) + 4i64 * (unsigned int)(4 * *(_DWORD*)(a1 + 80)),
				*(_DWORD*)(a1 + 80));
		if (v9)
			sub_1408BF0C0(
				a2,
				(float*)(a1 + 48),
				*(_QWORD*)(a1 + 88) + 4i64 * (unsigned int)(8 * *(_DWORD*)(a1 + 80)),
				*(_DWORD*)(a1 + 80));
		sub_1408BFF00(
			a2,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 96)),
			v10,
			*(_BYTE*)(*(_QWORD*)(a1 + 72) + 72i64));
		*(_DWORD*)(a1 + 96) = LODWORD(v10);
	}
}

