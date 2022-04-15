//----- (00000001401795D0) ----------------------------------------------------
void __fastcall sub_1401795D0(__int64 a1)
{
	_QWORD* v1; // rsi
	int v3; // r14d
	__int64 v4; // rdi
	int v5; // eax
	int v6; // r12d
	__int64 v7; // rdi
	int v8; // r14d
	__int64 v9; // rdi
	int v10; // r11d
	int v11; // r8d
	int* v12; // r9
	int* v13; // rdx
	__int64 v14; // r13
	int* v15; // r10
	int v16; // eax
	int v17; // r15d
	int v18; // r14d
	__int64 v19; // rdi
	int v20; // esi
	__int64 v21; // rcx
	int* v22; // r8
	int v23; // r9d
	__int64 v24; // rcx
	int v25; // edx
	__int64 v26; // rcx
	int* v27; // rdi
	int v28; // eax
	int* v29; // rdi
	__int64 i; // rcx
	__int64 v31; // rcx
	int* v32; // rdi
	__int64 v33; // rax
	int v34; // r14d
	__int64 v35; // r13
	int* v36; // rdx
	int* v37; // rdx
	int v38; // ecx
	int v39; // edi
	_DWORD* v40; // rax
	__int64 v41; // rax
	int v42; // r15d
	int v43; // ecx
	int v44; // eax
	int v45; // r15d
	__int64 v46; // r14
	int* v47; // rdx
	_DWORD* v48; // rax
	__int64 v49; // rax
	int v50; // edi
	int v51; // edx
	int v52; // r8d
	__int64 v53; // rcx
	int v54; // [rsp+28h] [rbp-59h]
	int v55; // [rsp+2Ch] [rbp-55h]
	__int64 v56; // [rsp+30h] [rbp-51h]
	int v57; // [rsp+38h] [rbp-49h] BYREF
	int v58; // [rsp+3Ch] [rbp-45h]
	int v59; // [rsp+40h] [rbp-41h]
	int v60; // [rsp+44h] [rbp-3Dh]
	int v61[2]; // [rsp+48h] [rbp-39h] BYREF
	int v62; // [rsp+50h] [rbp-31h]
	int v63; // [rsp+54h] [rbp-2Dh]
	_DWORD v64[4]; // [rsp+58h] [rbp-29h] BYREF
	__int64 v65; // [rsp+68h] [rbp-19h] BYREF
	int* v66; // [rsp+70h] [rbp-11h]
	int* v67; // [rsp+78h] [rbp-9h]
	__int128 v68; // [rsp+80h] [rbp-1h]
	int v69; // [rsp+E8h] [rbp+67h]
	int v70; // [rsp+F0h] [rbp+6Fh]
	int v71; // [rsp+F8h] [rbp+77h]
	int v72; // [rsp+F8h] [rbp+77h]
	int v73; // [rsp+100h] [rbp+7Fh]

	v1 = (_QWORD*)(a1 + 1232);
	sub_14015C920(a1 + 1232);
	sub_1400CB3D0(a1, v61);
	v3 = HIDWORD(qword_140C77760);
	v70 = HIDWORD(qword_140C77760);
	if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v4 = *(_QWORD*)(a1 + 48)) != 0)
	{
		sub_14010CF80(*(_QWORD*)(a1 + 48));
		sub_14010D0A0(v4);
		v5 = v3 + sub_14010D1C0(v4);
	}
	else
	{
		v5 = HIDWORD(qword_140C77760);
	}
	v69 = v5;
	v58 = v3;
	v60 = v5;
	sub_1400CB3D0(a1, v61);
	v6 = qword_140C77760;
	v55 = qword_140C77760;
	if ((*(_BYTE*)(a1 + 656) & 8) != 0)
	{
		v7 = *(_QWORD*)(a1 + 48);
		if (v7)
		{
			sub_14010CF80(*(_QWORD*)(a1 + 48));
			sub_14010D1C0(v7);
		}
	}
	v57 = v6;
	sub_1400CB3D0(a1, v61);
	v8 = v62 - v61[0];
	if ((*(_BYTE*)(a1 + 656) & 8) != 0)
	{
		v9 = *(_QWORD*)(a1 + 48);
		if (v9)
		{
			sub_14010D0A0(*(_QWORD*)(a1 + 48));
			sub_14010D1C0(v9);
		}
	}
	v10 = 0;
	v11 = -1;
	v12 = 0i64;
	v13 = 0i64;
	v14 = (__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3;
	v15 = 0i64;
	v59 = v8;
	v16 = 0;
	v17 = 0;
	v18 = v8 - v6;
	v19 = 0i64;
	v54 = 0;
	v56 = (int)v14;
	v73 = -1;
	v66 = 0i64;
	v67 = 0i64;
	*(_QWORD*)&v68 = 0i64;
	if ((int)v14 > 0)
	{
		v20 = 0;
		do
		{
			v21 = *(_QWORD*)(*(_QWORD*)(a1 + 1208) + 8 * v19);
			v22 = (int*)(v21 + 1128);
			v23 = *(_DWORD*)(v21 + 1128);
			v20 += v23;
			if (*(float*)(v21 + 648) > 0.0)
			{
				v24 = *(_QWORD*)(v21 + 16);
				if (!v24 || sub_1400D1A60(v24))
				{
					v54 = v23;
					v73 = v17;
				}
			}
			if (v13 == v15)
			{
				sub_14017B140(&v65, v13, v22);
				v15 = (int*)v68;
				v13 = v67;
			}
			else
			{
				if (v13)
					*v13 = v23;
				v67 = ++v13;
			}
			++v19;
			++v17;
		} while (v19 < (int)v14);
		v6 = v55;
		v12 = v66;
		v10 = v54;
		v11 = v73;
		v71 = v20;
		v1 = (_QWORD*)(a1 + 1232);
		v16 = v71;
	}
	if (v16 > v18)
	{
		if ((int)v14 <= 1)
		{
			*v12 = v18;
		}
		else
		{
			v25 = v14 * (*(_DWORD*)(a1 + 1152) + *(_DWORD*)(a1 + 1160));
			if (v25 <= v18)
			{
				if (v10 + (*(_DWORD*)(a1 + 1152) + *(_DWORD*)(a1 + 1160)) * ((int)v14 - 1) <= v18)
				{
					v31 = (int)v14;
					if ((int)v14 > 0i64)
					{
						v32 = v12;
						while (v31)
						{
							*v32++ = (v18 - v10) / ((int)v14 - 1);
							--v31;
						}
					}
					v12[v11] = v10;
				}
				else
				{
					if ((int)v14 > 0i64)
					{
						v28 = *(_DWORD*)(a1 + 1152) + *(_DWORD*)(a1 + 1160);
						v29 = v12;
						for (i = (int)v14; i; --i)
							*v29++ = v28;
					}
					v12[v11] += v18 - v25;
				}
			}
			else
			{
				v26 = (int)v14;
				if ((int)v14 > 0i64)
				{
					v27 = v12;
					while (v26)
					{
						*v27++ = v18 / (int)v14;
						--v26;
					}
				}
				v12[v73] += v18 % (int)v14;
			}
		}
	}
	v33 = (int)v14;
	v34 = 0;
	v72 = 0;
	v35 = 0i64;
	if (v56 > 0)
	{
		do
		{
			if (v34 >= *(_DWORD*)(a1 + 1144))
			{
				if (v35 || ((*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) & 0xFFFFFFFFFFFFFFF8ui64) != 8)
				{
					v39 = v6 + v12[v35];
					if (*(char*)(a1 + 29) >= 0)
					{
						v40 = sub_1400CB0E0(a1, v64, a1 + 64);
						*(_DWORD*)(a1 + 396) = *v40;
						*(_DWORD*)(a1 + 400) = v40[1];
						*(_DWORD*)(a1 + 404) = v40[2];
						*(_DWORD*)(a1 + 408) = v40[3];
						*(_BYTE*)(a1 + 29) |= 0x80u;
						v41 = a1;
						do
						{
							if (!*(_DWORD*)(v41 + 392))
								break;
							*(_DWORD*)(v41 + 392) = 0;
							v41 = *(_QWORD*)(v41 + 16);
						} while (v41);
					}
					v42 = *(_DWORD*)(a1 + 404);
					v43 = *(_DWORD*)(a1 + 396);
					v61[1] = *(_DWORD*)(a1 + 400);
					v44 = *(_DWORD*)(a1 + 408);
					v62 = v42;
					v63 = v44;
					v45 = v42 - v43;
					LOBYTE(v44) = *(_BYTE*)(a1 + 656) >> 3;
					v61[0] = v43;
					if ((v44 & 1) != 0)
					{
						v46 = *(_QWORD*)(a1 + 48);
						if (v46)
						{
							sub_14010D0A0(*(_QWORD*)(a1 + 48));
							sub_14010D1C0(v46);
						}
						v34 = v72;
					}
					v47 = (int*)v1[2];
					if (v45 < v39)
						v39 = v45;
					v59 = v39;
					if (v47 == (int*)v1[3])
					{
						sub_14015C990(v1, v47, &v57);
						v39 = v59;
						v69 = v60;
						v70 = v58;
					}
					else
					{
						if (v47)
						{
							*v47 = v6;
							v47[1] = v70;
							v47[2] = v39;
							v47[3] = v69;
						}
						v1[2] += 16i64;
					}
					v6 = v39;
					v57 = v39;
				}
				else
				{
					v37 = (int*)v1[2];
					v38 = v6 + *v12;
					v59 = v38;
					if (v37 == (int*)v1[3])
					{
						sub_14015C990(v1, v37, &v57);
						v6 = v57;
						v69 = v60;
						v70 = v58;
					}
					else
					{
						if (v37)
						{
							*v37 = v6;
							v37[1] = v70;
							v37[2] = v38;
							v37[3] = v69;
						}
						v1[2] += 16i64;
					}
				}
			}
			else
			{
				v36 = (int*)v1[2];
				if (v36 != (int*)v1[3])
				{
					if (v36)
					{
						*(_OWORD*)v36 = xmmword_140C784D0;
						v33 = v56;
					}
					v1[2] += 16i64;
					goto LABEL_75;
				}
				sub_14015C990(v1, v36, (int*)&xmmword_140C784D0);
			}
			v33 = v56;
		LABEL_75:
			v12 = v66;
			++v34;
			++v35;
			v72 = v34;
		} while (v35 < v33);
	}
	if (*(char*)(a1 + 29) >= 0)
	{
		v48 = sub_1400CB0E0(a1, v64, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v48;
		*(_DWORD*)(a1 + 400) = v48[1];
		*(_DWORD*)(a1 + 404) = v48[2];
		*(_DWORD*)(a1 + 408) = v48[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v49 = a1;
		do
		{
			if (!*(_DWORD*)(v49 + 392))
				break;
			*(_DWORD*)(v49 + 392) = 0;
			v49 = *(_QWORD*)(v49 + 16);
		} while (v49);
	}
	v50 = *(_DWORD*)(a1 + 404);
	v51 = *(_DWORD*)(a1 + 400);
	v52 = *(_DWORD*)(a1 + 408);
	v53 = (__int64)v66;
	*(_DWORD*)(a1 + 1168) = *(_DWORD*)(a1 + 396);
	*(_DWORD*)(a1 + 1172) = v51;
	*(_DWORD*)(a1 + 1176) = v50;
	*(_DWORD*)(a1 + 1180) = v52;
	if (v53)
		sub_14018B900(v53, 0);
}
// 14017977C: variable 'v23' is possibly undefined
// 140179787: variable 'v13' is possibly undefined
// 140179787: variable 'v15' is possibly undefined
// 14017979F: variable 'v22' is possibly undefined
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C784D0: using guessed type __int128 xmmword_140C784D0;
// 1401795D0: using guessed type _DWORD var_80[4];

