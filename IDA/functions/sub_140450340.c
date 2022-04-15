#include "../winhttp.h"

//----- (0000000140450340) ----------------------------------------------------
void __fastcall sub_140450340(__int64 a1, __int64 a2, int** a3)
{
	_QWORD* v4; // r12
	int* v5; // rbp
	__int64 v6; // rax
	__int64 v8; // rdi
	int* v9; // rdi
	__int64 v10; // rax
	int* v11; // rsi
	__int64 v12; // r14
	__int64 v13; // rdi
	__int64 v14; // rsi
	unsigned __int64 v15; // r15
	__int64 v16; // rdx
	_QWORD* v17; // r14
	_WORD* v18; // rcx
	unsigned __int16* v19; // rbp
	unsigned __int64 v20; // rax
	unsigned __int64 v21; // rbx
	unsigned __int64 v22; // rdi
	_WORD* v23; // rsi
	unsigned __int64 v24; // r13
	_QWORD* v25; // rax
	__int64 v26; // rax
	unsigned __int64 v27; // r15
	unsigned __int64 v28; // r12
	_WORD** v29; // r14
	_WORD* v30; // rbx
	unsigned __int64 v31; // rax
	unsigned __int64 v32; // rdi
	_WORD* v33; // rsi
	__int64 k; // rbx
	__int64 v35; // rcx
	__int64 v36; // [rsp+30h] [rbp-B8h]
	_WORD* j; // [rsp+38h] [rbp-B0h]
	char v38[8]; // [rsp+40h] [rbp-A8h] BYREF
	__int64 v39; // [rsp+48h] [rbp-A0h]
	__int64 v40; // [rsp+50h] [rbp-98h]
	char v41[8]; // [rsp+60h] [rbp-88h] BYREF
	int* v42; // [rsp+68h] [rbp-80h]
	__int64 v44; // [rsp+78h] [rbp-70h]
	char v45[8]; // [rsp+80h] [rbp-68h] BYREF
	int* v46; // [rsp+88h] [rbp-60h]
	__int64 v48; // [rsp+98h] [rbp-50h]
	__int64 i; // [rsp+F0h] [rbp+8h]
	_QWORD* v51; // [rsp+100h] [rbp+18h]
	_QWORD* v52; // [rsp+108h] [rbp+20h]

	v4 = (_QWORD*)a2;
	v5 = 0i64;
	v42 = 0i64;
	v44 = 0i64;
	v6 = 0i64;
	while (asc_140B033E0[++v6] != 0)
		;
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v8 + 1), 0);
		v42 = v5;
		v44 = (__int64)v5 + 2 * v8 + 2;
	}
	sub_1407DB590(v5, (int*)L" \t\r\n", 2 * v8);
	if ((int*)((char*)v5 + 2 * v8))
		*((_WORD*)v5 + v8) = 0;
	v9 = *a3;
	v10 = 0i64;
	v46 = 0i64;
	v11 = 0i64;
	v48 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	v12 = (2 * v10) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v11 = sub_14018B280(2 * (v12 + 1), 0);
		v46 = v11;
		v48 = (__int64)v11 + 2 * v12 + 2;
	}
	sub_1407DB590(v11, v9, 2 * v12);
	if ((int*)((char*)v11 + 2 * v12))
		*((_WORD*)v11 + v12) = 0;
	sub_14018F570((__int64)v38, (__int64)v45, (__int64)v41, 34, 92);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	v13 = v40;
	v14 = v39;
	v15 = 0i64;
	for (i = 0i64; v15 < v4[1]; i = v15)
	{
		v16 = v14;
		v36 = v14;
		if (v14 != v13)
		{
			v17 = *(_QWORD**)(*v4 + 8 * v15);
			v52 = v17;
			v18 = (_WORD*)v17[6];
			for (j = v18; ; v18 = j)
			{
				v19 = *(unsigned __int16**)(v16 + 8);
				v20 = 0i64;
				if (*v18)
				{
					do
						++v20;
					while (v18[v20]);
				}
				v21 = 0i64;
				if (*v19)
				{
					do
						++v21;
					while (v19[v21]);
					if (v20 < v21)
						goto LABEL_30;
				}
				v22 = (unsigned __int64)v18;
				v23 = &v18[v20 - v21];
				if (v18 > v23)
					goto LABEL_30;
				while ((unsigned int)sub_14018E520(v22, v19, v21))
				{
					v22 += 2i64;
					if (v22 > (unsigned __int64)v23)
						goto LABEL_30;
				}
				if (!v22)
				{
				LABEL_30:
					v24 = 0i64;
					if (!v17[11])
					{
					LABEL_47:
						v4 = (_QWORD*)a2;
						sub_140007270(a2, i);
						v13 = v40;
						v15 = i - 1;
						goto LABEL_52;
					}
					v25 = (_QWORD*)v17[10];
					v51 = v25;
					while (1)
					{
						v26 = *v25;
						v27 = 0i64;
						v28 = *(_QWORD*)(v26 + 32);
						if (v28)
							break;
					LABEL_46:
						++v24;
						v25 = ++v51;
						if (v24 >= v17[11])
							goto LABEL_47;
					}
					v29 = *(_WORD***)(v26 + 24);
					while (1)
					{
						v30 = *v29;
						v31 = 0i64;
						if (**v29)
						{
							do
								++v31;
							while (v30[v31]);
						}
						v32 = 0i64;
						if (!*v19)
							goto LABEL_62;
						do
							++v32;
						while (v19[v32]);
						if (v31 >= v32)
						{
						LABEL_62:
							v33 = &v30[v31 - v32];
							if (v30 <= v33)
							{
								while ((unsigned int)sub_14018E520((__int64)v30, v19, v32))
								{
									if (++v30 > v33)
										goto LABEL_44;
								}
								if (v30)
									break;
							}
						}
					LABEL_44:
						++v27;
						++v29;
						if (v27 >= v28)
						{
							v17 = v52;
							goto LABEL_46;
						}
					}
					v17 = v52;
				}
				v13 = v40;
				v16 = v36 + 32;
				v36 = v16;
				if (v16 == v40)
					break;
			}
			v15 = i;
			v4 = (_QWORD*)a2;
		LABEL_52:
			v14 = v39;
		}
		++v15;
	}
	for (k = v14; k != v13; k += 32i64)
	{
		v35 = *(_QWORD*)(k + 8);
		if (v35)
			sub_14018B900(v35, 0);
	}
	if (v14)
		sub_14018B900(v14, 0);
}
// 140B033E0: using guessed type wchar_t asc_140B033E0[5];
// 140450340: using guessed type char var_88[8];
// 140450340: using guessed type char var_68[8];
// 140450340: using guessed type char var_A8[8];

