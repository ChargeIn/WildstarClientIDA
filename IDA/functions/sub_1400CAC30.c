//----- (00000001400CAC30) ----------------------------------------------------
char __fastcall sub_1400CAC30(_QWORD* a1, int a2)
{
	char result; // al
	__int64 v5; // r9
	int v6; // r8d
	int v7; // eax

	result = sub_1400C6E00((__int64)a1);
	if (result)
	{
		v5 = a1[59];
		v6 = *(_DWORD*)(v5 + 1296);
		if (a2 < v6)
			v6 = a2;
		v7 = 0;
		if (v6 > 0)
			v7 = v6;
		*(_BYTE*)(v5 + 1392) |= 0x10u;
		*(_DWORD*)(v5 + 1300) = v7;
		return sub_1400CAC90(a1);
	}
	return result;
}

