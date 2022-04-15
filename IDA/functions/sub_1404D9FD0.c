//----- (00000001404D9FD0) ----------------------------------------------------
void __fastcall sub_1404D9FD0(_QWORD* a1, int a2, int a3, int a4, int a5)
{
	double v5; // xmm2_8
	double v6; // xmm3_8
	__int64 v8; // rax
	int v9; // eax

	if (a1[15])
	{
		v8 = a1[3218];
		if (v8)
			LODWORD(v8) = *(_DWORD*)(v8 + 264);
		v9 = sub_14055A5F0(a1, a2, a3, a4, 0, a5, v8, 50.0);
		if (v9)
			sub_14055B0E0((__int64)a1, v9, v5, v6);
	}
}
// 1404DA027: variable 'v5' is possibly undefined
// 1404DA027: variable 'v6' is possibly undefined

