//----- (00000001400097D0) ----------------------------------------------------
__int64 __fastcall sub_1400097D0(__int64 a1)
{
	int v1; // eax
	__int64 result; // rax
	float v4; // xmm2_4
	LONGLONG v5; // r14
	float v6; // xmm0_4
	__int64 v7; // rax
	float v8; // xmm0_4
	__int64 v9; // rax
	float v10; // xmm0_4
	__int64 v11; // rax
	float v12; // xmm0_4
	unsigned __int64 v13; // rdx
	unsigned __int64 v14; // rcx
	int v15; // esi
	LONGLONG v16; // rbp
	int v17; // edi
	signed int v18; // eax
	unsigned __int64 v19; // rax
	unsigned __int64 v20; // rax
	int v21; // edi
	int v22; // eax
	LARGE_INTEGER v23; // [rsp+30h] [rbp-78h] BYREF
	LONGLONG v24; // [rsp+38h] [rbp-70h]
	int v25; // [rsp+40h] [rbp-68h] BYREF
	LONGLONG v26; // [rsp+48h] [rbp-60h]
	LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp+8h] BYREF
	LARGE_INTEGER v28; // [rsp+B8h] [rbp+10h] BYREF
	LARGE_INTEGER v29; // [rsp+C0h] [rbp+18h] BYREF
	LARGE_INTEGER v30; // [rsp+C8h] [rbp+20h] BYREF

	v1 = *(_DWORD*)(a1 + 64);
	if ((v1 & 1) == 0 || (v1 & 4) == 0)
		return 2147500037i64;
	QueryPerformanceCounter(&PerformanceCount);
	v4 = *(float*)(a1 + 192);
	v5 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	v6 = (float)(PerformanceCount.LowPart - ::PerformanceCount.LowPart - *(_DWORD*)(a1 + 200));
	if (PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - *(_QWORD*)(a1 + 200) < 0)
		v6 = v6 + 1.8446744e19;
	v7 = *(_QWORD*)(a1 + 208);
	*(float*)(a1 + 232) = v6 * v4;
	v8 = (float)(int)v7;
	if (v7 < 0)
		v8 = v8 + 1.8446744e19;
	v9 = *(_QWORD*)(a1 + 216);
	*(float*)(a1 + 236) = v8 * v4;
	v10 = (float)(int)v9;
	if (v9 < 0)
		v10 = v10 + 1.8446744e19;
	v11 = *(_QWORD*)(a1 + 224);
	*(float*)(a1 + 240) = v10 * v4;
	v12 = (float)(int)v11;
	if (v11 < 0)
		v12 = v12 + 1.8446744e19;
	*(_QWORD*)(a1 + 200) = v5;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(float*)(a1 + 244) = v12 * v4;
	sub_14018CD50();
	v15 = (int)(float)(fminf(*(float*)(a1 + 232), 1.0) * 250.0);
	if (v15 <= 0)
	{
		v16 = v26;
	}
	else
	{
		QueryPerformanceCounter(&PerformanceCount);
		v16 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	}
	v17 = -1;
	if (v15)
	{
		if (v15 < 0)
		{
			v18 = -1;
			goto LABEL_22;
		}
		QueryPerformanceCounter(&v28);
		v14 = v28.QuadPart - ::PerformanceCount.QuadPart - v16;
		v19 = qword_140C636B0 * (unsigned int)v15;
		if (v14 < v19)
		{
			v13 = (v19 - v14) % qword_140C636B0;
			v18 = (v19 - v14) / qword_140C636B0 + 1;
			goto LABEL_22;
		}
		v15 = 0;
	}
	v18 = 0;
LABEL_22:
	if (!v18)
		v18 = 1;
	v23.LowPart = v18;
	if (v18 > 0)
	{
		QueryPerformanceCounter(&v29);
		v24 = v29.QuadPart - ::PerformanceCount.QuadPart;
	}
	if (qword_140C63758)
		sub_1401C81F0(v14, (unsigned int*)&v23);
	if (!v15)
		goto LABEL_32;
	if (v15 >= 0)
	{
		QueryPerformanceCounter(&v30);
		v14 = v30.QuadPart - ::PerformanceCount.QuadPart - v16;
		v20 = qword_140C636B0 * (unsigned int)v15;
		if (v14 < v20)
		{
			v13 = (v20 - v14) % qword_140C636B0;
			v17 = (v20 - v14) / qword_140C636B0 + 1;
			goto LABEL_33;
		}
	LABEL_32:
		v17 = 0;
	}
LABEL_33:
	if (!v17)
		v17 = 1;
	v25 = v17;
	if (v17 > 0)
	{
		QueryPerformanceCounter(&v23);
		v26 = v23.QuadPart - ::PerformanceCount.QuadPart;
	}
	if (qword_140C63728)
		sub_1401952D0(v14, &v25);
	if ((*(unsigned int(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 600i64))(
		qword_140C65670,
		v13))
	{
		(*(void(__fastcall**)(__int64, void*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&unk_140C79A80,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C79A80,
			1i64);
	}
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	v21 = result;
	if ((int)result >= 0)
	{
		sub_140198620();
		QueryPerformanceCounter(&PerformanceCount);
		*(_QWORD*)(a1 + 208) += PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v5;
		if (v21 != 1)
			*(_DWORD*)(a1 + 64) |= 0x80u;
		v22 = *(_DWORD*)(a1 + 64);
		if ((v22 & 0x2000) == 0)
			*(_DWORD*)(a1 + 64) = v22 | 0x100;
		return 0i64;
	}
	return result;
}
// 1400099F0: variable 'v14' is possibly undefined
// 140009A95: variable 'v13' is possibly undefined
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140C63728: using guessed type __int64 qword_140C63728;
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C65670: using guessed type __int64 qword_140C65670;

