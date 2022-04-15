//----- (0000000140179B80) ----------------------------------------------------
__int64 __fastcall sub_140179B80(__int64 a1, int a2, int* a3, unsigned __int8 a4)
{
	int v8; // eax
	__int64 v9; // rdi
	__int64 v10; // rcx

	if (a2)
		return 1i64;
	v8 = sub_140179450(a1, a3);
	if (v8 < 0)
		return sub_1400D2120(a1, 0, a3, a4);
	v9 = v8;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 1208) + 8i64 * v8) != a1)
	{
		sub_1400D42F0(a1, 0, 1, 4.0);
		sub_1400D42F0(*(_QWORD*)(*(_QWORD*)(a1 + 1208) + 8 * v9), 1, 1, 4.0);
		sub_1400CC680(*(_QWORD*)(*(_QWORD*)(a1 + 1208) + 8 * v9), a1 + 64);
		sub_1401795D0(*(_QWORD*)(*(_QWORD*)(a1 + 1208) + 8 * v9));
	}
	v10 = *(_QWORD*)(*(_QWORD*)(a1 + 1208) + 8 * v9);
	if (*(_BYTE*)(v10 + 1124))
		sub_1400D2120(v10, 0, a3, a4);
	else
		*(_BYTE*)(v10 + 1148) = 1;
	return 0i64;
}

