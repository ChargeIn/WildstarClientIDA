//----- (000000014084D1B0) ----------------------------------------------------
__int64 __fastcall sub_14084D1B0(__int64 a1, float a2, __int64 a3)
{
	unsigned int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rcx
	_DWORD* v11; // rax
	_DWORD* v12; // rdi
	double v13; // xmm2_8
	double v14; // xmm0_8
	__int64 v16; // [rsp+20h] [rbp-58h] BYREF
	int v17; // [rsp+28h] [rbp-50h]
	_QWORD v18[3]; // [rsp+30h] [rbp-48h] BYREF
	__int16 v19; // [rsp+48h] [rbp-30h]
	__int64 v20; // [rsp+50h] [rbp-28h]
	int v21; // [rsp+58h] [rbp-20h]

	v18[0] = 0i64;
	v18[1] = 0i64;
	v16 = 0i64;
	v17 = 0;
	v5 = 52;
	v19 = 0;
	v20 = 0i64;
	v18[2] = &v16;
	v21 = 0;
	v6 = sub_140865FC0();
	v7 = v20;
	v20 = v6;
	if (v7)
	{
		sub_140866000(v7);
		v6 = v20;
	}
	if (!v6)
		return 2i64;
	v8 = *(_QWORD**)(a3 + 144);
	if (!v8)
	{
		v9 = sub_140865FC0();
		v10 = v20;
		v20 = v9;
		if (v10)
		{
			sub_140866000(v10);
			v9 = v20;
		}
		if (v9)
		{
			v8 = v18;
			goto LABEL_9;
		}
		return 2i64;
	}
LABEL_9:
	v11 = sub_14084CDC0((__int64)v8, a3, *(_DWORD*)(a1 + 24));
	v12 = v11;
	if (v11)
	{
		*((_BYTE*)v11 + 214) = 1;
		v11[54] = *(_DWORD*)a3;
		v13 = (double)dword_140C110B4 * a2;
		if (v13 <= 0.0)
			v14 = -0.5;
		else
			v14 = 0.5;
		v5 = sub_14084CE80((__int64)v8, a3, (int)(v14 + v13), (__int64)v11);
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v12 + 16i64))(v12);
	}
	if (v20)
		sub_140866000(v20);
	return v5;
}
// 140C110B4: using guessed type int dword_140C110B4;

