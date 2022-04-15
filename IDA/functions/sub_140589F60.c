#include "../winhttp.h"

//----- (0000000140589F60) ----------------------------------------------------
void __fastcall sub_140589F60(__int64 a1)
{
	__int64 v1; // r12
	int* v3; // r14
	__int64 v4; // rax
	bool v5; // zf
	__int64 v6; // rdi
	int* v7; // rdi
	__int64 v8; // rax
	int* v9; // rsi
	__int64 v10; // r15
	__int64 v11; // rcx
	__int64 v12; // r15
	__int64 v13; // r13
	__int64 v14; // rcx
	__int64* v15; // r14
	__int16* v16; // rax
	__int64 v17; // rsi
	unsigned int v18; // ebx
	__int64 v19; // rcx
	unsigned int v20; // edi
	__int64 v21; // rax
	__int16* v22; // rax
	int v23; // eax
	__int64* v24; // rdi
	__int64 v25; // rbx
	int v26; // eax
	__int64 i; // rbx
	__int64 v28; // rcx
	int v29; // esi
	int* v30; // rbx
	unsigned int v31; // edi
	unsigned int v32; // eax
	__int64 v33; // rax
	__int64 v34; // r13
	__int64 v35; // rcx
	__int16* v36; // rax
	int* v37; // r14
	int* v38; // rsi
	__int64 v39; // rdi
	int* v40; // rax
	unsigned __int64 v41; // rdi
	int* v42; // r14
	__int64 v43; // rsi
	__int64 v44; // rdi
	int* v45; // r15
	__int64 v46; // rcx
	__int16* v47; // rax
	int* v48; // r14
	__int64 v49; // rsi
	__int64 v50; // rdi
	int* v51; // rax
	int* v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // rax
	__int64 j; // rbx
	__int64 v56; // rcx
	char v57[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v58; // [rsp+38h] [rbp-C8h]
	__int64 v60; // [rsp+48h] [rbp-B8h]
	char v61[8]; // [rsp+50h] [rbp-B0h] BYREF
	int* v62; // [rsp+58h] [rbp-A8h]
	__int64 v64; // [rsp+68h] [rbp-98h]
	char v65[8]; // [rsp+70h] [rbp-90h] BYREF
	__int64 v66; // [rsp+78h] [rbp-88h]
	__int64 v67; // [rsp+80h] [rbp-80h]
	__int64 v68[24]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v69; // [rsp+150h] [rbp+50h]
	int* v70; // [rsp+160h] [rbp+60h]
	unsigned int v71; // [rsp+1B0h] [rbp+B0h]
	unsigned int v72; // [rsp+1C0h] [rbp+C0h]
	int v73; // [rsp+1C8h] [rbp+C8h]

	v1 = 0i64;
	v3 = 0i64;
	v62 = 0i64;
	v64 = 0i64;
	v4 = 0i64;
	do
		v5 = asc_140B1F488[++v4] == 0;
	while (!v5);
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v6 + 1), 0);
		v62 = v3;
		v64 = (__int64)v3 + 2 * v6 + 2;
	}
	sub_1407DB590(v3, (int*)L" \t\r\n", 2 * v6);
	if ((int*)((char*)v3 + 2 * v6))
		*((_WORD*)v3 + v6) = 0;
	v7 = *(int**)(a1 + 8);
	v8 = 0i64;
	v58 = 0i64;
	v9 = 0i64;
	v60 = 0i64;
	if (*(_WORD*)v7)
	{
		do
			++v8;
		while (*((_WORD*)v7 + v8));
	}
	v10 = (2 * v8) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = sub_14018B280(2 * (v10 + 1), 0);
		v58 = v9;
		v60 = (__int64)v9 + 2 * v10 + 2;
	}
	sub_1407DB590(v9, v7, 2 * v10);
	if ((int*)((char*)v9 + 2 * v10))
		*((_WORD*)v9 + v10) = 0;
	sub_14018F570((__int64)v65, (__int64)v57, (__int64)v61, 34, 92);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	v12 = v67;
	v13 = v66;
	if ((unsigned __int64)((v67 - v66) >> 5) >= 3)
	{
		v15 = (__int64*)sub_1405846F0(v11, v66);
		if (!v15)
		{
			v16 = sub_14034BDD0(v14, 240550);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v16, 0, 0i64);
			goto LABEL_85;
		}
		v17 = *(_QWORD*)(v13 + 72);
		v18 = 0;
		v20 = sub_1402023D0();
		if (!v20)
			goto LABEL_93;
		do
		{
			if (qword_140C63848)
			{
				v21 = qword_140C63848(off_140A6A5C8, v18, qword_140C63858);
			}
			else if (dword_140C63BB0)
			{
				v21 = 0i64;
			}
			else if ((int)sub_1402021C0() >= 0)
			{
				v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648C8 + 32i64))(qword_140C648C8, v18);
			}
			else
			{
				v21 = 0i64;
			}
			v22 = sub_14034BDD0(v19, *(_DWORD*)(v21 + 24));
			if (!(unsigned int)sub_14018E2C0(v17, (unsigned __int16*)v22))
				break;
			++v18;
		} while (v18 < v20);
		if (v18 < 0x20)
		{
		LABEL_93:
			v23 = sub_14018E820(*(WCHAR**)(v13 + 40)) - 1;
			if ((unsigned __int64)v23 < 0xA)
			{
				v24 = &v15[4 * v23 + 3 + v23];
				if (v24)
				{
					v25 = (1i64 << *(_DWORD*)sub_140202480(v18)) ^ *((unsigned int*)v24 + 2);
					v26 = sub_14018E820(*(WCHAR**)(v13 + 40));
					sub_14057EB50(v15, v26 - 1, v25);
					for (i = v13; i != v12; i += 32i64)
					{
						v28 = *(_QWORD*)(i + 8);
						if (v28)
							sub_14018B900(v28, 0);
					}
					goto LABEL_90;
				}
			}
		}
	}
	v29 = 1;
	v30 = 0i64;
	v31 = 0;
	v71 = 0;
	v73 = 1;
	if (qword_140C63838)
	{
		v32 = qword_140C63838(off_140A6A5C8, qword_140C63858);
		goto LABEL_43;
	}
	if (!dword_140C63BB0 && (int)sub_1402021C0() >= 0)
	{
		v32 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C648C8 + 40i64))(qword_140C648C8);
	LABEL_43:
		v72 = v32;
		if (v32)
		{
			do
			{
				v33 = sub_140202480(v31);
				v34 = v33;
				v35 = *(unsigned int*)(v33 + 28);
				if (!(_DWORD)v35 || (v35 & 4) != 0)
				{
					if (v29)
					{
						v36 = sub_14034BDD0(v35, *(_DWORD*)(v33 + 24));
						v37 = v30;
						v38 = (int*)v36;
						if (v36)
						{
							v39 = 0i64;
							if (*v36)
							{
								do
									++v39;
								while (v36[v39]);
							}
							v40 = sub_14018B280(2 * v39 + 18, 0);
							if (v40)
							{
								*((_QWORD*)v40 + 1) = v39;
								*(_QWORD*)v40 = off_140B55060;
							}
							else
							{
								v40 = 0i64;
							}
							v30 = v40 + 4;
							v41 = 2 * v39;
							sub_1407DB590(v40 + 4, v38, v41);
							*(_WORD*)((char*)v30 + v41) = 0;
							v31 = v71;
						}
						else
						{
							v30 = 0i64;
						}
						if (v37)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
						v29 = 0;
						v73 = 0;
					}
					else
					{
						v42 = v30;
						if (v30)
							v1 = *((_QWORD*)v30 - 1);
						v43 = 0i64;
						do
							v5 = asc_140B1F4B8[++v43] == 0;
						while (!v5);
						v44 = v43 + v1;
						v45 = (int*)sub_14018D140(v30, v43 + v1);
						sub_1407DB590((int*)((char*)v45 + 2 * v1), (int*)L" | ", 2 * v43);
						v1 = 0i64;
						v30 = v45;
						*((_WORD*)v45 + v44) = 0;
						if (v42 != v45 && v42)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v42 - 2) + 8i64))(v42 - 4);
						v47 = sub_14034BDD0(v46, *(_DWORD*)(v34 + 24));
						v48 = (int*)v47;
						if (v47)
						{
							if (v45)
								v1 = *((_QWORD*)v45 - 1);
							v49 = 0i64;
							if (*v47)
							{
								do
									++v49;
								while (v47[v49]);
							}
							v50 = v49 + v1;
							v30 = (int*)sub_14018D140(v45, v49 + v1);
							sub_1407DB590((int*)((char*)v30 + 2 * v1), v48, 2 * v49);
							v1 = 0i64;
							*((_WORD*)v30 + v50) = 0;
							if (v45 != v30 && v45)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v45 - 2) + 8i64))(v45 - 4);
						}
						v29 = v73;
						v31 = v71;
					}
				}
				v71 = ++v31;
			} while (v31 < v72);
			v12 = v67;
			v13 = v66;
		}
	}
	sub_1400B7090((__int64)v68, 113072);
	v68[0] = (__int64)off_140B69230;
	v70 = 0i64;
	v69 = 0i64;
	v51 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v69 = v51;
	*((_QWORD*)&v69 + 1) = v51;
	v70 = v51 + 4;
	if (v51)
		*(_WORD*)v51 = 0;
	v52 = sub_14018B280(96i64, 0);
	if (v52)
		v53 = (_QWORD*)sub_1404DDB40((__int64)v52, v30);
	else
		v53 = 0i64;
	sub_1400B7480((__int64)v68, v53);
	v54 = sub_1400B7660(v68);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v54 + 8), 0, 0i64);
	if ((_QWORD)v69)
		sub_14018B900(v69, 0);
	sub_1400B7390(v68);
	if (v30)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
LABEL_85:
	for (j = v13; j != v12; j += 32i64)
	{
		v56 = *(_QWORD*)(j + 8);
		if (v56)
			sub_14018B900(v56, 0);
	}
	if (v13)
		LABEL_90:
	sub_14018B900(v13, 0);
}
// 14058A0E2: variable 'v11' is possibly undefined
// 14058A0F4: variable 'v14' is possibly undefined
// 14058A17F: variable 'v19' is possibly undefined
// 14058A3B7: variable 'v46' is possibly undefined
// 140A6A5C8: using guessed type wchar_t *off_140A6A5C8[2];
// 140B1F488: using guessed type wchar_t asc_140B1F488[5];
// 140B1F4B8: using guessed type wchar_t asc_140B1F4B8[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BB0: using guessed type int dword_140C63BB0;
// 140C648C8: using guessed type __int64 qword_140C648C8;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140589F60: using guessed type char var_150[8];
// 140589F60: using guessed type char var_170[8];
// 140589F60: using guessed type char var_130[8];

