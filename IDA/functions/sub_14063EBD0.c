#include "../winhttp.h"

//----- (000000014063EBD0) ----------------------------------------------------
void __fastcall sub_14063EBD0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
	int* v4; // r12
	__int64 v6; // rax
	bool v7; // zf
	__int64 v8; // rsi
	char* v9; // rdi
	unsigned __int64 v10; // r15
	char* v11; // rbx
	wchar_t* v12; // rdx
	const wchar_t* v13; // rax
	unsigned __int64 v14; // rbx
	__int64 v15; // rax
	char* v16; // rax
	__int64 v17; // r14
	__int64* v18; // rax
	__int64 v19; // rax
	char* v20; // rbx
	unsigned __int64 v21; // rcx
	int* v22; // rcx
	signed __int64 v23; // rdi
	__int64 v24; // rdx
	__int64* v25; // rax
	__int64 v26; // rcx
	int* v27; // rdi
	int* v28; // r15
	__int64 v29; // rax
	int* v30; // rsi
	unsigned __int64 v31; // rcx
	int* v32; // rbx
	signed __int64 v33; // rdi
	int v34; // eax
	__int64 v35; // rcx
	__int64 v36; // r13
	int* v37; // rax
	int* v38; // rax
	_QWORD* v39; // r14
	int* v40; // rdi
	__int64 v41; // rax
	__int64 v42; // rsi
	int* v43; // rax
	int* v44; // rax
	_QWORD* v45; // r14
	int* v46; // rdi
	__int64 v47; // rax
	__int64 v48; // rsi
	int* v49; // rax
	__int64* v50; // rax
	__int64* v51; // r14
	int* v52; // rdi
	__int64 v53; // rax
	__int64 v54; // rsi
	int* v55; // rax
	__int128 v56; // rdi
	unsigned int v57; // ebx
	__int64 v58; // rax
	__int64 v59; // rax
	__int128 v60; // [rsp+30h] [rbp-D0h] BYREF
	int* v61; // [rsp+40h] [rbp-C0h]
	__int64 v62; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v63)(); // [rsp+50h] [rbp-B0h] BYREF
	char v64[184]; // [rsp+58h] [rbp-A8h] BYREF
	__int128 v65; // [rsp+110h] [rbp+10h]
	int* v66; // [rsp+120h] [rbp+20h]
	__int64 v67; // [rsp+170h] [rbp+70h] BYREF
	unsigned __int64 v68; // [rsp+180h] [rbp+80h] BYREF

	v4 = 0i64;
	v6 = 0i64;
	do
		v7 = asc_140B28D00[++v6] == 0;
	while (!v7);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = *(char**)(a1 + 8);
	v10 = (v8 - (__int64)v9) >> 1;
	if (!v10)
		goto LABEL_13;
	v11 = *(char**)(a1 + 8);
	if (v9 == (char*)v8)
	{
	LABEL_10:
		v11 = *(char**)(a1 + 16);
	}
	else
	{
		v12 = &asc_140B28D00[v6];
		while (1)
		{
			v13 = L"\n \t";
			if (L"\n \t" != v12)
				break;
		LABEL_9:
			v11 += 2;
			if (v11 == (char*)v8)
				goto LABEL_10;
		}
		while (*(_WORD*)v11 != *v13)
		{
			if (++v13 == v12)
				goto LABEL_9;
		}
	}
	if (v11 == (char*)v8)
		LABEL_13:
	v14 = -1i64;
	else
		v14 = (v11 - v9) >> 1;
	v15 = 0i64;
	do
		v7 = asc_140B28CD8[++v15] == 0;
	while (!v7);
	if (v14 <= v10)
	{
		*(_QWORD*)&v60 = L"\n \t";
		*((_QWORD*)&v60 + 1) = &asc_140B28CD8[v15];
		v16 = (char*)sub_1400F9810(&v9[2 * v14], v8, (_WORD**)&v60, a4);
		if (v16 != (char*)v8)
		{
			v17 = (v16 - v9) >> 1;
			if (v17 != -1)
			{
				v68 = v14;
				v18 = &v67;
				v67 = (v8 - (__int64)v9) >> 1;
				if (v10 >= v14)
					v18 = (__int64*)&v68;
				v19 = *v18;
				v20 = &v9[2 * v19];
				v21 = ((2 * v19) >> 1) + 1;
				if (v21 <= 0x7FFFFFFFFFFFFFFEi64)
					v4 = sub_14018B280(2 * v21, 0);
				v22 = v4;
				if (v9 != v20)
				{
					v23 = v9 - (char*)v4;
					do
					{
						if (v22)
							*(_WORD*)v22 = *(_WORD*)((char*)v22 + v23);
						v22 = (int*)((char*)v22 + 2);
					} while ((char*)v22 + v23 != v20);
				}
				if (v22)
					*(_WORD*)v22 = 0;
				v24 = *(_QWORD*)(a1 + 8);
				v25 = &v67;
				v26 = *(_QWORD*)(a1 + 16) - v24;
				v68 = -1i64;
				v27 = (int*)(v24 + 2 * v17);
				v28 = 0i64;
				v67 = (v26 >> 1) - v17;
				if (v67 == -1)
					v25 = (__int64*)&v68;
				v29 = v17 + *v25;
				v30 = (int*)(v24 + 2 * v29);
				v31 = ((2 * v29 - 2 * v17) >> 1) + 1;
				if (v31 <= 0x7FFFFFFFFFFFFFFEi64)
					v28 = sub_14018B280(2 * v31, 0);
				v32 = v28;
				if (v27 != v30)
				{
					v33 = (char*)v27 - (char*)v28;
					do
					{
						if (v32)
							*(_WORD*)v32 = *(_WORD*)((char*)v32 + v33);
						v32 = (int*)((char*)v32 + 2);
					} while ((int*)((char*)v32 + v33) != v30);
				}
				if (v32)
					*(_WORD*)v32 = 0;
				v34 = sub_1407DF510((WCHAR*)v4);
				v36 = sub_1405A8A40(v35, v34);
				if (v36)
				{
					sub_1400B6F30((__int64)&v63);
					v63 = off_140B69230;
					v66 = 0i64;
					v65 = 0i64;
					v37 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v65 = v37;
					*((_QWORD*)&v65 + 1) = v37;
					v66 = v37 + 4;
					if (v37)
						*(_WORD*)v37 = 0;
					sub_14001C480((__int64)v64, v28, v32);
					v38 = sub_14018B280(88i64, 0);
					if (v38)
						v39 = (_QWORD*)sub_1404DC400((__int64)v38, 1);
					else
						v39 = 0i64;
					v40 = 0i64;
					*((_QWORD*)&v60 + 1) = 0i64;
					v61 = 0i64;
					v62 = 0i64;
					v41 = 0i64;
					do
						++v41;
					while (word_140B0A7C8[v41]);
					v42 = (2 * v41) >> 1;
					if ((unsigned __int64)(v42 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v40 = sub_14018B280(2 * (v42 + 1), 0);
						*((_QWORD*)&v60 + 1) = v40;
						v61 = v40;
						v62 = (__int64)v40 + 2 * v42 + 2;
					}
					sub_1407DB590(v40, (int*)word_140B0A7C8, 2 * v42);
					v43 = (int*)((char*)v40 + 2 * v42);
					v61 = v43;
					if (v43)
						*(_WORD*)v43 = 0;
					sub_1400B7480((__int64)&v63, v39);
					(*(void(__fastcall**)(_QWORD*, __int128*))(*v39 + 72i64))(v39, &v60);
					if (*((_QWORD*)&v60 + 1))
						sub_14018B900(*((__int64*)&v60 + 1), 0);
					v44 = sub_14018B280(96i64, 0);
					if (v44)
						v45 = (_QWORD*)sub_1404DB7E0((__int64)v44, *(_QWORD*)(qword_140C65898 + 120));
					else
						v45 = 0i64;
					v46 = 0i64;
					*((_QWORD*)&v60 + 1) = 0i64;
					v61 = 0i64;
					v62 = 0i64;
					v47 = 0i64;
					do
						++v47;
					while (word_140B0A7D8[v47]);
					v48 = (2 * v47) >> 1;
					if ((unsigned __int64)(v48 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v46 = sub_14018B280(2 * (v48 + 1), 0);
						*((_QWORD*)&v60 + 1) = v46;
						v61 = v46;
						v62 = (__int64)v46 + 2 * v48 + 2;
					}
					sub_1407DB590(v46, (int*)word_140B0A7D8, 2 * v48);
					v49 = (int*)((char*)v46 + 2 * v48);
					v61 = v49;
					if (v49)
						*(_WORD*)v49 = 0;
					sub_1400B7480((__int64)&v63, v45);
					(*(void(__fastcall**)(_QWORD*, __int128*))(*v45 + 72i64))(v45, &v60);
					if (*((_QWORD*)&v60 + 1))
						sub_14018B900(*((__int64*)&v60 + 1), 0);
					v50 = (__int64*)sub_14018B280(88i64, 0);
					if (v50)
						v51 = sub_1404DD130(v50, **(_DWORD**)(v36 + 8));
					else
						v51 = 0i64;
					v52 = 0i64;
					*((_QWORD*)&v60 + 1) = 0i64;
					v61 = 0i64;
					v62 = 0i64;
					v53 = 0i64;
					do
						v7 = aQuest_7[++v53] == 0;
					while (!v7);
					v54 = (2 * v53) >> 1;
					if ((unsigned __int64)(v54 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v52 = sub_14018B280(2 * (v54 + 1), 0);
						*((_QWORD*)&v60 + 1) = v52;
						v61 = v52;
						v62 = (__int64)v52 + 2 * v54 + 2;
					}
					sub_1407DB590(v52, (int*)L"quest", 2 * v54);
					v55 = (int*)((char*)v52 + 2 * v54);
					v61 = v55;
					if (v55)
						*(_WORD*)v55 = 0;
					sub_1400B7480((__int64)&v63, v51);
					(*(void(__fastcall**)(__int64*, __int128*))(*v51 + 72))(v51, &v60);
					if (*((_QWORD*)&v60 + 1))
						sub_14018B900(*((__int64*)&v60 + 1), 0);
					sub_1405518E0(v36, (__int64*)&v60);
					v56 = v60;
					v57 = 0;
					if (*((_QWORD*)&v60 + 1))
					{
						v58 = 0i64;
						do
						{
							sub_1400B7480((__int64)&v63, *(_QWORD**)(v56 + 8 * v58));
							v58 = ++v57;
						} while ((unsigned __int64)v57 < *((_QWORD*)&v56 + 1));
					}
					v59 = sub_1400B7660(&v63);
					sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, *(int**)(v59 + 8), 0, 0i64);
					if ((_QWORD)v56)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v56 - 16) + 8i64))(v56 - 16);
					if ((_QWORD)v65)
						sub_14018B900(v65, 0);
					sub_1400B7390(&v63);
				}
				if (v28)
					sub_14018B900((__int64)v28, 0);
				if (v4)
					sub_14018B900((__int64)v4, 0);
			}
		}
	}
}
// 14063EE03: variable 'v35' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B28CD8: using guessed type wchar_t asc_140B28CD8[4];
// 140B28CE0: using guessed type wchar_t aQuest_7[6];
// 140B28D00: using guessed type wchar_t asc_140B28D00[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 14063EBD0: using guessed type char var_108[184];

