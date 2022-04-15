//----- (00000001405F17C0) ----------------------------------------------------
__int64 __fastcall sub_1405F17C0(_DWORD* a1, int a2, int a3)
{
	int v5; // eax

	v5 = dword_140C636A8 - a2;
	a1[10] = a3;
	a1[14] = v5;
	if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 96i64))(a1))
	{
		a1[16] = dword_140C636A8;
		return 0i64;
	}
	else
	{
		if (a3)
			a1[15] = dword_140C636A8;
		return 0i64;
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

