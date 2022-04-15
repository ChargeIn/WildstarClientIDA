#include "../winhttp.h"

//----- (0000000140603A60) ----------------------------------------------------
__int64 __fastcall sub_140603A60(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // r15
	__int64 v5; // r14
	__int64 v6; // r13
	__int64 v7; // rsi
	_DWORD* v8; // rdx
	__int64 v9; // rdi
	__int64 v10; // rcx
	int* v11; // rax
	int* v12; // rax
	_QWORD* v13; // r14
	__int64 v14; // rax
	int* v15; // rsi
	__int64 v16; // r15
	int* v17; // rax
	__int64 v18; // rcx
	int* v19; // rdx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64* v22; // rcx
	__int64 v23; // r12
	int* v24; // rax
	_QWORD* v25; // r15
	int* v26; // rsi
	__int64 v27; // rax
	__int64 v28; // r14
	int* v29; // rax
	int* v30; // rax
	_QWORD* v31; // r15
	int* v32; // rsi
	__int64 v33; // rax
	__int64 v34; // r14
	int* v35; // rax
	__int64 v36; // rcx
	int* v37; // rdx
	__int64 v38; // rax
	__int64 v39; // rax
	int* v40; // rax
	_QWORD* v41; // r15
	int* v42; // rsi
	__int64 v43; // rax
	__int64 v44; // r14
	int* v45; // rax
	int* v46; // rax
	_QWORD* v47; // r14
	int* v48; // rdi
	__int64 v49; // rax
	__int64 v50; // rsi
	int* v51; // rax
	__int64 v52; // rcx
	int* v53; // rdx
	__int64 v54; // rax
	__int64 v55; // rax
	__int64 v57; // [rsp+38h] [rbp-D0h] BYREF
	int* v58; // [rsp+40h] [rbp-C8h]
	int* v59; // [rsp+48h] [rbp-C0h]
	__int64 v60; // [rsp+50h] [rbp-B8h]
	__int64(__fastcall * *v61)(); // [rsp+58h] [rbp-B0h] BYREF
	__int64 v62; // [rsp+60h] [rbp-A8h] BYREF
	_WORD* v63; // [rsp+68h] [rbp-A0h]
	_WORD* v64; // [rsp+70h] [rbp-98h]
	__int128 v65; // [rsp+118h] [rbp+10h]
	int* v66; // [rsp+128h] [rbp+20h]
	__int64 v67; // [rsp+138h] [rbp+30h] BYREF
	char v68[8]; // [rsp+140h] [rbp+38h] BYREF
	_WORD* v69; // [rsp+148h] [rbp+40h]
	_WORD* v70; // [rsp+150h] [rbp+48h]
	__int64 v71; // [rsp+1F8h] [rbp+F0h]
	__int64 v73; // [rsp+268h] [rbp+160h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	v4 = a1;
	if (v2 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2)
	{
		v5 = a2 + 16;
		if (sub_14079EE60(v2, a2 + 16, (unsigned __int64*)&v73))
			v6 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v73);
		else
			v6 = 0i64;
		v7 = *(_QWORD*)(v4 + 64);
		if (sub_14079EE60(v7, a2 + 32, (unsigned __int64*)&v73))
			v73 = *(_QWORD*)(*(_QWORD*)(v7 + 88) + 8 * v73);
		else
			v73 = 0i64;
		v8 = (_DWORD*)(v6 + 272);
		if (*(_DWORD*)(a2 + 48))
		{
			v9 = *(_QWORD*)(v4 + 64);
			if (sub_14079EE60(v9, (__int64)v8, (unsigned __int64*)&v73))
			{
				v10 = *(_QWORD*)(*(_QWORD*)(v9 + 88) + 8 * v73);
				if (v10)
					sub_1406075F0((__int64*)(v10 + 288), v5);
			}
			*(_DWORD*)(v6 + 272) = 0;
			*(_QWORD*)(v6 + 280) = 0i64;
			sub_1400B6F30((__int64)&v61);
			v61 = off_140B69230;
			v66 = 0i64;
			v65 = 0i64;
			v11 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v65 = v11;
			*((_QWORD*)&v65 + 1) = v11;
			v66 = v11 + 4;
			if (v11)
				*(_WORD*)v11 = 0;
			v12 = sub_14018B280(96i64, 0);
			if (v12)
				v13 = (_QWORD*)sub_1404DDB40((__int64)v12, (int*)(v6 + 32));
			else
				v13 = 0i64;
			v14 = 0i64;
			v15 = 0i64;
			v58 = 0i64;
			v59 = 0i64;
			v60 = 0i64;
			do
				++v14;
			while (word_140B0A7C8[v14]);
			v16 = (2 * v14) >> 1;
			if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v15 = sub_14018B280(2 * (v16 + 1), 0);
				v58 = v15;
				v59 = v15;
				v60 = (__int64)v15 + 2 * v16 + 2;
			}
			sub_1407DB590(v15, (int*)word_140B0A7C8, 2 * v16);
			v17 = (int*)((char*)v15 + 2 * v16);
			v59 = v17;
			if (v17)
				*(_WORD*)v17 = 0;
			sub_1400B7480((__int64)&v61, v13);
			(*(void(__fastcall**)(_QWORD*, __int64*))(*v13 + 72i64))(v13, &v57);
			v18 = (__int64)v58;
			if (v58)
				sub_14018B900((__int64)v58, 0);
			v19 = (int*)sub_14034BDD0(v18, 376336);
			if (v19)
			{
				v20 = 0i64;
				if (*(_WORD*)v19)
				{
					do
						++v20;
					while (*((_WORD*)v19 + v20));
				}
				sub_14001C480((__int64)&v62, v19, (int*)((char*)v19 + 2 * v20));
			}
			else if (v63 != v64)
			{
				*v63 = 0;
				v64 = v63;
			}
			v21 = sub_1400B7660(&v61);
			sub_140003890((__int64*)qword_140C658A0, 7u, 0i64, *(int**)(v21 + 8), 0, 0i64);
			if ((_QWORD)v65)
				sub_14018B900(v65, 0);
			v22 = (__int64*)&v61;
		}
		else
		{
			if (*v8 == *(_DWORD*)(a2 + 32) && *(_QWORD*)(v6 + 280) == *(_QWORD*)(a2 + 40))
				goto LABEL_103;
			if (*v8)
			{
				if (*(_QWORD*)(v6 + 280))
				{
					v23 = sub_14079EE20(*(_QWORD*)(v4 + 64), (__int64)v8);
					if (v23)
					{
						sub_1404DDE90(&v61);
						v24 = sub_14018B280(96i64, 0);
						if (v24)
							v25 = (_QWORD*)sub_1404DDB40((__int64)v24, (int*)(v6 + 32));
						else
							v25 = 0i64;
						v26 = 0i64;
						v58 = 0i64;
						v59 = 0i64;
						v60 = 0i64;
						v27 = 0i64;
						do
							++v27;
						while (word_140B0A7C8[v27]);
						v28 = (2 * v27) >> 1;
						if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v26 = sub_14018B280(2 * (v28 + 1), 0);
							v58 = v26;
							v59 = v26;
							v60 = (__int64)v26 + 2 * v28 + 2;
						}
						sub_1407DB590(v26, (int*)word_140B0A7C8, 2 * v28);
						v29 = (int*)((char*)v26 + 2 * v28);
						v59 = v29;
						if (v29)
							*(_WORD*)v29 = 0;
						sub_1400B7480((__int64)&v61, v25);
						(*(void(__fastcall**)(_QWORD*, __int64*))(*v25 + 72i64))(v25, &v57);
						if (v58)
							sub_14018B900((__int64)v58, 0);
						v30 = sub_14018B280(96i64, 0);
						if (v30)
							v31 = (_QWORD*)sub_1404DDB40((__int64)v30, (int*)(v23 + 32));
						else
							v31 = 0i64;
						v32 = 0i64;
						v58 = 0i64;
						v59 = 0i64;
						v60 = 0i64;
						v33 = 0i64;
						do
							++v33;
						while (word_140B0A7D8[v33]);
						v34 = (2 * v33) >> 1;
						if ((unsigned __int64)(v34 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v32 = sub_14018B280(2 * (v34 + 1), 0);
							v58 = v32;
							v59 = v32;
							v60 = (__int64)v32 + 2 * v34 + 2;
						}
						sub_1407DB590(v32, (int*)word_140B0A7D8, 2 * v34);
						v35 = (int*)((char*)v32 + 2 * v34);
						v59 = v35;
						if (v35)
							*(_WORD*)v35 = 0;
						sub_1400B7480((__int64)&v61, v31);
						(*(void(__fastcall**)(_QWORD*, __int64*))(*v31 + 72i64))(v31, &v57);
						v36 = (__int64)v58;
						if (v58)
							sub_14018B900((__int64)v58, 0);
						v37 = (int*)sub_14034BDD0(v36, 584988);
						if (v37)
						{
							v38 = 0i64;
							if (*(_WORD*)v37)
							{
								do
									++v38;
								while (*((_WORD*)v37 + v38));
							}
							sub_14001C480((__int64)&v62, v37, (int*)((char*)v37 + 2 * v38));
						}
						else if (v63 != v64)
						{
							*v63 = 0;
							v64 = v63;
						}
						v39 = sub_1400B7660(&v61);
						sub_140003890((__int64*)qword_140C658A0, 7u, 0i64, *(int**)(v39 + 8), 0, 0i64);
						if ((_QWORD)v65)
							sub_14018B900(v65, 0);
						sub_1400B7390(&v61);
						v4 = a1;
					}
				}
			}
			sub_140604C70(v4, v6, v73);
			sub_1404DDE90(&v67);
			v40 = sub_14018B280(96i64, 0);
			if (v40)
				v41 = (_QWORD*)sub_1404DDB40((__int64)v40, (int*)(v6 + 32));
			else
				v41 = 0i64;
			v42 = 0i64;
			v58 = 0i64;
			v59 = 0i64;
			v60 = 0i64;
			v43 = 0i64;
			do
				++v43;
			while (word_140B0A7C8[v43]);
			v44 = (2 * v43) >> 1;
			if ((unsigned __int64)(v44 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v42 = sub_14018B280(2 * (v44 + 1), 0);
				v58 = v42;
				v59 = v42;
				v60 = (__int64)v42 + 2 * v44 + 2;
			}
			sub_1407DB590(v42, (int*)word_140B0A7C8, 2 * v44);
			v45 = (int*)((char*)v42 + 2 * v44);
			v59 = v45;
			if (v45)
				*(_WORD*)v45 = 0;
			sub_1400B7480((__int64)&v67, v41);
			(*(void(__fastcall**)(_QWORD*, __int64*))(*v41 + 72i64))(v41, &v57);
			if (v58)
				sub_14018B900((__int64)v58, 0);
			v46 = sub_14018B280(96i64, 0);
			if (v46)
				v47 = (_QWORD*)sub_1404DDB40((__int64)v46, (int*)(v73 + 32));
			else
				v47 = 0i64;
			v48 = 0i64;
			v58 = 0i64;
			v59 = 0i64;
			v60 = 0i64;
			v49 = 0i64;
			do
				++v49;
			while (word_140B0A7D8[v49]);
			v50 = (2 * v49) >> 1;
			if ((unsigned __int64)(v50 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v48 = sub_14018B280(2 * (v50 + 1), 0);
				v58 = v48;
				v59 = v48;
				v60 = (__int64)v48 + 2 * v50 + 2;
			}
			sub_1407DB590(v48, (int*)word_140B0A7D8, 2 * v50);
			v51 = (int*)((char*)v48 + 2 * v50);
			v59 = v51;
			if (v51)
				*(_WORD*)v51 = 0;
			sub_1400B7480((__int64)&v67, v47);
			(*(void(__fastcall**)(_QWORD*, __int64*))(*v47 + 72i64))(v47, &v57);
			v52 = (__int64)v58;
			if (v58)
				sub_14018B900((__int64)v58, 0);
			v53 = (int*)sub_14034BDD0(v52, 376338);
			if (v53)
			{
				v54 = 0i64;
				if (*(_WORD*)v53)
				{
					do
						++v54;
					while (*((_WORD*)v53 + v54));
				}
				sub_14001C480((__int64)v68, v53, (int*)((char*)v53 + 2 * v54));
			}
			else if (v69 != v70)
			{
				*v69 = 0;
				v70 = v69;
			}
			v55 = sub_1400B7660(&v67);
			sub_140003890((__int64*)qword_140C658A0, 7u, 0i64, *(int**)(v55 + 8), 0, 0i64);
			if (v71)
				sub_14018B900(v71, 0);
			v22 = &v67;
		}
		sub_1400B7390(v22);
		v4 = a1;
	LABEL_103:
		sub_140605020(v4, 1);
	}
	return 0i64;
}
// 140603C9E: variable 'v18' is possibly undefined
// 140603F5C: variable 'v36' is possibly undefined
// 1406041D6: variable 'v52' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140603A60: using guessed type char var_108[8];

