//----- (00000001405582B0) ----------------------------------------------------
_QWORD* __fastcall sub_1405582B0(__int64 a1, _QWORD* a2, int a3, __int64 a4, int a5, unsigned int a6)
{
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // edx
	__int64 v11; // rax
	int v12; // edx
	bool v13; // zf
	__int16* v14; // rax
	int* v15; // rbx
	__int64 v16; // rax
	int v17; // edx
	__int16* v18; // rax
	__int64 v19; // rax
	__int64 v20; // rax
	int v21; // edx
	__int16* v22; // rax
	int* v23; // rax
	__int64 v24; // rax
	__int64* v25; // rax
	__int64* v26; // r12
	int* v27; // r14
	__int64 v28; // rax
	__int64 v29; // r15
	int* v30; // rax
	int* v31; // rax
	_QWORD* v32; // r12
	__int64 v33; // rax
	int* v34; // r14
	__int64 v35; // r15
	int* v36; // rax
	unsigned __int64 v37; // r15
	__int64 v38; // r12
	unsigned int v39; // r14d
	__int64 v40; // rax
	_QWORD* v41; // rdi
	_QWORD* v42; // rbx
	__int64 v43; // rbx
	int* v44; // rax
	_QWORD* v45; // r14
	__int64 v46; // rax
	int* v47; // rdi
	__int64 v48; // r15
	int* v49; // rax
	__int64 v50; // rax
	int* v51; // rax
	char v53[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v54; // [rsp+28h] [rbp-D8h]
	int* v55; // [rsp+30h] [rbp-D0h]
	__int64 v56; // [rsp+38h] [rbp-C8h]
	__int64 v57; // [rsp+40h] [rbp-C0h] BYREF
	int* v58; // [rsp+48h] [rbp-B8h]
	int* v59; // [rsp+50h] [rbp-B0h]
	__int64 v60; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v61)(); // [rsp+60h] [rbp-A0h] BYREF
	char v62[184]; // [rsp+68h] [rbp-98h] BYREF
	__int128 v63; // [rsp+120h] [rbp+20h]
	int* v64; // [rsp+130h] [rbp+30h]

	v8 = 0x140000000ui64;
	switch (a3)
	{
	case 6:
	case 7:
	case 8:
		v9 = *(_QWORD*)(a4 + 8);
		if (!v9)
			goto LABEL_82;
		v10 = *(_DWORD*)(v9 + 4);
		goto LABEL_29;
	case 9:
		v10 = 20679;
		goto LABEL_29;
	case 10:
		v11 = *(_QWORD*)(a4 + 8);
		if (!v11)
			goto LABEL_10;
		v12 = *(_DWORD*)(v11 + 228);
		goto LABEL_6;
	case 11:
		v16 = *(_QWORD*)(a4 + 8);
		if (v16)
		{
			v17 = *(_DWORD*)(v16 + 224);
			if (v17)
			{
				v18 = sub_14034BDD0(0x140000000i64, v17);
				v15 = (int*)v18;
				if (v18)
				{
					if (*v18)
						goto LABEL_30;
				}
			}
		}
		v10 = 20687;
		goto LABEL_29;
	case 12:
		if (a5 && (v19 = *(_QWORD*)(a4 + 8), (v12 = *(_DWORD*)(v19 + 276)) != 0))
		{
			v13 = v19 == 0;
		}
		else
		{
			v20 = *(_QWORD*)(a4 + 8);
			if (!v20)
				goto LABEL_10;
			v12 = *(_DWORD*)(v20 + 280);
		LABEL_6:
			v13 = v12 == 0;
		}
		if (!v13)
		{
			v14 = sub_14034BDD0(0x140000000i64, v12);
			v15 = (int*)v14;
			if (v14)
			{
				if (*v14)
					goto LABEL_30;
			}
		}
	LABEL_10:
		v10 = 20686;
	LABEL_29:
		v15 = (int*)sub_14034BDD0(v8, v10);
	LABEL_30:
		if (v15 && *(_WORD*)v15)
		{
			sub_1400B6F30((__int64)&v61);
			v63 = 0i64;
			v61 = off_140B69230;
			v64 = 0i64;
			v23 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v63 = v23;
			*((_QWORD*)&v63 + 1) = v23;
			v64 = v23 + 4;
			if (v23)
				*(_WORD*)v23 = 0;
			v24 = 0i64;
			if (*(_WORD*)v15)
			{
				do
					++v24;
				while (*((_WORD*)v15 + v24));
			}
			sub_14001C480((__int64)v62, v15, (int*)((char*)v15 + 2 * v24));
			if (a4)
			{
				v25 = (__int64*)sub_14018B280(88i64, 0);
				if (v25)
					v26 = sub_1404DD130(v25, **(_DWORD**)(a4 + 8));
				else
					v26 = 0i64;
				v27 = 0i64;
				v58 = 0i64;
				v59 = 0i64;
				v60 = 0i64;
				v28 = 0i64;
				do
					v13 = aQuest_5[++v28] == 0;
				while (!v13);
				v29 = (2 * v28) >> 1;
				if ((unsigned __int64)(v29 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v27 = sub_14018B280(2 * (v29 + 1), 0);
					v58 = v27;
					v59 = v27;
					v60 = (__int64)v27 + 2 * v29 + 2;
				}
				sub_1407DB590(v27, (int*)L"quest", 2 * v29);
				v30 = (int*)((char*)v27 + 2 * v29);
				v59 = v30;
				if (v30)
					*(_WORD*)v30 = 0;
				sub_1400B7480((__int64)&v61, v26);
				(*(void(__fastcall**)(__int64*, __int64*))(*v26 + 72))(v26, &v57);
				if (v58)
					sub_14018B900((__int64)v58, 0);
			}
			v31 = sub_14018B280(96i64, 0);
			if (v31)
				v32 = (_QWORD*)sub_1404DB7E0((__int64)v31, *(_QWORD*)(qword_140C65898 + 120));
			else
				v32 = 0i64;
			v33 = 0i64;
			v34 = 0i64;
			v54 = 0i64;
			v55 = 0i64;
			v56 = 0i64;
			do
				++v33;
			while (word_140B0A7D8[v33]);
			v35 = (2 * v33) >> 1;
			if ((unsigned __int64)(v35 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v34 = sub_14018B280(2 * (v35 + 1), 0);
				v54 = v34;
				v55 = v34;
				v56 = (__int64)v34 + 2 * v35 + 2;
			}
			sub_1407DB590(v34, (int*)word_140B0A7D8, 2 * v35);
			v36 = (int*)((char*)v34 + 2 * v35);
			v55 = v36;
			if (v36)
				*(_WORD*)v36 = 0;
			sub_1400B7480((__int64)&v61, v32);
			(*(void(__fastcall**)(_QWORD*, char*))(*v32 + 72i64))(v32, v53);
			if (v54)
				sub_14018B900((__int64)v54, 0);
			if (a4)
			{
				sub_1405518E0(a4, &v57);
				v37 = (unsigned __int64)v58;
				v38 = v57;
				v39 = 0;
				if (v58)
				{
					v40 = 0i64;
					do
					{
						v41 = *(_QWORD**)(v38 + 8 * v40);
						v42 = sub_14018EFA0(&v57, (__int64)L"objective%d", v39);
						sub_1400B7480((__int64)&v61, v41);
						(*(void(__fastcall**)(_QWORD*, _QWORD*))(*v41 + 72i64))(v41, v42);
						if (v58)
							sub_14018B900((__int64)v58, 0);
						v40 = ++v39;
					} while (v39 < v37);
				}
				if (v38)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
			}
			v43 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 4));
			if (v43)
			{
				v44 = sub_14018B280(96i64, 0);
				if (v44)
					v45 = (_QWORD*)sub_1404DB7E0((__int64)v44, v43);
				else
					v45 = 0i64;
				v46 = 0i64;
				v47 = 0i64;
				v54 = 0i64;
				v55 = 0i64;
				v56 = 0i64;
				do
					++v46;
				while (word_140B0A7C8[v46]);
				v48 = (2 * v46) >> 1;
				if ((unsigned __int64)(v48 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v47 = sub_14018B280(2 * (v48 + 1), 0);
					v54 = v47;
					v55 = v47;
					v56 = (__int64)v47 + 2 * v48 + 2;
				}
				sub_1407DB590(v47, (int*)word_140B0A7C8, 2 * v48);
				v49 = (int*)((char*)v47 + 2 * v48);
				v55 = v49;
				if (v49)
					*(_WORD*)v49 = 0;
				sub_1400B7480((__int64)&v61, v45);
				(*(void(__fastcall**)(_QWORD*, char*))(*v45 + 72i64))(v45, v53);
				if (v54)
					sub_14018B900((__int64)v54, 0);
			}
			v50 = sub_1400B7660(&v61);
			sub_14018F0E0(a2, *(unsigned __int16**)(v50 + 8));
			if ((_QWORD)v63)
				sub_14018B900(v63, 0);
			sub_1400B7390(&v61);
		}
		else
		{
		LABEL_82:
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			v51 = sub_14018B280(8i64, 0);
			a2[1] = v51;
			a2[2] = v51;
			a2[3] = v51 + 2;
			if (v51)
				*(_BYTE*)v51 = 0;
		}
		return a2;
	case 13:
		if (!a5)
			goto LABEL_82;
		v8 = *(_QWORD*)(a4 + 8);
		if (v8)
		{
			v21 = *(_DWORD*)(v8 + 4i64 * a6 + 312);
			if (v21)
			{
				v22 = sub_14034BDD0(v8, v21);
				v15 = (int*)v22;
				if (v22)
				{
					if (*v22)
						goto LABEL_30;
				}
			}
		}
		v10 = 192075;
		goto LABEL_29;
	case 14:
		v10 = 23966;
		goto LABEL_29;
	default:
		goto LABEL_82;
	}
}
// 1405583EA: variable 'v8' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B1E638: using guessed type wchar_t aObjectiveD_3[12];
// 140B1E6F0: using guessed type wchar_t aQuest_5[6];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405582B0: using guessed type char var_F8[184];
// 1405582B0: using guessed type char var_140[8];

