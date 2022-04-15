//----- (00000001406D0EC0) ----------------------------------------------------
char __fastcall sub_1406D0EC0(_DWORD* a1)
{
	int v1; // esi
	int v2; // ebp
	int v3; // ebx
	int v4; // r14d
	int v6; // eax
	int v7; // r9d
	__int64 v8; // rdx
	int v9; // eax
	int v10; // ecx
	int v11; // eax
	__int64 v12; // rbx
	unsigned int v13; // eax
	int v14; // eax

	v1 = a1[179];
	v2 = a1[180];
	v3 = a1[181];
	v4 = a1[182];
	v6 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 624i64))(a1);
	if (v6)
	{
		v7 = a1[503];
		v8 = (unsigned int)(a1[501] * (v6 - 1));
		if ((int)v8 + v6 * v7 > v3 - v1)
		{
			v10 = (v3 - (int)v8 - v1) / v6;
			a1[505] = v10;
			v8 = (unsigned int)((v10 * a1[504]) >> 31);
			LODWORD(v8) = v10 * a1[504] % v7;
			v9 = v10 * a1[504] / v7;
		}
		else
		{
			a1[505] = v7;
			v9 = a1[504];
		}
		a1[506] = v9;
		a1[507] = a1[505];
		a1[508] = a1[506];
		v11 = a1[501];
		v12 = *(_QWORD*)a1;
		a1[507] += v11;
		a1[508] += v11;
		v13 = (*(__int64(__fastcall**)(_DWORD*, __int64))(v12 + 616))(a1, v8);
		v14 = (*(__int64(__fastcall**)(_DWORD*, _QWORD))(v12 + 672))(a1, v13);
		LOBYTE(v6) = sub_1400CAD80((__int64)a1, v2 + v14 * a1[506] + a1[501] * (v14 - 1) - v4, v4 - v2, a1[506]);
	}
	return v6;
}

