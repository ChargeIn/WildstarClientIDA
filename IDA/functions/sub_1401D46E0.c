//----- (00000001401D46E0) ----------------------------------------------------
__int64 __fastcall sub_1401D46E0(__int64 a1, unsigned __int64* a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // rsi
	unsigned __int64 v4; // rdi
	__int64 v7; // r15
	unsigned __int64 v8; // rbx
	int v9; // eax

	v3 = *(_QWORD*)(a1 + 16);
	v4 = 0i64;
	if (!v3)
		return 0i64;
	v7 = *(_QWORD*)(a1 + 8);
	while (1)
	{
		v8 = v4 + ((v3 - v4) >> 1);
		v9 = sub_1407E6AF0(a2, v7 + 20 * v8, 0x14ui64);
		if (v9 >= 0)
			break;
		v3 = v4 + ((v3 - v4) >> 1);
	LABEL_7:
		if (v4 >= v3)
			return 0i64;
	}
	if (v9 > 0)
	{
		v4 = v8 + 1;
		goto LABEL_7;
	}
	if (a3)
		*a3 = v8;
	return 1i64;
}

