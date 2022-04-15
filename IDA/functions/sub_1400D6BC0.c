#include "../winhttp.h"

//----- (00000001400D6BC0) ----------------------------------------------------
__int64 __fastcall sub_1400D6BC0(_QWORD* a1)
{
	unsigned int v1; // ebx
	_QWORD* v2; // r14
	__int64 result; // rax
	_QWORD* v4; // r13
	char* v5; // rax
	__int64 v6; // rdi
	unsigned __int16* v7; // rsi
	_WORD* v8; // rax
	__int64 v9; // rax
	int* v10; // r10
	unsigned __int16 v11; // ax
	__int64 v12; // r8
	unsigned __int16* i; // rcx
	__int64 v14; // rax
	_QWORD* v15; // r15
	int v16; // eax
	__int64 v17; // rax
	int* v18; // rdi
	int* v19; // r14
	int* v20; // rax
	int* v21; // rax
	__int64 v22; // rsi
	int* v23; // r12
	_QWORD* v24; // r14
	int* v25; // rax
	int* v26; // rdi
	int* v27; // r15
	__int64 v28; // rax
	__int64 v29; // rsi
	__int64 v30; // rax
	bool v31; // zf
	int* v32; // rbx
	_QWORD* v33; // rcx
	int* v34; // r13
	__int64 v35; // rax
	__int64 v36; // rdi
	int* v37; // rsi
	__int64 v38; // rax
	int* v39; // r14
	char* v40; // r12
	__int64 v41; // rdi
	_WORD* v42; // r15
	__int64 v43; // rax
	__int64 v44; // rdi
	int* v45; // rdi
	int* v46; // r14
	unsigned __int64 v47; // rax
	unsigned __int64 v48; // rbx
	unsigned __int64 v49; // rbx
	__int64 v50; // rbx
	_QWORD* v51; // rax
	int* v52; // rsi
	__int64 v53; // rax
	int* v54; // r15
	__int64 v55; // rbx
	unsigned __int64 v56; // rbx
	_WORD* v57; // r12
	__int64 v58; // rbx
	__int64 v59; // r14
	_QWORD* v60; // rdi
	int v61; // eax
	bool v62; // bl
	__int64 v63; // rcx
	__int64 v64; // rax
	int* v65; // rdi
	__int64 v66; // r14
	_WORD* v67; // rax
	__int64 v68; // [rsp+30h] [rbp-79h] BYREF
	int* v69; // [rsp+38h] [rbp-71h]
	int* v70; // [rsp+40h] [rbp-69h]
	__int64 v71; // [rsp+48h] [rbp-61h]
	_QWORD* v72; // [rsp+50h] [rbp-59h]
	char v73[8]; // [rsp+58h] [rbp-51h] BYREF
	int* v74; // [rsp+60h] [rbp-49h]
	int* v75; // [rsp+68h] [rbp-41h]
	int* v76; // [rsp+70h] [rbp-39h]
	__int64 v77; // [rsp+78h] [rbp-31h] BYREF
	int* v78; // [rsp+80h] [rbp-29h]
	_WORD* v79; // [rsp+88h] [rbp-21h]
	__int64 v80; // [rsp+90h] [rbp-19h]
	__int64 v81; // [rsp+98h] [rbp-11h] BYREF
	unsigned __int16* v82; // [rsp+A0h] [rbp-9h]
	__int64 v83; // [rsp+A8h] [rbp-1h]
	int v85; // [rsp+118h] [rbp+6Fh]
	__int64 v86; // [rsp+118h] [rbp+6Fh]
	__int64 v87; // [rsp+120h] [rbp+77h]
	__int64 v88; // [rsp+128h] [rbp+7Fh]

	v1 = 1;
	v2 = a1;
	result = sub_1400D66A0(a1, 1u);
	v4 = (_QWORD*)result;
	if (result)
	{
		v5 = (char*)sub_140056BB0(v2, 2u, 0i64);
		sub_14018F2D0(&v81, v5);
		v6 = v83;
		v7 = v82;
		if (!((v83 - (__int64)v82) >> 1)
			|| (HIWORD(v85) = 58, v8 = sub_14002C8A0(v82, v83, v85), v8 == (_WORD*)v6)
			|| v8 - v7 == -1)
		{
			LODWORD(v10) = 0;
			if (!v7)
				goto LABEL_98;
			v11 = *v7;
			v12 = 0i64;
			for (i = v7; *i; v11 = *i)
			{
				++i;
				v12 = v11 + 2860486313i64 * v12;
			}
			v14 = sub_1400D3940(v4, v7, v12);
			v15 = (_QWORD*)v14;
			v72 = (_QWORD*)v14;
			if (v14 && (*(_BYTE*)(v14 + 28) & 1) != 0)
			{
				if (*(_QWORD**)(v14 + 16) != v4)
				{
					v16 = dword_140C3C1A0;
					if (*(_DWORD*)qword_140C63750 < dword_140C3C1A0)
						v16 = *(_DWORD*)qword_140C63750;
					if (byte_140C3C1B0[v16] != (_BYTE)v10)
					{
						v17 = v15[4];
						v18 = (int*)&word_140B7B704;
						v19 = v10;
						v74 = v10;
						v88 = v17 + 144;
						v20 = (int*)v15[67];
						v76 = v10;
						if (v20)
							v18 = v20;
						v21 = v10;
						if (*(_WORD*)v18 != (_WORD)v10)
						{
							do
								v21 = (int*)((char*)v21 + 1);
							while (*((_WORD*)v18 + (_QWORD)v21) != (_WORD)v10);
						}
						v22 = (2 * (__int64)v21) >> 1;
						if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v19 = sub_14018B280(2 * (v22 + 1), 0);
							v74 = v19;
							v76 = (int*)((char*)v19 + 2 * v22 + 2);
						}
						sub_1407DB590(v19, v18, 2 * v22);
						v23 = (int*)((char*)v19 + 2 * v22);
						v75 = v23;
						if (v23)
							*(_WORD*)v23 = 0;
						v24 = (_QWORD*)v15[2];
						if (v24)
						{
							while (v24 != v4)
							{
								v25 = (int*)v24[67];
								v26 = (int*)&word_140B7B704;
								v27 = 0i64;
								v69 = 0i64;
								v71 = 0i64;
								if (v25)
									v26 = v25;
								v28 = 0i64;
								if (*(_WORD*)v26)
								{
									do
										++v28;
									while (*((_WORD*)v26 + v28));
								}
								v29 = (2 * v28) >> 1;
								if ((unsigned __int64)(v29 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
								{
									v27 = sub_14018B280(2 * (v29 + 1), 0);
									v69 = v27;
									v71 = (__int64)v27 + 2 * v29 + 2;
								}
								sub_1407DB590(v27, v26, 2 * v29);
								v70 = (int*)((char*)v27 + 2 * v29);
								if (v70)
									*((_WORD*)v27 + v29) = 0;
								v30 = 0i64;
								do
									v31 = *(_WORD*)&asc_1409D314C[2 * v30++ + 2] == 0;
								while (!v31);
								sub_14001C310(&v68, (int*)":", (int*)&asc_1409D314C[2 * v30]);
								sub_14001C310(&v68, v74, v23);
								v32 = v69;
								sub_14001C480((__int64)v73, v69, v70);
								if (v32)
									sub_14018B900((__int64)v32, 0);
								v24 = (_QWORD*)v24[2];
								if (!v24)
									break;
								v23 = v75;
							}
						}
						v33 = *(_QWORD**)(sub_1400E93D0((__int64)a1) + 2480);
						if ((_QWORD*)*v33 == v33)
							v86 = 0i64;
						else
							v86 = *(_QWORD*)(v33[1] + 16i64);
						v34 = 0i64;
						v69 = 0i64;
						v71 = 0i64;
						v35 = 0i64;
						do
							v31 = aUnknownaddon[++v35] == 0;
						while (!v31);
						v36 = (2 * v35) >> 1;
						if ((unsigned __int64)(v36 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v34 = sub_14018B280(2 * (v36 + 1), 0);
							v69 = v34;
							v71 = (__int64)v34 + 2 * v36 + 2;
						}
						sub_1407DB590(v34, (int*)L"[UnknownAddon]", 2 * v36);
						v37 = (int*)((char*)v34 + 2 * v36);
						v38 = 0i64;
						v70 = v37;
						if (v37)
							*(_WORD*)v37 = 0;
						v39 = 0i64;
						v87 = 0i64;
						v40 = 0i64;
						do
							v31 = aUnknownfunctio[++v38] == 0;
						while (!v31);
						v41 = (2 * v38) >> 1;
						if ((unsigned __int64)(v41 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v39 = sub_14018B280(2 * (v41 + 1), 0);
							v87 = (__int64)v39;
							v40 = (char*)v39 + 2 * v41 + 2;
						}
						sub_1407DB590(v39, (int*)L"[UnknownFunction]", 2 * v41);
						v42 = (_WORD*)v39 + v41;
						v43 = 0i64;
						if (v42)
							*v42 = 0;
						v44 = *(_QWORD*)(v86 + 48);
						if (v44)
						{
							v45 = *(int**)(v44 + 24);
							if (*(_WORD*)v45)
							{
								do
									++v43;
								while (*((_WORD*)v45 + v43));
							}
							v46 = (int*)((char*)v45 + 2 * v43);
							v47 = ((char*)v37 - (char*)v34) >> 1;
							v48 = ((char*)v46 - (char*)v45) >> 1;
							if (v48 > v47)
							{
								v50 = 2 * v47;
								sub_1407DB590(v34, v45, 2 * v47);
								sub_14001C310(&v68, (int*)((char*)v45 + v50), v46);
								v34 = v69;
							}
							else
							{
								v49 = 2 * v48;
								sub_1407DB590(v34, v45, v49);
								if ((int*)((char*)v34 + v49) != v37)
									sub_1407DB590((int*)((char*)v34 + v49), v37, 2ui64);
							}
							v51 = sub_14018F2D0(&v77, *(char**)(v86 + 24));
							v39 = (int*)v51[1];
							v51[1] = v87;
							v51[2] = v42;
							v51[3] = v40;
							v87 = (__int64)v39;
							if (v78)
								sub_14018B900((__int64)v78, 0);
						}
						sub_14018EFA0(
							&v77,
							(__int64)L"Addon: %s. Function: %s. Using FindChild to find grandchild '%s'. Consider searching for '%s' instead.",
							v34,
							v39,
							v82,
							v74);
						v52 = v78;
						v53 = 0i64;
						v54 = 0i64;
						if (*(_WORD*)v78)
						{
							do
								++v53;
							while (*((_WORD*)v78 + v53));
						}
						v55 = (2 * v53) >> 1;
						if ((unsigned __int64)(v55 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							v54 = sub_14018B280(2 * (v55 + 1), 0);
						v56 = 2 * v55;
						sub_1407DB590(v54, v52, v56);
						v57 = (_WORD*)((char*)v54 + v56);
						if ((int*)((char*)v54 + v56))
							*v57 = 0;
						v58 = *(_QWORD*)(v88 + 8);
						v59 = v58;
						v60 = *(_QWORD**)(v58 + 8);
						while (v60)
						{
							if ((int)sub_1400454D0(v60[5], v60[6], (unsigned __int16*)v54, (__int64)v57) < 0)
							{
								v60 = (_QWORD*)v60[3];
							}
							else
							{
								v59 = (__int64)v60;
								v60 = (_QWORD*)v60[2];
							}
						}
						if (v59 == v58
							|| (v61 = sub_1400454D0(
								(__int64)v54,
								(__int64)v57,
								*(unsigned __int16**)(v59 + 40),
								*(_QWORD*)(v59 + 48)),
								v68 = v59,
								v61 < 0))
						{
							v68 = v58;
						}
						v62 = v68 == v58;
						if (v54)
							sub_14018B900((__int64)v54, 0);
						if (v62)
						{
							v63 = *(_QWORD*)(v86 + 48);
							if (v63)
								sub_140137280(v63, v52);
							v64 = 0i64;
							v65 = 0i64;
							v78 = 0i64;
							v80 = 0i64;
							if (*(_WORD*)v52)
							{
								do
									++v64;
								while (*((_WORD*)v52 + v64));
							}
							v66 = (2 * v64) >> 1;
							if ((unsigned __int64)(v66 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							{
								v65 = sub_14018B280(2 * (v66 + 1), 0);
								v78 = v65;
								v80 = (__int64)v65 + 2 * v66 + 2;
							}
							sub_1407DB590(v65, v52, 2 * v66);
							v67 = (_WORD*)v65 + v66;
							v79 = v67;
							if (v67)
								*v67 = 0;
							sub_140044D10(v88, (__int64)&v68, (__int64)&v77);
							if (v65)
								sub_14018B900((__int64)v65, 0);
						}
						sub_14018B900((__int64)v52, 0);
						if (v87)
							sub_14018B900(v87, 0);
						if (v34)
							sub_14018B900((__int64)v34, 0);
						if (v74)
							sub_14018B900((__int64)v74, 0);
						v2 = a1;
						v15 = v72;
						v7 = v82;
					}
				}
				v1 = sub_1400D62A0(v2, (__int64)v15);
			}
			else
			{
			LABEL_98:
				*(_DWORD*)(v2[2] + 8i64) = (_DWORD)v10;
				v2[2] += 16i64;
			}
		}
		else
		{
			v9 = sub_1400D3830((__int64)(v4 + 69), v7);
			v1 = sub_1400D62A0(v2, v9);
		}
		if (v7)
			sub_14018B900((__int64)v7, 0);
		return v1;
	}
	return result;
}
// 1400D6D15: variable 'v10' is possibly undefined
// 140A16308: using guessed type wchar_t aUnknownfunctio[18];
// 140A16410: using guessed type wchar_t aUnknownaddon[15];
// 140A16430: using guessed type wchar_t aAddonSFunction[103];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C3C1A0: using guessed type int dword_140C3C1A0;
// 140C3C1B0: using guessed type _BYTE byte_140C3C1B0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 1400D6BC0: using guessed type char var_A8[8];

