#include "../winhttp.h"

//----- (00000001407B1160) ----------------------------------------------------
__int64 __fastcall sub_1407B1160(__int64* a1, __int64* a2, __int64* a3, int** a4)
{
	int* v7; // rax
	int* v8; // rbp
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rsi
	unsigned __int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // r11
	__int64 v15; // rdx
	__int16 v16; // r8
	__int16 v17; // r9
	int v18; // edi
	int* v19; // rbx
	unsigned __int64 v20; // rcx
	__int64 v21; // rdx
	int v22; // eax
	int* v23; // rcx
	__int64 v24; // rax
	unsigned __int64 v25; // rcx
	unsigned __int64 v26; // rcx
	unsigned __int64 v27; // rcx
	unsigned __int64 v28; // rcx
	_WORD* v29; // rcx
	__int64* v30; // rcx
	int* v32; // [rsp+20h] [rbp-58h] BYREF
	int* v33; // [rsp+28h] [rbp-50h] BYREF
	int* v34; // [rsp+30h] [rbp-48h] BYREF
	__int64 v35; // [rsp+38h] [rbp-40h] BYREF
	__int64 v36; // [rsp+40h] [rbp-38h] BYREF
	__int64 v37; // [rsp+48h] [rbp-30h] BYREF
	__int64 v38[5]; // [rsp+50h] [rbp-28h] BYREF

	v7 = sub_14018B280(48i64, 1u);
	v8 = v7;
	if (!v7)
		return 2147942414i64;
	*(_QWORD*)v7 = off_140B790B0;
	v7[2] = 1;
	v9 = (unsigned int)v7[2];
	*((_QWORD*)v7 + 3) = 0i64;
	*((_QWORD*)v7 + 4) = 0i64;
	*((_QWORD*)v7 + 5) = 0i64;
	v10 = *a2;
	v11 = *a1;
	*a3 = v10;
	if (v11 != v10)
	{
		do
		{
			v12 = 0i64;
			do
				++v12;
			while (word_1409FABFC[v12]);
			v13 = *(_QWORD*)(v11 + 8);
			v14 = (*(_QWORD*)(v11 + 16) - v13) >> 1;
			if (v14 == v12)
			{
				v15 = 0i64;
				if (!v12)
				{
				LABEL_11:
					v35 = v11 + 32;
					v33 = 0i64;
					v18 = sub_1407B1670(&v35, a2, &v36, &v33);
					if (v18 < 0)
					{
						v23 = v33;
					LABEL_67:
						if (v23)
							(*(void(__fastcall**)(int*))(*(_QWORD*)v23 + 8i64))(v23);
						goto LABEL_63;
					}
					v11 = v36;
					v19 = v33;
					goto LABEL_55;
				}
				while (1)
				{
					v16 = *(_WORD*)(v13 + 2 * v15);
					v17 = word_1409FABFC[v15];
					if (v16 != v17)
						break;
					if (++v15 >= v12)
						goto LABEL_11;
				}
			}
			v20 = 0i64;
			do
				++v20;
			while (word_1409FAC14[v20]);
			if (v14 != v20)
				goto LABEL_25;
			v21 = 0i64;
			if (v20)
			{
				while (*(_WORD*)(v13 + 2 * v21) == word_1409FAC14[v21])
				{
					if (++v21 >= v20)
						goto LABEL_21;
				}
			LABEL_25:
				v25 = 0i64;
				do
					++v25;
				while (word_1409FAC2C[v25]);
				if (v14 == v25)
				{
					v9 = 0i64;
					if (!v25)
					{
					LABEL_71:
						v30 = a3;
						*a3 = v11;
						goto LABEL_61;
					}
					while (*(_WORD*)(v13 + 2 * v9) == word_1409FAC2C[v9])
					{
						if (++v9 >= v25)
							goto LABEL_71;
					}
				}
				v26 = 0i64;
				do
					++v26;
				while (word_1409FACBC[v26]);
				if (v14 == v26)
				{
					v9 = 0i64;
					if (!v26)
						goto LABEL_59;
					while (*(_WORD*)(v13 + 2 * v9) == word_1409FACBC[v9])
					{
						if (++v9 >= v26)
							goto LABEL_59;
					}
				}
				v27 = 0i64;
				do
					++v27;
				while (word_1409FACFC[v27]);
				if (v14 == v27)
				{
					v9 = 0i64;
					if (!v27)
						goto LABEL_59;
					while (*(_WORD*)(v13 + 2 * v9) == word_1409FACFC[v9])
					{
						if (++v9 >= v27)
							goto LABEL_59;
					}
				}
				v28 = 0i64;
				do
					++v28;
				while (word_1409FAD3C[v28]);
				if (v14 == v28)
				{
					v9 = 0i64;
					if (!v28)
						goto LABEL_59;
					while (*(_WORD*)(v13 + 2 * v9) == word_1409FAD3C[v9])
					{
						if (++v9 >= v28)
							goto LABEL_59;
					}
				}
				v29 = *(_WORD**)(v11 + 8);
				v34 = 0i64;
				v18 = sub_1407B1D40(v29, &v34);
				if (v18 < 0)
				{
					if (v34)
						(*(void(__fastcall**)(int*))(*(_QWORD*)v34 + 8i64))(v34);
				LABEL_63:
					(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v8 + 8i64))(v8, v9);
					return (unsigned int)v18;
				}
				v19 = v34;
			LABEL_55:
				v18 = (*(__int64(__fastcall**)(int*, int*))(*(_QWORD*)v8 + 432i64))(v8, v19);
				if (v18 < 0)
				{
					if (v19)
						(*(void(__fastcall**)(int*))(*(_QWORD*)v19 + 8i64))(v19);
					goto LABEL_63;
				}
				if (v19)
				{
					v24 = *(_QWORD*)v19;
					v23 = v19;
					goto LABEL_58;
				}
				goto LABEL_59;
			}
		LABEL_21:
			v37 = v11 + 32;
			v32 = 0i64;
			v18 = sub_1407B1160(&v37, a2, v38, &v32);
			if (v18 < 0)
			{
				if (v32)
					(*(void(__fastcall**)(int*))(*(_QWORD*)v32 + 8i64))(v32);
				goto LABEL_63;
			}
			v11 = v38[0];
			v22 = (*(__int64(__fastcall**)(int*, int*))(*(_QWORD*)v8 + 432i64))(v8, v32);
			v23 = v32;
			v18 = v22;
			if (v22 < 0)
				goto LABEL_67;
			if (v32)
			{
				v24 = *(_QWORD*)v32;
			LABEL_58:
				(*(void(__fastcall**)(int*))(v24 + 8))(v23);
			}
		LABEL_59:
			v11 += 32i64;
		} while (v11 != *a2);
	}
	v30 = a3;
LABEL_61:
	if (*v30 == *a2)
	{
		v18 = -2147467259;
		goto LABEL_63;
	}
	*a4 = v8;
	return 0i64;
}
// 1407B1258: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B131F: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B13FD: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B146C: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B14DC: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B1541: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B15CC: variable 'v9' is possibly undefined
// 1409FABFC: using guessed type _WORD word_1409FABFC[12];
// 1409FAC14: using guessed type _WORD word_1409FAC14[12];
// 1409FAC2C: using guessed type _WORD word_1409FAC2C[72];
// 1409FACBC: using guessed type _WORD word_1409FACBC[32];
// 1409FACFC: using guessed type _WORD word_1409FACFC[32];
// 1409FAD3C: using guessed type _WORD word_1409FAD3C[44];
// 140B790B0: using guessed type __int64 (__fastcall *off_140B790B0[39])();
// 1407B1160: using guessed type __int64 var_28[5];

