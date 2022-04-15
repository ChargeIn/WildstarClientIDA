//----- (00000001403B54A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403B54A0(__int64 a1, __int64 a2, __int64 a3, float a4)
{
	__int64 v4; // rbx
	__int64 v6; // rcx
	int v7; // edi
	int v9; // ecx
	float v10; // xmm6_4
	__int64 v11; // rax
	float v12; // xmm1_4
	unsigned __int64 v13; // rcx
	float v14; // xmm1_4

	v4 = a3;
	v7 = sub_1403B5400(a1, a2, a3);
	if (!v7)
		return 0i64;
	if (!v4)
		v4 = a2 + 8;
	if ((dword_140C8A700 & 1) == 0)
	{
		dword_140C8A6F4 = 0;
		dword_140C8A700 |= 1u;
	}
	v9 = sub_1403B5360(v6, a2, v4, a4);
	if (v7 == v9)
		return 0i64;
	v10 = (float)(v7 - v9) / (float)v7;
	if (dword_140C8A6F4)
	{
		v12 = *(float*)&dword_140C8A6F0;
	}
	else
	{
		dword_140C8A6F4 = 1;
		v11 = sub_140200220(0x22Fu);
		if (v11)
		{
			v12 = *(float*)(v11 + 36);
			dword_140C8A6F0 = LODWORD(v12);
		}
		else
		{
			v12 = 0.0;
			dword_140C8A6F0 = 0;
		}
	}
	v13 = 0i64;
	v14 = (float)((float)(v12 * v10) * (float)(int)*(_QWORD*)(v4 + 136)) + 0.5;
	if (v14 >= 9.223372e18)
	{
		v14 = v14 - 9.223372e18;
		if (v14 < 9.223372e18)
			v13 = 0x8000000000000000ui64;
	}
	return v13 + (unsigned int)(int)v14;
}
// 1403B54FE: variable 'v6' is possibly undefined
// 140C8A6F0: using guessed type int dword_140C8A6F0;
// 140C8A6F4: using guessed type int dword_140C8A6F4;
// 140C8A700: using guessed type int dword_140C8A700;

