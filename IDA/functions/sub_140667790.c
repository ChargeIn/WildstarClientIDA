//----- (0000000140667790) ----------------------------------------------------
_QWORD* __fastcall sub_140667790(_QWORD* a1, _QWORD* a2, __int64 a3, float a4)
{
	_QWORD* result; // rax
	unsigned __int64 v5; // rdx
	_QWORD* v6; // r9
	unsigned __int64 v7; // rcx
	__int64 v8; // rdi
	int* v9; // rsi
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	int v13; // r15d
	unsigned int v14; // r12d
	__int64 v15; // r9
	int v16; // r13d
	_DWORD* v17; // rdx
	__int64 v18; // rcx
	unsigned __int64* v19; // r14
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rax
	__int64 v27; // r10
	__int64 v28; // r9
	_DWORD* v29; // rcx
	unsigned __int64* v30; // r14
	unsigned __int64 v31; // rsi
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v37; // r10
	int v38; // r15d
	__int64 v39; // r9
	_DWORD* v40; // rcx
	unsigned __int64* v41; // r14
	unsigned __int64 v42; // rsi
	__int64 v43; // rbx
	__int64 v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // r10
	__int64 v49; // r9
	int v50; // r15d
	_DWORD* v51; // rcx
	unsigned __int64* v52; // r14
	unsigned __int64 v53; // rsi
	__int64 v54; // rbx
	__int64 v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rax
	__int64* v58; // rax
	__int64 v59; // rdx
	__int64 v60; // [rsp+28h] [rbp-39h]
	double v61; // [rsp+30h] [rbp-31h]
	double v62; // [rsp+30h] [rbp-31h]
	double v63; // [rsp+30h] [rbp-31h]
	double v64; // [rsp+30h] [rbp-31h]
	unsigned __int64 v65; // [rsp+38h] [rbp-29h]
	int* v66; // [rsp+40h] [rbp-21h]
	__int64 v67; // [rsp+48h] [rbp-19h] BYREF
	__int64 v68; // [rsp+50h] [rbp-11h]
	__int64 v71; // [rsp+D8h] [rbp+77h]

	v71 = a3;
	result = a2;
	v5 = 0i64;
	v60 = 0i64;
	if (a1[1])
	{
		v6 = a1;
		do
		{
			v7 = 0i64;
			v65 = 0i64;
			if (result[1])
			{
				do
				{
					v8 = *(_QWORD*)(a3 + 16);
					v9 = *(int**)(*result + 8 * v7);
					v66 = v9;
					if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
						sub_14005E2C0(v8);
					v10 = *(_QWORD*)(v8 + 16);
					v11 = sub_14005C1B0(v8, 0, 0);
					*(_DWORD*)(v10 + 8) = 5;
					*(_QWORD*)v10 = v11;
					*(_QWORD*)(v8 + 16) += 16i64;
					v12 = sub_1400578C0(v8);
					v13 = *v9;
					v14 = v12 - 1;
					v15 = *(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64);
					v16 = v12;
					if ((unsigned int)(v12 - 1) >= *(_DWORD*)(v15 + 56))
					{
						if ((double)v12 == 0.0)
						{
							v17 = *(_DWORD**)(v15 + 32);
						}
						else
						{
							v61 = (double)v12;
							v17 = (_DWORD*)(*(_QWORD*)(v15 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v61) + HIDWORD(v61)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
						}
						while (v17[6] != 3 || (double)v12 != *((double*)v17 + 2))
						{
							v17 = (_DWORD*)*((_QWORD*)v17 + 4);
							if (!v17)
							{
								v17 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v17 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v12 - 1));
					}
					v18 = *(_QWORD*)(v8 + 16);
					*(_QWORD*)v18 = *(_QWORD*)v17;
					*(_DWORD*)(v18 + 8) = v17[2];
					*(_QWORD*)(v8 + 16) += 16i64;
					v19 = (unsigned __int64*)sub_14018F0E0(&v67, L"idReward")[1];
					if (v19)
					{
						v20 = -1i64;
						do
							++v20;
						while (*((_BYTE*)v19 + v20));
						if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
							sub_14005E2C0(v8);
						v21 = *(_QWORD*)(v8 + 16);
						v22 = sub_140062650(v8, v19, v20);
						*(_DWORD*)(v21 + 8) = 4;
						*(_QWORD*)v21 = v22;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
					}
					v23 = v68;
					*(_QWORD*)(v8 + 16) += 16i64;
					if (v23)
						sub_14018B900(v23, 0);
					v24 = *(_QWORD*)(v8 + 16);
					*(_DWORD*)(v24 + 8) = 3;
					*(double*)v24 = (double)v13;
					*(_QWORD*)(v8 + 16) += 16i64;
					v25 = (__int64*)sub_1400580E0(v8, -3);
					sub_14005EA50(v8, v25, (int*)(*(_QWORD*)(v8 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
					v26 = *(_QWORD*)(v8 + 32);
					v27 = *(_QWORD*)(v8 + 16) - 48i64;
					*(_QWORD*)(v8 + 16) = v27;
					v28 = *(_QWORD*)(v26 + 160);
					if (v14 >= *(_DWORD*)(v28 + 56))
					{
						if ((double)v16 == 0.0)
						{
							v29 = *(_DWORD**)(v28 + 32);
						}
						else
						{
							v62 = (double)v16;
							v29 = (_DWORD*)(*(_QWORD*)(v28 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v62) + HIDWORD(v62)) % (((1i64 << *(_BYTE*)(v28 + 11)) - 1) | 1)));
						}
						while (v29[6] != 3 || (double)v16 != *((double*)v29 + 2))
						{
							v29 = (_DWORD*)*((_QWORD*)v29 + 4);
							if (!v29)
							{
								v29 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v29 = (_DWORD*)(*(_QWORD*)(v28 + 24) + 16i64 * (v16 - 1));
					}
					*(_QWORD*)v27 = *(_QWORD*)v29;
					*(_DWORD*)(v27 + 8) = v29[2];
					*(_QWORD*)(v8 + 16) += 16i64;
					v30 = (unsigned __int64*)sub_14018F0E0(&v67, L"eType")[1];
					if (v30)
					{
						v31 = -1i64;
						do
							++v31;
						while (*((_BYTE*)v30 + v31));
						if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
							sub_14005E2C0(v8);
						v32 = *(_QWORD*)(v8 + 16);
						v33 = sub_140062650(v8, v30, v31);
						*(_DWORD*)(v32 + 8) = 4;
						*(_QWORD*)v32 = v33;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
					}
					v34 = v68;
					*(_QWORD*)(v8 + 16) += 16i64;
					if (v34)
						sub_14018B900(v34, 0);
					v35 = *(_QWORD*)(v8 + 16);
					*(_QWORD*)v35 = 0x401C000000000000i64;
					*(_DWORD*)(v35 + 8) = 3;
					*(_QWORD*)(v8 + 16) += 16i64;
					v36 = (__int64*)sub_1400580E0(v8, -3);
					sub_14005EA50(v8, v36, (int*)(*(_QWORD*)(v8 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
					v37 = *(_QWORD*)(v8 + 16) - 48i64;
					*(_QWORD*)(v8 + 16) = v37;
					v38 = *(_DWORD*)(*a1 + 4 * v60);
					v39 = *(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64);
					if (v14 >= *(_DWORD*)(v39 + 56))
					{
						if ((double)v16 == 0.0)
						{
							v40 = *(_DWORD**)(v39 + 32);
						}
						else
						{
							v63 = (double)v16;
							v40 = (_DWORD*)(*(_QWORD*)(v39 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v63) + HIDWORD(v63)) % (((1i64 << *(_BYTE*)(v39 + 11)) - 1) | 1)));
						}
						while (v40[6] != 3 || (double)v16 != *((double*)v40 + 2))
						{
							v40 = (_DWORD*)*((_QWORD*)v40 + 4);
							if (!v40)
							{
								v40 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v40 = (_DWORD*)(*(_QWORD*)(v39 + 24) + 16i64 * (v16 - 1));
					}
					*(_QWORD*)v37 = *(_QWORD*)v40;
					*(_DWORD*)(v37 + 8) = v40[2];
					*(_QWORD*)(v8 + 16) += 16i64;
					v41 = (unsigned __int64*)sub_14018F0E0(&v67, L"eAccountCurrencyType")[1];
					if (v41)
					{
						v42 = -1i64;
						do
							++v42;
						while (*((_BYTE*)v41 + v42));
						if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
							sub_14005E2C0(v8);
						v43 = *(_QWORD*)(v8 + 16);
						v44 = sub_140062650(v8, v41, v42);
						*(_DWORD*)(v43 + 8) = 4;
						*(_QWORD*)v43 = v44;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
					}
					v45 = v68;
					*(_QWORD*)(v8 + 16) += 16i64;
					if (v45)
						sub_14018B900(v45, 0);
					v46 = *(_QWORD*)(v8 + 16);
					*(_DWORD*)(v46 + 8) = 3;
					*(double*)v46 = (double)v38;
					*(_QWORD*)(v8 + 16) += 16i64;
					v47 = (__int64*)sub_1400580E0(v8, -3);
					sub_14005EA50(v8, v47, (int*)(*(_QWORD*)(v8 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
					v48 = *(_QWORD*)(v8 + 16) - 48i64;
					*(_QWORD*)(v8 + 16) = v48;
					v49 = *(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64);
					v50 = (int)(float)((float)v66[4] * a4);
					if (v14 >= *(_DWORD*)(v49 + 56))
					{
						if ((double)v16 == 0.0)
						{
							v51 = *(_DWORD**)(v49 + 32);
						}
						else
						{
							v64 = (double)v16;
							v51 = (_DWORD*)(*(_QWORD*)(v49 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v64) + HIDWORD(v64)) % (((1i64 << *(_BYTE*)(v49 + 11)) - 1) | 1)));
						}
						while (v51[6] != 3 || (double)v16 != *((double*)v51 + 2))
						{
							v51 = (_DWORD*)*((_QWORD*)v51 + 4);
							if (!v51)
							{
								v51 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v51 = (_DWORD*)(*(_QWORD*)(v49 + 24) + 16i64 * (v16 - 1));
					}
					*(_QWORD*)v48 = *(_QWORD*)v51;
					*(_DWORD*)(v48 + 8) = v51[2];
					*(_QWORD*)(v8 + 16) += 16i64;
					v52 = (unsigned __int64*)sub_14018F0E0(&v67, L"nAmount")[1];
					if (v52)
					{
						v53 = -1i64;
						do
							++v53;
						while (*((_BYTE*)v52 + v53));
						if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
							sub_14005E2C0(v8);
						v54 = *(_QWORD*)(v8 + 16);
						v55 = sub_140062650(v8, v52, v53);
						*(_DWORD*)(v54 + 8) = 4;
						*(_QWORD*)v54 = v55;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
					}
					v56 = v68;
					*(_QWORD*)(v8 + 16) += 16i64;
					if (v56)
						sub_14018B900(v56, 0);
					v57 = *(_QWORD*)(v8 + 16);
					*(_DWORD*)(v57 + 8) = 3;
					*(double*)v57 = (double)v50;
					*(_QWORD*)(v8 + 16) += 16i64;
					v58 = (__int64*)sub_1400580E0(v8, -3);
					sub_14005EA50(v8, v58, (int*)(*(_QWORD*)(v8 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
					*(_QWORD*)(v8 + 16) -= 48i64;
					sub_1400FB1D0(v71);
					sub_1400579E0(v8, v59, v16);
					result = a2;
					a3 = v71;
					v7 = v65 + 1;
					v65 = v7;
				} while (v7 < a2[1]);
				v5 = v60;
				v6 = a1;
			}
			v60 = ++v5;
		} while (v5 < v6[1]);
	}
	return result;
}
// 140667E0F: variable 'v59' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B2E9D0: using guessed type wchar_t aNamount_39[8];
// 140B2E9F0: using guessed type wchar_t aEtype_22[6];
// 140B2EA00: using guessed type wchar_t aEaccountcurren_3[21];
// 140B2EA50: using guessed type wchar_t aIdreward_3[9];

