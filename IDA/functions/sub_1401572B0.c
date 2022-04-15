//----- (00000001401572B0) ----------------------------------------------------
__int64 __fastcall sub_1401572B0(__int64 a1, double a2, char a3, char a4)
{
	_QWORD** v4; // r10
	__int64 v5; // rax
	_QWORD** v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rcx
	_QWORD* v12; // rax
	_QWORD** v13; // rsi
	__int64 v14; // rdi
	_QWORD* v15; // rax
	_QWORD* v16; // rbx
	__int64 v17; // rcx
	_QWORD* v18; // rax
	_QWORD* v19; // rdx
	_QWORD* v20; // rdx
	int v21; // edx
	_QWORD* v22; // rcx
	__int64 v23; // rcx
	_QWORD* v24; // rax
	_QWORD* v25; // r8
	_QWORD* v26; // r8
	_QWORD* v27; // rax
	_QWORD** v28; // rsi
	__int64 v29; // rdi
	__int64 v30; // rbx
	int* v31; // rax
	_QWORD* v32; // rax
	_QWORD* v33; // rdi
	__int64 v34; // rsi
	__int64 v35; // rbx
	_QWORD** v36; // rax
	_QWORD* v37; // rcx
	_QWORD* v38; // rdx
	_QWORD* v39; // rax
	__int64 v40; // rbx
	_QWORD** v41; // rax
	_QWORD* v42; // rcx
	_QWORD* v43; // rdx
	_QWORD* v44; // rax
	int* v45; // rax
	__int64 v46; // rcx
	_QWORD** v47; // rax
	_QWORD* v48; // rbx
	__int64 v49; // rcx
	_QWORD* v50; // rax
	_QWORD* v51; // rbx
	_QWORD** v52; // rax
	__int64 v53; // rdi
	_QWORD* v54; // rcx
	_QWORD* v55; // rdx
	_QWORD* v56; // rax
	_QWORD** v57; // rax
	_QWORD* v58; // rbx
	__int64 v59; // rcx
	__int64 result; // rax
	_QWORD* v61; // [rsp+30h] [rbp-48h] BYREF
	__int64 v62; // [rsp+38h] [rbp-40h] BYREF
	_QWORD** v63; // [rsp+80h] [rbp+8h] BYREF

	v4 = *(_QWORD***)(a1 + 88);
	v5 = *(_QWORD*)(a1 + 56);
	v61 = *v4;
	v63 = v4;
	v62 = v5;
	sub_1400E10F0(a1, &v62, &v61, &v63);
	v9 = *(_QWORD***)(a1 + 88);
	v10 = *v9;
	if (*v9 != v9)
	{
		do
		{
			v11 = (__int64)v10;
			v10 = (_QWORD*)*v10;
			sub_14018B900(v11, 0);
		} while (v10 != *(_QWORD**)(a1 + 88));
	}
	**(_QWORD**)(a1 + 88) = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = *(_QWORD*)(a1 + 88);
	if (*(_BYTE*)(a1 + 8))
		sub_140158750(a1 + 48);
	v12 = *(_QWORD**)(a1 + 56);
	if (v12 != (_QWORD*)*v12)
	{
		do
		{
			v13 = (_QWORD**)(v12 + 1);
			v14 = *(_QWORD*)(v12[1] + 16i64);
			if ((*(_BYTE*)(v14 + 28) & 1) != 0)
			{
				if (a4)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 96i64))(v14);
					v15 = *(_QWORD**)(v14 + 560);
					v16 = (_QWORD*)*v15;
					if ((_QWORD*)*v15 != v15)
					{
						do
						{
							sub_1400D29E0((_QWORD*)v16[2]);
							v16 = (_QWORD*)*v16;
						} while (v16 != *(_QWORD**)(v14 + 560));
					}
				}
				if (a3)
				{
					if ((*(_BYTE*)(v14 + 392) & 1) == 0)
					{
						v17 = *(_QWORD*)(v14 + 16);
						*(_BYTE*)(v14 + 29) &= ~0x80u;
						*(_BYTE*)(v14 + 30) &= ~1u;
						if (v17 && (*(_BYTE*)(v17 + 30) & 1) != 0)
							sub_1400CB660(v17);
						*(_DWORD*)(v14 + 392) |= 3u;
						*(_QWORD*)(v14 + 384) = -1i64;
						v18 = *(_QWORD**)(v14 + 560);
						v19 = (_QWORD*)*v18;
						if ((_QWORD*)*v18 != v18)
						{
							do
							{
								sub_1400CB690(v19[2]);
								v19 = (_QWORD*)*v20;
							} while (v19 != *(_QWORD**)(v14 + 560));
						}
					}
				}
				else if ((*(_BYTE*)(v14 + 392) & 2) == 0)
				{
					v21 = 0;
					v22 = (_QWORD*)(v14 + 80);
					while (!*v22)
					{
						++v21;
						++v22;
						if ((unsigned __int64)v21 >= 4)
							goto LABEL_27;
					}
					v23 = *(_QWORD*)(v14 + 16);
					*(_BYTE*)(v14 + 29) &= ~0x80u;
					*(_BYTE*)(v14 + 30) &= ~1u;
					if (v23 && (*(_BYTE*)(v23 + 30) & 1) != 0)
						sub_1400CB660(v23);
					*(_QWORD*)(v14 + 384) = -1i64;
				LABEL_27:
					v24 = *(_QWORD**)(v14 + 560);
					*(_DWORD*)(v14 + 392) |= 2u;
					v25 = (_QWORD*)*v24;
					if ((_QWORD*)*v24 != v24)
					{
						do
						{
							sub_1400CB710(v25[2]);
							v25 = (_QWORD*)*v26;
						} while (v25 != *(_QWORD**)(v14 + 560));
					}
				}
			}
			v12 = *v13;
		} while (*v13 != **(_QWORD***)(a1 + 56));
	}
	v27 = *(_QWORD**)(a1 + 56);
	if (v27 != (_QWORD*)*v27)
	{
		do
		{
			v28 = (_QWORD**)(v27 + 1);
			v29 = *(_QWORD*)(v27[1] + 16i64);
			if ((*(_BYTE*)(v29 + 28) & 1) != 0)
			{
				if (*(_DWORD*)(v29 + 8) <= (unsigned int)(*(_DWORD*)(v29 + 40) + 1) && *(float*)(v29 + 648) <= 0.0
					|| (**(float(__fastcall***)(__int64))(v29 + 624))(v29 + 624) > 0.0
					|| *(_BYTE*)(v29 + 644)
					|| (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v29 + 32i64))(v29))
				{
					sub_1400C88F0(v29, a2);
				}
			}
			else
			{
				v30 = *(_QWORD*)(a1 + 104);
				v31 = sub_14018B280(24i64, 0);
				if (v31 != (int*)-16i64)
					*((_QWORD*)v31 + 2) = v29;
				*(_QWORD*)v31 = v30;
				*((_QWORD*)v31 + 1) = *(_QWORD*)(v30 + 8);
				**(_QWORD**)(v30 + 8) = v31;
				*(_QWORD*)(v30 + 8) = v31;
			}
			v27 = *v28;
		} while (*v28 != **(_QWORD***)(a1 + 56));
	}
	v32 = *(_QWORD**)(a1 + 72);
	v33 = (_QWORD*)*v32;
	if ((_QWORD*)*v32 != v32)
	{
		while (1)
		{
			v34 = v33[2];
			if (v34)
				break;
		LABEL_62:
			v46 = v33[2];
			if (v46)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
			v33 = (_QWORD*)*v33;
			if (v33 == *(_QWORD**)(a1 + 72))
				goto LABEL_65;
		}
		while (1)
		{
			if ((*(_BYTE*)(v34 + 28) & 1) == 0 || (*(_DWORD*)(v34 + 656) & 0x40000i64) != 0)
				goto LABEL_62;
			v35 = *(_QWORD*)(v34 + 16);
			if (v35)
			{
				v36 = *(_QWORD***)(v35 + 560);
				v37 = *v36;
				if (*v36 != v36)
				{
					do
					{
						if (v37[2] == v34)
							break;
						v37 = (_QWORD*)*v37;
					} while (v37 != v36);
					if (v37 != v36)
					{
						v38 = (_QWORD*)*v37;
						v39 = (_QWORD*)v37[1];
						*v39 = *v37;
						v38[1] = v39;
						sub_14018B900((__int64)v37, 0);
						v40 = *(_QWORD*)(v35 + 560);
					LABEL_58:
						v45 = sub_14018B280(24i64, 0);
						if (v45 != (int*)-16i64)
							*((_QWORD*)v45 + 2) = v34;
						*(_QWORD*)v45 = v40;
						*((_QWORD*)v45 + 1) = *(_QWORD*)(v40 + 8);
						**(_QWORD**)(v40 + 8) = v45;
						*(_QWORD*)(v40 + 8) = v45;
					}
				}
			}
			else
			{
				v41 = *(_QWORD***)(a1 + 56);
				v42 = *v41;
				if (*v41 != v41)
				{
					do
					{
						if (v42[2] == v34)
							break;
						v42 = (_QWORD*)*v42;
					} while (v42 != v41);
					if (v42 != v41)
					{
						v43 = (_QWORD*)*v42;
						v44 = (_QWORD*)v42[1];
						*v44 = *v42;
						v43[1] = v44;
						sub_14018B900((__int64)v42, 0);
						v40 = *(_QWORD*)(a1 + 56);
						goto LABEL_58;
					}
				}
			}
			v34 = *(_QWORD*)(v34 + 16);
			if (!v34)
				goto LABEL_62;
		}
	}
LABEL_65:
	v47 = *(_QWORD***)(a1 + 72);
	v48 = *v47;
	if (*v47 != v47)
	{
		do
		{
			v49 = (__int64)v48;
			v48 = (_QWORD*)*v48;
			sub_14018B900(v49, 0);
		} while (v48 != *(_QWORD**)(a1 + 72));
	}
	**(_QWORD**)(a1 + 72) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = *(_QWORD*)(a1 + 72);
	v50 = *(_QWORD**)(a1 + 104);
	v51 = (_QWORD*)*v50;
	if ((_QWORD*)*v50 != v50)
	{
		do
		{
			v52 = *(_QWORD***)(a1 + 56);
			v53 = v51[2];
			v54 = *v52;
			if (*v52 != v52)
			{
				do
				{
					if (v54[2] == v53)
						break;
					v54 = (_QWORD*)*v54;
				} while (v54 != v52);
				if (v54 != v52)
				{
					v55 = (_QWORD*)*v54;
					v56 = (_QWORD*)v54[1];
					*v56 = *v54;
					v55[1] = v56;
					sub_14018B900((__int64)v54, 0);
					if (v53)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v53 + 8i64))(v53);
				}
			}
			v51 = (_QWORD*)*v51;
		} while (v51 != *(_QWORD**)(a1 + 104));
	}
	v57 = *(_QWORD***)(a1 + 104);
	v58 = *v57;
	if (*v57 != v57)
	{
		do
		{
			v59 = (__int64)v58;
			v58 = (_QWORD*)*v58;
			sub_14018B900(v59, 0);
		} while (v58 != *(_QWORD**)(a1 + 104));
	}
	**(_QWORD**)(a1 + 104) = *(_QWORD*)(a1 + 104);
	result = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(result + 8) = result;
	return result;
}
// 140157409: variable 'v20' is possibly undefined
// 140157489: variable 'v26' is possibly undefined

