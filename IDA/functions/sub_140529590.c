//----- (0000000140529590) ----------------------------------------------------
void __fastcall sub_140529590(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rcx
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	void(__fastcall * **v13)(_QWORD, __int64); // rcx
	__int64 v14; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v17; // rdi
	__int64 v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // r15
	__int64 v31; // r12
	__int64 v32; // rdx
	unsigned __int64 n; // rbx
	__int64 v34; // rax
	__int64 v35; // rsi
	__int64 v36; // rbp
	__int64 v37; // rbx
	__int64 v38; // rcx
	_QWORD** v39; // rax
	_QWORD* v40; // rbx
	__int64 v41; // rsi
	__int64 v42; // rcx
	__int64 v43; // rdi
	__int64 v44; // rbx
	__int64 v45; // rdx
	__int64 v46; // rcx
	__int64 v47; // rcx
	__int64 v48; // rcx
	__int64 v49; // rcx

	*a1 = off_140B6C3C0;
	v2 = qword_140C65B10;
	if ((_QWORD*)qword_140C65B10 == a1)
		v2 = 0i64;
	qword_140C65B10 = v2;
	v3 = a1[173];
	v4 = *(_QWORD*)(v3 + 16);
	if (v4 != v3)
	{
		do
		{
			sub_140774790(v4 + 48);
			v5 = *(_QWORD*)(v4 + 24);
			if (v5)
			{
				v4 = *(_QWORD*)(v4 + 24);
				for (i = *(_QWORD*)(v5 + 16); i; i = *(_QWORD*)(i + 16))
					v4 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = j;
				if (*(_QWORD*)(v4 + 24) != j)
					v4 = j;
			}
		} while (v4 != a1[173]);
	}
	if (a1[174])
	{
		v8 = *(_QWORD*)(a1[173] + 8i64);
		if (v8)
		{
			do
			{
				sub_1405387A0((__int64)(a1 + 172), *(_QWORD**)(v8 + 24));
				v9 = *(_QWORD*)(v8 + 16);
				sub_140771AD0((__int64*)(v8 + 48));
				sub_14018B900(v8, 0);
				v8 = v9;
			} while (v9);
		}
		*(_QWORD*)(a1[173] + 16i64) = a1[173];
		*(_QWORD*)(a1[173] + 8i64) = 0i64;
		*(_QWORD*)(a1[173] + 24i64) = a1[173];
		a1[174] = 0i64;
	}
	v10 = a1[169];
	if (v10)
		sub_14018B900(v10, 0);
	v11 = (_QWORD*)a1[146];
	a1[169] = 0i64;
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			v13 = (void(__fastcall***)(_QWORD, __int64))v12[5];
			if (v13)
				(**v13)(v13, 1i64);
			v14 = v12[3];
			if (v14)
			{
				v12 = (_QWORD*)v12[3];
				for (k = *(_QWORD**)(v14 + 16); k; k = (_QWORD*)k[2])
					v12 = k;
			}
			else
			{
				for (m = v12[1]; v12 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v12 = (_QWORD*)m;
				if (v12[3] != m)
					v12 = (_QWORD*)m;
			}
		} while (v12 != (_QWORD*)a1[146]);
	}
	if (a1[201])
	{
		v17 = *(_QWORD*)(a1[200] + 8i64);
		if (v17)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 199), *(_QWORD*)(v17 + 24));
				v18 = *(_QWORD*)(v17 + 16);
				sub_14018B900(v17, 0);
				v17 = v18;
			} while (v18);
		}
		*(_QWORD*)(a1[200] + 16i64) = a1[200];
		*(_QWORD*)(a1[200] + 8i64) = 0i64;
		*(_QWORD*)(a1[200] + 24i64) = a1[200];
		a1[201] = 0i64;
	}
	sub_14018B900(a1[200], 0);
	sub_140538A10(a1 + 197);
	v19 = a1[190];
	if (v19)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
		a1[190] = 0i64;
	}
	v20 = a1[193];
	if (v20)
		sub_14018B900(v20, 0);
	v21 = a1[184];
	if (v21)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
		a1[184] = 0i64;
	}
	v22 = a1[187];
	if (v22)
		sub_14018B900(v22, 0);
	v23 = a1[183];
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	v24 = a1[182];
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	v25 = a1[181];
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
	v26 = a1[180];
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
	v27 = a1[179];
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	v28 = a1[178];
	if (v28)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
	v29 = a1[177];
	if (v29)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	if (a1[174])
	{
		v30 = *(_QWORD*)(a1[173] + 8i64);
		if (v30)
		{
			do
			{
				sub_1405387A0((__int64)(a1 + 172), *(_QWORD**)(v30 + 24));
				v31 = *(_QWORD*)(v30 + 16);
				sub_140774790(v30 + 48);
				for (n = 0i64; n < *(_QWORD*)(v30 + 856); ++n)
				{
					v34 = *(_QWORD*)(v30 + 848);
					v35 = *(_QWORD*)(v34 + 8 * n);
					if (v35)
					{
						sub_14076F7C0(*(_QWORD*)(v34 + 8 * n), v32);
						sub_14018B900(v35, 0);
					}
				}
				*(_QWORD*)(v30 + 856) = 0i64;
				sub_140774990(v30 + 48);
				if (*(_QWORD*)(v30 + 880))
				{
					v36 = *(_QWORD*)(*(_QWORD*)(v30 + 872) + 8i64);
					if (v36)
					{
						do
						{
							sub_1400083B0(v30 + 864, *(_QWORD*)(v36 + 24));
							v37 = *(_QWORD*)(v36 + 16);
							sub_14018B900(v36, 0);
							v36 = v37;
						} while (v37);
					}
					*(_QWORD*)(*(_QWORD*)(v30 + 872) + 16i64) = *(_QWORD*)(v30 + 872);
					*(_QWORD*)(*(_QWORD*)(v30 + 872) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v30 + 872) + 24i64) = *(_QWORD*)(v30 + 872);
					*(_QWORD*)(v30 + 880) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v30 + 872), 0);
				v38 = *(_QWORD*)(v30 + 848);
				if (v38)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
				sub_140538480((_QWORD*)(v30 + 480));
				sub_140538480((_QWORD*)(v30 + 112));
				v39 = *(_QWORD***)(v30 + 104);
				v40 = *v39;
				if (*v39 != v39)
				{
					do
					{
						v41 = (__int64)v40;
						v40 = (_QWORD*)*v40;
						v42 = *(_QWORD*)(v41 + 24);
						if (v42)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
						sub_14018B900(v41, 0);
					} while (v40 != *(_QWORD**)(v30 + 104));
				}
				**(_QWORD**)(v30 + 104) = *(_QWORD*)(v30 + 104);
				*(_QWORD*)(*(_QWORD*)(v30 + 104) + 8i64) = *(_QWORD*)(v30 + 104);
				sub_14018B900(*(_QWORD*)(v30 + 104), 0);
				sub_14018B900(v30, 0);
				v30 = v31;
			} while (v31);
		}
		*(_QWORD*)(a1[173] + 16i64) = a1[173];
		*(_QWORD*)(a1[173] + 8i64) = 0i64;
		*(_QWORD*)(a1[173] + 24i64) = a1[173];
		a1[174] = 0i64;
	}
	sub_14018B900(a1[173], 0);
	sub_140538590(a1 + 150);
	if (a1[147])
	{
		v43 = *(_QWORD*)(a1[146] + 8i64);
		if (v43)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 145), *(_QWORD*)(v43 + 24));
				v44 = *(_QWORD*)(v43 + 16);
				sub_14018B900(v43, 0);
				v43 = v44;
			} while (v44);
		}
		*(_QWORD*)(a1[146] + 16i64) = a1[146];
		*(_QWORD*)(a1[146] + 8i64) = 0i64;
		*(_QWORD*)(a1[146] + 24i64) = a1[146];
		a1[147] = 0i64;
	}
	sub_14018B900(a1[146], 0);
	v46 = a1[135];
	if (v46)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
		a1[135] = 0i64;
	}
	v47 = a1[138];
	if (v47)
		sub_14018B900(v47, 0);
	v48 = a1[129];
	if (v48)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v48 + 8i64))(v48);
		a1[129] = 0i64;
	}
	v49 = a1[132];
	if (v49)
		sub_14018B900(v49, 0);
	sub_1400C6030((__int64)a1, v45);
}
// 1405298F3: variable 'v32' is possibly undefined
// 140529B4E: variable 'v45' is possibly undefined
// 140B6C3C0: using guessed type __int64 (__fastcall *off_140B6C3C0[25])();
// 140C65B10: using guessed type __int64 qword_140C65B10;

