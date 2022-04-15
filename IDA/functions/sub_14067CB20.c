//----- (000000014067CB20) ----------------------------------------------------
__int64 __fastcall sub_14067CB20(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	__int64* v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // r15
	__int64 v10; // r14
	__int64 v11; // rbp
	unsigned int v12; // ebx
	__int64 v13; // rax
	float* v14; // rsi
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // eax
	float v18; // xmm6_4
	int v19; // ebx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	__int64 v24; // rax
	__int64* v25; // rax
	float v26; // xmm6_4
	_QWORD* v27; // rax
	__int64 v28; // r10
	unsigned __int64* v29; // rdx
	unsigned __int64 v30; // r8
	__int64 v31; // rax
	__int64* v32; // rax
	float v33; // xmm6_4
	_QWORD* v34; // rax
	__int64 v35; // r10
	unsigned __int64* v36; // rdx
	unsigned __int64 v37; // r8
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r8
	__int64 v46; // [rsp+20h] [rbp-68h] BYREF
	unsigned __int64 v47; // [rsp+28h] [rbp-60h]
	__int64(__fastcall * *v48)(); // [rsp+40h] [rbp-48h] BYREF
	int v49; // [rsp+48h] [rbp-40h]
	_QWORD* v50; // [rsp+50h] [rbp-38h]
	int v51; // [rsp+58h] [rbp-30h]

	v1 = (_QWORD*)a1;
	v50 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v48 = off_140B569F0;
	v51 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v49 = v5;
	v6 = sub_14067B760(v1);
	v7 = (__int64*)v6;
	if (v6 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v6 + 208i64))(v6) >= 2)
	{
		v8 = *v7;
		v9 = 0i64;
		v47 = 0i64;
		v10 = 0i64;
		v46 = 0i64;
		if (!(*(unsigned int(__fastcall**)(__int64*))(v8 + 56))(v7))
		{
			sub_14056C320(v7, (__int64)&v46, 0);
			v9 = v47;
			v10 = v46;
		}
		v11 = 0i64;
		if (v9)
		{
			while (1)
			{
				v12 = *(_DWORD*)(v10 + 4 * v11);
				if (qword_140C63840)
					break;
				if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
				{
					v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v12);
				LABEL_13:
					v14 = (float*)v13;
					if (v13)
					{
						if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
							sub_14005E2C0((__int64)v1);
						v15 = v1[2];
						v16 = sub_14005C1B0((__int64)v1, 0, 0);
						*(_DWORD*)(v15 + 8) = 5;
						*(_QWORD*)v15 = v16;
						v1[2] += 16i64;
						v17 = sub_1400578C0((__int64)v1);
						v18 = v14[3];
						v19 = v17;
						v20 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
						v21 = v1[2];
						*(_QWORD*)v21 = *v20;
						*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
						v1[2] += 16i64;
						v22 = (unsigned __int64*)sub_14018F0E0(&v46, word_1409F4EE4)[1];
						if (v22)
						{
							v23 = -1i64;
							do
								++v23;
							while (*((_BYTE*)v22 + v23));
							sub_140058710((__int64)v1, v22, v23);
						}
						else
						{
							*(_DWORD*)(v1[2] + 8i64) = 0;
							v1[2] += 16i64;
						}
						if (v47)
							sub_14018B900(v47, 0);
						v24 = v1[2];
						*(_DWORD*)(v24 + 8) = 3;
						*(double*)v24 = v18;
						v1[2] += 16i64;
						v25 = (__int64*)sub_1400580E0((__int64)v1, -3);
						sub_14005EA50((__int64)v1, v25, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
						v1[2] -= 48i64;
						v26 = v14[4];
						v27 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
						*(_QWORD*)v28 = *v27;
						*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
						v1[2] += 16i64;
						v29 = (unsigned __int64*)sub_14018F0E0(&v46, word_1409F4DF4)[1];
						if (v29)
						{
							v30 = -1i64;
							do
								++v30;
							while (*((_BYTE*)v29 + v30));
							sub_140058710((__int64)v1, v29, v30);
						}
						else
						{
							*(_DWORD*)(v1[2] + 8i64) = 0;
							v1[2] += 16i64;
						}
						if (v47)
							sub_14018B900(v47, 0);
						v31 = v1[2];
						*(_DWORD*)(v31 + 8) = 3;
						*(double*)v31 = v26;
						v1[2] += 16i64;
						v32 = (__int64*)sub_1400580E0((__int64)v1, -3);
						sub_14005EA50((__int64)v1, v32, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
						v1[2] -= 48i64;
						v33 = v14[5];
						v34 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
						*(_QWORD*)v35 = *v34;
						*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
						v1[2] += 16i64;
						v36 = (unsigned __int64*)sub_14018F0E0(&v46, word_1409F4E44)[1];
						if (v36)
						{
							v37 = -1i64;
							do
								++v37;
							while (*((_BYTE*)v36 + v37));
							sub_140058710((__int64)v1, v36, v37);
						}
						else
						{
							*(_DWORD*)(v1[2] + 8i64) = 0;
							v1[2] += 16i64;
						}
						if (v47)
							sub_14018B900(v47, 0);
						v38 = v1[2];
						*(_DWORD*)(v38 + 8) = 3;
						*(double*)v38 = v33;
						v1[2] += 16i64;
						v39 = (__int64*)sub_1400580E0((__int64)v1, -3);
						sub_14005EA50((__int64)v1, v39, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
						v1[2] -= 48i64;
						sub_1400FB1D0((__int64)&v48);
						sub_1400579E0((__int64)v1, v40, v19);
					}
				}
				if (++v11 >= v9)
				{
					v1 = v50;
					v5 = v49;
					goto LABEL_40;
				}
			}
			v13 = qword_140C63840(off_140A6E228, v12, qword_140C63858);
			goto LABEL_13;
		}
	LABEL_40:
		v41 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v42 = v1[2];
		*(_QWORD*)v42 = *v41;
		*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
		v1[2] += 16i64;
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	}
	else
	{
		v43 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v44 = v1[2];
		*(_QWORD*)v44 = *v43;
		v42 = *((unsigned int*)v43 + 2);
		*(_DWORD*)(v44 + 8) = v42;
		v1[2] += 16i64;
	}
	sub_1400579E0((__int64)v1, v42, v5);
	return 1i64;
}
// 14067CD9D: variable 'v28' is possibly undefined
// 14067CE5D: variable 'v35' is possibly undefined
// 14067CF0A: variable 'v40' is possibly undefined
// 14067CFA8: variable 'v42' is possibly undefined
// 1409F4DF4: using guessed type unsigned __int16 word_1409F4DF4[2];
// 1409F4E44: using guessed type unsigned __int16 word_1409F4E44[2];
// 1409F4EE4: using guessed type unsigned __int16 word_1409F4EE4[2];
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;

