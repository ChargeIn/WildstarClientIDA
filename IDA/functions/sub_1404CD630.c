#include "../winhttp.h"

//----- (00000001404CD630) ----------------------------------------------------
__int64 __fastcall sub_1404CD630(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // r15
	unsigned int v4; // eax
	unsigned int v5; // r14d
	unsigned int i; // esi
	__int64 v7; // rax
	unsigned int* v8; // rbx
	int* v9; // rdi
	__int64 j; // rcx
	int* v11; // rax
	int v12; // eax
	__int64* v13; // rax
	int* v14; // rdx
	int* v15; // rdx
	__int64 v16; // r8
	unsigned __int64 v17; // rdi
	unsigned __int64 v18; // rcx
	_QWORD* v19; // rax
	__int64* v20; // rdi
	unsigned int v21; // esi
	__int64 v22; // rax
	__int64 v23; // rsi
	__int64 v24; // r8
	int v25; // eax
	__int64* v26; // rax
	int* v27; // rdx
	__int64* v28; // rax
	unsigned __int64 v29; // rdx
	__int128 v30; // xmm0
	__int64* v31; // rax
	unsigned __int64 v32; // rdx
	unsigned __int64 v33; // rdi
	unsigned __int64 v34; // rcx
	_QWORD* v35; // rax
	__int64* v36; // rdi
	unsigned int v37; // esi
	__int64 v38; // rax
	__int64 v39; // rsi
	__int64 v40; // r8
	int v41; // eax
	__int64* v42; // rax
	int* v43; // rdx
	__int64* v44; // rax
	unsigned __int64 v45; // rdx
	__int128 v46; // xmm0
	__int64* v47; // rax
	unsigned __int64 v48; // rdx
	unsigned __int64 v49; // rdi
	unsigned __int64 v50; // rcx
	_QWORD* v51; // rax
	__int64* v52; // rdi
	unsigned int v53; // esi
	__int64 v54; // rax
	__int64 v55; // rsi
	__int64 v56; // r8
	int* v57; // rdx
	__int64* v58; // rax
	unsigned __int64 v59; // rdx
	__int128 v60; // xmm0
	__int64* v61; // rax
	unsigned __int64 v62; // rdx
	__int128 v64; // [rsp+28h] [rbp-E0h]
	__int128 v65; // [rsp+28h] [rbp-E0h]
	__int128 v66; // [rsp+28h] [rbp-E0h]
	unsigned int* v67; // [rsp+38h] [rbp-D0h] BYREF
	__int128 v68; // [rsp+48h] [rbp-C0h] BYREF
	int v69; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v70; // [rsp+68h] [rbp-A0h]
	__int64 v71; // [rsp+70h] [rbp-98h]
	__int64 v72; // [rsp+78h] [rbp-90h]
	int v73; // [rsp+88h] [rbp-80h] BYREF
	int v74[37]; // [rsp+90h] [rbp-78h] BYREF
	int v75[85]; // [rsp+124h] [rbp+1Ch] BYREF

	v3 = a1;
	if (a1[6] != a1[7])
		return 0i64;
	if (qword_140C63838)
	{
		v4 = qword_140C63838(off_140A6ABB0, qword_140C63858);
	LABEL_9:
		v5 = v4;
		goto LABEL_10;
	}
	if (dword_140C649FC)
	{
		v5 = 0;
	}
	else
	{
		if ((int)sub_140209480() >= 0)
		{
			v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C640E8 + 40i64))(qword_140C640E8);
			goto LABEL_9;
		}
		v5 = 0;
	}
LABEL_10:
	for (i = 0; i < v5; ++i)
	{
		if (qword_140C63848)
		{
			v7 = qword_140C63848(off_140A6ABB0, i, qword_140C63858);
		}
		else
		{
			if (dword_140C649FC)
			{
				v8 = 0i64;
				goto LABEL_19;
			}
			if ((int)sub_140209480() < 0)
			{
				v8 = 0i64;
				goto LABEL_19;
			}
			v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640E8 + 32i64))(qword_140C640E8, i);
		}
		v8 = (unsigned int*)v7;
	LABEL_19:
		v67 = v8;
		if (v8)
		{
			if (sub_14034BDD0((__int64)a1, v8[44]))
			{
				sub_1400B52A0((__int64)v74);
				sub_1407E4830(&v73, 0i64, 0x1F0ui64);
				sub_1407E4830(v74, 0i64, 0x138ui64);
				sub_1407E4830(v75, 0i64, 0x90ui64);
				v9 = v75;
				for (j = 15i64; j; --j)
					*v9++ = 197;
				v11 = sub_1400B5DF0(qword_140C658F0, *v8, &v73);
				if (v11)
				{
					if ((*(unsigned int(__fastcall**)(_QWORD*, int*))(*v3 + 8i64))(v3, v11))
					{
						v12 = v8[9];
						v70 = 0i64;
						v72 = 0i64;
						v69 = v12;
						sub_1407DB590(0i64, 0i64, 0i64);
						v71 = 0i64;
						v13 = sub_1404CDE70(v3 + 21, &v69);
						v14 = (int*)v13[3];
						if (v14 == (int*)v13[4])
						{
							sub_14010A1C0(v13 + 1, v14, &v67);
							v8 = v67;
						}
						else
						{
							if (v14)
								*(_QWORD*)v14 = v8;
							v13[3] += 8i64;
						}
						v15 = (int*)v3[3];
						a1 = v3 + 1;
						if (v15 == (int*)v3[4])
						{
							sub_14010A1C0(a1, v15, &v67);
						}
						else
						{
							if (v15)
								*(_QWORD*)v15 = v8;
							v3[3] += 8i64;
						}
					}
				}
			}
		}
	}
	sub_1404CE100(v3[2], (int*)v3[3], a3);
	v17 = 0i64;
	v18 = (__int64)(v3[24] - v3[23]) >> 3;
	if (v18)
	{
		v19 = (_QWORD*)v3[23];
		while (!*v19)
		{
			++v17;
			++v19;
			if (v17 >= v18)
				goto LABEL_70;
		}
		v20 = *(__int64**)(v3[23] + 8 * v17);
		*(_QWORD*)&v64 = v20;
		if (v20)
		{
			while (1)
			{
			LABEL_43:
				v21 = *((_DWORD*)v20 + 2);
				if (qword_140C63840)
				{
					v22 = qword_140C63840(off_140A6AC58, v21, qword_140C63858);
				}
				else
				{
					if (dword_140C650D4)
					{
						v23 = 0i64;
						goto LABEL_51;
					}
					if ((int)sub_14020A140() < 0)
					{
						v23 = 0i64;
						goto LABEL_51;
					}
					v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AC8 + 24i64))(qword_140C64AC8, v21);
				}
				v23 = v22;
			LABEL_51:
				v67 = (unsigned int*)v23;
				if (v23 && sub_14034BDD0(v18, *(_DWORD*)(v23 + 4)))
				{
					sub_1404CE100(v20[3], (int*)v20[4], v24);
					v25 = *(_DWORD*)(v23 + 32);
					v70 = 0i64;
					v69 = v25;
					v72 = 0i64;
					sub_1407DB590(0i64, 0i64, 0i64);
					v71 = 0i64;
					v26 = sub_1404CDE70(v3 + 15, &v69);
					v27 = (int*)v26[3];
					v18 = (unsigned __int64)(v26 + 1);
					if (v27 == (int*)v26[4])
					{
						sub_14010A1C0((_QWORD*)v18, v27, &v67);
					}
					else
					{
						if (v27)
							*(_QWORD*)v27 = v23;
						v26[3] += 8i64;
					}
					v28 = v20;
					v20 = (__int64*)*v20;
					*(_QWORD*)&v64 = v20;
					if (!v20)
					{
						v29 = *((unsigned int*)v28 + 2) % (unsigned __int64)((__int64)(v3[24] - v3[23]) >> 3);
						v18 = (__int64)(v3[24] - v3[23]) >> 3;
						while (++v29 < v18)
						{
							v20 = *(__int64**)(v3[23] + 8 * v29);
							*(_QWORD*)&v64 = v20;
							if (v20)
								goto LABEL_43;
						}
						goto LABEL_69;
					}
				}
				else
				{
					*((_QWORD*)&v64 + 1) = v3 + 21;
					v30 = v64;
					v31 = v20;
					v20 = (__int64*)*v20;
					*(_QWORD*)&v64 = v20;
					if (!v20)
					{
						v32 = *((unsigned int*)v31 + 2) % (unsigned __int64)((__int64)(v3[24] - v3[23]) >> 3);
						do
						{
							if (++v32 >= (__int64)(v3[24] - v3[23]) >> 3)
								break;
							v20 = *(__int64**)(v3[23] + 8 * v32);
						} while (!v20);
						*(_QWORD*)&v64 = v20;
					}
					v68 = v30;
					sub_1404CDF50(v3 + 21, (__int64*)&v68);
				LABEL_69:
					if (!v20)
						break;
				}
			}
		}
	}
LABEL_70:
	v33 = 0i64;
	v34 = (__int64)(v3[18] - v3[17]) >> 3;
	if (v34)
	{
		v35 = (_QWORD*)v3[17];
		while (!*v35)
		{
			++v33;
			++v35;
			if (v33 >= v34)
				goto LABEL_103;
		}
		v36 = *(__int64**)(v3[17] + 8 * v33);
		*(_QWORD*)&v65 = v36;
		if (v36)
		{
			while (1)
			{
			LABEL_76:
				v37 = *((_DWORD*)v36 + 2);
				if (qword_140C63840)
				{
					v38 = qword_140C63840(off_140A6ABE8, v37, qword_140C63858);
				}
				else
				{
					if (dword_140C63EB4)
					{
						v39 = 0i64;
						goto LABEL_84;
					}
					if ((int)sub_1402098C0() < 0)
					{
						v39 = 0i64;
						goto LABEL_84;
					}
					v38 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E00 + 24i64))(qword_140C64E00, v37);
				}
				v39 = v38;
			LABEL_84:
				v67 = (unsigned int*)v39;
				if (v39 && sub_14034BDD0(v34, *(_DWORD*)(v39 + 4)))
				{
					sub_1404CE1F0(v36[3], (int*)v36[4], v40);
					v41 = *(_DWORD*)(v39 + 48);
					v70 = 0i64;
					v69 = v41;
					v72 = 0i64;
					sub_1407DB590(0i64, 0i64, 0i64);
					v71 = 0i64;
					v42 = sub_1404CDE70(v3 + 9, &v69);
					v43 = (int*)v42[3];
					v34 = (unsigned __int64)(v42 + 1);
					if (v43 == (int*)v42[4])
					{
						sub_14010A1C0((_QWORD*)v34, v43, &v67);
					}
					else
					{
						if (v43)
							*(_QWORD*)v43 = v39;
						v42[3] += 8i64;
					}
					v44 = v36;
					v36 = (__int64*)*v36;
					*(_QWORD*)&v65 = v36;
					if (!v36)
					{
						v45 = *((unsigned int*)v44 + 2) % (unsigned __int64)((__int64)(v3[18] - v3[17]) >> 3);
						v34 = (__int64)(v3[18] - v3[17]) >> 3;
						while (++v45 < v34)
						{
							v36 = *(__int64**)(v3[17] + 8 * v45);
							*(_QWORD*)&v65 = v36;
							if (v36)
								goto LABEL_76;
						}
						goto LABEL_102;
					}
				}
				else
				{
					*((_QWORD*)&v65 + 1) = v3 + 15;
					v46 = v65;
					v47 = v36;
					v36 = (__int64*)*v36;
					*(_QWORD*)&v65 = v36;
					if (!v36)
					{
						v48 = *((unsigned int*)v47 + 2) % (unsigned __int64)((__int64)(v3[18] - v3[17]) >> 3);
						do
						{
							if (++v48 >= (__int64)(v3[18] - v3[17]) >> 3)
								break;
							v36 = *(__int64**)(v3[17] + 8 * v48);
						} while (!v36);
						*(_QWORD*)&v65 = v36;
					}
					v68 = v46;
					sub_1404CDF50(v3 + 15, (__int64*)&v68);
				LABEL_102:
					if (!v36)
						break;
				}
			}
		}
	}
LABEL_103:
	v49 = 0i64;
	v50 = (__int64)(v3[12] - v3[11]) >> 3;
	if (v50)
	{
		v51 = (_QWORD*)v3[11];
		while (!*v51)
		{
			++v49;
			++v51;
			if (v49 >= v50)
				goto LABEL_136;
		}
		v52 = *(__int64**)(v3[11] + 8 * v49);
		*(_QWORD*)&v66 = v52;
		if (v52)
		{
			while (1)
			{
			LABEL_109:
				v53 = *((_DWORD*)v52 + 2);
				if (qword_140C63840)
				{
					v54 = qword_140C63840(off_140A6AC20, v53, qword_140C63858);
				}
				else
				{
					if (dword_140C63A54)
					{
						v55 = 0i64;
						goto LABEL_117;
					}
					if ((int)sub_140209D00() < 0)
					{
						v55 = 0i64;
						goto LABEL_117;
					}
					v54 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65060 + 24i64))(qword_140C65060, v53);
				}
				v55 = v54;
			LABEL_117:
				v67 = (unsigned int*)v55;
				if (v55 && sub_14034BDD0(v50, *(_DWORD*)(v55 + 4)))
				{
					sub_1404CE1F0(v52[3], (int*)v52[4], v56);
					v57 = (int*)v3[7];
					if (v57 == (int*)v3[8])
					{
						sub_14010A1C0(v3 + 5, v57, &v67);
					}
					else
					{
						if (v57)
							*(_QWORD*)v57 = v55;
						v3[7] += 8i64;
					}
					v58 = v52;
					v52 = (__int64*)*v52;
					*(_QWORD*)&v66 = v52;
					if (!v52)
					{
						v59 = *((unsigned int*)v58 + 2) % (unsigned __int64)((__int64)(v3[12] - v3[11]) >> 3);
						v50 = (__int64)(v3[12] - v3[11]) >> 3;
						while (++v59 < v50)
						{
							v52 = *(__int64**)(v3[11] + 8 * v59);
							*(_QWORD*)&v66 = v52;
							if (v52)
								goto LABEL_109;
						}
						goto LABEL_135;
					}
				}
				else
				{
					*((_QWORD*)&v66 + 1) = v3 + 9;
					v60 = v66;
					v61 = v52;
					v52 = (__int64*)*v52;
					*(_QWORD*)&v66 = v52;
					if (!v52)
					{
						v62 = *((unsigned int*)v61 + 2) % (unsigned __int64)((__int64)(v3[12] - v3[11]) >> 3);
						do
						{
							if (++v62 >= (__int64)(v3[12] - v3[11]) >> 3)
								break;
							v52 = *(__int64**)(v3[11] + 8 * v62);
						} while (!v52);
						*(_QWORD*)&v66 = v52;
					}
					v68 = v60;
					sub_1404CDF50(v3 + 9, (__int64*)&v68);
				LABEL_135:
					if (!v52)
						break;
				}
			}
		}
	}
LABEL_136:
	sub_1404CE1F0(v3[6], (int*)v3[7], v16);
	return 0i64;
}
// 1404CD742: variable 'a1' is possibly undefined
// 1404CD864: variable 'a3' is possibly undefined
// 1404CD932: variable 'v18' is possibly undefined
// 1404CD948: variable 'v24' is possibly undefined
// 1404CDB22: variable 'v34' is possibly undefined
// 1404CDB38: variable 'v40' is possibly undefined
// 1404CDD12: variable 'v50' is possibly undefined
// 1404CDD28: variable 'v56' is possibly undefined
// 1404CDE1E: variable 'v16' is possibly undefined
// 140A6ABB0: using guessed type wchar_t *off_140A6ABB0[2];
// 140A6ABE8: using guessed type wchar_t *off_140A6ABE8[2];
// 140A6AC20: using guessed type wchar_t *off_140A6AC20[2];
// 140A6AC58: using guessed type wchar_t *off_140A6AC58[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A54: using guessed type int dword_140C63A54;
// 140C63EB4: using guessed type int dword_140C63EB4;
// 140C640E8: using guessed type __int64 qword_140C640E8;
// 140C649FC: using guessed type int dword_140C649FC;
// 140C64AC8: using guessed type __int64 qword_140C64AC8;
// 140C64E00: using guessed type __int64 qword_140C64E00;
// 140C65060: using guessed type __int64 qword_140C65060;
// 140C650D4: using guessed type int dword_140C650D4;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 1404CD630: using guessed type int var_218[37];
// 1404CD630: using guessed type int var_184[85];

