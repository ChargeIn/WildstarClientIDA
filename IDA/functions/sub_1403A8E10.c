#include "../winhttp.h"

//----- (00000001403A8E10) ----------------------------------------------------
__int64 __fastcall sub_1403A8E10(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rax
	int* v5; // r14
	int v6; // ebx
	unsigned __int64 i; // rdi
	__int64 v8; // rdx
	int* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rcx
	int* v13; // rax
	__int64 v14; // rax
	int* v15; // rcx
	__int64 v16; // r9
	__int64 v17; // rcx
	int* v18; // rdx
	__int64 v19; // rax
	unsigned int v20; // eax
	int* v21; // rax
	__int64 v22; // rbx
	int* v23; // rax
	int* v24; // rax
	int* v25; // rdi
	int v26; // ebx
	__int64 v27; // rcx
	unsigned int v28; // eax
	__int64 v29; // rbx
	_QWORD* v30; // rax
	__int64 v31; // rcx
	int* v32; // rdx
	int* v33; // rdx
	__int64 v34; // rcx
	__int64 v35; // rax
	__int16* v36; // rax
	int* v37; // r9
	int* v38; // rbx
	__int64 v39; // r8
	int* v40; // rdx
	__int64 v41; // rax
	__int64 v43; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v44; // [rsp+38h] [rbp-C8h]
	__int64 v45; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v46)(); // [rsp+50h] [rbp-B0h] BYREF
	char v47[8]; // [rsp+58h] [rbp-A8h] BYREF
	_WORD* v48; // [rsp+60h] [rbp-A0h]
	_WORD* v49; // [rsp+68h] [rbp-98h]
	_QWORD v50[2]; // [rsp+78h] [rbp-88h] BYREF
	int* v51; // [rsp+88h] [rbp-78h]
	int* v52; // [rsp+90h] [rbp-70h]
	__int64 v53; // [rsp+98h] [rbp-68h]
	unsigned int v54; // [rsp+A0h] [rbp-60h]
	char v55[8]; // [rsp+A8h] [rbp-58h] BYREF
	_WORD* v56; // [rsp+B0h] [rbp-50h]
	_WORD* v57; // [rsp+B8h] [rbp-48h]
	__int128 v58; // [rsp+110h] [rbp+10h]
	int* v59; // [rsp+120h] [rbp+20h]
	int* v60; // [rsp+178h] [rbp+78h] BYREF
	int* v61; // [rsp+180h] [rbp+80h] BYREF
	int* v62; // [rsp+188h] [rbp+88h] BYREF

	v4 = sub_140224D00(*a2);
	v5 = (int*)v4;
	if (!v4)
		return 0i64;
	v6 = *(_DWORD*)(v4 + 12);
	for (i = 0i64; ; ++i)
	{
		v8 = *(_QWORD*)(a1 + 32368);
		v9 = (int*)v8;
		v10 = *(_QWORD*)(v8 + 8);
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < v6)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v9 = (int*)v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		if (v9 == (int*)v8 || v6 < v9[8])
		{
			LODWORD(v43) = v6;
			v45 = 0i64;
			v44 = 0i64;
			v60 = v9;
			sub_1403AE300(a1 + 32360, &v61, (__int64*)&v60, (int*)&v43);
			v9 = v61;
		}
		v11 = *(_QWORD*)(a1 + 32368);
		if (i >= *((_QWORD*)v9 + 6))
			break;
		v12 = *(_QWORD*)(v11 + 8);
		v13 = *(int**)(a1 + 32368);
		while (v12)
		{
			if (*(_DWORD*)(v12 + 32) < v6)
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
			else
			{
				v13 = (int*)v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
		}
		if (v13 == (int*)v11 || v6 < v13[8])
		{
			LODWORD(v43) = v6;
			v45 = 0i64;
			v44 = 0i64;
			v60 = v13;
			sub_1403AE300(a1 + 32360, &v62, (__int64*)&v60, (int*)&v43);
			v13 = v62;
		}
		if (*(_DWORD*)(*((_QWORD*)v13 + 5) + 4 * i) == *v5)
			goto LABEL_31;
	}
	v14 = *(_QWORD*)(v11 + 8);
	v15 = *(int**)(a1 + 32368);
	while (v14)
	{
		if (*(_DWORD*)(v14 + 32) < v6)
		{
			v14 = *(_QWORD*)(v14 + 24);
		}
		else
		{
			v15 = (int*)v14;
			v14 = *(_QWORD*)(v14 + 16);
		}
	}
	if (v15 == (int*)v11 || v6 < v15[8])
	{
		v60 = v15;
		LODWORD(v43) = v6;
		v45 = 0i64;
		v44 = 0i64;
		sub_1403AE300(a1 + 32360, &v61, (__int64*)&v60, (int*)&v43);
		v15 = v61;
	}
	sub_140003460((__int64*)v15 + 5, v5);
LABEL_31:
	v16 = *(_QWORD*)(a1 + 32432);
	v17 = *(_QWORD*)(v16 + 8);
	v18 = (int*)v16;
	v19 = v17;
	while (v19)
	{
		if (*(_DWORD*)(v19 + 32) < (unsigned int)*v5)
		{
			v19 = *(_QWORD*)(v19 + 24);
		}
		else
		{
			v18 = (int*)v19;
			v19 = *(_QWORD*)(v19 + 16);
		}
	}
	if (v18 == (int*)v16 || (v20 = v18[8], v60 = v18, *v5 < v20))
		v60 = (int*)v16;
	if (v60 == (int*)v16)
	{
		v21 = (int*)v16;
		while (v17)
		{
			if (*(_DWORD*)(v17 + 32) < (unsigned int)*v5)
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v21 = (int*)v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
		if (v21 == (int*)v16 || *v5 < (unsigned int)v21[8])
		{
			v60 = (int*)(unsigned int)*v5;
			v61 = v21;
			sub_140032B30(a1 + 32424, &v62, (__int64*)&v61, &v60);
			v21 = v62;
		}
		v21[9] = 1;
	}
	else
	{
		++v60[9];
	}
	v22 = sub_1407A0FD0(qword_140C65B70, v5[4]);
	sub_1400B6F30((__int64)&v46);
	v58 = 0i64;
	v46 = off_140B69230;
	v59 = 0i64;
	v23 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v58 = v23;
	*((_QWORD*)&v58 + 1) = v23;
	v59 = v23 + 4;
	if (v23)
		*(_WORD*)v23 = 0;
	v24 = sub_14018B280(96i64, 0);
	v25 = v24;
	if (v24)
	{
		v26 = *(_DWORD*)(*(_QWORD*)(v22 + 8) + 16i64);
		sub_1400B6390(v24);
		*(_QWORD*)v25 = off_140B69170;
		v25[22] = 1;
		sub_1400B6D70((__int64)v25, (__int64)L"name", v26);
		v60 = v25;
	}
	else
	{
		v25 = 0i64;
		v60 = 0i64;
	}
	v27 = v53;
	v28 = v54;
	if ((int*)v50[1] == v51)
		v27 = (__int64)v25;
	v53 = v27;
	++v54;
	v29 = *(_QWORD*)v25;
	v30 = sub_14018EFA0(&v43, (__int64)L"%d", v28);
	(*(void(__fastcall**)(int*, _QWORD*))(v29 + 72))(v25, v30);
	v31 = v44;
	if (v44)
		sub_14018B900(v44, 0);
	v32 = v51;
	if (v51 == v52)
	{
		sub_1400B9430(v50, v51, &v60);
	}
	else
	{
		if (v51)
		{
			*(_QWORD*)v51 = v25;
			v32 = v51;
		}
		v51 = v32 + 2;
	}
	if (v56 != v57)
	{
		*v56 = 0;
		v57 = v56;
	}
	v33 = (int*)sub_14034BDD0(v31, 751826);
	if (v33)
	{
		v35 = 0i64;
		if (*(_WORD*)v33)
		{
			do
				++v35;
			while (*((_WORD*)v33 + v35));
		}
		sub_14001C480((__int64)v47, v33, (int*)((char*)v33 + 2 * v35));
	}
	else if (v48 != v49)
	{
		*v48 = 0;
		v49 = v48;
	}
	v36 = sub_14034BDD0(v34, 4829);
	v37 = (int*)v56;
	v38 = (int*)v36;
	if (v56 == v57 && qword_140C63648)
	{
		v60 = 0i64;
		(**(void(__fastcall***)(__int64, _WORD*, __int64(__fastcall***)(), int**))qword_140C63648)(
			qword_140C63648,
			v48,
			&v46,
			&v60);
		v40 = v60;
		if (v60)
		{
			v41 = 0i64;
			if (*(_WORD*)v60)
			{
				do
					++v41;
				while (*((_WORD*)v60 + v41));
			}
			sub_14001C480((__int64)v55, v60, (int*)((char*)v60 + 2 * v41));
			v37 = (int*)v56;
			goto LABEL_80;
		}
		v37 = (int*)v56;
		if (v56 != v57)
		{
			*v56 = 0;
			v37 = (int*)v56;
			v57 = v56;
		LABEL_80:
			if (v60)
			{
				(*(void(__fastcall**)(int*, int*, __int64, int*))(*((_QWORD*)v60 - 2) + 8i64))(v60 - 4, v40, v39, v37);
				v37 = (int*)v56;
			}
		}
	}
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v37, 0, v38);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PetFlairUnlocked", byte_1409EC0D4, *a2);
	if ((_QWORD)v58)
		sub_14018B900(v58, 0);
	sub_1400B7390(&v46);
	return 0i64;
}
// 1403A91D2: variable 'v31' is possibly undefined
// 1403A9220: variable 'v34' is possibly undefined
// 1403A92B4: variable 'v40' is possibly undefined
// 1403A92B4: variable 'v39' is possibly undefined
// 1409D2FA4: using guessed type wchar_t aD_5[3];
// 1409EC0D4: using guessed type _BYTE byte_1409EC0D4[56];
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1403A8E10: using guessed type char var_108[8];
// 1403A8E10: using guessed type char var_B8[8];

