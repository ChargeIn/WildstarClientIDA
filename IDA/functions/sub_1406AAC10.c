//----- (00000001406AAC10) ----------------------------------------------------
__int64 __fastcall sub_1406AAC10(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rbx
	char* v9; // rdx
	_DWORD* v10; // rax
	int* v11; // rsi
	__int64 v12; // rdi
	int* v13; // rax
	int* v14; // rbx
	unsigned __int64 v15; // rdi
	__int64 v16; // rcx
	unsigned __int64 v17; // rax
	__int64 v18; // rdi
	__int64 v19; // rax
	unsigned __int64 v20; // rdi
	int* v21; // rax
	unsigned __int16* v22; // rsi
	unsigned __int64 v23; // rdi
	unsigned __int64 v24; // rdi
	int* v25; // rax
	unsigned __int16* v26; // rsi
	unsigned __int64 v27; // rdi
	unsigned __int64 v28; // rdi
	int* v29; // rax
	unsigned __int16* v30; // rsi
	unsigned __int64 v31; // rdi
	int v32; // edx
	unsigned __int64 v33; // rdi
	int* v34; // rax
	unsigned __int16* v35; // rsi
	unsigned __int64 v36; // rdi
	__int64 v37; // rdi
	_QWORD* v38; // rax
	__int64 v39; // r9
	int v40; // r8d
	__int64 v41; // rdx
	__int64 v43; // rax
	__int64(__fastcall * *v44)(); // [rsp+20h] [rbp-50h] BYREF
	int* v45; // [rsp+28h] [rbp-48h]
	_QWORD* v46; // [rsp+30h] [rbp-40h]
	int v47; // [rsp+38h] [rbp-38h]
	__int64 v48; // [rsp+40h] [rbp-30h] BYREF
	__int64 v49; // [rsp+48h] [rbp-28h]
	unsigned __int16* v50; // [rsp+98h] [rbp+28h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		v4 = 0;
		if (v3)
		{
			v5 = *(_QWORD*)(qword_140C63650 + 760);
			v6 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
			{
				v6 = ++v4;
				if (v4 >= v3)
					goto LABEL_7;
			}
			v7 = *(_QWORD*)(v5 + 8i64 * v4);
		}
		else
		{
		LABEL_7:
			v7 = 0i64;
		}
		v8 = *(_QWORD**)(v7 + 400);
		v9 = (char*)sub_14018F0E0(&v48, word_1409F671C)[1];
		v10 = (_DWORD*)(v8[3] + 16i64);
		if ((unsigned __int64)v10 < v8[2] && v10 != dword_140A12138 && *(int*)(v8[3] + 24i64) > 0)
			v9 = (char*)sub_140056BB0(v8, 2u, 0i64);
		sub_14018F2D0(&v44, v9);
		if (v49)
			sub_14018B900(v49, 0);
		v11 = v45;
		if (v45)
		{
			v12 = 0i64;
			if (*(_WORD*)v45)
			{
				do
					++v12;
				while (*((_WORD*)v45 + v12));
			}
			v13 = sub_14018B280(2 * v12 + 18, 0);
			if (v13)
			{
				*(_QWORD*)v13 = off_140B55060;
				*((_QWORD*)v13 + 1) = v12;
			}
			else
			{
				v13 = 0i64;
			}
			v14 = v13 + 4;
			v15 = 2 * v12;
			sub_1407DB590(v13 + 4, v11, v15);
			*(_WORD*)((char*)v14 + v15) = 0;
			sub_14018B900((__int64)v11, 0);
		}
		else
		{
			v14 = 0i64;
		}
		v16 = a1[4];
		v46 = a1;
		v44 = off_140B569F0;
		v17 = *(_QWORD*)(v16 + 112);
		v47 = 1;
		if (*(_QWORD*)(v16 + 120) >= v17)
			sub_14005E2C0((__int64)a1);
		v18 = a1[2];
		v19 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v18 + 8) = 5;
		*(_QWORD*)v18 = v19;
		a1[2] += 16i64;
		LODWORD(v45) = sub_1400578C0((__int64)a1);
		if (qword_140C7DFE0)
		{
			if (v14)
			{
				v33 = *((_QWORD*)v14 - 1);
				v34 = sub_14018B280(2 * v33 + 18, 0);
				if (v34)
				{
					*(_QWORD*)v34 = off_140B55060;
					*((_QWORD*)v34 + 1) = v33;
				}
				else
				{
					v34 = 0i64;
				}
				v35 = (unsigned __int16*)(v34 + 4);
				v36 = v33;
				sub_1407DB590(v34 + 4, v14, v36 * 2);
				v35[v36] = 0;
				v50 = v35;
			}
			else
			{
				v50 = 0i64;
			}
			v32 = 53;
		}
		else
		{
			if (v14)
			{
				v20 = *((_QWORD*)v14 - 1);
				v21 = sub_14018B280(2 * v20 + 18, 0);
				if (v21)
				{
					*(_QWORD*)v21 = off_140B55060;
					*((_QWORD*)v21 + 1) = v20;
				}
				else
				{
					v21 = 0i64;
				}
				v22 = (unsigned __int16*)(v21 + 4);
				v23 = v20;
				sub_1407DB590(v21 + 4, v14, v23 * 2);
				v22[v23] = 0;
				v50 = v22;
			}
			else
			{
				v50 = 0i64;
			}
			sub_1406AB000(a1, 12, (__int64)&v44, &v50);
			if (v14)
			{
				v24 = *((_QWORD*)v14 - 1);
				v25 = sub_14018B280(2 * v24 + 18, 0);
				if (v25)
				{
					*(_QWORD*)v25 = off_140B55060;
					*((_QWORD*)v25 + 1) = v24;
				}
				else
				{
					v25 = 0i64;
				}
				v26 = (unsigned __int16*)(v25 + 4);
				v27 = v24;
				sub_1407DB590(v25 + 4, v14, v27 * 2);
				v26[v27] = 0;
				v50 = v26;
			}
			else
			{
				v50 = 0i64;
			}
			sub_1406AB000(a1, 22, (__int64)&v44, &v50);
			if (v14)
			{
				v28 = *((_QWORD*)v14 - 1);
				v29 = sub_14018B280(2 * v28 + 18, 0);
				if (v29)
				{
					*(_QWORD*)v29 = off_140B55060;
					*((_QWORD*)v29 + 1) = v28;
				}
				else
				{
					v29 = 0i64;
				}
				v30 = (unsigned __int16*)(v29 + 4);
				v31 = v28;
				sub_1407DB590(v29 + 4, v14, v31 * 2);
				v30[v31] = 0;
				v50 = v30;
				v32 = 54;
			}
			else
			{
				v50 = 0i64;
				v32 = 54;
			}
		}
		sub_1406AB000(a1, v32, (__int64)&v44, &v50);
		v37 = (__int64)v46;
		v38 = sub_14005C3C0(*(_QWORD*)(v46[4] + 160i64), (int)v45);
		v39 = *(_QWORD*)(v37 + 16);
		v40 = (int)v45;
		*(_QWORD*)v39 = *v38;
		v41 = *((unsigned int*)v38 + 2);
		*(_DWORD*)(v39 + 8) = v41;
		*(_QWORD*)(v37 + 16) += 16i64;
		sub_1400579E0(v37, v41, v40);
		if (v14)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
		return 1i64;
	}
	else
	{
		v43 = a1[2];
		*(_QWORD*)v43 = 0i64;
		*(_DWORD*)(v43 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1409F671C: using guessed type unsigned __int16 word_1409F671C[36];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

