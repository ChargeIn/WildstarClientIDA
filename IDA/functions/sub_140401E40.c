#include "../winhttp.h"

//----- (0000000140401E40) ----------------------------------------------------
void __fastcall sub_140401E40(__int64 a1, int* a2)
{
	_DWORD* v2; // r8
	__int64 v4; // r12
	int* v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rsi
	int* v10; // r14
	__int64 v11; // rax
	bool v12; // zf
	__int64 v13; // r15
	_WORD* v14; // rax
	__int64 v15; // rcx
	int* v16; // r15
	int* v17; // r15
	__int64 v18; // rax
	__int64 v19; // r14
	__int64 v20; // rax
	int* v21; // r14
	__int64 v22; // r12
	_WORD* v23; // rax
	unsigned __int16* v24; // r14
	_QWORD* v25; // rdi
	int* v26; // rbx
	__int64 v27; // rcx
	__int64 v28; // r12
	char* v29; // r15
	__int64 v30; // rax
	int* v31; // r13
	int* v32; // rdx
	unsigned __int64 v33; // rax
	unsigned __int64 v34; // rbx
	unsigned __int64 v35; // rbx
	int* v36; // rbx
	__int64 v37; // rbx
	int* v38; // r12
	__int64 v39; // rax
	int* v40; // r13
	unsigned __int64 v41; // rax
	unsigned __int64 v42; // rbx
	unsigned __int64 v43; // rbx
	int* v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rbx
	int* v47; // r14
	__int64 v48; // rax
	__int64 v49; // r15
	_WORD* v50; // rax
	int* v51; // rax
	__int64 v52; // rbx
	int* v53; // r14
	__int64 v54; // rcx
	__int64 v55; // rdi
	int* v56; // rsi
	__int64 v57; // [rsp+38h] [rbp-D0h] BYREF
	int* v58; // [rsp+40h] [rbp-C8h]
	_WORD* v59; // [rsp+48h] [rbp-C0h]
	__int64 v60; // [rsp+50h] [rbp-B8h]
	__int64 v61; // [rsp+58h] [rbp-B0h] BYREF
	int* v62; // [rsp+60h] [rbp-A8h]
	_WORD* v63; // [rsp+68h] [rbp-A0h]
	__int64 v64; // [rsp+70h] [rbp-98h]
	__int64 v65; // [rsp+78h] [rbp-90h] BYREF
	__int64 v66; // [rsp+80h] [rbp-88h]
	__int64 v67; // [rsp+98h] [rbp-70h] BYREF
	unsigned __int16* v68; // [rsp+A0h] [rbp-68h]
	int* v69; // [rsp+A8h] [rbp-60h]
	__int64 v70; // [rsp+B8h] [rbp-50h] BYREF
	int* v71; // [rsp+C0h] [rbp-48h]
	int* v72; // [rsp+C8h] [rbp-40h]
	__int64 v73; // [rsp+D8h] [rbp-30h] BYREF
	int* v74; // [rsp+E0h] [rbp-28h]
	int* v76; // [rsp+148h] [rbp+40h]
	int* v77; // [rsp+148h] [rbp+40h]

	v2 = *(_DWORD**)(a1 + 8);
	v4 = a1;
	if (*v2 != 1)
	{
		if (*v2 == 6)
		{
			if (!a2 || !*(_WORD*)a2)
				return;
			v47 = 0i64;
			v58 = 0i64;
			v60 = 0i64;
			v48 = 0i64;
			do
				v12 = *((_WORD*)a2 + ++v48) == 0;
			while (!v12);
			v49 = (2 * v48) >> 1;
			if ((unsigned __int64)(v49 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v47 = sub_14018B280(2 * (v49 + 1), 0);
				v58 = v47;
				v60 = (__int64)v47 + 2 * v49 + 2;
			}
			sub_1407DB590(v47, a2, 2 * v49);
			v50 = (_WORD*)v47 + v49;
			v59 = v50;
			if (v50)
				*v50 = 0;
			sub_14040B680(&v65, (__int64)&v57, 0);
			if (v47)
				sub_14018B900((__int64)v47, 0);
			v51 = sub_14018B280(136i64, 0);
			if (v51)
				v52 = sub_140401410((__int64)v51);
			else
				v52 = 0i64;
			v53 = v74;
			if (!(unsigned int)sub_1404015D0(v52, v74, v4))
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v4, 19);
			v55 = (__int64)v68;
			*(_DWORD*)(*(_QWORD*)(v52 + 80) + 48i64) = 0;
			v56 = v71;
			**(_QWORD**)(v52 + 80) = v55;
			*(_QWORD*)(*(_QWORD*)(v52 + 80) + 8i64) = v56;
			sub_140405CB0(v54, v52);
			sub_1403F4740(qword_140C65898, 0x1D4u, *(_QWORD*)(v52 + 80));
			if (v53)
				sub_14018B900((__int64)v53, 0);
			if (v56)
				sub_14018B900((__int64)v56, 0);
			if (!v55)
				goto LABEL_96;
			v27 = v55;
			goto LABEL_95;
		}
		if (*v2 != 34)
		{
			if (a2 && *(_WORD*)a2)
			{
				v5 = sub_14018B280(136i64, 0);
				if (v5)
					v6 = sub_140401410((__int64)v5);
				else
					v6 = 0i64;
				if (!(unsigned int)sub_140401510(v6, a2, v4))
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v4, 19);
				v7 = *(_QWORD*)(v6 + 72);
				*(_QWORD*)(v7 + 8) = *(_QWORD*)(v4 + 16);
				v8 = **(unsigned int**)(v4 + 8);
				*(_DWORD*)v7 = v8;
				sub_140405CB0(v8, v6);
				sub_1403F4740(qword_140C65898, 0x1C3u, *(_QWORD*)(v6 + 72));
			}
			return;
		}
		if (!a2 || !*(_WORD*)a2)
			return;
		v9 = 0i64;
		v10 = 0i64;
		v62 = 0i64;
		v64 = 0i64;
		v11 = 0i64;
		do
			v12 = *((_WORD*)a2 + ++v11) == 0;
		while (!v12);
		v13 = (2 * v11) >> 1;
		if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v10 = sub_14018B280(2 * (v13 + 1), 0);
			v62 = v10;
			v64 = (__int64)v10 + 2 * v13 + 2;
		}
		sub_1407DB590(v10, a2, 2 * v13);
		v14 = (_WORD*)v10 + v13;
		v63 = v14;
		if (v14)
			*v14 = 0;
		sub_14040B680(&v65, (__int64)&v61, 0);
		if (v10)
			sub_14018B900((__int64)v10, 0);
		v16 = v71;
		if (v71 == v72)
		{
			v17 = 0i64;
			v62 = 0i64;
			v64 = 0i64;
			v18 = 0i64;
			do
				v12 = asc_140AF86D8[++v18] == 0;
			while (!v12);
			v19 = (2 * v18) >> 1;
			if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v17 = sub_14018B280(2 * (v19 + 1), 0);
				v62 = v17;
				v64 = (__int64)v17 + 2 * v19 + 2;
			}
			sub_1407DB590(v17, (int*)L" \t\r\n", 2 * v19);
			v63 = (_WORD*)v17 + v19;
			if (v63)
				*((_WORD*)v17 + v19) = 0;
			v20 = 0i64;
			v21 = 0i64;
			v58 = 0i64;
			v60 = 0i64;
			if (*(_WORD*)a2)
			{
				do
					++v20;
				while (*((_WORD*)a2 + v20));
			}
			v22 = (2 * v20) >> 1;
			if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v21 = sub_14018B280(2 * (v22 + 1), 0);
				v58 = v21;
				v60 = (__int64)v21 + 2 * v22 + 2;
			}
			sub_1407DB590(v21, a2, 2 * v22);
			v23 = (_WORD*)v21 + v22;
			v59 = v23;
			if (v23)
				*v23 = 0;
			sub_14018FBD0((__int64)&v57, &v67, &v73, (__int64)&v61);
			if (v21)
				sub_14018B900((__int64)v21, 0);
			if (v17)
				sub_14018B900((__int64)v17, 0);
			v24 = v68;
			v25 = *(_QWORD**)(qword_140C65898 + 27312);
			if (!v25)
			{
			LABEL_43:
				v16 = v71;
				goto LABEL_44;
			}
			while ((unsigned int)sub_14018E2C0(v25[12], v24))
			{
				v25 = (_QWORD*)v25[16];
				if (!v25)
					goto LABEL_43;
			}
			if (v25[14] && (v28 = *(_QWORD*)v25[13]) != 0)
			{
				v29 = *(char**)(v28 + 48);
				v30 = 0i64;
				if (*(_WORD*)v29)
				{
					do
						++v30;
					while (*(_WORD*)&v29[2 * v30]);
				}
				v31 = v69;
				v32 = *(int**)(v28 + 48);
				v76 = (int*)&v29[2 * v30];
				v33 = ((char*)v69 - (char*)v24) >> 1;
				v34 = ((char*)v76 - v29) >> 1;
				if (v34 > v33)
				{
					v37 = 2 * v33;
					sub_1407DB590((int*)v24, v32, 2 * v33);
					sub_14001C310(&v67, (int*)&v29[v37], v76);
					v24 = v68;
				}
				else
				{
					v35 = v34;
					sub_1407DB590((int*)v24, v32, v35 * 2);
					v36 = (int*)&v24[v35];
					if (v36 != v31)
					{
						sub_1407DB590(v36, v31, 2ui64);
						v69 = (int*)((char*)v31 - 2 * (((char*)v31 - (char*)v36) >> 1));
					}
				}
				v38 = *(int**)(v28 + 56);
				v39 = 0i64;
				if (*(_WORD*)v38)
				{
					do
						++v39;
					while (*((_WORD*)v38 + v39));
				}
				v16 = v71;
				v40 = v72;
				v77 = (int*)((char*)v38 + 2 * v39);
				v41 = ((char*)v72 - (char*)v71) >> 1;
				v42 = ((char*)v77 - (char*)v38) >> 1;
				if (v42 > v41)
				{
					v46 = 2 * v41;
					sub_1407DB590(v71, v38, 2 * v41);
					sub_14001C310(&v70, (int*)((char*)v38 + v46), v77);
					v16 = v71;
					v24 = v68;
				}
				else
				{
					v43 = 2 * v42;
					sub_1407DB590(v71, v38, v43);
					if ((int*)((char*)v16 + v43) != v40)
						sub_1407DB590((int*)((char*)v16 + v43), v40, 2ui64);
				}
			}
			else
			{
				v16 = v71;
			}
			v4 = a1;
		}
		else
		{
			v24 = v68;
			v25 = sub_1405E21B0(v15, (__int64)v68, (__int64)v71);
		}
		if (v25)
		{
			v44 = sub_14018B280(136i64, 0);
			if (v44)
				v9 = sub_140401410((__int64)v44);
			v26 = v74;
			if (!(unsigned int)sub_1404015D0(v9, v74, v4))
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v4, 19);
			*(_DWORD*)(*(_QWORD*)(v9 + 80) + 48i64) = 1;
			**(_QWORD**)(v9 + 80) = v24;
			*(_QWORD*)(*(_QWORD*)(v9 + 80) + 8i64) = v16;
			sub_140405CB0(v45, v9);
			sub_1403F4740(qword_140C65898, 0x1D4u, *(_QWORD*)(v9 + 80));
			goto LABEL_45;
		}
	LABEL_44:
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatAccountTellFailed", "HS", a1, v24);
		v26 = v74;
	LABEL_45:
		if (v26)
			sub_14018B900((__int64)v26, 0);
		if (v16)
			sub_14018B900((__int64)v16, 0);
		if (!v24)
			goto LABEL_96;
		v27 = (__int64)v24;
	LABEL_95:
		sub_14018B900(v27, 0);
	LABEL_96:
		if (v66)
			sub_14018B900(v66, 0);
		return;
	}
	sub_14011B780(&v57, *(_QWORD*)(qword_140C65898 + 29504), a2);
	if (v58)
		sub_14018B900((__int64)v58, 0);
}
// 140402395: variable 'v45' is possibly undefined
// 1404023F1: variable 'v15' is possibly undefined
// 140402530: variable 'v54' is possibly undefined
// 140AF86D8: using guessed type wchar_t asc_140AF86D8[5];
// 140C65898: using guessed type __int64 qword_140C65898;

