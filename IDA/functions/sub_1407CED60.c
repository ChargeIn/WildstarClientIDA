//----- (00000001407CED60) ----------------------------------------------------
void __fastcall sub_1407CED60(__int64 a1, __int64 a2, __int128* a3, __int128* a4, int a5)
{
	float v5; // xmm1_4
	__int64 v6; // rdi
	float v11; // xmm2_4
	int v12; // eax
	unsigned int v13; // eax
	__int64 v14; // rbx
	__int64 v15; // rsi
	int* v16; // rax
	int v17; // xmm11_4
	int v18; // xmm12_4
	double v19; // xmm7_8
	double v20; // xmm6_8
	float v21; // xmm9_4
	float v22; // xmm10_4
	float v23; // xmm8_4
	float v24; // xmm0_4
	__int64 v25; // rcx
	__int64 v26; // rdx
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	__int128 v29; // xmm0
	__int128 v30; // xmm1
	__int128 v31; // xmm0
	__int128 v32; // xmm1
	__int128 v33; // xmm0
	int v34; // ebx
	__int64 v35; // rdx
	__int64* v36; // r8
	__int64 v37; // r9
	__int64 i; // rcx
	_QWORD* v39; // rdx
	const void*** v40; // rbx
	int j; // esi
	__int64 v42; // [rsp+48h] [rbp-C0h] BYREF
	int v43[12]; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v44; // [rsp+88h] [rbp-80h]
	__int128 v45[3]; // [rsp+98h] [rbp-70h] BYREF
	int v46; // [rsp+C8h] [rbp-40h]
	__int64 v47; // [rsp+CCh] [rbp-3Ch]
	int v48; // [rsp+D4h] [rbp-34h]
	__int128 v49[3]; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v50; // [rsp+108h] [rbp+0h]
	int v51[4]; // [rsp+118h] [rbp+10h] BYREF
	int v52; // [rsp+128h] [rbp+20h]
	int v53; // [rsp+12Ch] [rbp+24h]
	_QWORD v54[7]; // [rsp+138h] [rbp+30h] BYREF
	char v55; // [rsp+170h] [rbp+68h] BYREF
	__int64 v56; // [rsp+1A0h] [rbp+98h]
	__int64 v57; // [rsp+1B0h] [rbp+A8h]

	v5 = *(float*)(a2 + 40);
	v6 = *(_QWORD*)(a1 + 1328);
	v11 = *(float*)(a2 + 56) / (float)(v5 + 1.0);
	*(float*)&v42 = (float)(*(float*)(a2 + 56) / v5) - 0.0000099999997;
	for (*((float*)&v42 + 1) = v11; v6; v6 = *(_QWORD*)(v6 + 136))
	{
		if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 176i64))(v6) & 1) != 0)
		{
			v12 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(v6 + 440) + 40i64))(
				*(_QWORD*)(v6 + 440),
				v6 + 464,
				0i64);
			if (v12 == 1)
				return;
			if (v12 == -2147467259)
				*(_DWORD*)(v6 + 456) = 1;
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 184i64))(v6);
			if (v13 == -1 || *(_QWORD*)(v6 + 288) <= (unsigned __int64)v13)
			{
				*(_DWORD*)(v6 + 464) = 0;
				return;
			}
			v14 = *(_QWORD*)(v6 + 280) + 32i64 * v13;
			v15 = *(_QWORD*)v14;
			if (!*(_QWORD*)v14)
				return;
			v16 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
			v51[0] = *v16;
			v51[1] = v16[1];
			v51[2] = v16[2];
			v51[3] = v16[3];
			v17 = v16[4];
			v52 = v17;
			v18 = v16[5];
			v53 = 1065353216;
			v52 = 1065353216;
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v51);
			*(_QWORD*)&v19 = (unsigned int)dword_140C3B438;
			*(float*)&v19 = *(float*)&dword_140C3B438 * 0.0055555557;
			v20 = v19;
			*(float*)&v19 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v14 + 12);
			*(float*)&v20 = *(float*)&v20 * *(float*)(v14 + 8);
			v21 = sub_1408FE3D0(v20);
			v22 = sub_1408FC950(v20);
			LODWORD(v20) = sub_1408FE3D0(v19);
			v23 = sub_1408FC950(v19);
			LODWORD(v19) = sub_1408FE3D0(0.0);
			v24 = sub_1408FC950(0.0);
			v43[3] = 0;
			v43[7] = 0;
			*(float*)&v43[1] = *(float*)&v19 * v23;
			*(float*)&v43[2] = -*(float*)&v20;
			*(float*)v43 = v24 * v23;
			*(float*)&v43[4] = (float)((float)(v24 * *(float*)&v20) * v21) - (float)(*(float*)&v19 * v22);
			*(float*)&v43[5] = (float)(v24 * v22) + (float)((float)(*(float*)&v19 * *(float*)&v20) * v21);
			*(float*)&v43[8] = (float)((float)(v24 * *(float*)&v20) * v22) + (float)(*(float*)&v19 * v21);
			*(float*)&v43[6] = v23 * v21;
			*(float*)&v43[9] = (float)((float)(*(float*)&v19 * *(float*)&v20) * v22) - (float)(v24 * v21);
			*(float*)&v43[10] = v23 * v22;
			v43[11] = 0;
			v44 = xmmword_140C78440;
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v15 + 72i64))(v15, v43);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v15 + 320i64))(v15, 1i64);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v15 + 296i64))(v15, 1i64);
			v25 = *(_QWORD*)(a1 + 2984);
			v26 = *(unsigned int*)(a1 + 1320);
			v27 = *a3;
			v49[1] = a3[1];
			v28 = a3[3];
			v49[0] = v27;
			v29 = a3[2];
			v50 = v28;
			v30 = a4[1];
			*(_QWORD*)((char*)&v50 + 4) = 0i64;
			LODWORD(v50) = 0;
			v49[2] = v29;
			v31 = *a4;
			v45[1] = v30;
			v32 = a4[3];
			v45[0] = v31;
			v33 = a4[2];
			v48 = HIDWORD(v32);
			v45[2] = v33;
			v47 = 0i64;
			v46 = 0;
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v25 + 48i64))(v25, v26, 0i64);
			(*(void(__fastcall**)(_QWORD, __int128*, __int128*, __int64*, _DWORD))(**(_QWORD**)(a1 + 2984) + 80i64))(
				*(_QWORD*)(a1 + 2984),
				v49,
				v45,
				&v42,
				0);
			v34 = 40;
			if (a5)
				v34 = 296;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 440) + 24i64))(*(_QWORD*)(v6 + 440));
			sub_1407C1FE0(v54);
			(*(void(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, int, int, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 2984) + 120i64))(
				*(_QWORD*)(a1 + 2984),
				v54,
				a2,
				a1 + 1344,
				v34,
				3,
				0i64,
				0i64,
				v42);
			if (v56)
				sub_1407C2170(v54, 5, 0xFFFFFFFF);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 440) + 32i64))(*(_QWORD*)(v6 + 440));
			v52 = v17;
			v53 = v18;
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v51);
			v36 = v54;
			v37 = 7i64;
			do
			{
				for (i = *v36; *v36; i = *v36)
				{
					v39 = *(_QWORD**)(i + 32);
					if (v39)
						*v39 = *(_QWORD*)(i + 40);
					v35 = *(_QWORD*)(i + 40);
					if (v35)
						*(_QWORD*)(v35 + 32) = *(_QWORD*)(i + 32);
					*(_QWORD*)(i + 32) = 0i64;
					*(_QWORD*)(i + 40) = 0i64;
				}
				++v36;
				--v37;
			} while (v37);
			if (v57)
				(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)(v57 - 16) + 8i64))(v57 - 16, v35, v36);
			v40 = (const void***)&v55;
			for (j = 6; j >= 0; --j)
			{
				if (*--v40)
					sub_1401A4A00(v40);
			}
		}
	}
}
// 19: found interdependent unknown calls
// 1407CF21E: variable 'v35' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1407CED60: using guessed type _QWORD var_160[7];

