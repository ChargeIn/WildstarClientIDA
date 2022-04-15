#include "../winhttp.h"

//----- (0000000140585970) ----------------------------------------------------
void __fastcall sub_140585970(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int16* v4; // rax
	__int64* v5; // r12
	int* v6; // r14
	__int64 v7; // rax
	bool v8; // zf
	__int64 v9; // rdi
	int* v10; // rdi
	__int64 v11; // rax
	int* v12; // rsi
	__int64 v13; // r15
	__int64 v14; // r14
	__int64 v15; // r15
	__int64 v16; // rsi
	unsigned int v17; // ebx
	__int64 v18; // rcx
	unsigned int v19; // edi
	__int64 v20; // rax
	__int16* v21; // rax
	int v22; // eax
	__int64* v23; // rdi
	__int64 v24; // rbx
	int v25; // eax
	__int64 i; // rbx
	__int64 v27; // rcx
	int v28; // esi
	int* v29; // rbx
	unsigned int v30; // edi
	unsigned int v31; // eax
	__int64 v32; // rax
	__int64 v33; // r13
	__int64 v34; // rcx
	__int16* v35; // rax
	int* v36; // r14
	int* v37; // rsi
	__int64 v38; // rdi
	int* v39; // rax
	unsigned __int64 v40; // rdi
	int* v41; // r14
	__int64 v42; // r12
	__int64 v43; // rsi
	int* v44; // r15
	__int64 v45; // rcx
	__int16* v46; // rax
	int* v47; // r14
	__int64 v48; // r12
	__int64 v49; // rsi
	int* v50; // rax
	int* v51; // rax
	_QWORD* v52; // rax
	__int64 v53; // rax
	__int64 j; // rbx
	__int64 v55; // rcx
	int v56; // [rsp+30h] [rbp-D0h]
	char v57[8]; // [rsp+38h] [rbp-C8h] BYREF
	int* v58; // [rsp+40h] [rbp-C0h]
	__int64 v60; // [rsp+50h] [rbp-B0h]
	char v61[8]; // [rsp+58h] [rbp-A8h] BYREF
	int* v62; // [rsp+60h] [rbp-A0h]
	__int64 v64; // [rsp+70h] [rbp-90h]
	char v65[8]; // [rsp+78h] [rbp-88h] BYREF
	__int64 v66; // [rsp+80h] [rbp-80h]
	__int64 v67; // [rsp+88h] [rbp-78h]
	__int64 v68[24]; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v69; // [rsp+160h] [rbp+60h]
	int* v70; // [rsp+170h] [rbp+70h]
	unsigned int v71; // [rsp+1D0h] [rbp+D0h]
	unsigned int v72; // [rsp+1D8h] [rbp+D8h]

	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 1)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v5 = *(__int64**)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = sub_14034BDD0(a1, 114120);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
		return;
	}
	v6 = 0i64;
	v62 = 0i64;
	v64 = 0i64;
	v7 = 0i64;
	do
		v8 = asc_140B1F288[++v7] == 0;
	while (!v8);
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v9 + 1), 0);
		v62 = v6;
		v64 = (__int64)v6 + 2 * v9 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v9);
	if ((int*)((char*)v6 + 2 * v9))
		*((_WORD*)v6 + v9) = 0;
	v10 = *(int**)(a1 + 8);
	v11 = 0i64;
	v58 = 0i64;
	v12 = 0i64;
	v60 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v11;
		while (*((_WORD*)v10 + v11));
	}
	v13 = (2 * v11) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = sub_14018B280(2 * (v13 + 1), 0);
		v58 = v12;
		v60 = (__int64)v12 + 2 * v13 + 2;
	}
	sub_1407DB590(v12, v10, 2 * v13);
	if ((int*)((char*)v12 + 2 * v13))
		*((_WORD*)v12 + v13) = 0;
	sub_14018F570((__int64)v65, (__int64)v57, (__int64)v61, 34, 92);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v14 = v67;
	v15 = v66;
	if ((unsigned __int64)((v67 - v66) >> 5) >= 2)
	{
		v16 = *(_QWORD*)(v66 + 40);
		v17 = 0;
		v19 = sub_1402023D0();
		if (!v19)
			goto LABEL_100;
		do
		{
			if (qword_140C63848)
			{
				v20 = qword_140C63848(off_140A6A5C8, v17, qword_140C63858);
			}
			else if (dword_140C63BB0)
			{
				v20 = 0i64;
			}
			else if ((int)sub_1402021C0() >= 0)
			{
				v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648C8 + 32i64))(qword_140C648C8, v17);
			}
			else
			{
				v20 = 0i64;
			}
			v21 = sub_14034BDD0(v18, *(_DWORD*)(v20 + 24));
			if (!(unsigned int)sub_14018E2C0(v16, (unsigned __int16*)v21))
				break;
			++v17;
		} while (v17 < v19);
		if (v17 < 0x20)
		{
		LABEL_100:
			v22 = sub_14018E820(*(WCHAR**)(v15 + 8)) - 1;
			if ((unsigned __int64)v22 < 0xA)
			{
				v23 = &v5[4 * v22 + 3 + v22];
				if (v23)
				{
					v24 = (1i64 << *(_DWORD*)sub_140202480(v17)) ^ *((unsigned int*)v23 + 2);
					v25 = sub_14018E820(*(WCHAR**)(v15 + 8));
					sub_14057EB50(v5, v25 - 1, v24);
					for (i = v15; i != v14; i += 32i64)
					{
						v27 = *(_QWORD*)(i + 8);
						if (v27)
							sub_14018B900(v27, 0);
					}
				LABEL_40:
					sub_14018B900(v15, 0);
					return;
				}
			}
		}
	}
	v28 = 1;
	v29 = 0i64;
	v30 = 0;
	v71 = 0;
	v56 = 1;
	if (qword_140C63838)
	{
		v31 = qword_140C63838(off_140A6A5C8, qword_140C63858);
	}
	else
	{
		if (dword_140C63BB0 || (int)sub_1402021C0() < 0)
			goto LABEL_83;
		v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C648C8 + 40i64))(qword_140C648C8);
	}
	v72 = v31;
	if (v31)
	{
		do
		{
			v32 = sub_140202480(v30);
			v33 = v32;
			v34 = *(unsigned int*)(v32 + 28);
			if (!(_DWORD)v34 || (v34 & 2) != 0)
			{
				if (v28)
				{
					v35 = sub_14034BDD0(v34, *(_DWORD*)(v32 + 24));
					v36 = v29;
					v37 = (int*)v35;
					if (v35)
					{
						v38 = 0i64;
						if (*v35)
						{
							do
								++v38;
							while (v35[v38]);
						}
						v39 = sub_14018B280(2 * v38 + 18, 0);
						if (v39)
						{
							*(_QWORD*)v39 = off_140B55060;
							*((_QWORD*)v39 + 1) = v38;
						}
						else
						{
							v39 = 0i64;
						}
						v29 = v39 + 4;
						v40 = 2 * v38;
						sub_1407DB590(v39 + 4, v37, v40);
						*(_WORD*)((char*)v29 + v40) = 0;
						v30 = v71;
					}
					else
					{
						v29 = 0i64;
					}
					if (v36)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v36 - 2) + 8i64))(v36 - 4);
					v28 = 0;
					v56 = 0;
				}
				else
				{
					v41 = v29;
					if (v29)
						v42 = *((_QWORD*)v29 - 1);
					else
						v42 = 0i64;
					v43 = 0i64;
					do
						v8 = asc_140B1F280[++v43] == 0;
					while (!v8);
					v44 = (int*)sub_14018D140(v29, v43 + v42);
					sub_1407DB590((int*)((char*)v44 + 2 * v42), (int*)L" | ", 2 * v43);
					v29 = v44;
					*((_WORD*)v44 + v43 + v42) = 0;
					if (v41 != v44 && v41)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v41 - 2) + 8i64))(v41 - 4);
					v46 = sub_14034BDD0(v45, *(_DWORD*)(v33 + 24));
					v47 = (int*)v46;
					if (v46)
					{
						if (v44)
							v48 = *((_QWORD*)v44 - 1);
						else
							v48 = 0i64;
						v49 = 0i64;
						if (*v46)
						{
							do
								++v49;
							while (v46[v49]);
						}
						v29 = (int*)sub_14018D140(v44, v49 + v48);
						sub_1407DB590((int*)((char*)v29 + 2 * v48), v47, 2 * v49);
						*((_WORD*)v29 + v49 + v48) = 0;
						if (v44 != v29 && v44)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
						v30 = v71;
						v28 = v56;
					}
					else
					{
						v30 = v71;
						v28 = v56;
					}
				}
			}
			v71 = ++v30;
		} while (v30 < v72);
		v14 = v67;
		v15 = v66;
	}
LABEL_83:
	sub_1400B7090((__int64)v68, 113072);
	v68[0] = (__int64)off_140B69230;
	v70 = 0i64;
	v69 = 0i64;
	v50 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v69 = v50;
	*((_QWORD*)&v69 + 1) = v50;
	v70 = v50 + 4;
	if (v50)
		*(_WORD*)v50 = 0;
	v51 = sub_14018B280(96i64, 0);
	if (v51)
		v52 = (_QWORD*)sub_1404DDB40((__int64)v51, v29);
	else
		v52 = 0i64;
	sub_1400B7480((__int64)v68, v52);
	v53 = sub_1400B7660(v68);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v53 + 8), 0, 0i64);
	if ((_QWORD)v69)
		sub_14018B900(v69, 0);
	sub_1400B7390(v68);
	if (v29)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v29 - 2) + 8i64))(v29 - 4);
	for (j = v15; j != v14; j += 32i64)
	{
		v55 = *(_QWORD*)(j + 8);
		if (v55)
			sub_14018B900(v55, 0);
	}
	if (v15)
		goto LABEL_40;
}
// 140585BDF: variable 'v18' is possibly undefined
// 140585E56: variable 'v45' is possibly undefined
// 140A6A5C8: using guessed type wchar_t *off_140A6A5C8[2];
// 140B1F280: using guessed type wchar_t asc_140B1F280[4];
// 140B1F288: using guessed type wchar_t asc_140B1F288[5];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BB0: using guessed type int dword_140C63BB0;
// 140C648C8: using guessed type __int64 qword_140C648C8;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140585970: using guessed type char var_158[8];
// 140585970: using guessed type char var_178[8];
// 140585970: using guessed type char var_138[8];

