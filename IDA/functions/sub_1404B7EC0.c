//----- (00000001404B7EC0) ----------------------------------------------------
int* __fastcall sub_1404B7EC0(__int64 a1, int* a2, __int64 a3, __m128* a4)
{
	__int64 v4; // r14
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rbp
	__int64 v11; // rax
	unsigned int v12; // ecx
	__int64 v13; // rax
	int v14; // eax
	int v15; // eax
	int v16; // eax
	int v17; // eax
	int* v18; // rax
	int v20; // [rsp+20h] [rbp-38h] BYREF
	int v21; // [rsp+24h] [rbp-34h] BYREF
	int v22[12]; // [rsp+28h] [rbp-30h] BYREF

	v4 = qword_140C659F0;
	v8 = sub_1405B1510(&qword_140C7DFB0);
	if (v8)
		sub_1405AAEB0(v8);
	*a2 = 0;
	v9 = sub_1405B1510(&qword_140C7DFB0);
	v10 = v9;
	if (v9)
	{
		v11 = sub_14077DD00(v9 + 440, a3);
		v12 = v11 ? *(_DWORD*)(v11 + 8) : 0;
		v13 = sub_140203DA0(v12);
		v14 = v13 ? *(_DWORD*)(v13 + 8) : 0;
		v15 = v14 - 12;
		if (!v15)
			goto LABEL_33;
		v16 = v15 - 10;
		if (!v16)
		{
			if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)a4, (__int64)&ymmword_140C78390, 0x40ui64))
				a4 = (__m128*)(v4 + 176);
			v20 = 0;
			if (a3)
				v18 = sub_1405AACD0(v10, &v20, a3, a4);
			else
				v18 = &v20;
			goto LABEL_29;
		}
		v17 = v16 - 31;
		if (!v17)
		{
			if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)a4, (__int64)&ymmword_140C78390, 0x40ui64))
				a4 = (__m128*)(v4 + 176);
			v21 = 0;
			if (a3)
				v18 = sub_1405AB530(v10, &v21, a3, a4);
			else
				v18 = &v21;
			goto LABEL_29;
		}
		if (v17 == 1)
		{
		LABEL_33:
			if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)a4, (__int64)&ymmword_140C78390, 0x40ui64))
				a4 = (__m128*)(v4 + 176);
			v22[0] = 0;
			if (a3)
				v18 = sub_1405AB340(v10, v22, a3, a4);
			else
				v18 = v22;
		LABEL_29:
			*a2 = *v18;
		}
	}
	return a2;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

