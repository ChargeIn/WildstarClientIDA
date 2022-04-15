//----- (00000001407A6E40) ----------------------------------------------------
void __fastcall sub_1407A6E40(__int64** a1, char a2, __int64 a3, __int64 a4, _DWORD* a5, _QWORD* a6, _QWORD* a7)
{
	BOOL v7; // esi
	float v10; // xmm1_4
	float v11; // xmm0_4
	__int64 v12; // rbx
	double v13; // xmm0_8
	float v14; // xmm6_4
	_DWORD* v15; // rax
	__int64* v16; // rbp
	__int64* v17; // rsi
	__int64 v18; // rbx
	__int64 v19; // rax
	double v20; // xmm0_8
	float v21; // xmm6_4
	__int64 v22; // rax
	__int64* v23; // rbx
	__int64 v24; // rdi
	__int64 v25; // rdx
	_DWORD* v26; // rax

	v7 = (a2 & 4) != 0;
	if ((a2 & 3) != 0)
	{
		if ((a2 & 1) != 0)
			*(_DWORD*)(a4 + 12) = 0x40000000;
		else
			*(_DWORD*)(a4 + 12) = 0;
		if ((a2 & 2) != 0)
		{
			v10 = *(float*)(a4 + 12);
			v11 = v10 + 0.30000001;
			*(float*)(a4 + 24) = v10 + 2.0;
			*(float*)(a4 + 20) = v10 + 0.89999998;
		}
		else
		{
			v11 = *(float*)(a4 + 12);
			*(float*)(a4 + 20) = v11;
			*(float*)(a4 + 24) = v11;
		}
		*(float*)(a4 + 16) = v11;
		*(_DWORD*)(a4 + 28) = 100;
		*(_DWORD*)(a4 + 32) = 101;
		v12 = **a1;
		v13 = (*(double(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 104i64))(v12, 0i64);
		v14 = *(float*)&v13;
		*(float*)&v13 = (*(float(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 104i64))(v12, 1i64);
		v15 = (_DWORD*)(*(__int64(__fastcall**)(__int64, bool))(*(_QWORD*)**a1 + 40i64))(**a1, v14 == *(float*)&v13);
		*(_DWORD*)a4 = *v15;
		*(_DWORD*)(a4 + 4) = v15[1];
		*(_DWORD*)(a4 + 8) = v15[2];
		*a6 = a4;
	}
	if (v7)
	{
		a5[3] = 0;
		a5[4] = 0x40000000;
		a5[5] = 1082130432;
		a5[6] = 102;
		a5[7] = 103;
		v16 = a1[1];
		v17 = (__int64*)(*a1)[(_QWORD)v16 - 1];
		v18 = *v17;
		v19 = (*(__int64(__fastcall**)(__int64*))(*v17 + 32))(v17);
		v20 = (*(double(__fastcall**)(__int64*, __int64))(v18 + 104))(v17, v19 - 1);
		v21 = *(float*)&v20;
		v22 = (*(__int64(__fastcall**)(__int64*))(*v17 + 32))(v17);
		*(float*)&v20 = (*(float(__fastcall**)(__int64*, __int64))(v18 + 104))(v17, v22 - 2);
		v23 = (__int64*)(*a1)[(_QWORD)v16 - 1];
		v24 = *v23;
		if (v21 == *(float*)&v20)
			v25 = (*(__int64(__fastcall**)(__int64*))(v24 + 32))(v23) - 2;
		else
			v25 = (*(__int64(__fastcall**)(__int64*))(v24 + 32))(v23) - 1;
		v26 = (_DWORD*)(*(__int64(__fastcall**)(__int64*, __int64))(v24 + 40))(v23, v25);
		*a5 = *v26;
		a5[1] = v26[1];
		a5[2] = v26[2];
		*a7 = a5;
	}
}

