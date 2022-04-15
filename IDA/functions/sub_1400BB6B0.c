//----- (00000001400BB6B0) ----------------------------------------------------
void __fastcall sub_1400BB6B0(__int64 a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rsi
	int v4; // eax
	int v5; // ebp
	char* v6; // rax
	int v7; // ebp
	char* v8; // rax
	int v9; // ebx
	int v10; // ebx
	int v11; // eax
	__int64 v12; // rcx
	BOOL v13; // r13d
	__int64 v14; // rcx
	__int64 v15; // rcx
	int v16; // r12d
	int v17; // eax
	int v18; // r15d
	__int64 v19; // rcx
	int v20; // ebx
	unsigned __int64 v21; // rbp
	_QWORD* v22; // rbx
	int* v23; // rbx
	int v24; // ebx
	int v25; // eax
	int v26; // ebx
	__int64 v27; // rcx
	__int64 v28; // rcx
	int v29; // eax
	float v30; // xmm1_4
	float v31; // xmm0_4
	float v32; // xmm0_4
	__int64 v33; // rcx
	int v34; // ebx
	__int64 v35; // rcx
	int v36; // ebx
	float v37; // xmm0_4
	int v38; // [rsp+70h] [rbp+8h] BYREF

	sub_1400BB5E0(a1, 0, *(_DWORD*)(a1 + 196));
	sub_1400BB5E0(a1, 1, *(_DWORD*)(a1 + 200));
	sub_1400BB5E0(a1, 2, *(_DWORD*)(a1 + 204));
	sub_1400BB5E0(a1, 3, *(_DWORD*)(a1 + 220));
	sub_1400BB5E0(a1, 4, *(_DWORD*)(a1 + 228));
	v3 = (_DWORD*)(a1 + 608);
	v4 = *(_DWORD*)(a1 + 608);
	if (v4 && (*(_BYTE*)(a1 + 216) & 1) != 0 && v4 != *(_DWORD*)(a1 + 388))
	{
		if ((unsigned int)sub_1400BD540(a1 + 568, a1 + 608, 0i64))
		{
			v5 = sub_14018CDF0() + (int)(float)(*(float*)(a1 + 612) * 1000.0);
			v6 = sub_1400BD5D0(a1 + 568, a1 + 608);
			if (v6)
				*(_DWORD*)v6 = v5;
		}
		else
		{
			v38 = (int)(float)(*(float*)(a1 + 612) * 1000.0) + sub_14018CDF0();
			sub_1400BD4A0(a1 + 568, (int*)(a1 + 608), &v38);
		}
		*v3 = 0;
	}
	if ((*(_BYTE*)(a1 + 40) & 4) != 0)
	{
		if (*v3)
		{
			if ((unsigned int)sub_1400BD540(a1 + 568, a1 + 608, 0i64))
			{
				v7 = sub_14018CDF0() + (int)(float)(*(float*)(a1 + 612) * 1000.0);
				v8 = sub_1400BD5D0(a1 + 568, a1 + 608);
				if (v8)
					*(_DWORD*)v8 = v7;
			}
			else
			{
				v38 = (int)(float)(*(float*)(a1 + 612) * 1000.0) + sub_14018CDF0();
				sub_1400BD4A0(a1 + 568, (int*)(a1 + 608), &v38);
			}
			*v3 = 0;
		}
		if (*(_DWORD*)(a1 + 316) || *(_DWORD*)(a1 + 388))
		{
			v9 = *(_DWORD*)(a1 + 48) + *(_DWORD*)(a1 + 616);
			if ((int)(v9 - sub_14018CDF0()) < 0)
				*(_DWORD*)(a1 + 312) = 1;
		}
		if ((dword_140C8CC38 & 1) == 0)
		{
			dword_140C8CC38 |= 1u;
			sub_14018CDF0();
			sub_1401AD620((__int64)&unk_140C8CC40, L"Music Restart Timer: ");
		}
		v10 = *(_DWORD*)(a1 + 48);
		v11 = sub_14018CDF0();
		sub_1401ADA40((__int64)&unk_140C8CC40, v10 + *(_DWORD*)(a1 + 616) - v11);
	}
	v12 = *(_QWORD*)(a1 + 400);
	v13 = v12 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
	if (*(_DWORD*)(a1 + 408))
	{
		v14 = *(_QWORD*)(a1 + 400);
		if (!v14 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 32i64))(v14))
		{
			if (!*(_DWORD*)(a1 + 412)
				|| (v15 = *(_QWORD*)(a1 + 400)) != 0 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v15 + 24i64))(v15))
			{
				sub_1400B9F30((_QWORD*)(a1 + 8), v2, *(__int64(__fastcall****)(_QWORD, unsigned __int64))(a1 + 400));
			}
			*(_DWORD*)(a1 + 408) = 0;
		}
	}
	v16 = 0;
	v17 = dword_140C3BEF0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3BEF0)
		v17 = *(_DWORD*)qword_140C63750;
	if (*((_BYTE*)&dword_140C3BF00 + v17))
		v18 = 0;
	else
		v18 = *(_DWORD*)(a1 + 616);
	if (*(_DWORD*)(a1 + 388))
	{
		if (*(_DWORD*)(a1 + 384)
			&& ((v19 = *(_QWORD*)(a1 + 376)) == 0 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v19 + 32i64))(v19))
			|| (*(_BYTE*)(a1 + 40) & 4) != 0 && (v20 = *(_DWORD*)(a1 + 48), (int)(v20 + v18 - sub_14018CDF0()) < 0)
			|| *(_DWORD*)(a1 + 292))
		{
			v21 = (*(__int64(__fastcall**)(__int64))(a1 + 592))(a1 + 388);
			v22 = *(_QWORD**)(*(_QWORD*)(a1 + 584) + 8 * (v21 % *(_QWORD*)(a1 + 576)));
			if (!v22)
				goto LABEL_57;
			while (v21 != *v22 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 600))(a1 + 388, v22 + 2))
			{
				v22 = (_QWORD*)v22[1];
				if (!v22)
					goto LABEL_57;
			}
			v23 = (int*)v22 + 5;
			if (!v23)
				goto LABEL_57;
			v24 = *v23;
			if ((int)(v24 - sub_14018CDF0()) < 0)
				goto LABEL_57;
			v25 = dword_140C3BF30;
			if (*(_DWORD*)qword_140C63750 < dword_140C3BF30)
				v25 = *(_DWORD*)qword_140C63750;
			if (byte_140C3BF40[v25])
			{
			LABEL_57:
				v26 = *(_DWORD*)(a1 + 48);
				LOBYTE(v16) = (int)(v26 + v18 - sub_14018CDF0() + 3000) >= 0;
				if (!v13
					&& (!*(_DWORD*)(a1 + 388)
						|| (v27 = *(_QWORD*)(a1 + 376)) != 0
						&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v27 + 24i64))(v27))
					&& (!*(_DWORD*)(a1 + 340)
						|| (v28 = *(_QWORD*)(a1 + 328)) != 0
						&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v28 + 24i64))(v28))
					&& sub_1400B9D00((__int64*)(a1 + 352)))
				{
					sub_1400BB4E0(a1, (__int64**)(a1 + 8), 3, 1, 2);
					v29 = *(_DWORD*)(a1 + 388);
					*(_DWORD*)(a1 + 384) = 0;
					v30 = *(float*)(a1 + 212);
					v31 = *(float*)(a1 + 208);
					*v3 = v29;
					*(_DWORD*)(a1 + 612) = *(_DWORD*)(a1 + 224);
					v32 = sub_1401AE760(v31, v30);
					*(_DWORD*)(a1 + 292) = 0;
					*(_DWORD*)(a1 + 616) = (int)(float)(v32 * 1000.0);
				}
			}
		}
	}
	if (!*v3 && !v16)
	{
		if (*(_DWORD*)(a1 + 312)
			&& ((v33 = *(_QWORD*)(a1 + 304)) == 0 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v33 + 32i64))(v33))
			|| (*(_BYTE*)(a1 + 40) & 4) != 0 && (v34 = *(_DWORD*)(a1 + 48), (int)(v34 + v18 - sub_14018CDF0()) < 0)
			|| *(_DWORD*)(a1 + 292))
		{
			if (!v13
				&& (!*(_DWORD*)(a1 + 412)
					|| (v35 = *(_QWORD*)(a1 + 400)) != 0
					&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v35 + 24i64))(v35))
				&& sub_1400B9D00((__int64*)(a1 + 304))
				&& sub_1400B9D00((__int64*)(a1 + 328))
				&& sub_1400B9D00((__int64*)(a1 + 352))
				|| (v36 = *(_DWORD*)(a1 + 48), (int)(v36 + v18 - sub_14018CDF0() + 3000) < 0))
			{
				sub_1400BB4E0(a1, (__int64**)(a1 + 8), 0, 1, 2);
				*(_DWORD*)(a1 + 312) = 0;
				v37 = sub_1401AE760(*(float*)(a1 + 208), *(float*)(a1 + 212));
				*(_DWORD*)(a1 + 292) = 0;
				*(_DWORD*)(a1 + 616) = (int)(float)(v37 * 1000.0);
			}
		}
	}
	*(_DWORD*)(a1 + 40) |= 1u;
	sub_1400B9FD0((__int64**)(a1 + 8));
}
// 1400BB94B: variable 'v2' is possibly undefined
// 140A14198: using guessed type wchar_t aMusicRestartTi[22];
// 140C3BEF0: using guessed type int dword_140C3BEF0;
// 140C3BF00: using guessed type int dword_140C3BF00;
// 140C3BF30: using guessed type int dword_140C3BF30;
// 140C3BF40: using guessed type _BYTE[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C8CC38: using guessed type int dword_140C8CC38;

