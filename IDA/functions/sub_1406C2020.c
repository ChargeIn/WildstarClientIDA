//----- (00000001406C2020) ----------------------------------------------------
__int64 __fastcall sub_1406C2020(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	double v5; // xmm0_8
	float v6; // xmm1_4
	double v7; // xmm0_8
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]
	__int64 v11; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1406C01C0(a1);
	if (v2)
	{
		v3 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (__int64*)(a1[3] + 16i64);
		v4 = *((_DWORD*)v3 + 2);
		if (v4 != 3)
		{
			if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v11))
			{
				v5 = 0.0;
				goto LABEL_9;
			}
			v10 = 3;
			v3 = &v9;
			v9 = v11;
		}
		v5 = *(double*)v3;
	LABEL_9:
		v6 = fmaxf(-1.0, fminf(v5, 1.0));
		*(float*)(v2 + 1876) = v6;
		v7 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v6);
		*(_DWORD*)(v2 + 1872) = LODWORD(v7);
		sub_1406BFD00(v2);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

