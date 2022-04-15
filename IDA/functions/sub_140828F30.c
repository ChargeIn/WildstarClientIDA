//----- (0000000140828F30) ----------------------------------------------------
void __fastcall sub_140828F30(int a1, int a2, int a3)
{
	unsigned __int16 v3; // ax
	int v4[18]; // [rsp+20h] [rbp-48h] BYREF

	if (a1)
	{
		v4[2] = a1;
		v4[3] = a2;
		HIWORD(v4[0]) = 31;
		v4[4] = a3;
		v3 = sub_140783020();
		sub_14082BB30(qword_140C61B68, v4, v3);
	}
}

