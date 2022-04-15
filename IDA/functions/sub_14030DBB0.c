//----- (000000014030DBB0) ----------------------------------------------------
void __fastcall sub_14030DBB0(__int64 a1)
{
	unsigned __int64 v2; // rcx
	int v3; // r14d
	__int64 v4; // rax
	int v5; // r13d
	unsigned int v6; // r12d
	__int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rdi
	unsigned int v10; // r15d
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	bool v14; // zf
	__int64 v15; // rax
	unsigned __int64 v16; // rcx
	__int64 v17; // rax
	int* v18; // rax
	int v19; // r9d
	unsigned int v20; // r10d
	__int64 v21; // r8
	unsigned __int16* v22; // rdx
	int v23; // ecx
	int v24; // eax
	__int64 v25; // rdx
	__int64 v26; // rax
	__int16 v27; // dx
	unsigned __int8 v28; // cl
	__int64 v29; // rax
	unsigned __int64 v30; // rcx
	__int64 v31; // rax
	unsigned int v32; // r15d
	__int64 v33; // rbx
	unsigned __int16* v34; // rdi
	__int64 v35; // rsi
	int* v36; // rax
	int* v37; // rbx
	__int64 v38; // rcx
	__int64 v39; // rax
	int* v40; // rax
	__int64 v41; // rcx
	__int64 v42; // r8
	__int64 v43; // rax
	int* v44; // rax
	unsigned int v45; // ebx
	__int64 v46; // r15
	unsigned int i; // r8d
	__int64 v48; // r9
	unsigned int v49; // eax
	__int64 v50; // rdx
	__int64 v51; // rax
	unsigned int j; // r9d
	__int64 v53; // r11
	unsigned int* v54; // r10
	__int64 v55; // rdx
	__int64 v56; // rcx
	__int64 v57; // r8
	__int64 v58; // rax
	__int64 v59; // rcx
	__int64 v60; // rsi
	__int64 v61; // rax
	__int64 v62; // rbx
	_DWORD* v63; // rdi
	__int64 v64; // rdx
	__int64 v65; // r9
	__int64 v66; // rax
	__int128 v67; // xmm0
	unsigned int v68; // ebx
	__int64 v69; // rcx
	__int64 v70; // rdx
	__int64 v71; // r11
	unsigned int v72; // r8d
	__int64 v73; // r10
	__int64 v74; // r9
	__int64 v75; // rax
	unsigned int v76; // edx
	__int64 v77; // rax
	_DWORD* v78; // rcx
	__int64 v79; // rdx
	__int64 v80; // rcx
	_DWORD* v81; // rax
	int v82; // edx
	__int64 k; // rbx

	v2 = *(unsigned int*)(*(_QWORD*)(a1 + 56) + 16i64);
	v3 = 0;
	if ((_DWORD)v2)
	{
		v4 = 112 * v2;
		if (!is_mul_ok(v2, 0x70ui64))
			v4 = -1i64;
		v5 = 0;
		v6 = 0;
		*(_QWORD*)(a1 + 144) = sub_14018B280(v4, 0);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 16i64))
		{
			while (1)
			{
				v7 = *(_QWORD*)(a1 + 144);
				v8 = 112i64 * v6;
				v9 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 24i64);
				v10 = *(unsigned __int16*)(v8 + v9);
				if (qword_140C63840)
					break;
				if (dword_140C64964)
				{
					v12 = 0i64;
				}
				else
				{
					if ((int)sub_14021A4E0() >= 0)
					{
						v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652E8 + 24i64))(
							qword_140C652E8,
							v10);
						goto LABEL_12;
					}
					v12 = 0i64;
				}
			LABEL_13:
				*(_DWORD*)(v8 + v7) = *(unsigned __int16*)(v8 + v9);
				*(_DWORD*)(v8 + v7 + 4) = *(unsigned __int16*)(v8 + v9 + 2);
				if (v12)
					v13 = *(_DWORD*)(v12 + 20);
				else
					v13 = 0;
				*(_DWORD*)(v8 + v7 + 8) = v13;
				*(_DWORD*)(v8 + v7 + 12) = *(unsigned __int16*)(v8 + v9 + 4);
				*(_DWORD*)(v8 + v7 + 16) = *(unsigned __int16*)(v8 + v9 + 6);
				*(_DWORD*)(v8 + v7 + 20) = *(_DWORD*)(v8 + v9 + 16) - *(_DWORD*)(v8 + v9 + 12);
				*(_DWORD*)(v8 + v7 + 24) = *(unsigned __int16*)(v8 + v9 + 10);
				*(_DWORD*)(v8 + v7 + 28) = *(_DWORD*)(v8 + v9 + 20);
				*(_OWORD*)(v8 + v7 + 32) = *(_OWORD*)(v8 + v9 + 32);
				*(_OWORD*)(v8 + v7 + 48) = *(_OWORD*)(v8 + v9 + 48);
				*(_OWORD*)(v8 + v7 + 64) = *(_OWORD*)(v8 + v9 + 64);
				*(_OWORD*)(v8 + v7 + 80) = *(_OWORD*)(v8 + v9 + 80);
				v14 = *(_DWORD*)(v8 + v7) == v5;
				*(_DWORD*)(v8 + v7 + 96) = 0;
				if (!v14)
					v5 = *(_DWORD*)(v8 + v7);
				*(_QWORD*)(v8 + v7 + 104) = *(_QWORD*)(v8 + v9 + 104);
				if (++v6 >= *(_DWORD*)(*(_QWORD*)(a1 + 56) + 16i64))
					goto LABEL_19;
			}
			v11 = qword_140C63840(off_140A6B9B0, *(unsigned __int16*)(v8 + v9), qword_140C63858);
		LABEL_12:
			v12 = v11;
			goto LABEL_13;
		}
	}
LABEL_19:
	v15 = *(_QWORD*)(a1 + 56);
	v16 = *(unsigned int*)(v15 + 128);
	if ((_DWORD)v16)
	{
		v17 = 32i64 * *(unsigned int*)(v15 + 128);
		if (!is_mul_ok(v16, 0x20ui64))
			v17 = -1i64;
		v18 = sub_14018B280(v17, 0);
		v19 = 0;
		v20 = 0;
		for (*(_QWORD*)(a1 + 152) = v18;
			v20 < *(_DWORD*)(*(_QWORD*)(a1 + 56) + 128i64);
			*(_QWORD*)(v21 + 24) = *((_QWORD*)v22 + 5))
		{
			v21 = *(_QWORD*)(a1 + 152) + 32i64 * v20;
			v22 = (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 136i64) + 48i64 * v20);
			v23 = *v22;
			*(_DWORD*)v21 = v23;
			*(_DWORD*)(v21 + 4) = v22[1];
			*(_DWORD*)(v21 + 8) = *((_DWORD*)v22 + 3) - *((_DWORD*)v22 + 2);
			if (v23 != v19)
				v19 = v23;
			*(_DWORD*)(v21 + 12) = v22[3];
			v24 = *((_DWORD*)v22 + 4);
			*(_DWORD*)(v21 + 20) = 0;
			*(_DWORD*)(v21 + 16) = v24;
			++v20;
		}
	}
	v25 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 600i64);
	*(_QWORD*)(a1 + 64) = v25;
	sub_140327210(a1 + 216, v25 + 24);
	v26 = *(_QWORD*)(a1 + 64);
	if (*(_BYTE*)(v26 + 32) != 1)
	{
		v27 = *(_WORD*)(v26 + 30);
		if ((v27 & 0x200) == 0)
		{
			v28 = *(_BYTE*)(v26 + 28);
			if (v28 <= 0x20u)
			{
				if ((v27 & 0xF0) != 0)
				{
					*(_DWORD*)(a1 + 168) = 8;
					goto LABEL_35;
				}
				if (v28 <= 0x10u)
				{
					*(_DWORD*)(a1 + 168) = 7;
					goto LABEL_35;
				}
				sub_1400035B0();
			}
		}
	}
	*(_DWORD*)(a1 + 168) = 9;
LABEL_35:
	v29 = *(_QWORD*)(a1 + 64);
	v30 = *(unsigned int*)(v29 + 128);
	if ((_DWORD)v30)
	{
		v31 = 8i64 * *(unsigned int*)(v29 + 128);
		if (!is_mul_ok(v30, 8ui64))
			v31 = -1i64;
		v32 = 0;
		for (*(_QWORD*)(a1 + 176) = sub_14018B280(v31, 0);
			v32 < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 128i64);
			*(_DWORD*)(v33 + 8 * v35 + 4) = sub_14030E690(a1, (__int64)v34))
		{
			v33 = *(_QWORD*)(a1 + 176);
			v34 = (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 136i64) + 112i64 * v32);
			v35 = v32;
			*(_DWORD*)(v33 + 8i64 * v32++) = sub_14030E510(a1, v34);
		}
	}
	v36 = sub_1402ECA50(*(_QWORD*)(a1 + 16), (unsigned int*)(*(_QWORD*)(a1 + 56) + 16i64));
	v37 = v36;
	if (*(int**)(a1 + 184) != v36)
	{
		if (v36)
			(**(void(__fastcall***)(int*))v36)(v36);
		v38 = *(_QWORD*)(a1 + 184);
		if (v38)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
		*(_QWORD*)(a1 + 184) = v37;
	}
	v39 = 4i64 * *(unsigned int*)(*(_QWORD*)(a1 + 56) + 384i64);
	if (!is_mul_ok(*(unsigned int*)(*(_QWORD*)(a1 + 56) + 384i64), 4ui64))
		v39 = -1i64;
	v40 = sub_14018B280(v39, 0);
	v41 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 208) = v40;
	sub_1407E4830(v40, 0i64, 4i64 * *(unsigned int*)(v41 + 384));
	v42 = *(_QWORD*)(a1 + 56);
	v43 = 4i64 * (unsigned int)(*(_DWORD*)(v42 + 384) + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 2244i64));
	if (!is_mul_ok((unsigned int)(*(_DWORD*)(v42 + 384) + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 2244i64)), 4ui64))
		v43 = -1i64;
	v44 = sub_14018B280(v43, 8u);
	v45 = 1;
	*v44 = 0;
	v46 = (__int64)v44;
	for (i = 1; i < *(_DWORD*)(*(_QWORD*)(a1 + 16) + 2244i64); ++i)
	{
		v48 = *(_QWORD*)(a1 + 56);
		v49 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 2248i64) + 196i64 * i);
		if (v49 < *(_DWORD*)(v48 + 400))
		{
			v50 = *(unsigned __int16*)(*(_QWORD*)(v48 + 408) + 2i64 * v49);
			if ((unsigned int)v50 < *(_DWORD*)(v48 + 384))
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 208) + 4 * v50) = v45;
				v51 = v45++;
				*(_DWORD*)(v46 + 4 * v51) = i;
			}
		}
	}
	for (j = 0; j < *(_DWORD*)(*(_QWORD*)(a1 + 56) + 384i64); ++j)
	{
		v53 = *(_QWORD*)(a1 + 208);
		v54 = (unsigned int*)(v53 + 4i64 * j);
		if (!*v54)
		{
			v55 = *(_QWORD*)(a1 + 56);
			v56 = *(_QWORD*)(v55 + 392);
			v57 = v56 + 352i64 * j;
			v58 = *(unsigned __int16*)(v57 + 4);
			if ((unsigned int)v58 < *(_DWORD*)(v55 + 384))
			{
				if (((*(_WORD*)(184i64 * *(unsigned __int16*)(v57 + 6) + *(_QWORD*)(v55 + 248)) ^ *(_WORD*)(184i64 * *(unsigned __int16*)(352 * v58 + v56 + 6) + *(_QWORD*)(v55 + 248))) & 0x7F8) != 0)
				{
					*v54 = v45;
					v59 = v45++;
					*(_DWORD*)(v46 + 4 * v59) = *(_DWORD*)(*(_QWORD*)(a1 + 208) + 4i64 * *(unsigned __int16*)(v57 + 4));
				}
				else
				{
					*v54 = *(_DWORD*)(v53 + 4i64 * *(unsigned __int16*)(v57 + 4));
				}
			}
		}
	}
	v60 = v45;
	*(_DWORD*)(a1 + 200) = v45;
	v61 = 196i64 * v45;
	if (!is_mul_ok(v45, 0xC4ui64))
		v61 = -1i64;
	*(_QWORD*)(a1 + 192) = sub_14018B280(v61, 0);
	if (v45)
	{
		v62 = 0i64;
		v63 = (_DWORD*)v46;
		do
		{
			v64 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 2248i64) + 196i64 * (unsigned int)*v63;
			v65 = v62 + *(_QWORD*)(a1 + 192);
			if ((((unsigned __int8)v65 | (unsigned __int8)(*(_BYTE*)(*(_QWORD*)(a1 + 16) + 2248i64) - 60 * *v63)) & 0xF) != 0)
			{
				sub_1407DB590((int*)(v62 + *(_QWORD*)(a1 + 192)), (int*)v64, 0xC4ui64);
			}
			else
			{
				v66 = 1i64;
				do
				{
					v67 = *(_OWORD*)v64;
					v65 += 128i64;
					v64 += 128i64;
					*(_OWORD*)(v65 - 128) = v67;
					*(_OWORD*)(v65 - 112) = *(_OWORD*)(v64 - 112);
					*(_OWORD*)(v65 - 96) = *(_OWORD*)(v64 - 96);
					*(_OWORD*)(v65 - 80) = *(_OWORD*)(v64 - 80);
					*(_OWORD*)(v65 - 64) = *(_OWORD*)(v64 - 64);
					*(_OWORD*)(v65 - 48) = *(_OWORD*)(v64 - 48);
					*(_OWORD*)(v65 - 32) = *(_OWORD*)(v64 - 32);
					*(_OWORD*)(v65 - 16) = *(_OWORD*)(v64 - 16);
					--v66;
				} while (v66);
				*(_OWORD*)v65 = *(_OWORD*)v64;
				*(_OWORD*)(v65 + 16) = *(_OWORD*)(v64 + 16);
				*(_OWORD*)(v65 + 32) = *(_OWORD*)(v64 + 32);
				*(_OWORD*)(v65 + 48) = *(_OWORD*)(v64 + 48);
				*(_DWORD*)(v65 + 64) = *(_DWORD*)(v64 + 64);
			}
			++v63;
			v62 += 196i64;
			--v60;
		} while (v60);
	}
	sub_14018B900(v46, 0);
	v68 = 0;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 384i64))
	{
		while (1)
		{
			v69 = *(_QWORD*)(a1 + 56);
			v70 = *(_QWORD*)(a1 + 208);
			v71 = *(_QWORD*)(a1 + 192);
			v72 = *(_DWORD*)(v70 + 4i64 * v68);
			v73 = *(_QWORD*)(v69 + 392) + 352i64 * v68;
			v74 = 196i64 * v72;
			v75 = *(unsigned __int16*)(v73 + 4);
			if ((unsigned int)v75 >= *(_DWORD*)(v69 + 384))
				break;
			v76 = *(_DWORD*)(v70 + 4 * v75);
			if (v72 != v76)
			{
				v77 = v76;
				v78 = (_DWORD*)(v74 + v71 + 8);
				v79 = 47i64;
				do
				{
					if (*v78 == -1)
						*v78 = *(_DWORD*)((char*)v78 + 196 * v77 - v74);
					++v78;
					--v79;
				} while (v79);
			LABEL_84:
				*(_DWORD*)(v74 + v71 + 4) = *(unsigned __int16*)(184i64 * *(unsigned __int16*)(v73 + 6)
					+ *(_QWORD*)(*(_QWORD*)(a1 + 56) + 248i64));
			}
			if (++v68 >= *(_DWORD*)(*(_QWORD*)(a1 + 56) + 384i64))
				goto LABEL_86;
		}
		v80 = 47i64;
		v81 = (_DWORD*)(v74 + v71 + 8);
		do
		{
			if (*v81 == -1)
				*v81 = 0;
			++v81;
			--v80;
		} while (v80);
		goto LABEL_84;
	}
LABEL_86:
	v82 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 24i64);
	if (v82)
	{
		switch (*(_DWORD*)(a1 + 168))
		{
		case 7:
			v3 = 16;
			break;
		case 8:
			v3 = 32;
			break;
		case 9:
			v3 = 48;
			break;
		}
		(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
			qword_140C65670,
			(unsigned int)(v3 * v82),
			1i64,
			a1 + 160);
	}
	if (*(_QWORD*)(a1 + 160))
	{
		switch (*(_DWORD*)(a1 + 168))
		{
		case 7:
			sub_14030F870(a1);
			break;
		case 8:
			sub_14030FA00(a1);
			break;
		case 9:
			sub_14030FBF0(a1);
			break;
		}
	}
	for (k = *(_QWORD*)(a1 + 472); k; k = *(_QWORD*)(k + 104))
		sub_140326380(k);
}
// 140A6B9B0: using guessed type wchar_t *off_140A6B9B0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64964: using guessed type int dword_140C64964;
// 140C652E8: using guessed type __int64 qword_140C652E8;
// 140C65670: using guessed type __int64 qword_140C65670;

