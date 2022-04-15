//----- (00000001400CAD40) ----------------------------------------------------
char __fastcall sub_1400CAD40(__int64 a1, int a2)
{
	__int64 v4; // rax
	int v5; // r8d

	LOBYTE(v4) = sub_1400C6E00(a1);
	if ((_BYTE)v4)
	{
		v4 = *(_QWORD*)(a1 + 472);
		v5 = 1;
		if (a2 > 1)
			v5 = a2;
		*(_DWORD*)(v4 + 1308) = v5;
	}
	return v4;
}

