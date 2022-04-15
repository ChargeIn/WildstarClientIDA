//----- (00000001407033E0) ----------------------------------------------------
__int64 __fastcall sub_1407033E0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // r13
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx
	int* v8; // r12
	int v9; // r15d
	__int64 v10; // rbx
	unsigned __int64 v11; // rdi
	__int64 v12; // r9
	unsigned __int64 v13; // rsi
	__int64 v14; // r8
	unsigned int v15; // edx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64* v18; // rax
	__int64 v19; // rax
	__int64 v20; // r14
	int* v21; // rax
	int* v22; // rdi
	__int64 v23; // rax
	__int64 i; // rax
	__int64 j; // rax
	bool v26; // cc
	unsigned __int64 k; // r13
	__int64 v28; // rcx
	unsigned __int64 v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	int v32; // eax
	unsigned int* v33; // rcx
	int v34; // ebx
	__int64 v35; // r9
	_DWORD* v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // rcx
	int v39; // eax
	__int64 v40; // rax
	__int64 v41; // r10
	__int64 v42; // r9
	_DWORD* v43; // rcx
	__int64 v44; // r8
	__int64 v45; // rdx
	__int64 v46; // r9
	_DWORD* v47; // rcx
	__int64 v48; // rdx
	__int64 v49; // [rsp+20h] [rbp-29h] BYREF
	__int64(__fastcall * *v50)(); // [rsp+28h] [rbp-21h] BYREF
	unsigned __int64 v51; // [rsp+30h] [rbp-19h]
	__int64 v52; // [rsp+38h] [rbp-11h]
	int v53; // [rsp+40h] [rbp-9h]
	double v55; // [rsp+B8h] [rbp+6Fh]
	double v56; // [rsp+B8h] [rbp+6Fh]
	double v57; // [rsp+B8h] [rbp+6Fh]
	int v58; // [rsp+C0h] [rbp+77h]
	__int64 v59; // [rsp+C8h] [rbp+7Fh] BYREF

	v1 = a1;
	v2 = sub_1404B0E70(a1);
	if (v2)
	{
		v58 = 1;
		if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
			sub_14005E2C0(v1);
		v4 = *(_QWORD*)(v1 + 16);
		v5 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		*(_QWORD*)(v1 + 16) += 16i64;
		v6 = sub_1400578C0(v1);
		v7 = *(_QWORD*)(v2 + 8);
		v8 = 0i64;
		v9 = v6;
		v10 = *(_QWORD*)(v7 + 16);
		v11 = 0i64;
		v51 = 0i64;
		v50 = 0i64;
		if (v10 != v7)
		{
			v12 = qword_140C659D8;
			v13 = 0i64;
			do
			{
				v14 = *(_QWORD*)(v12 + 72);
				v15 = *(_DWORD*)(v10 + 32);
				v16 = *(_QWORD*)(v14 + 8);
				v17 = v14;
				while (v16)
				{
					if (*(_DWORD*)(v16 + 32) < v15)
					{
						v16 = *(_QWORD*)(v16 + 24);
					}
					else
					{
						v17 = v16;
						v16 = *(_QWORD*)(v16 + 16);
					}
				}
				if (v17 == v14 || v15 < *(_DWORD*)(v17 + 32))
				{
					v49 = *(_QWORD*)(v12 + 72);
					v18 = &v49;
				}
				else
				{
					v59 = v17;
					v18 = &v59;
				}
				v19 = *v18;
				if (v19 != v14)
				{
					v20 = *(_QWORD*)(v19 + 40);
					if (v20)
					{
						v21 = sub_14018DB00((__int64)v8, v13 + 1, 8i64);
						*(_QWORD*)&v21[2 * v13] = v20;
						v22 = v21;
						if (v8 != v21)
						{
							sub_1407DB590(v21, v8, 8 * v13);
							if (v8)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
							v8 = v22;
						}
						v12 = qword_140C659D8;
						++v13;
					}
				}
				v23 = *(_QWORD*)(v10 + 24);
				if (v23)
				{
					v10 = *(_QWORD*)(v10 + 24);
					for (i = *(_QWORD*)(v23 + 16); i; i = *(_QWORD*)(i + 16))
						v10 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v10 = j;
					if (*(_QWORD*)(v10 + 24) != j)
						v10 = j;
				}
			} while (v10 != *(_QWORD*)(v2 + 8));
			v51 = v13;
			v26 = v13 <= 1;
			v1 = a1;
			v50 = (__int64(__fastcall**)())v8;
			if (!v26)
			{
				sub_1404B3F40((__int64*)&v50, (__int64)sub_1404AF890);
				v8 = (int*)v50;
			}
			v11 = v51;
		}
		if (v11)
		{
			for (k = 0i64; k < v11; ++k)
			{
				v28 = *(_QWORD*)(v1 + 32);
				v50 = off_140B569F0;
				v52 = v1;
				v29 = *(_QWORD*)(v28 + 112);
				v53 = 1;
				if (*(_QWORD*)(v28 + 120) >= v29)
					sub_14005E2C0(v1);
				v30 = *(_QWORD*)(v1 + 16);
				v31 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v30 + 8) = 5;
				*(_QWORD*)v30 = v31;
				*(_QWORD*)(v1 + 16) += 16i64;
				v32 = sub_1400578C0(v1);
				v33 = *(unsigned int**)&v8[2 * k];
				v34 = v32;
				LODWORD(v51) = v32;
				sub_1404B39C0(v33, (__int64)&v50);
				v35 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
				if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v35 + 56))
				{
					if ((double)v9 == 0.0)
					{
						v36 = *(_DWORD**)(v35 + 32);
					}
					else
					{
						v55 = (double)v9;
						v36 = (_DWORD*)(*(_QWORD*)(v35 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v55) + HIDWORD(v55)) % (((1i64 << *(_BYTE*)(v35 + 11)) - 1) | 1)));
					}
					while (v36[6] != 3 || (double)v9 != *((double*)v36 + 2))
					{
						v36 = (_DWORD*)*((_QWORD*)v36 + 4);
						if (!v36)
						{
							v36 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v36 = (_DWORD*)(*(_QWORD*)(v35 + 24) + 16i64 * (v9 - 1));
				}
				v37 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v37 = *(_QWORD*)v36;
				*(_DWORD*)(v37 + 8) = v36[2];
				*(_QWORD*)(v1 + 16) += 16i64;
				v38 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v38 + 8) = 3;
				v39 = v58++;
				*(double*)v38 = (double)v39;
				v40 = *(_QWORD*)(v1 + 32);
				v41 = *(_QWORD*)(v1 + 16) + 16i64;
				*(_QWORD*)(v1 + 16) = v41;
				v42 = *(_QWORD*)(v40 + 160);
				if ((unsigned int)(v34 - 1) >= *(_DWORD*)(v42 + 56))
				{
					if ((double)v34 == 0.0)
					{
						v43 = *(_DWORD**)(v42 + 32);
					}
					else
					{
						v56 = (double)v34;
						v43 = (_DWORD*)(*(_QWORD*)(v42 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v56) + HIDWORD(v56)) % (((1i64 << *(_BYTE*)(v42 + 11)) - 1) | 1)));
					}
					while (v43[6] != 3 || (double)v34 != *((double*)v43 + 2))
					{
						v43 = (_DWORD*)*((_QWORD*)v43 + 4);
						if (!v43)
						{
							v43 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v43 = (_DWORD*)(*(_QWORD*)(v42 + 24) + 16i64 * (v34 - 1));
				}
				*(_QWORD*)v41 = *(_QWORD*)v43;
				*(_DWORD*)(v41 + 8) = v43[2];
				v44 = *(_QWORD*)(v1 + 16) + 16i64;
				*(_QWORD*)(v1 + 16) = v44;
				sub_14005EA50(v1, (__int64*)(v44 - 48), (int*)(v44 - 32), (unsigned int*)(v44 - 16));
				*(_QWORD*)(v1 + 16) -= 48i64;
				sub_1400579E0(v1, v45, v34);
			}
		}
		v46 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
		if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v46 + 56))
		{
			if ((double)v9 == 0.0)
			{
				v47 = *(_DWORD**)(v46 + 32);
			}
			else
			{
				v57 = (double)v9;
				v47 = (_DWORD*)(*(_QWORD*)(v46 + 32)
					+ 40 * ((unsigned int)(LODWORD(v57) + HIDWORD(v57)) % (((1i64 << *(_BYTE*)(v46 + 11)) - 1) | 1)));
			}
			while (v47[6] != 3 || (double)v9 != *((double*)v47 + 2))
			{
				v47 = (_DWORD*)*((_QWORD*)v47 + 4);
				if (!v47)
				{
					v47 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v47 = (_DWORD*)(*(_QWORD*)(v46 + 24) + 16i64 * (v9 - 1));
		}
		v48 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v48 = *(_QWORD*)v47;
		*(_DWORD*)(v48 + 8) = v47[2];
		*(_QWORD*)(v1 + 16) += 16i64;
		if (v8)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
		sub_1400579E0(v1, v48, v9);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 0i64;
	}
}
// 1407037F5: variable 'v45' is possibly undefined
// 1407038DF: variable 'v48' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C659D8: using guessed type __int64 qword_140C659D8;

