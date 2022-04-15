//----- (0000000140798C70) ----------------------------------------------------
void __fastcall sub_140798C70(_QWORD* a1, int a2, int a3)
{
	int v3; // esi
	int v4; // edi
	unsigned __int64 v6; // r10
	_DWORD* v7; // rcx
	__int64 v8; // r9
	_DWORD* v9; // rcx
	int v10; // eax
	_DWORD* v11; // rcx
	unsigned __int64 v12; // r10
	__int64 v13; // r9
	_DWORD* v14; // rcx
	int v15; // edi
	unsigned __int64 v16; // r10
	_DWORD* v17; // rdx
	int v18; // eax
	unsigned int v19; // esi
	__int64 v20; // r9
	_DWORD* v21; // rdx
	_DWORD* v22; // rcx
	unsigned __int64 v23; // r10
	__int64 v24; // r9
	_DWORD* v25; // rcx
	__int64* v26; // rcx
	_QWORD* v27; // rax
	__int64 v28; // r10
	unsigned __int64 v29; // r10
	_DWORD* v30; // rcx
	__int64 v31; // r9
	_DWORD* v32; // rcx
	double v33; // xmm0_8
	int v34; // esi
	__int64 v35; // rcx
	unsigned __int64 v36; // r10
	_DWORD* v37; // rcx
	__int64 v38; // r9
	_DWORD* v39; // rcx
	int v40; // edi
	unsigned __int64 v41; // r10
	_DWORD* v42; // rcx
	__int64 v43; // r9
	_DWORD* v44; // rcx
	int v45; // esi
	unsigned __int64 v46; // r10
	_DWORD* v47; // rcx
	__int64 v48; // r9
	_DWORD* v49; // rcx
	unsigned __int64 v50; // r10
	_DWORD* v51; // rcx
	__int64 v52; // r9
	_DWORD* v53; // rcx
	int v54; // eax
	_DWORD* v55; // rcx
	unsigned __int64 v56; // r10
	__int64 v57; // r9
	_DWORD* v58; // rcx
	unsigned int v59; // edi
	__int64 v60; // rdx
	double v61; // [rsp+20h] [rbp-20h]
	int v62; // [rsp+20h] [rbp-20h]
	double v63; // [rsp+28h] [rbp-18h]
	double v64; // [rsp+28h] [rbp-18h]
	int v65; // [rsp+28h] [rbp-18h]
	int v66; // [rsp+68h] [rbp+28h]
	int v67; // [rsp+70h] [rbp+30h]
	double v68; // [rsp+78h] [rbp+38h]
	double v69; // [rsp+78h] [rbp+38h]
	int v70; // [rsp+78h] [rbp+38h]
	double v71; // [rsp+78h] [rbp+38h]
	double v72; // [rsp+78h] [rbp+38h]
	int v73; // [rsp+78h] [rbp+38h]
	double v74; // [rsp+78h] [rbp+38h]
	double v75; // [rsp+78h] [rbp+38h]
	double v76; // [rsp+78h] [rbp+38h]

	if (a2 < a3)
	{
		v67 = a3;
		v66 = a2;
		v3 = a2;
		v4 = a3;
		do
		{
			v6 = a1[2];
			v7 = dword_140A12138;
			if (a1[3] < v6)
				v7 = (_DWORD*)a1[3];
			v8 = *(_QWORD*)v7;
			if ((unsigned int)(v3 - 1) >= *(_DWORD*)(*(_QWORD*)v7 + 56i64))
			{
				if ((double)v3 == 0.0)
				{
					v9 = *(_DWORD**)(v8 + 32);
				}
				else
				{
					v68 = (double)v3;
					v9 = (_DWORD*)(*(_QWORD*)(v8 + 32)
						+ 40 * ((unsigned int)(LODWORD(v68) + HIDWORD(v68)) % (((1i64 << *(_BYTE*)(v8 + 11)) - 1) | 1)));
				}
				while (v9[6] != 3 || (double)v3 != *((double*)v9 + 2))
				{
					v9 = (_DWORD*)*((_QWORD*)v9 + 4);
					if (!v9)
					{
						v9 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v9 = (_DWORD*)(*(_QWORD*)(v8 + 24) + 16i64 * (v3 - 1));
			}
			*(_QWORD*)v6 = *(_QWORD*)v9;
			v10 = v9[2];
			v11 = dword_140A12138;
			*(_DWORD*)(v6 + 8) = v10;
			a1[2] += 16i64;
			v12 = a1[2];
			if (a1[3] < v12)
				v11 = (_DWORD*)a1[3];
			v13 = *(_QWORD*)v11;
			if ((unsigned int)(v4 - 1) >= *(_DWORD*)(*(_QWORD*)v11 + 56i64))
			{
				if ((double)v4 == 0.0)
				{
					v14 = *(_DWORD**)(v13 + 32);
				}
				else
				{
					v69 = (double)v4;
					v14 = (_DWORD*)(*(_QWORD*)(v13 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v69) + HIDWORD(v69)) % (((1i64 << *(_BYTE*)(v13 + 11)) - 1) | 1)));
				}
				while (v14[6] != 3 || (double)v4 != *((double*)v14 + 2))
				{
					v14 = (_DWORD*)*((_QWORD*)v14 + 4);
					if (!v14)
					{
						v14 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v14 = (_DWORD*)(*(_QWORD*)(v13 + 24) + 16i64 * (v4 - 1));
			}
			*(_QWORD*)v12 = *(_QWORD*)v14;
			*(_DWORD*)(v12 + 8) = v14[2];
			a1[2] += 16i64;
			if ((unsigned int)sub_140798B50((__int64)a1, -1, -2))
			{
				sub_140058B30((__int64)a1, 1);
				sub_140058B30((__int64)a1, 1);
			}
			else
			{
				a1[2] -= 32i64;
			}
			v15 = v4 - v3;
			if (v15 == 1)
				break;
			v16 = a1[2];
			v17 = dword_140A12138;
			v18 = (v3 + v67) / 2;
			if (a1[3] < v16)
				v17 = (_DWORD*)a1[3];
			v19 = v18 - 1;
			v70 = v18;
			v20 = *(_QWORD*)v17;
			if ((unsigned int)(v18 - 1) >= *(_DWORD*)(*(_QWORD*)v17 + 56i64))
			{
				if ((double)v18 == 0.0)
				{
					v21 = *(_DWORD**)(v20 + 32);
				}
				else
				{
					v63 = (double)v18;
					v21 = (_DWORD*)(*(_QWORD*)(v20 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v63) + HIDWORD(v63)) % (((1i64 << *(_BYTE*)(v20 + 11)) - 1) | 1)));
				}
				while (v21[6] != 3 || (double)v18 != *((double*)v21 + 2))
				{
					v21 = (_DWORD*)*((_QWORD*)v21 + 4);
					if (!v21)
					{
						v21 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v21 = (_DWORD*)(*(_QWORD*)(v20 + 24) + 16i64 * (v18 - 1));
			}
			v22 = dword_140A12138;
			*(_QWORD*)v16 = *(_QWORD*)v21;
			*(_DWORD*)(v16 + 8) = v21[2];
			a1[2] += 16i64;
			v23 = a1[2];
			if (a1[3] < v23)
				v22 = (_DWORD*)a1[3];
			v24 = *(_QWORD*)v22;
			if ((unsigned int)(v66 - 1) >= *(_DWORD*)(*(_QWORD*)v22 + 56i64))
			{
				if ((double)v66 == 0.0)
				{
					v25 = *(_DWORD**)(v24 + 32);
				}
				else
				{
					v64 = (double)v66;
					v25 = (_DWORD*)(*(_QWORD*)(v24 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v64) + HIDWORD(v64)) % (((1i64 << *(_BYTE*)(v24 + 11)) - 1) | 1)));
				}
				while (v25[6] != 3 || (double)v66 != *((double*)v25 + 2))
				{
					v25 = (_DWORD*)*((_QWORD*)v25 + 4);
					if (!v25)
					{
						v25 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v25 = (_DWORD*)(*(_QWORD*)(v24 + 24) + 16i64 * (v66 - 1));
			}
			*(_QWORD*)v23 = *(_QWORD*)v25;
			*(_DWORD*)(v23 + 8) = v25[2];
			a1[2] += 16i64;
			if ((unsigned int)sub_140798B50((__int64)a1, -2, -1))
				goto LABEL_52;
			a1[2] -= 16i64;
			v26 = (__int64*)dword_140A12138;
			if (a1[3] < a1[2])
				v26 = (__int64*)a1[3];
			v27 = sub_14005C3C0(*v26, v67);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			a1[2] += 16i64;
			if ((unsigned int)sub_140798B50((__int64)a1, -1, -2))
			{
			LABEL_52:
				sub_140058B30((__int64)a1, 1);
				sub_140058B30((__int64)a1, 1);
			}
			else
			{
				a1[2] -= 32i64;
			}
			if (v15 == 2)
				break;
			v29 = a1[2];
			v30 = dword_140A12138;
			if (a1[3] < v29)
				v30 = (_DWORD*)a1[3];
			v31 = *(_QWORD*)v30;
			if (v19 >= *(_DWORD*)(*(_QWORD*)v30 + 56i64))
			{
				v33 = (double)v70;
				v71 = (double)v70;
				v32 = v33 == 0.0
					? *(_DWORD**)(v31 + 32)
					: (_DWORD*)(*(_QWORD*)(v31 + 32)
						+ 40 * ((unsigned int)(LODWORD(v71) + HIDWORD(v71)) % (((1i64 << *(_BYTE*)(v31 + 11)) - 1) | 1)));
				while (v32[6] != 3 || v33 != *((double*)v32 + 2))
				{
					v32 = (_DWORD*)*((_QWORD*)v32 + 4);
					if (!v32)
					{
						v32 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v32 = (_DWORD*)(*(_QWORD*)(v31 + 24) + 16i64 * (v70 - 1));
			}
			*(_QWORD*)v29 = *(_QWORD*)v32;
			v34 = v67 - 1;
			*(_DWORD*)(v29 + 8) = v32[2];
			a1[2] += 16i64;
			v35 = a1[2];
			v65 = v67 - 1;
			*(_QWORD*)v35 = *(_QWORD*)(v35 - 16);
			*(_DWORD*)(v35 + 8) = *(_DWORD*)(v35 - 8);
			a1[2] += 16i64;
			v36 = a1[2];
			v37 = dword_140A12138;
			if (a1[3] < v36)
				v37 = (_DWORD*)a1[3];
			v38 = *(_QWORD*)v37;
			if ((unsigned int)(v67 - 2) >= *(_DWORD*)(*(_QWORD*)v37 + 56i64))
			{
				if ((double)v34 == 0.0)
				{
					v39 = *(_DWORD**)(v38 + 32);
				}
				else
				{
					v72 = (double)v34;
					v39 = (_DWORD*)(*(_QWORD*)(v38 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v72) + HIDWORD(v72)) % (((1i64 << *(_BYTE*)(v38 + 11)) - 1) | 1)));
				}
				while (v39[6] != 3 || (double)v34 != *((double*)v39 + 2))
				{
					v39 = (_DWORD*)*((_QWORD*)v39 + 4);
					if (!v39)
					{
						v39 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v39 = (_DWORD*)(*(_QWORD*)(v38 + 24) + 16i64 * (v67 - 2));
			}
			*(_QWORD*)v36 = *(_QWORD*)v39;
			*(_DWORD*)(v36 + 8) = v39[2];
			a1[2] += 16i64;
			sub_140058B30((__int64)a1, 1);
			sub_140058B30((__int64)a1, 1);
			v40 = v66;
			v73 = v67 - 1;
			while (1)
			{
				while (1)
				{
					v41 = a1[2];
					++v40;
					v42 = dword_140A12138;
					if (a1[3] < v41)
						v42 = (_DWORD*)a1[3];
					v43 = *(_QWORD*)v42;
					if ((unsigned int)(v40 - 1) >= *(_DWORD*)(*(_QWORD*)v42 + 56i64))
					{
						if ((double)v40 == 0.0)
						{
							v44 = *(_DWORD**)(v43 + 32);
						}
						else
						{
							v61 = (double)v40;
							v44 = (_DWORD*)(*(_QWORD*)(v43 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v61) + HIDWORD(v61)) % (((1i64 << *(_BYTE*)(v43 + 11)) - 1) | 1)));
						}
						while (v44[6] != 3 || (double)v40 != *((double*)v44 + 2))
						{
							v44 = (_DWORD*)*((_QWORD*)v44 + 4);
							if (!v44)
							{
								v44 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v44 = (_DWORD*)(*(_QWORD*)(v43 + 24) + 16i64 * (v40 - 1));
					}
					*(_QWORD*)v41 = *(_QWORD*)v44;
					*(_DWORD*)(v41 + 8) = v44[2];
					a1[2] += 16i64;
					if (!(unsigned int)sub_140798B50((__int64)a1, -1, -2))
						break;
					if (v40 > v67)
						sub_140056830(a1, (unsigned __int64*)aInvalidOrderFu);
					a1[2] -= 16i64;
				}
				v45 = v73;
				v62 = v40;
				while (1)
				{
					v46 = a1[2];
					--v45;
					v47 = dword_140A12138;
					if (a1[3] < v46)
						v47 = (_DWORD*)a1[3];
					v48 = *(_QWORD*)v47;
					if ((unsigned int)(v45 - 1) >= *(_DWORD*)(*(_QWORD*)v47 + 56i64))
					{
						if ((double)v45 == 0.0)
						{
							v49 = *(_DWORD**)(v48 + 32);
						}
						else
						{
							v74 = (double)v45;
							v49 = (_DWORD*)(*(_QWORD*)(v48 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v74) + HIDWORD(v74)) % (((1i64 << *(_BYTE*)(v48 + 11)) - 1) | 1)));
						}
						while (v49[6] != 3 || (double)v45 != *((double*)v49 + 2))
						{
							v49 = (_DWORD*)*((_QWORD*)v49 + 4);
							if (!v49)
							{
								v49 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v49 = (_DWORD*)(*(_QWORD*)(v48 + 24) + 16i64 * (v45 - 1));
					}
					*(_QWORD*)v46 = *(_QWORD*)v49;
					*(_DWORD*)(v46 + 8) = v49[2];
					a1[2] += 16i64;
					if (!(unsigned int)sub_140798B50((__int64)a1, -3, -1))
						break;
					if (v45 < v66)
						sub_140056830(a1, (unsigned __int64*)aInvalidOrderFu_0);
					a1[2] -= 16i64;
				}
				v73 = v45;
				if (v45 < v40)
					break;
				sub_140058B30((__int64)a1, 1);
				sub_140058B30((__int64)a1, 1);
			}
			a1[2] -= 48i64;
			v50 = a1[2];
			v51 = dword_140A12138;
			if (a1[3] < v50)
				v51 = (_DWORD*)a1[3];
			v52 = *(_QWORD*)v51;
			if ((unsigned int)(v67 - 2) >= *(_DWORD*)(*(_QWORD*)v51 + 56i64))
			{
				if ((double)v65 == 0.0)
				{
					v53 = *(_DWORD**)(v52 + 32);
				}
				else
				{
					v75 = (double)v65;
					v53 = (_DWORD*)(*(_QWORD*)(v52 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v75) + HIDWORD(v75)) % (((1i64 << *(_BYTE*)(v52 + 11)) - 1) | 1)));
				}
				while (v53[6] != 3 || (double)v65 != *((double*)v53 + 2))
				{
					v53 = (_DWORD*)*((_QWORD*)v53 + 4);
					if (!v53)
					{
						v53 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v53 = (_DWORD*)(*(_QWORD*)(v52 + 24) + 16i64 * (v67 - 2));
			}
			*(_QWORD*)v50 = *(_QWORD*)v53;
			v54 = v53[2];
			v55 = dword_140A12138;
			*(_DWORD*)(v50 + 8) = v54;
			a1[2] += 16i64;
			v56 = a1[2];
			if (a1[3] < v56)
				v55 = (_DWORD*)a1[3];
			v57 = *(_QWORD*)v55;
			if ((unsigned int)(v40 - 1) >= *(_DWORD*)(*(_QWORD*)v55 + 56i64))
			{
				if ((double)v40 == 0.0)
				{
					v58 = *(_DWORD**)(v57 + 32);
				}
				else
				{
					v76 = (double)v40;
					v58 = (_DWORD*)(*(_QWORD*)(v57 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v76) + HIDWORD(v76)) % (((1i64 << *(_BYTE*)(v57 + 11)) - 1) | 1)));
				}
				while (v58[6] != 3 || (double)v40 != *((double*)v58 + 2))
				{
					v58 = (_DWORD*)*((_QWORD*)v58 + 4);
					if (!v58)
					{
						v58 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v58 = (_DWORD*)(*(_QWORD*)(v57 + 24) + 16i64 * (v40 - 1));
			}
			*(_QWORD*)v56 = *(_QWORD*)v58;
			*(_DWORD*)(v56 + 8) = v58[2];
			a1[2] += 16i64;
			sub_140058B30((__int64)a1, 1);
			sub_140058B30((__int64)a1, 1);
			v3 = v66;
			if (v40 - v66 >= v67 - v40)
			{
				v60 = (unsigned int)(v40 + 1);
				v59 = v67;
				v67 = v62 - 1;
			}
			else
			{
				v59 = v40 - 1;
				v60 = (unsigned int)v66;
				v3 = v62 - 1 + 2;
				v66 = v3;
			}
			sub_140798C70(a1, v60, v59);
			v4 = v67;
		} while (v3 < v67);
	}
}
// 140799009: variable 'v28' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

