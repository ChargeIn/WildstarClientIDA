//----- (00000001401C1FC0) ----------------------------------------------------
__int64 __fastcall sub_1401C1FC0(__int64 a1, unsigned __int64* a2, __int64 a3)
{
	unsigned int v3; // esi
	unsigned int v4; // r15d
	unsigned __int64* v5; // r9
	unsigned int v7; // edi
	__int64 v8; // r13
	__int64 v9; // r12
	__int64 v10; // rbx
	__int64 v11; // r14
	int v12; // eax
	int v14; // eax

	v3 = *(_DWORD*)(a1 + 80);
	v4 = 0;
	v5 = a2;
	v7 = 0;
	if (!v3)
		return 2147943568i64;
	v8 = *(_QWORD*)(a1 + 72);
	v9 = *(_QWORD*)(a1 + 56);
	while (1)
	{
		v10 = v7 + ((v3 - v7) >> 1);
		v11 = *(unsigned int*)(v8 + 4 * v10);
		v12 = sub_1407E6AF0(v5, 32 * v11 + v9 + 4, 0x14ui64);
		if (v12 >= 0)
			break;
		v3 = v7 + ((v3 - v7) >> 1);
	LABEL_7:
		v5 = a2;
		if (v7 >= v3)
			return 2147943568i64;
	}
	if (v12 > 0)
	{
		v7 = v10 + 1;
		goto LABEL_7;
	}
	v14 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) + 72i64))(
		*(_QWORD*)(a1 + 8),
		*(unsigned int*)(32 * v11 + v9),
		a3);
	if (v14 < 0)
		return (unsigned int)v14;
	return v4;
}

