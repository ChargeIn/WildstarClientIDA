#include "../winhttp.h"

//----- (0000000140108730) ----------------------------------------------------
wchar_t** __fastcall sub_140108730(__int64 a1)
{
	__int64 v2; // r13
	int v3; // r14d
	__int64 v4; // rbp
	int* v5; // rdi
	int* v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx
	int* v10; // rdi
	__int64 v11; // rbx
	unsigned __int64 v12; // rbx
	__int64 v13; // rbx
	int* v14; // rax
	_QWORD* v15; // r14
	int* v16; // r12
	int* v17; // rax
	unsigned __int16* v18; // rbp
	void(__fastcall * **v19)(_QWORD); // rbx
	__int64 v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rsi
	__int64 v23; // rbx
	_QWORD* v24; // rax
	int* v25; // rdx
	unsigned __int16* v26; // rbp
	void(__fastcall * **v27)(_QWORD); // rbx
	__int64 v28; // rax
	__int64 v29; // rdi
	__int64 v30; // rsi
	__int64 v31; // rbx
	_QWORD* v32; // rax
	int* v33; // rdx
	unsigned __int16* v34; // rbp
	void(__fastcall * **v35)(_QWORD); // rbx
	__int64 v36; // rax
	__int64 v37; // rdi
	__int64 v38; // rsi
	__int64 v39; // rbx
	_QWORD* v40; // rax
	int* v41; // rdx
	int* v42; // rdx
	wchar_t** result; // rax
	__int64 v44; // [rsp+30h] [rbp-78h]
	__int64 v45; // [rsp+38h] [rbp-70h]
	void(__fastcall * **v46)(_QWORD); // [rsp+40h] [rbp-68h] BYREF
	__int64 v47; // [rsp+48h] [rbp-60h] BYREF
	int* v48; // [rsp+50h] [rbp-58h]
	int* v49; // [rsp+58h] [rbp-50h]
	__int64 v50; // [rsp+60h] [rbp-48h]
	char v51; // [rsp+B8h] [rbp+10h]
	int v52; // [rsp+C0h] [rbp+18h]
	_QWORD* v53; // [rsp+C8h] [rbp+20h] BYREF

	v2 = a1 + 288;
	v3 = 0;
	v52 = 0;
	v4 = 0i64;
	v45 = 0i64;
	do
	{
		v5 = (int*)off_140A33098[v4];
		v6 = 0i64;
		v44 = 0i64;
		v7 = 0i64;
		if (*(_WORD*)v5)
		{
			do
				++v7;
			while (*((_WORD*)v5 + v7));
		}
		v8 = (2 * v7) >> 1;
		if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v6 = sub_14018B280(2 * (v8 + 1), 0);
			v44 = (__int64)v6;
		}
		v9 = 2 * v8;
		sub_1407DB590(v6, v5, v9);
		v10 = (int*)((char*)v6 + v9);
		if ((int*)((char*)v6 + v9))
			*(_WORD*)v10 = 0;
		v11 = *(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64);
		v48 = 0i64;
		v49 = 0i64;
		v50 = 0i64;
		v12 = (((char*)v10 - (char*)v6) >> 1) + (v11 >> 1) + 1;
		if (v12 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v13 = 2 * v12;
			v14 = sub_14018B280(v13, 0);
			v48 = v14;
			v49 = v14;
			v50 = (__int64)v14 + v13;
			if (v14)
				*(_WORD*)v14 = 0;
		}
		sub_14001C310(&v47, *(int**)(a1 + 64), *(int**)(a1 + 72));
		sub_14001C310(&v47, v6, v10);
		v51 = 0;
		if (v4 < 0 || v3 >= (int)((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 3))
			v15 = 0i64;
		else
			v15 = *(_QWORD**)(*(_QWORD*)(a1 + 32) + 8 * v4);
		v16 = v48;
		v53 = v15;
		if (v15)
		{
			sub_140101710((__int64)v15);
		}
		else
		{
			v51 = 1;
			v17 = sub_14018B280(120i64, 0);
			if (v17)
			{
				v15 = (_QWORD*)sub_140100930(
					(__int64)v17,
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64),
					*(_QWORD*)(a1 + 8),
					v16,
					3);
				v53 = v15;
			}
			else
			{
				v15 = 0i64;
				v53 = 0i64;
			}
		}
		sub_140100CD0((__int64)v15, *(_QWORD*)(a1 + 8), v16);
		v18 = *(unsigned __int16**)v2;
		v19 = 0i64;
		if ((__int64)(*(_QWORD*)(v2 + 8) - *(_QWORD*)v2) >> 1)
		{
			v20 = *(_QWORD*)(a1 + 8);
			if (v18)
			{
				v21 = *(_QWORD*)(v20 + 64);
				v22 = *(_QWORD*)(v20 + 72);
				if (v21 == v22)
				{
				LABEL_26:
					v19 = 0i64;
				}
				else
				{
					while (1)
					{
						v23 = *(_QWORD*)(*(_QWORD*)v21 + 40i64);
						v24 = sub_14010A540(*(_QWORD**)(*(_QWORD*)v21 + 32i64), v23, v18);
						if (v24 != (_QWORD*)v23)
						{
							v19 = (void(__fastcall***)(_QWORD)) * v24;
							if (*v24)
								break;
						}
						v21 += 8i64;
						if (v21 == v22)
							goto LABEL_26;
					}
				}
			}
		}
		v46 = v19;
		if (v19 != v15 && v19)
		{
			(**v19)(v19);
			v25 = (int*)v15[12];
			if (v25 == (int*)v15[13])
			{
				sub_1400B9430(v15 + 10, v25, &v46);
			}
			else
			{
				if (v25)
					*(_QWORD*)v25 = v19;
				v15[12] += 8i64;
			}
		}
		v26 = *(unsigned __int16**)(v2 - 192);
		v27 = 0i64;
		if (!((__int64)(*(_QWORD*)(v2 - 184) - (_QWORD)v26) >> 1))
			goto LABEL_41;
		v28 = *(_QWORD*)(a1 + 8);
		if (!v26)
			goto LABEL_41;
		v29 = *(_QWORD*)(v28 + 64);
		v30 = *(_QWORD*)(v28 + 72);
		if (v29 == v30)
		{
		LABEL_40:
			v27 = 0i64;
		LABEL_41:
			if ((__int64)(*(_QWORD*)(a1 + 104) - *(_QWORD*)(a1 + 96)) >> 1)
				v27 = (void(__fastcall***)(_QWORD))sub_140104190(*(_QWORD*)(a1 + 8), *(unsigned __int16**)(a1 + 96));
			goto LABEL_43;
		}
		while (1)
		{
			v31 = *(_QWORD*)(*(_QWORD*)v29 + 40i64);
			v32 = sub_14010A540(*(_QWORD**)(*(_QWORD*)v29 + 32i64), v31, v26);
			if (v32 != (_QWORD*)v31)
			{
				v27 = (void(__fastcall***)(_QWORD)) * v32;
				if (*v32)
					break;
			}
			v29 += 8i64;
			if (v29 == v30)
				goto LABEL_40;
		}
	LABEL_43:
		v46 = v27;
		if (v27 != v15 && v27)
		{
			(**v27)(v27);
			v33 = (int*)v15[12];
			if (v33 == (int*)v15[13])
			{
				sub_1400B9430(v15 + 10, v33, &v46);
			}
			else
			{
				if (v33)
					*(_QWORD*)v33 = v27;
				v15[12] += 8i64;
			}
		}
		v34 = *(unsigned __int16**)(v2 + 192);
		v35 = 0i64;
		if ((__int64)(*(_QWORD*)(v2 + 200) - (_QWORD)v34) >> 1)
		{
			v36 = *(_QWORD*)(a1 + 8);
			if (v34)
			{
				v37 = *(_QWORD*)(v36 + 64);
				v38 = *(_QWORD*)(v36 + 72);
				if (v37 == v38)
				{
				LABEL_56:
					v35 = 0i64;
				}
				else
				{
					while (1)
					{
						v39 = *(_QWORD*)(*(_QWORD*)v37 + 40i64);
						v40 = sub_14010A540(*(_QWORD**)(*(_QWORD*)v37 + 32i64), v39, v34);
						if (v40 != (_QWORD*)v39)
						{
							v35 = (void(__fastcall***)(_QWORD)) * v40;
							if (*v40)
								break;
						}
						v37 += 8i64;
						if (v37 == v38)
							goto LABEL_56;
					}
				}
			}
		}
		v46 = v35;
		if (v35 != v15 && v35)
		{
			(**v35)(v35);
			v41 = (int*)v15[12];
			if (v41 == (int*)v15[13])
			{
				sub_1400B9430(v15 + 10, v41, &v46);
			}
			else
			{
				if (v41)
					*(_QWORD*)v41 = v35;
				v15[12] += 8i64;
			}
		}
		if (v51)
		{
			v42 = *(int**)(a1 + 40);
			if (v42 == *(int**)(a1 + 48))
			{
				sub_1400B9430((_QWORD*)(a1 + 24), v42, &v53);
			}
			else
			{
				if (v42)
					*(_QWORD*)v42 = v15;
				*(_QWORD*)(a1 + 40) += 8i64;
			}
		}
		if (v16)
			sub_14018B900((__int64)v16, 0);
		if (v44)
			sub_14018B900(v44, 0);
		v2 += 32i64;
		v4 = v45 + 1;
		v3 = v52 + 1;
		result = off_140A33098;
		++v52;
		v45 = v4;
	} while (v4 < 6);
	return result;
}
// 140A33098: using guessed type wchar_t *off_140A33098[25];

