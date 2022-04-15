//----- (00000001402B9190) ----------------------------------------------------
__int64 __fastcall sub_1402B9190(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // r9d
	int v4; // ebx
	int v5; // edi
	__int64 v6; // r14
	int v7; // r13d
	int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // r15
	__int64 v11; // r12
	__int64 v12; // rdx
	int v13; // r13d
	char* v14; // r14
	__int64 v15; // r11
	char v16; // bl
	__int64 v17; // r9
	__int64 v18; // rax
	int v19; // r12d
	unsigned __int8 v20; // cl
	int v21; // r8d
	int v22; // r15d
	int v23; // r11d
	char v24; // al
	int v25; // r11d
	__int64 v26; // r8
	unsigned __int8* v27; // r10
	int v28; // ecx
	int v29; // eax
	__int64 v30; // r8
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64 v34; // rax
	unsigned __int8* v35; // r12
	__int64 v36; // r13
	unsigned __int8 v37; // bl
	unsigned __int8 v38; // di
	unsigned __int8 v39; // r15
	unsigned __int8 v40; // dl
	unsigned __int8 v41; // r8
	unsigned __int8 v42; // si
	unsigned __int8 v43; // cl
	unsigned __int8 v44; // r14
	unsigned __int8 v45; // dl
	unsigned __int8 v46; // cl
	unsigned __int8 v47; // r10
	bool v48; // cf
	unsigned __int8 v49; // al
	unsigned __int8 v50; // cl
	unsigned __int8 v51; // dl
	__int64 v52; // rcx
	__int64 v53; // r8
	unsigned __int8* v54; // rdi
	__int64 v55; // rsi
	int v56; // eax
	unsigned __int8 v57; // r8
	unsigned __int8 v58; // r10
	int v59; // ecx
	unsigned __int8 v60; // dl
	int v61; // ecx
	unsigned __int8 v62; // al
	unsigned __int8 v63; // cl
	__int64 v64; // rdx
	int v65; // r9d
	int v66; // r13d
	int v67; // ebx
	int v68; // edi
	__int64 v69; // r10
	int v70; // eax
	__int64 result; // rax
	int v72; // ecx
	int v73; // eax
	__int64 v74; // rcx
	int v75; // [rsp+58h] [rbp-29h]
	__int64 v76; // [rsp+60h] [rbp-21h]
	__int64 v77; // [rsp+60h] [rbp-21h]
	__int64 v78; // [rsp+68h] [rbp-19h]
	__int64 v79; // [rsp+70h] [rbp-11h]
	__int64 v80; // [rsp+70h] [rbp-11h]
	int v81; // [rsp+78h] [rbp-9h]
	int v82; // [rsp+7Ch] [rbp-5h]
	int v83; // [rsp+80h] [rbp-1h]
	int v84; // [rsp+80h] [rbp-1h]
	int v85; // [rsp+80h] [rbp-1h]
	int v86; // [rsp+84h] [rbp+3h]
	int v87; // [rsp+84h] [rbp+3h]
	int v88; // [rsp+84h] [rbp+3h]
	int v89; // [rsp+88h] [rbp+7h] BYREF
	int v90; // [rsp+8Ch] [rbp+Bh]
	int v91; // [rsp+90h] [rbp+Fh]
	int v92; // [rsp+94h] [rbp+13h]
	int v96; // [rsp+100h] [rbp+7Fh]

	v3 = 2;
	v4 = *(_DWORD*)a2 + 2;
	v5 = *(_DWORD*)(a2 + 4) + 2;
	v6 = a1;
	v83 = v4;
	v86 = v5;
	v7 = 2;
	v82 = 2;
	if (*(_DWORD*)(a1 + 144) == 1)
	{
		v8 = 2;
		v75 = 2;
		if (v5 <= 2)
			goto LABEL_54;
		while (1)
		{
			v9 = *(unsigned int*)(v6 + 156);
			v78 = *(_QWORD*)(v6 + 160) + (unsigned int)(v8 * *(_DWORD*)(v6 + 156));
			v10 = v78;
			v11 = v78 - v9;
			v79 = v78 - v9;
			v76 = v9 + v78;
			v12 = *(_QWORD*)(v6 + 168) + 2i64 * *(_DWORD*)(v6 + 148) * v8;
			if (v4 <= 2)
				goto LABEL_45;
			v13 = 3;
			v14 = (char*)(v12 + 4);
			do
			{
				v15 = (v13 - 2) >> 3;
				v16 = 128 >> ((v13 - 2) & 7);
				v17 = (v13 - 1) >> 3;
				v18 = v13 >> 3;
				v19 = (unsigned __int8)(v16 & *(_BYTE*)(v15 + v11));
				v20 = 128 >> (v13 & 7);
				v21 = (unsigned __int8)(v16 & *(_BYTE*)(v15 + v10));
				v22 = (unsigned __int8)((128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v10));
				v23 = (unsigned __int8)(v16 & *(_BYTE*)(v15 + v76));
				if (v22
					&& (((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v79)) != 0
						&& ((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v76)) != 0
						|| v21 && ((unsigned __int8)(128 >> (v13 & 7)) & *(_BYTE*)(v18 + v78)) != 0))
				{
					*v14 = 64;
					goto LABEL_43;
				}
				if (((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v79)) == 0
					|| (v20 & *(_BYTE*)(v18 + v79)) != 0)
				{
					if (((unsigned __int8)(128 >> (v13 & 7)) & *(_BYTE*)(v18 + v78)) != 0 && (v20 & *(_BYTE*)(v18 + v76)) == 0)
					{
						if (((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v76)) != 0)
							goto LABEL_38;
						goto LABEL_35;
					}
				}
				else if ((v20 & *(_BYTE*)(v18 + v78)) != 0)
				{
					goto LABEL_38;
				}
				if (((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v76)) != 0 && !v23)
				{
					if (v21)
						goto LABEL_38;
				LABEL_17:
					if (!v19)
						goto LABEL_20;
					goto LABEL_18;
				}
			LABEL_35:
				if (!v21)
					goto LABEL_17;
				if (!v19)
				{
					if (((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v79)) != 0)
					{
					LABEL_38:
						v24 = 16;
						if (v22)
							v24 = 48;
						goto LABEL_42;
					}
					goto LABEL_20;
				}
			LABEL_18:
				if (((unsigned __int8)(128 >> (v13 & 7)) & *(_BYTE*)(v18 + v78)) != 0
					|| ((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v76)) != 0)
				{
					goto LABEL_29;
				}
			LABEL_20:
				if ((v20 & *(_BYTE*)(v18 + v79)) != 0
					&& (((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v76)) != 0 || v21)
					|| (v20 & *(_BYTE*)(v18 + v76)) != 0
					&& (v21 || ((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v79)) != 0)
					|| v23
					&& (((unsigned __int8)(128 >> ((v13 - 1) & 7)) & *(_BYTE*)(v17 + v79)) != 0
						|| ((unsigned __int8)(128 >> (v13 & 7)) & *(_BYTE*)(v18 + v78)) != 0))
				{
				LABEL_29:
					v24 = 16;
					if (v22)
						v24 = 64;
					goto LABEL_42;
				}
				v24 = v22 != 0 ? 0x40 : 0;
			LABEL_42:
				*v14 = v24;
			LABEL_43:
				v4 = v83;
				v10 = v78;
				v11 = v79;
				++v13;
				v14 += 2;
			} while (v13 - 1 < v83);
			v5 = v86;
			v3 = 2;
			v6 = a1;
		LABEL_45:
			v8 = v75 + 1;
			v75 = v8;
			if (v8 >= v5)
			{
			LABEL_53:
				v7 = 2;
				goto LABEL_54;
			}
		}
	}
	v25 = 2;
	if (v5 > 2)
	{
		do
		{
			if (v4 > 2)
			{
				v26 = *(_QWORD*)(v6 + 168) + 2i64 * *(_DWORD*)(v6 + 148) * v25 + 4;
				v27 = (unsigned __int8*)(*(_QWORD*)(v6 + 160) + (unsigned int)(*(_DWORD*)(v6 + 156) * v25) + 9i64);
				do
				{
					++v3;
					v28 = *v27 << 6;
					v27 += 4;
					v26 += 2i64;
					*(_BYTE*)(v26 - 2) = v28 / 255;
					v4 = v83;
				} while (v3 < v83);
				v5 = v86;
				v3 = 2;
			}
			++v25;
		} while (v25 < v5);
		goto LABEL_53;
	}
LABEL_54:
	v29 = *(_DWORD*)(v6 + 40);
	if ((v29 & 0x10) != 0)
	{
		v7 = 1;
		++v5;
		v3 = 1;
		++v4;
		v96 = 1;
		v82 = 1;
		v87 = v5;
		v84 = v4;
		if (v5 <= 1)
			goto LABEL_90;
		do
		{
			v30 = *(_QWORD*)(v6 + 168) + 2i64 * v7 * *(_DWORD*)(v6 + 148);
			v31 = 2i64 * *(int*)(v6 + 148);
			v32 = v30 - v31;
			v33 = v30 + v31;
			if (v4 > 1)
			{
				v34 = v33 - v30;
				v35 = (unsigned __int8*)(v30 + 4);
				v36 = v32 - v30;
				v77 = v34;
				v80 = v34 - 2;
				do
				{
					v37 = v35[v36 - 2];
					v38 = *v35;
					v39 = *(v35 - 2);
					v40 = v35[v36 - 4];
					v41 = v35[v80];
					v42 = v35[v34 - 4];
					if (v40 < v35[v36])
						v40 = v35[v36];
					v43 = *(v35 - 4);
					if (v35[v34 - 4] < v35[v34])
						v42 = v35[v34];
					v44 = v40;
					v45 = v35[v36 - 2];
					v35 += 2;
					if (v37 < v43)
						v45 = v43;
					v46 = v38;
					if (v38 < v41)
						v46 = v41;
					v47 = v45;
					v48 = v45 < v46;
					v49 = v46;
					v50 = v39;
					if (v48)
						v47 = v49;
					if (v44 < v42)
						v44 = v42;
					v51 = v47;
					if (v47 < (unsigned __int8)(v44 >> 1))
						v51 = v44 >> 1;
					if (v39 < v51)
						v50 = v51;
					++v3;
					*(v35 - 3) = v50;
					v4 = v84;
					v34 = v77;
				} while (v3 < v84);
				v5 = v87;
				v3 = 1;
				v7 = v96;
				v6 = a1;
			}
			v96 = ++v7;
		} while (v7 < v5);
	}
	else
	{
		if ((v29 & 8) == 0)
			goto LABEL_90;
		++v5;
		v85 = ++v4;
		v88 = v5;
		if (v5 <= 2)
			goto LABEL_90;
		do
		{
			v52 = v7 * *(_DWORD*)(v6 + 148);
			v53 = *(_QWORD*)(v6 + 168) + 2 * v52;
			if (v4 > 2)
			{
				v54 = (unsigned __int8*)(v53 + 2);
				v55 = *(_QWORD*)(v6 + 168) + 2 * v52 - 2i64 * *(int*)(v6 + 148) - v53;
				do
				{
					v56 = *v54;
					v57 = v54[v55];
					v58 = v54[2];
					v59 = v54[v55 + 2];
					v60 = v57;
					v54 += 2;
					v61 = (v56 + v59) >> 1;
					v48 = v57 < (unsigned __int8)v61;
					v62 = v61;
					v63 = v58;
					if (v48)
						v60 = v62;
					if (v58 < v60)
						v63 = v60;
					++v3;
					v54[1] = v63;
					v4 = v85;
				} while (v3 < v85);
				v5 = v88;
				v3 = 2;
			}
			++v7;
		} while (v7 < v5);
	}
	v7 = v82;
LABEL_90:
	v64 = *(unsigned int*)(v6 + 2364);
	v65 = v3 - 1;
	v66 = v7 - 1;
	v67 = v4 + 1 - v65;
	v68 = v5 + 1 - v66;
	v81 = v65;
	v69 = *(_QWORD*)(*(_QWORD*)(v6 + 16) + 16i64);
	if (v67 + *(_DWORD*)(v6 + 2344) > (unsigned int)v64)
	{
		v70 = *(_DWORD*)(v6 + 2352);
		*(_DWORD*)(v6 + 2344) = 0;
		*(_DWORD*)(v6 + 2348) += v70;
	}
	if (*(_DWORD*)(v6 + 2348) + *(_DWORD*)(v6 + 2352) > (unsigned int)v64)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, int, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)v69 + 88i64))(
			v69,
			v64,
			(unsigned int)v64,
			1i64,
			10,
			1,
			1,
			0,
			0,
			v6 + 2336);
		if ((int)result < 0)
			return result;
		sub_140033260((__int64*)(v6 + 2320), (_QWORD*)(v6 + 2336));
		v65 = v81;
		*(_QWORD*)(v6 + 2344) = qword_140C77760;
	}
	v72 = *(_DWORD*)(v6 + 2348);
	v89 = *(_DWORD*)(v6 + 2344);
	v90 = v72;
	v91 = v67 + v89;
	v73 = v68 + v72;
	v74 = *(_QWORD*)(v6 + 2336);
	v92 = v73;
	(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, int, int*))(*(_QWORD*)v74 + 96i64))(
		v74,
		0i64,
		10i64,
		*(_QWORD*)(v6 + 168) + 2 * (v65 + (__int64)(v66 * *(_DWORD*)(v6 + 148))),
		2 * *(_DWORD*)(v6 + 148),
		&v89);
	*(_QWORD*)a3 = *(_QWORD*)(v6 + 2336);
	*(_WORD*)(a3 + 8) = v89;
	*(_WORD*)(a3 + 10) = v90;
	*(_WORD*)(a3 + 12) = v91;
	*(_WORD*)(a3 + 14) = v92;
	*(_WORD*)(a3 + 16) = v81 + *(_WORD*)(a2 + 8) - 2;
	*(_WORD*)(a3 + 18) = v66 + *(_WORD*)(v6 + 180) - *(_WORD*)(a2 + 12) - 2;
	*(_DWORD*)(v6 + 2344) += v67;
	return 0i64;
}
// 140C77760: using guessed type __int64 qword_140C77760;

