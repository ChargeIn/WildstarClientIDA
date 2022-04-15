#include "../winhttp.h"

//----- (00000001400EB040) ----------------------------------------------------
void __fastcall sub_1400EB040(__int64 a1, int* a2, int a3, char a4)
{
	int* v4; // r12
	unsigned __int64 v5; // r14
	__int64 v8; // rax
	bool v9; // zf
	char* v10; // rsi
	unsigned __int64 v11; // rbx
	int* v12; // rsi
	__int64 v13; // r15
	__int64 v14; // r13
	_QWORD* v15; // rbx
	__int64 v16; // r15
	unsigned __int64* v17; // rcx
	__int64 v18; // rsi
	__int64* v19; // r8
	int v20; // eax
	bool v21; // sf
	__int64 v22; // rdx
	int* v23; // rsi
	__int64 v24; // rbx
	unsigned __int64* v25; // r8
	int v26; // eax
	bool v27; // sf
	__int64 v28; // rbx
	int* v29; // rax
	int* v30; // r15
	_BYTE* v31; // r12
	__int64 v32; // r14
	__int64 v33; // r13
	int* v34; // rbx
	int* v35; // rdi
	__int64 v36; // r14
	unsigned __int64* v37; // rcx
	int* v38; // rsi
	unsigned __int64* v39; // r8
	int v40; // eax
	bool v41; // sf
	__int64 v42; // rdx
	__int64 v43; // rsi
	unsigned __int64* v44; // r8
	__int64 v45; // rdi
	int v46; // eax
	bool v47; // sf
	__int64 v48; // rcx
	__int64 v49; // [rsp+38h] [rbp-29h]
	__int64 v50; // [rsp+40h] [rbp-21h] BYREF
	__int64 v51; // [rsp+48h] [rbp-19h] BYREF
	int* v52; // [rsp+50h] [rbp-11h] BYREF
	__int64 v53; // [rsp+58h] [rbp-9h] BYREF
	__int64 v54; // [rsp+60h] [rbp-1h] BYREF
	__int64 v55; // [rsp+68h] [rbp+7h]
	void(__fastcall * v56)(__int64); // [rsp+70h] [rbp+Fh]
	__int64 v57; // [rsp+78h] [rbp+17h]
	__int64 v58; // [rsp+80h] [rbp+1Fh]

	if (!a3)
		return;
	v4 = 0i64;
	v5 = -1i64;
	v8 = -1i64;
	do
		v9 = *((_BYTE*)a2 + ++v8) == 0;
	while (!v9);
	v10 = (char*)a2 + v8;
	v11 = v8;
	if (v8 != -2)
		v4 = sub_14018B280(v8 + 1, 0);
	sub_1407DB590(v4, a2, v11);
	v9 = &v10[(char*)v4 - (char*)a2] == 0i64;
	v12 = (int*)&v10[(char*)v4 - (char*)a2];
	v52 = v12;
	if (!v9)
		*(_BYTE*)v12 = 0;
	v49 = a1 + 208;
	v13 = *(_QWORD*)(a1 + 216);
	v53 = v13;
	v14 = v13;
	v15 = *(_QWORD**)(v13 + 8);
	if (v15)
	{
		v16 = (char*)v12 - (char*)v4;
		v50 = (char*)v12 - (char*)v4;
		while (1)
		{
			v17 = (unsigned __int64*)v15[5];
			v19 = &v50;
			v51 = v15[6] - (_QWORD)v17;
			v18 = v51;
			if (v16 >= v51)
				v19 = &v51;
			v20 = sub_1407E6AF0(v17, (__int64)v4, *v19);
			v21 = v20 < 0;
			if (!v20)
			{
				if (v18 < v16)
					goto LABEL_17;
				LOBYTE(v20) = v18 > v16;
				v21 = v20 < 0;
			}
			if (v21)
			{
			LABEL_17:
				v15 = (_QWORD*)v15[3];
				goto LABEL_18;
			}
			v14 = (__int64)v15;
			v15 = (_QWORD*)v15[2];
		LABEL_18:
			if (!v15)
			{
				v12 = v52;
				v13 = v53;
				break;
			}
		}
	}
	if (v14 == v13)
		goto LABEL_27;
	v22 = *(_QWORD*)(v14 + 40);
	v23 = (int*)((char*)v12 - (char*)v4);
	v24 = *(_QWORD*)(v14 + 48) - v22;
	v25 = (unsigned __int64*)&v53;
	v52 = v23;
	v53 = v24;
	if (v24 >= (__int64)v23)
		v25 = (unsigned __int64*)&v52;
	v26 = sub_1407E6AF0((unsigned __int64*)v4, v22, *v25);
	v27 = v26 < 0;
	if (!v26)
	{
		if ((__int64)v23 < v24)
		{
		LABEL_27:
			v53 = v13;
			goto LABEL_28;
		}
		LOBYTE(v26) = (__int64)v23 > v24;
		v27 = v26 < 0;
	}
	v53 = v14;
	if (v27)
		goto LABEL_27;
LABEL_28:
	v28 = v53;
	if (v4)
		sub_14018B900((__int64)v4, 0);
	if (v28 == *(_QWORD*)(a1 + 216))
	{
		v29 = sub_14018B280(152i64, 0);
		if (v29)
			v50 = sub_1400E2BA0((__int64)v29, a1, a2, a3, a4);
		else
			v50 = 0i64;
		v30 = 0i64;
		do
			v9 = *((_BYTE*)a2 + ++v5) == 0;
		while (!v9);
		if (v5 != -2i64)
			v30 = sub_14018B280(v5 + 1, 0);
		sub_1407DB590(v30, a2, v5);
		v31 = (char*)v30 + v5;
		if ((int*)((char*)v30 + v5))
			*v31 = 0;
		v32 = v49;
		v33 = *(_QWORD*)(v49 + 8);
		v34 = (int*)v33;
		v35 = *(int**)(v33 + 8);
		if (v35)
		{
			v36 = v31 - (_BYTE*)v30;
			v53 = v31 - (_BYTE*)v30;
			while (1)
			{
				v37 = (unsigned __int64*)*((_QWORD*)v35 + 5);
				v39 = (unsigned __int64*)&v53;
				v52 = (int*)(*((_QWORD*)v35 + 6) - (_QWORD)v37);
				v38 = v52;
				if (v36 >= (__int64)v52)
					v39 = (unsigned __int64*)&v52;
				v40 = sub_1407E6AF0(v37, (__int64)v30, *v39);
				v41 = v40 < 0;
				if (!v40)
				{
					if ((__int64)v38 < v36)
						goto LABEL_49;
					LOBYTE(v40) = (__int64)v38 > v36;
					v41 = v40 < 0;
				}
				if (v41)
				{
				LABEL_49:
					v35 = (int*)*((_QWORD*)v35 + 3);
					goto LABEL_50;
				}
				v34 = v35;
				v35 = (int*)*((_QWORD*)v35 + 2);
			LABEL_50:
				if (!v35)
				{
					v32 = v49;
					break;
				}
			}
		}
		if (v34 == (int*)v33)
			goto LABEL_59;
		v42 = *((_QWORD*)v34 + 5);
		v43 = *((_QWORD*)v34 + 6) - v42;
		v44 = (unsigned __int64*)&v53;
		v45 = v31 - (_BYTE*)v30;
		v53 = v43;
		v52 = (int*)(v31 - (_BYTE*)v30);
		if (v43 >= v31 - (_BYTE*)v30)
			v44 = (unsigned __int64*)&v52;
		v46 = sub_1407E6AF0((unsigned __int64*)v30, v42, *v44);
		v47 = v46 < 0;
		if (!v46)
		{
			if (v45 < v43)
				goto LABEL_59;
			LOBYTE(v46) = v45 > v43;
			v47 = v46 < 0;
		}
		if (!v47)
		{
		LABEL_61:
			*((_QWORD*)v34 + 8) = v50;
			if (v30)
				sub_14018B900((__int64)v30, 0);
			return;
		}
	LABEL_59:
		v55 = 0i64;
		v56 = 0i64;
		v57 = 0i64;
		sub_14001B240(&v54, v30, (__int64)v31);
		v58 = 0i64;
		v53 = (__int64)v34;
		sub_1400EE370(v32, &v52, &v53, (__int64)&v54);
		v34 = v52;
		if (v55)
			sub_14018B900(v55, 0);
		goto LABEL_61;
	}
	v48 = *(_QWORD*)(v28 + 64);
	if (!*(_QWORD*)(v48 + 96))
	{
		*(_BYTE*)(v48 + 76) = a4;
		*(_DWORD*)(v48 + 72) = a3;
		LODWORD(v54) = 0;
		v57 = 0i64;
		v55 = v48;
		v56 = sub_1400E2D20;
		sub_140195960(v48 + 80, a3, (__int64)&v54, 4);
	}
}

