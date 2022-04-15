//----- (000000014002ED40) ----------------------------------------------------
__int64 __fastcall sub_14002ED40(__int64 a1, __int64 a2)
{
	__int64 v3; // rbp
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // r12d
	__int64 v8; // r14
	__int64 v9; // rdi
	unsigned int v10; // ebx
	__int64 v11; // rax
	_DWORD* v12; // rsi
	int v13; // eax
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rcx
	__int16* v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rax
	__int64* v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	int v30; // r13d
	__int64 v31; // r8
	__int64 v32; // rax
	int v33; // r12d
	__int64 v34; // rcx
	__int64* v35; // rsi
	__int64 v36; // rbp
	__int64 v37; // rsi
	__int64 v38; // rbx
	__int64 v39; // rax
	__m128i v40; // xmm0
	__int64 v41; // rax
	__int64 v42; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v45; // r8
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v51; // [rsp+20h] [rbp-48h] BYREF
	__int64 v52; // [rsp+28h] [rbp-40h]
	int v54; // [rsp+80h] [rbp+18h]
	__int64 v55; // [rsp+88h] [rbp+20h] BYREF

	v3 = a1;
	if (!*(_QWORD*)(a1 + 4712))
		return 0i64;
	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v5 = *(_QWORD*)(a2 + 16);
	v6 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	v7 = 0;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(a2 + 16) += 16i64;
	v8 = *(_QWORD*)(*(_QWORD*)(v3 + 4712) + 8i64);
	v52 = v8;
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 != v8)
	{
		while (1)
		{
			v10 = *(_DWORD*)(v9 + 32);
			if (qword_140C63840)
				break;
			if (!dword_140C65200 && (int)sub_1401F0940() >= 0)
			{
				v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63FD8 + 24i64))(qword_140C63FD8, v10);
				goto LABEL_11;
			}
		LABEL_45:
			v48 = *(_QWORD*)(v9 + 24);
			if (v48)
			{
				v9 = *(_QWORD*)(v9 + 24);
				for (i = *(_QWORD*)(v48 + 16); i; i = *(_QWORD*)(i + 16))
					v9 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = j;
				if (*(_QWORD*)(v9 + 24) != j)
					v9 = j;
			}
			if (v9 == v8)
				return 1i64;
		}
		v11 = qword_140C63840(off_140A69758, v10, qword_140C63858);
	LABEL_11:
		v12 = (_DWORD*)v11;
		if (v11)
		{
			if (*(_QWORD*)(v9 + 56) > 1ui64)
			{
				v13 = *(_DWORD*)(v11 + 8);
				if (!v13 || v13 == *(_DWORD*)(v3 + 4860))
				{
					v14 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v14 + 8) = 3;
					v54 = v7 + 1;
					*(double*)v14 = (double)(v7 + 1);
					v15 = *(_QWORD*)(a2 + 32);
					*(_QWORD*)(a2 + 16) += 16i64;
					if (*(_QWORD*)(v15 + 120) >= *(_QWORD*)(v15 + 112))
						sub_14005E2C0(a2);
					v16 = *(_QWORD*)(a2 + 16);
					v17 = sub_14005C1B0(a2, 0, 0);
					*(_DWORD*)(v16 + 8) = 5;
					*(_QWORD*)v16 = v17;
					*(_QWORD*)(a2 + 16) += 16i64;
					LODWORD(v16) = *v12;
					sub_140058710(a2, (unsigned __int64*)"sliderId", 8ui64);
					v18 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v18 + 8) = 3;
					*(double*)v18 = (double)(int)v16;
					*(_QWORD*)(a2 + 16) += 16i64;
					v19 = (__int64*)sub_1400580E0(a2, -3);
					sub_14005EA50(a2, v19, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
					v21 = sub_14034BDD0(v20, v12[1]);
					sub_1400F0090(a2, v22, (unsigned __int64*)"name", (unsigned __int16*)v21);
					LODWORD(v16) = v12[3];
					sub_140058710(a2, (unsigned __int64*)"nDisplayIndex", 0xDui64);
					v23 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v23 + 8) = 3;
					*(double*)v23 = (double)(int)v16;
					*(_QWORD*)(a2 + 16) += 16i64;
					v24 = (__int64*)sub_1400580E0(a2, -3);
					sub_14005EA50(a2, v24, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
					v25 = *(_QWORD*)(v9 + 56);
					sub_140058710(a2, (unsigned __int64*)"count", 5ui64);
					v26 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v26 + 8) = 3;
					*(double*)v26 = (double)(int)v25;
					*(_QWORD*)(a2 + 16) += 16i64;
					v27 = (__int64*)sub_1400580E0(a2, -3);
					sub_14005EA50(a2, v27, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
					sub_140058710(a2, (unsigned __int64*)"values", 6ui64);
					if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
						sub_14005E2C0(a2);
					v28 = *(_QWORD*)(a2 + 16);
					v29 = sub_14005C1B0(a2, 0, 0);
					*(_DWORD*)(v28 + 8) = 5;
					v30 = 0;
					*(_QWORD*)v28 = v29;
					*(_QWORD*)(a2 + 16) += 16i64;
					v31 = *(_QWORD*)(v3 + 4728);
					v32 = *(_QWORD*)(v31 + 8);
					v33 = 0;
					v34 = v31;
					while (v32)
					{
						if (*(_DWORD*)(v32 + 32) < *v12)
						{
							v32 = *(_QWORD*)(v32 + 24);
						}
						else
						{
							v34 = v32;
							v32 = *(_QWORD*)(v32 + 16);
						}
					}
					if (v34 == v31 || *v12 < *(_DWORD*)(v34 + 32))
					{
						v51 = *(_QWORD*)(v3 + 4728);
						v35 = &v51;
					}
					else
					{
						v55 = v34;
						v35 = &v55;
					}
					v36 = *(_QWORD*)(v9 + 48);
					v37 = *v35;
					v38 = *(_QWORD*)(v36 + 16);
					if (v38 != v36)
					{
						do
						{
							v39 = *(_QWORD*)(a2 + 16);
							++v30;
							*(_DWORD*)(v39 + 8) = 3;
							*(double*)v39 = (double)v30;
							*(_QWORD*)(a2 + 16) += 16i64;
							v40 = _mm_cvtsi32_si128(*(_DWORD*)(v38 + 32));
							v41 = *(_QWORD*)(a2 + 16);
							*(_DWORD*)(v41 + 8) = 3;
							*(_QWORD*)v41 = *(_OWORD*)&_mm_cvtepi32_pd(v40);
							*(_QWORD*)(a2 + 16) += 16i64;
							sub_14005EA50(
								a2,
								(__int64*)(*(_QWORD*)(a2 + 16) - 48i64),
								(int*)(*(_QWORD*)(a2 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
							*(_QWORD*)(a2 + 16) -= 32i64;
							if (v37 != *(_QWORD*)(a1 + 4728) && *(_DWORD*)(v38 + 32) == *(_DWORD*)(v37 + 36))
								v33 = v30;
							v42 = *(_QWORD*)(v38 + 24);
							if (v42)
							{
								v38 = *(_QWORD*)(v38 + 24);
								for (k = *(_QWORD*)(v42 + 16); k; k = *(_QWORD*)(k + 16))
									v38 = k;
							}
							else
							{
								for (m = *(_QWORD*)(v38 + 8); v38 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
									v38 = m;
								if (*(_QWORD*)(v38 + 24) != m)
									v38 = m;
							}
						} while (v38 != v36);
						v8 = v52;
					}
					sub_14005EA50(
						a2,
						(__int64*)(*(_QWORD*)(a2 + 16) - 48i64),
						(int*)(*(_QWORD*)(a2 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
					v45 = *(_QWORD*)(a2 + 16);
					if (v30)
					{
						sub_140058710(a2, (unsigned __int64*)"valueIdx", 8ui64);
						v46 = *(_QWORD*)(a2 + 16);
						*(_DWORD*)(v46 + 8) = 3;
						*(double*)v46 = (double)v33;
						*(_QWORD*)(a2 + 16) += 16i64;
						v47 = (__int64*)sub_1400580E0(a2, -3);
						sub_14005EA50(
							a2,
							v47,
							(int*)(*(_QWORD*)(a2 + 16) - 32i64),
							(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
						*(_QWORD*)(a2 + 16) -= 32i64;
						v45 = *(_QWORD*)(a2 + 16);
					}
					sub_14005EA50(a2, (__int64*)(v45 - 48), (int*)(v45 - 32), (unsigned int*)(v45 - 16));
					*(_QWORD*)(a2 + 16) -= 32i64;
					v3 = a1;
					v7 = v54;
				}
			}
		}
		goto LABEL_45;
	}
	return 1i64;
}
// 14002EF13: variable 'v20' is possibly undefined
// 14002EF25: variable 'v22' is possibly undefined
// 140A69758: using guessed type wchar_t *off_140A69758[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FD8: using guessed type __int64 qword_140C63FD8;
// 140C65200: using guessed type int dword_140C65200;

