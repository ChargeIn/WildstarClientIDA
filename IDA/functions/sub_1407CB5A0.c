//----- (00000001407CB5A0) ----------------------------------------------------
__int64 __fastcall sub_1407CB5A0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v6; // rdx
	__int64 v7; // r8
	_DWORD* v8; // r9
	__int64 v9; // rcx
	_DWORD* v10; // rax
	int* v11; // rdi
	int v12; // edx
	__int64(__fastcall * ***v13)(); // r10
	__int64 v14; // r11
	float* v15; // r9
	int v16; // xmm0_4
	__int64 v17; // r8
	int v18; // ecx
	float v19; // xmm2_4
	int v20; // ecx
	__int64 v21; // rax
	int* v22; // rcx
	float* v23; // rax
	__int64 v24; // rdx
	int v25; // xmm0_4
	int v26; // xmm1_4
	int v27; // xmm0_4
	int v28; // xmm1_4
	int v29; // xmm0_4
	int v30; // xmm1_4
	int v31; // xmm0_4
	int v32; // xmm1_4
	int v33; // xmm0_4
	int v34; // xmm1_4
	int v35; // xmm0_4
	int v36; // xmm1_4
	int v37; // xmm0_4
	int v38; // xmm1_4
	int v39; // xmm0_4
	int v40; // xmm1_4
	__int64(__fastcall * **v41)(); // rdx
	int v42; // ecx
	float v43; // xmm2_4
	__int64 v44; // rcx
	__int64 v45; // rax
	_WORD* v46; // r8
	unsigned int v47; // edx
	unsigned int i; // esi
	unsigned int v49; // r9d
	__int16 v50; // ax
	__int16 v51; // dx
	unsigned int v52; // ecx

	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6056) + 40i64))(*(_QWORD*)(a1 + 6056)))
	{
		v9 = *(_QWORD*)(a1 + 6056);
		*(_DWORD*)(a1 + 6072) = 0;
		v10 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v9 + 56i64))(
			v9,
			0i64,
			0i64,
			2i64);
		v8 = v10;
		if (v10)
		{
			v11 = (int*)qword_140C63750;
			v12 = *((_DWORD*)off_140C3ACF0[0] + 4);
			v13 = off_140C3ACF8;
			v14 = 14i64;
			if (*(_DWORD*)qword_140C63750 < v12)
				v12 = *(_DWORD*)qword_140C63750;
			v15 = (float*)(v10 + 4);
			v16 = *((_DWORD*)off_140C3ACF0[0] + v12 + 8);
			*v10 = 0;
			v10[3] = 0;
			LODWORD(v17) = 1;
			v10[1] = v16;
			v10[2] = 0;
			++* (_DWORD*)(a1 + 6072);
			v18 = *((_DWORD*)off_140C3ACF0[0] + 4);
			if (*v11 < v18)
				v18 = *v11;
			v19 = *((float*)off_140C3ACF0[0] + v18 + 8);
			do
			{
				v20 = *((_DWORD*)*v13 + 4);
				if (*v11 < v20)
					v20 = *v11;
				v21 = v20;
				v22 = (int*)(a1 + 5804);
				v19 = v19 - *((float*)*v13 + v21 + 8);
				v23 = v15 + 4;
				v24 = 4i64;
				do
				{
					v25 = *(v22 - 1);
					v26 = *v22;
					*((_DWORD*)v23 - 1) = v17;
					v15 += 32;
					v23 += 32;
					v22 += 16;
					*((_DWORD*)v15 - 32) = v25;
					*(v15 - 31) = v19;
					*((_DWORD*)v15 - 30) = v26;
					++* (_DWORD*)(a1 + 6072);
					v27 = *(v22 - 15);
					v28 = *(v22 - 14);
					*((_DWORD*)v23 - 29) = v17;
					*((_DWORD*)v23 - 32) = v27;
					*(v23 - 31) = v19;
					*((_DWORD*)v23 - 30) = v28;
					++* (_DWORD*)(a1 + 6072);
					v29 = *(v22 - 13);
					v30 = *(v22 - 12);
					*((_DWORD*)v23 - 25) = v17;
					*((_DWORD*)v23 - 28) = v29;
					*(v23 - 27) = v19;
					*((_DWORD*)v23 - 26) = v30;
					++* (_DWORD*)(a1 + 6072);
					v31 = *(v22 - 11);
					v32 = *(v22 - 10);
					*((_DWORD*)v23 - 21) = v17;
					*((_DWORD*)v23 - 24) = v31;
					*(v23 - 23) = v19;
					*((_DWORD*)v23 - 22) = v32;
					++* (_DWORD*)(a1 + 6072);
					v33 = *(v22 - 9);
					v34 = *(v22 - 8);
					*((_DWORD*)v23 - 17) = v17;
					*((_DWORD*)v23 - 20) = v33;
					*(v23 - 19) = v19;
					*((_DWORD*)v23 - 18) = v34;
					++* (_DWORD*)(a1 + 6072);
					v35 = *(v22 - 7);
					v36 = *(v22 - 6);
					*((_DWORD*)v23 - 13) = v17;
					*((_DWORD*)v23 - 16) = v35;
					*(v23 - 15) = v19;
					*((_DWORD*)v23 - 14) = v36;
					++* (_DWORD*)(a1 + 6072);
					v37 = *(v22 - 5);
					v38 = *(v22 - 4);
					*((_DWORD*)v23 - 9) = v17;
					*((_DWORD*)v23 - 12) = v37;
					*(v23 - 11) = v19;
					*((_DWORD*)v23 - 10) = v38;
					++* (_DWORD*)(a1 + 6072);
					v39 = *(v22 - 3);
					v40 = *(v22 - 2);
					*((_DWORD*)v23 - 5) = v17;
					*((_DWORD*)v23 - 8) = v39;
					*(v23 - 7) = v19;
					*((_DWORD*)v23 - 6) = v40;
					++* (_DWORD*)(a1 + 6072);
					--v24;
				} while (v24);
				v17 = (unsigned int)(v17 + 1);
				++v13;
				--v14;
			} while (v14);
			v41 = off_140C3AD68[0];
			v42 = *((_DWORD*)off_140C3AD68[0] + 4);
			if (*v11 < v42)
				v42 = *v11;
			v43 = v19 - *((float*)off_140C3AD68[0] + v42 + 8);
			*v15 = 0.0;
			*((_DWORD*)v15 + 3) = 15;
			v15[1] = v43;
			v15[2] = 0.0;
			v44 = *(_QWORD*)(a1 + 6056);
			++* (_DWORD*)(a1 + 6072);
			(*(void(__fastcall**)(__int64, __int64(__fastcall***)(), __int64))(*(_QWORD*)v44 + 64i64))(v44, v41, v17);
		}
	}
	if (!(*(unsigned int(__fastcall**)(_QWORD, __int64, __int64, _DWORD*))(**(_QWORD**)(a1 + 6064) + 40i64))(
		*(_QWORD*)(a1 + 6064),
		v6,
		v7,
		v8))
	{
		v45 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6064) + 56i64))(
			*(_QWORD*)(a1 + 6064),
			0i64,
			0i64,
			2i64);
		*(_DWORD*)(a1 + 6076) = 0;
		v46 = (_WORD*)v45;
		if (v45)
		{
			v47 = 0;
			do
			{
				*v46 = 0;
				++v47;
				v46 += 3;
				*(v46 - 2) = (v47 & 0x1F) + 1;
				*(v46 - 1) = v47;
				*(_DWORD*)(a1 + 6076) += 3;
			} while (v47 < 0x20);
			for (i = 0; i < 0xD; ++i)
			{
				v49 = 0;
				do
				{
					v46 += 6;
					*(v46 - 6) = v49 + 32 * i + 1;
					v50 = v49 + 32 * i + 33;
					v51 = 32 * i + (++v49 & 0x1F);
					*(v46 - 5) = v51 + 1;
					*(v46 - 4) = v50;
					*(v46 - 3) = v50;
					*(v46 - 2) = v51 + 1;
					*(v46 - 1) = v51 + 33;
					*(_DWORD*)(a1 + 6076) += 6;
				} while (v49 < 0x20);
			}
			v52 = 0;
			do
			{
				v46 += 3;
				*(v46 - 3) = v52++ + 417;
				*(v46 - 2) = (v52 & 0x1F) + 417;
				*(v46 - 1) = 449;
				*(_DWORD*)(a1 + 6076) += 3;
			} while (v52 < 0x20);
			(*(void(__fastcall**)(_QWORD, __int64, _WORD*, __int64))(**(_QWORD**)(a1 + 6064) + 64i64))(
				*(_QWORD*)(a1 + 6064),
				417i64,
				v46,
				449i64);
		}
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 5752),
		a2);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 5760),
		a3);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 6056),
		21i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 6064));
	return (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
		+ 656i64))(
			qword_140C65670,
			3i64,
			0i64,
			*(unsigned int*)(a1 + 6076),
			0,
			*(_DWORD*)(a1 + 6072),
			0,
			1);
}
// 1407CB830: variable 'v6' is possibly undefined
// 1407CB830: variable 'v7' is possibly undefined
// 1407CB830: variable 'v8' is possibly undefined
// 140C3ACF0: using guessed type __int64 (__fastcall ***off_140C3ACF0[23])();
// 140C3ACF8: using guessed type __int64 (__fastcall ***off_140C3ACF8[22])();
// 140C3AD68: using guessed type __int64 (__fastcall ***off_140C3AD68[8])();
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

