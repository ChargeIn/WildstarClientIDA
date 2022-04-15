#include "../winhttp.h"

//----- (000000014057B140) ----------------------------------------------------
void __fastcall sub_14057B140(__int64 a1)
{
	unsigned __int64 v2; // r8
	unsigned __int64 v3; // rdx
	unsigned __int64 v4; // rsi
	unsigned __int64 i; // rdi
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rbp
	unsigned __int64 j; // rsi
	_QWORD* v11; // rdi
	__int64 v12; // rcx
	unsigned __int64 k; // rbx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rbp
	__int64 v17; // rax
	__int64 v18; // rsi
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rdi
	__int64 m; // rax
	__int64 n; // rax
	__int64 v24; // rcx
	__int64(__fastcall * v25)(wchar_t**, __int64); // rax
	unsigned int v26; // eax
	__int64 v27; // rbx
	__int64 v28; // rdi
	__int64 v29; // rcx
	__int64 v30; // r8
	unsigned int v31; // edx
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64* v34; // rax
	__int64 v35; // rax
	_QWORD* ii; // rcx
	_QWORD* v37; // rdx
	_QWORD* v38; // rdx
	__int64 v39; // r8
	_QWORD* v40; // rax
	_QWORD* v41; // rbx
	void(__fastcall * **v42)(_QWORD, __int64); // rcx
	__int64 v43; // rax
	_QWORD* jj; // rax
	__int64 kk; // rax
	__int64 v46; // rcx
	__int64 v47; // rdi
	__int64 v48; // rbx
	__int64 v49; // rcx
	__int64 v50; // rdi
	__int64 v51; // rbx
	__int64 v52; // rcx
	__int64 v53; // rcx
	__int64 v54; // rdi
	__int64 v55; // rbx
	__int64 v56; // rcx
	__int64 v57; // rcx
	__int64 v58; // rbx
	int mm; // edi
	__int64 v60; // rcx
	__int64 v61; // rcx
	__int64 v62; // [rsp+80h] [rbp+8h] BYREF
	__int64 v63; // [rsp+88h] [rbp+10h] BYREF

	if (qword_140C658A0)
	{
		switch (*(_DWORD*)(a1 + 16))
		{
		case 1:
			sub_1404041E0(a1, 0xFui64, *(_QWORD*)a1);
			v3 = 16i64;
			break;
		case 2:
			v2 = *(_QWORD*)a1;
			v3 = 17i64;
		LABEL_11:
			sub_1404041E0(a1, v3, v2);
			goto LABEL_12;
		case 3:
			sub_1404041E0(a1, 0x1Dui64, *(_QWORD*)a1);
			v3 = 30i64;
			break;
		case 7:
			v2 = *(_QWORD*)a1;
			v3 = 47i64;
			goto LABEL_11;
		default:
			goto LABEL_12;
		}
		v2 = *(_QWORD*)a1;
		goto LABEL_11;
	}
LABEL_12:
	v4 = *(_QWORD*)(a1 + 816);
	for (i = 0i64; i < v4; ++i)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * i);
		if (v6)
		{
			v7 = *(_QWORD*)(v6 + 72);
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			v8 = *(_QWORD*)(v6 + 16);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			sub_14018B900(v6, 0);
		}
	}
	*(_QWORD*)(a1 + 816) = 0i64;
	v9 = *(_QWORD*)(a1 + 632);
	for (j = 0i64; j < v9; ++j)
	{
		v11 = *(_QWORD**)(*(_QWORD*)(a1 + 624) + 8 * j);
		if (v11)
		{
			v12 = v11[3];
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			for (k = 0i64; k < v11[2]; ++k)
			{
				v14 = *(_QWORD*)(v11[1] + 8 * k);
				if (v14)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			}
			v15 = v11[1];
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
			sub_14018B900((__int64)v11, 0);
		}
	}
	v16 = qword_140C65C28;
	if (qword_140C65C28)
	{
		v17 = *(_QWORD*)(qword_140C65C28 + 112);
		v18 = qword_140C65C28;
		v19 = *(_QWORD*)(v17 + 16);
		if (v19 != v17)
		{
			do
			{
				v20 = *(_QWORD*)(v19 + 24);
				v21 = v19;
				if (v20)
				{
					v19 = *(_QWORD*)(v19 + 24);
					for (m = *(_QWORD*)(v20 + 16); m; m = *(_QWORD*)(m + 16))
						v19 = m;
				}
				else
				{
					for (n = *(_QWORD*)(v19 + 8); v19 == *(_QWORD*)(n + 24); n = *(_QWORD*)(n + 8))
						v19 = n;
					if (*(_QWORD*)(v19 + 24) != n)
						v19 = n;
				}
				v24 = *(_QWORD*)(v21 + 40);
				if ((*(_BYTE*)(**(_QWORD**)(v24 + 40) + 12i64) & 4) != 0)
				{
					if (v24)
						(**(void(__fastcall***)(__int64, __int64))v24)(v24, 1i64);
					v62 = v21;
					sub_140645210(v16 + 104, &v62);
				}
			} while (v19 != *(_QWORD*)(v16 + 112));
			v16 = qword_140C65C28;
		}
		v25 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		*(_QWORD*)(v18 + 264) = 0i64;
		if (v25)
		{
			v26 = v25(off_140A69138, qword_140C63858);
		}
		else if (dword_140C64944)
		{
			v26 = 0;
		}
		else if ((int)sub_1401E9240() >= 0)
		{
			v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64218 + 40i64))(qword_140C64218);
		}
		else
		{
			v26 = 0;
		}
		if (v26)
		{
			v27 = 0i64;
			v28 = v26;
			do
			{
				v29 = *(_QWORD*)(v27 + *(_QWORD*)(v16 + 24));
				if ((*(_BYTE*)(v29 + 12) & 4) != 0 && *(float*)(v29 + 32) <= 0.0)
				{
					v30 = *(_QWORD*)(v16 + 112);
					v31 = *(_DWORD*)v29;
					v32 = *(_QWORD*)(v30 + 8);
					v33 = v30;
					while (v32)
					{
						if (*(_DWORD*)(v32 + 32) < v31)
						{
							v32 = *(_QWORD*)(v32 + 24);
						}
						else
						{
							v33 = v32;
							v32 = *(_QWORD*)(v32 + 16);
						}
					}
					if (v33 == v30 || v31 < *(_DWORD*)(v33 + 32))
					{
						v63 = *(_QWORD*)(v16 + 112);
						v34 = &v63;
					}
					else
					{
						v62 = v33;
						v34 = &v62;
					}
					v35 = *v34;
					if (v35 == v30 || !*(_QWORD*)(v35 + 40))
						sub_140643F00(v16, v31, 0, 0, 0i64, 1, 0);
				}
				v27 += 48i64;
				--v28;
			} while (v28);
		}
	}
	for (ii = *(_QWORD**)(a1 + 856); ii; ii = *(_QWORD**)(a1 + 856))
	{
		v37 = (_QWORD*)ii[19];
		ii[8] = 0i64;
		if (v37)
			*v37 = ii[20];
		v38 = ii + 20;
		v39 = ii[20];
		if (v39)
			*(_QWORD*)(v39 + 152) = ii[19];
		*v38 = 0i64;
		ii[19] = &qword_140C7DDE0;
		*v38 = qword_140C7DDE0;
		qword_140C7DDE0 = (__int64)ii;
		if (*v38)
			*(_QWORD*)(*v38 + 152i64) = v38;
		sub_140195D70((__int64)(ii + 9));
	}
	v40 = *(_QWORD**)(a1 + 736);
	v41 = (_QWORD*)v40[2];
	if (v41 != v40)
	{
		do
		{
			v42 = (void(__fastcall***)(_QWORD, __int64))v41[5];
			if (v42)
				(**v42)(v42, 1i64);
			v43 = v41[3];
			if (v43)
			{
				v41 = (_QWORD*)v41[3];
				for (jj = *(_QWORD**)(v43 + 16); jj; jj = (_QWORD*)jj[2])
					v41 = jj;
			}
			else
			{
				for (kk = v41[1]; v41 == *(_QWORD**)(kk + 24); kk = *(_QWORD*)(kk + 8))
					v41 = (_QWORD*)kk;
				if (v41[3] != kk)
					v41 = (_QWORD*)kk;
			}
		} while (v41 != *(_QWORD**)(a1 + 736));
	}
	v46 = *(_QWORD*)(a1 + 864);
	if (v46)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v46 - 16) + 8i64))(v46 - 16);
	if (*(_QWORD*)(a1 + 856))
		sub_1401A4A00((const void***)(a1 + 856));
	if (*(_QWORD*)(a1 + 840))
	{
		v47 = *(_QWORD*)(*(_QWORD*)(a1 + 832) + 8i64);
		if (v47)
		{
			do
			{
				sub_1400083B0(a1 + 824, *(_QWORD*)(v47 + 24));
				v48 = *(_QWORD*)(v47 + 16);
				sub_14018B900(v47, 0);
				v47 = v48;
			} while (v48);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 832) + 16i64) = *(_QWORD*)(a1 + 832);
		*(_QWORD*)(*(_QWORD*)(a1 + 832) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 832) + 24i64) = *(_QWORD*)(a1 + 832);
		*(_QWORD*)(a1 + 840) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 832), 0);
	v49 = *(_QWORD*)(a1 + 808);
	if (v49)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v49 - 16) + 8i64))(v49 - 16);
	if (*(_QWORD*)(a1 + 744))
	{
		v50 = *(_QWORD*)(*(_QWORD*)(a1 + 736) + 8i64);
		if (v50)
		{
			do
			{
				sub_1400083B0(a1 + 728, *(_QWORD*)(v50 + 24));
				v51 = *(_QWORD*)(v50 + 16);
				sub_14018B900(v50, 0);
				v50 = v51;
			} while (v51);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 736) + 16i64) = *(_QWORD*)(a1 + 736);
		*(_QWORD*)(*(_QWORD*)(a1 + 736) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 736) + 24i64) = *(_QWORD*)(a1 + 736);
		*(_QWORD*)(a1 + 744) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 736), 0);
	sub_14058FBC0((_QWORD*)(a1 + 664));
	sub_14018B900(*(_QWORD*)(a1 + 680), 0);
	*(_QWORD*)(a1 + 680) = 0i64;
	v52 = *(_QWORD*)(a1 + 648);
	if (v52)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
	v53 = *(_QWORD*)(a1 + 624);
	if (v53)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v53 - 16) + 8i64))(v53 - 16);
	if (*(_QWORD*)(a1 + 592))
	{
		v54 = *(_QWORD*)(*(_QWORD*)(a1 + 584) + 8i64);
		if (v54)
		{
			do
			{
				sub_1400083B0(a1 + 576, *(_QWORD*)(v54 + 24));
				v55 = *(_QWORD*)(v54 + 16);
				sub_14018B900(v54, 0);
				v54 = v55;
			} while (v55);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 16i64) = *(_QWORD*)(a1 + 584);
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 24i64) = *(_QWORD*)(a1 + 584);
		*(_QWORD*)(a1 + 592) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 584), 0);
	v56 = *(_QWORD*)(a1 + 552);
	if (v56)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v56 - 16) + 8i64))(v56 - 16);
	v57 = *(_QWORD*)(a1 + 544);
	if (v57)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v57 - 16) + 8i64))(v57 - 16);
	v58 = a1 + 424;
	for (mm = 9; mm >= 0; --mm)
	{
		v60 = *(_QWORD*)(v58 - 40);
		v58 -= 40i64;
		if (v60)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v60 - 16) + 8i64))(v60 - 16);
	}
	v61 = *(_QWORD*)(a1 + 8);
	if (v61)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v61 - 16) + 8i64))(v61 - 16);
}
// 14057B1BD: variable 'a1' is possibly undefined
// 140A69138: using guessed type wchar_t *off_140A69138[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64218: using guessed type __int64 qword_140C64218;
// 140C64944: using guessed type int dword_140C64944;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65C28: using guessed type __int64 qword_140C65C28;
// 140C7DDE0: using guessed type __int64 qword_140C7DDE0;

