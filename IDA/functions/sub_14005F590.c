//----- (000000014005F590) ----------------------------------------------------
void __fastcall sub_14005F590(__int64 a1, __int64 a2, double* a3, __int64* a4, int a5)
{
	int v5; // eax
	double* v10; // r14
	int v11; // eax
	double v12; // xmm0_8
	double v13; // xmm1_8
	__m128d v14; // xmm2
	int v15; // ecx
	double v16; // xmm0_8
	int v17; // r14d
	_QWORD* v18; // rax
	int v19; // eax
	__int64 v20; // [rsp+30h] [rbp-38h] BYREF
	int v21; // [rsp+38h] [rbp-30h]
	__int64 v22; // [rsp+40h] [rbp-28h] BYREF
	int v23; // [rsp+48h] [rbp-20h]
	__int64 v24; // [rsp+80h] [rbp+18h] BYREF

	v5 = *((_DWORD*)a3 + 2);
	if (v5 == 3)
	{
		v10 = a3;
	}
	else
	{
		if (v5 != 4 || !sub_14005AC80((char*)(*(_QWORD*)a3 + 32i64), (unsigned __int64*)&v24))
			goto LABEL_21;
		v21 = 3;
		v10 = (double*)&v20;
		v20 = v24;
	}
	v11 = *((_DWORD*)a4 + 2);
	if (v11 == 3)
		goto LABEL_10;
	if (v11 == 4 && sub_14005AC80((char*)(*a4 + 32), (unsigned __int64*)&v24))
	{
		v23 = 3;
		a4 = &v22;
		v22 = v24;
	LABEL_10:
		v12 = *v10;
		v13 = *(double*)a4;
		switch (a5)
		{
		case 5:
			*(_DWORD*)(a2 + 8) = 3;
			*(double*)a2 = v13 + v12;
			break;
		case 6:
			*(_DWORD*)(a2 + 8) = 3;
			*(double*)a2 = v12 - v13;
			break;
		case 7:
			*(_DWORD*)(a2 + 8) = 3;
			*(double*)a2 = v13 * v12;
			break;
		case 8:
			*(_DWORD*)(a2 + 8) = 3;
			*(double*)a2 = v12 / v13;
			break;
		case 9:
			v14.m128d_f64[1] = 0.0;
			v14.m128d_f64[0] = v12 / v13;
			v15 = (int)(v12 / v13);
			if ((double)v15 != v14.m128d_f64[0])
				v14.m128d_f64[0] = (double)(v15 - (_mm_movemask_pd(_mm_unpacklo_pd(v14, v14)) & 1));
			*(_DWORD*)(a2 + 8) = 3;
			*(double*)a2 = v12 - v14.m128d_f64[0] * v13;
			break;
		case 10:
			v16 = sub_1408FFA00(v12, v13);
			*(_DWORD*)(a2 + 8) = 3;
			*(double*)a2 = v16;
			break;
		case 11:
			*(_DWORD*)(a2 + 8) = 3;
			*(double*)a2 = -v12;
			break;
		default:
			return;
		}
		return;
	}
LABEL_21:
	v17 = a5;
	v18 = sub_1400623D0(a1, a3, a5);
	if (!*((_DWORD*)v18 + 2))
	{
		v18 = sub_1400623D0(a1, a4, v17);
		if (!*((_DWORD*)v18 + 2))
		{
			v19 = *((_DWORD*)a3 + 2);
			if (v19 != 3 && (v19 != 4 || !sub_14005AC80((char*)(*(_QWORD*)a3 + 32i64), (unsigned __int64*)&v24)))
				a4 = (__int64*)a3;
			sub_14005A950(a1, (__int64)a4, aPerformArithme);
		}
	}
	sub_14005E780(a1, a2, (_DWORD)v18, (_DWORD)a3, (__int64)a4);
}
// 14005F6E3: conditional instruction was optimized away because rcx.8<100000000u
// 14005E780: using guessed type __int64 __fastcall sub_14005E780(_DWORD, _DWORD, _DWORD, _DWORD, __int64);

