//----- (0000000140828A00) ----------------------------------------------------
__int64 __fastcall sub_140828A00(int a1, int a2)
{
	unsigned __int16 v2; // ax
	int v4[4]; // [rsp+20h] [rbp-48h] BYREF
	__int16 v5; // [rsp+30h] [rbp-38h]

	v4[2] = a1;
	HIWORD(v4[0]) = 7;
	if (a2 == 748895195)
		a2 = 0;
	v5 = 0;
	v4[3] = a2;
	v2 = sub_140783020();
	return sub_14082BB30(qword_140C61B68, v4, v2);
}

