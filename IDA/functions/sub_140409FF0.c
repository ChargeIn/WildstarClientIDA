#include "../winhttp.h"

//----- (0000000140409FF0) ----------------------------------------------------
__int64 __fastcall sub_140409FF0(__int64 a1, FILETIME* a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	signed int LastError; // eax
	bool v7; // sf
	unsigned int v9; // esi
	signed int v10; // eax
	int* v11; // rbx
	int* v12; // rax
	int* v13; // rax
	_QWORD* v14; // rax
	int* v15; // rax
	_QWORD* v16; // rax
	int* v17; // rax
	int* v18; // rax
	int* v19; // r14
	signed int v20; // edi
	int* v21; // r14
	signed int v22; // edi
	int* v23; // r14
	signed int v24; // edi
	int* v25; // rax
	int* v26; // r14
	signed int v27; // edi
	int* v28; // rax
	int* v29; // rax
	int* v30; // r14
	signed int v31; // edi
	int* v32; // r14
	signed int v33; // edi
	int* v34; // r14
	signed int v35; // edi
	int* v36; // rax
	int* v37; // r14
	signed int v38; // edi
	int* v39; // rax
	int* v40; // rax
	int* v41; // r14
	signed int v42; // edi
	int* v43; // r14
	signed int v44; // edi
	int* v45; // rax
	int* v46; // r14
	signed int v47; // edi
	void(__fastcall * **v48)(_QWORD, __int64, __int64*, FILETIME*); // rcx
	__int64 v49; // rax
	__int64 v50; // rax
	__int64 v51; // rax
	__int64 v52; // r8
	FILETIME v53; // rdx
	__int64 v54; // rax
	_WORD* v55; // r9
	FILETIME FileTime; // [rsp+60h] [rbp-A0h] BYREF
	struct _FILETIME LocalFileTime; // [rsp+68h] [rbp-98h] BYREF
	int* v58; // [rsp+70h] [rbp-90h] BYREF
	int* v59; // [rsp+78h] [rbp-88h] BYREF
	__int64 v60[11]; // [rsp+80h] [rbp-80h] BYREF
	char v61[8]; // [rsp+D8h] [rbp-28h] BYREF
	_WORD* v62; // [rsp+E0h] [rbp-20h]
	_WORD* v63; // [rsp+E8h] [rbp-18h]
	__int128 v64; // [rsp+140h] [rbp+40h]
	int* v65; // [rsp+150h] [rbp+50h]
	__int64 v66[11]; // [rsp+160h] [rbp+60h] BYREF
	char v67[8]; // [rsp+1B8h] [rbp+B8h] BYREF
	_WORD* v68; // [rsp+1C0h] [rbp+C0h]
	_WORD* v69; // [rsp+1C8h] [rbp+C8h]
	__int128 v70; // [rsp+220h] [rbp+120h]
	int* v71; // [rsp+230h] [rbp+130h]
	__int64 v72[11]; // [rsp+240h] [rbp+140h] BYREF
	char v73[8]; // [rsp+298h] [rbp+198h] BYREF
	_WORD* v74; // [rsp+2A0h] [rbp+1A0h]
	_WORD* v75; // [rsp+2A8h] [rbp+1A8h]
	__int128 v76; // [rsp+300h] [rbp+200h]
	int* v77; // [rsp+310h] [rbp+210h]
	__int64 v78[11]; // [rsp+320h] [rbp+220h] BYREF
	char v79[8]; // [rsp+378h] [rbp+278h] BYREF
	_WORD* v80; // [rsp+380h] [rbp+280h]
	_WORD* v81; // [rsp+388h] [rbp+288h]
	__int128 v82; // [rsp+3E0h] [rbp+2E0h]
	int* v83; // [rsp+3F0h] [rbp+2F0h]
	struct _SYSTEMTIME SystemTime; // [rsp+400h] [rbp+300h] BYREF

	sub_14034BDD0(a1, 436757);
	sub_14034BDD0(v3, 436719);
	sub_14034BDD0(v4, 436754);
	sub_14034BDD0(v5, 437437);
	FileTime = *a2;
	if (!FileTimeToLocalFileTime(&FileTime, &LocalFileTime) || !FileTimeToSystemTime(&LocalFileTime, &SystemTime))
	{
		LastError = GetLastError();
		v7 = LastError < 0;
		if (LastError > 0)
			v7 = 1;
		if (v7)
			return 1i64;
	}
	v9 = 0;
	FileTime = 0i64;
	v10 = sub_14034BFC0(&SystemTime, (int**)&FileTime);
	v11 = (int*)FileTime;
	if (v10 >= 0)
	{
		sub_1400B7090((__int64)v78, 436757);
		v78[0] = (__int64)off_140B69230;
		v83 = 0i64;
		v82 = 0i64;
		v12 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v82 = v12;
		*((_QWORD*)&v82 + 1) = v12;
		v83 = v12 + 4;
		if (v12)
			*(_WORD*)v12 = 0;
		v13 = sub_14018B280(96i64, 0);
		if (v13)
			v14 = (_QWORD*)sub_1404DDB40((__int64)v13, *(int**)(qword_140C65898 + 136));
		else
			v14 = 0i64;
		sub_1400B7480((__int64)v78, v14);
		v15 = sub_14018B280(96i64, 0);
		if (v15)
			v16 = (_QWORD*)sub_1404DDB40((__int64)v15, v11);
		else
			v16 = 0i64;
		sub_1400B7480((__int64)v78, v16);
		sub_1400B7090((__int64)v66, 436719);
		v66[0] = (__int64)off_140B69230;
		v71 = 0i64;
		v70 = 0i64;
		v17 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v70 = v17;
		*((_QWORD*)&v70 + 1) = v17;
		v71 = v17 + 4;
		if (v17)
			*(_WORD*)v17 = 0;
		v18 = sub_14018B280(88i64, 0);
		v19 = v18;
		if (v18)
		{
			v20 = a2[1].dwHighDateTime / 0x15180;
			sub_1400B6390(v18);
			*(_QWORD*)v19 = off_140B69300;
			v19[2] = v20;
			*((float*)v19 + 3) = (float)v20;
		}
		else
		{
			v19 = 0i64;
		}
		sub_1400B7480((__int64)v66, v19);
		v21 = sub_14018B280(88i64, 0);
		if (v21)
		{
			v22 = a2[1].dwHighDateTime % 0x15180 / 0xE10;
			sub_1400B6390(v21);
			*(_QWORD*)v21 = off_140B69300;
			v21[2] = v22;
			*((float*)v21 + 3) = (float)v22;
		}
		else
		{
			v21 = 0i64;
		}
		sub_1400B7480((__int64)v66, v21);
		v23 = sub_14018B280(88i64, 0);
		if (v23)
		{
			v24 = a2[1].dwHighDateTime % 0xE10 / 0x3C;
			sub_1400B6390(v23);
			*(_QWORD*)v23 = off_140B69300;
			v23[2] = v24;
			*((float*)v23 + 3) = (float)v24;
		}
		else
		{
			v23 = 0i64;
		}
		sub_1400B7480((__int64)v66, v23);
		v25 = sub_14018B280(88i64, 0);
		v26 = v25;
		if (v25)
		{
			v27 = a2[1].dwHighDateTime % 0x3C;
			sub_1400B6390(v25);
			*(_QWORD*)v26 = off_140B69300;
			v26[2] = v27;
			*((float*)v26 + 3) = (float)v27;
		}
		else
		{
			v26 = 0i64;
		}
		sub_1400B7480((__int64)v66, v26);
		sub_1400B7090((__int64)v60, 436754);
		v60[0] = (__int64)off_140B69230;
		v65 = 0i64;
		v64 = 0i64;
		v28 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v64 = v28;
		*((_QWORD*)&v64 + 1) = v28;
		v65 = v28 + 4;
		if (v28)
			*(_WORD*)v28 = 0;
		v29 = sub_14018B280(88i64, 0);
		v30 = v29;
		if (v29)
		{
			v31 = a2[2].dwLowDateTime / 0x15180;
			sub_1400B6390(v29);
			*(_QWORD*)v30 = off_140B69300;
			v30[2] = v31;
			*((float*)v30 + 3) = (float)v31;
		}
		else
		{
			v30 = 0i64;
		}
		sub_1400B7480((__int64)v60, v30);
		v32 = sub_14018B280(88i64, 0);
		if (v32)
		{
			v33 = a2[2].dwLowDateTime % 0x15180 / 0xE10;
			sub_1400B6390(v32);
			*(_QWORD*)v32 = off_140B69300;
			v32[2] = v33;
			*((float*)v32 + 3) = (float)v33;
		}
		else
		{
			v32 = 0i64;
		}
		sub_1400B7480((__int64)v60, v32);
		v34 = sub_14018B280(88i64, 0);
		if (v34)
		{
			v35 = a2[2].dwLowDateTime % 0xE10 / 0x3C;
			sub_1400B6390(v34);
			*(_QWORD*)v34 = off_140B69300;
			v34[2] = v35;
			*((float*)v34 + 3) = (float)v35;
		}
		else
		{
			v34 = 0i64;
		}
		sub_1400B7480((__int64)v60, v34);
		v36 = sub_14018B280(88i64, 0);
		v37 = v36;
		if (v36)
		{
			v38 = a2[2].dwLowDateTime % 0x3C;
			sub_1400B6390(v36);
			*(_QWORD*)v37 = off_140B69300;
			v37[2] = v38;
			*((float*)v37 + 3) = (float)v38;
		}
		else
		{
			v37 = 0i64;
		}
		sub_1400B7480((__int64)v60, v37);
		sub_1400B7090((__int64)v72, 437437);
		v72[0] = (__int64)off_140B69230;
		v77 = 0i64;
		v76 = 0i64;
		v39 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v76 = v39;
		*((_QWORD*)&v76 + 1) = v39;
		v77 = v39 + 4;
		if (v39)
			*(_WORD*)v39 = 0;
		v40 = sub_14018B280(88i64, 0);
		v41 = v40;
		if (v40)
		{
			v42 = a2[1].dwLowDateTime / 0xE10;
			sub_1400B6390(v40);
			*(_QWORD*)v41 = off_140B69300;
			v41[2] = v42;
			*((float*)v41 + 3) = (float)v42;
		}
		else
		{
			v41 = 0i64;
		}
		sub_1400B7480((__int64)v72, v41);
		v43 = sub_14018B280(88i64, 0);
		if (v43)
		{
			v44 = a2[1].dwLowDateTime % 0xE10 / 0x3C;
			sub_1400B6390(v43);
			*(_QWORD*)v43 = off_140B69300;
			v43[2] = v44;
			*((float*)v43 + 3) = (float)v44;
		}
		else
		{
			v43 = 0i64;
		}
		sub_1400B7480((__int64)v72, v43);
		v45 = sub_14018B280(88i64, 0);
		v46 = v45;
		if (v45)
		{
			v47 = a2[1].dwLowDateTime % 0x3C;
			sub_1400B6390(v45);
			*(_QWORD*)v46 = off_140B69300;
			v46[2] = v47;
			*((float*)v46 + 3) = (float)v47;
		}
		else
		{
			v46 = 0i64;
		}
		sub_1400B7480((__int64)v72, v46);
		if (v74 != v75)
			goto LABEL_66;
		v48 = (void(__fastcall***)(_QWORD, __int64, __int64*, FILETIME*))qword_140C63648;
		if (!qword_140C63648)
		{
		LABEL_67:
			if (v62 != v63 || !v48)
			{
			LABEL_78:
				if (v68 != v69 || !v48)
				{
				LABEL_89:
					if (v80 == v81 && v48)
					{
						FileTime = 0i64;
						(**v48)(v48, v78[2], v78, &FileTime);
						v53 = FileTime;
						if (FileTime)
						{
							v54 = 0i64;
							if (*(_WORD*)FileTime.dwLowDateTime)
							{
								do
									++v54;
								while (*(_WORD*)(*(_QWORD*)&FileTime + 2 * v54));
							}
							sub_14001C480((__int64)v79, *(int**)&FileTime, (int*)(*(_QWORD*)&FileTime + 2 * v54));
							v55 = v80;
							goto LABEL_97;
						}
						if (v80 != v81)
						{
							*v80 = 0;
							v55 = v80;
							v81 = v80;
						LABEL_97:
							if (FileTime)
								(*(void(__fastcall**)(__int64, FILETIME, __int64, _WORD*))(*(_QWORD*)(*(_QWORD*)&FileTime - 16i64)
									+ 8i64))(
										*(_QWORD*)&FileTime - 16i64,
										v53,
										v52,
										v55);
						}
					}
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PlayedTime", "SSSSSiii");
					if ((_QWORD)v76)
						sub_14018B900(v76, 0);
					sub_1400B7390(v72);
					if ((_QWORD)v64)
						sub_14018B900(v64, 0);
					sub_1400B7390(v60);
					if ((_QWORD)v70)
						sub_14018B900(v70, 0);
					sub_1400B7390(v66);
					if ((_QWORD)v82)
						sub_14018B900(v82, 0);
					sub_1400B7390(v78);
					goto LABEL_108;
				}
				LocalFileTime = 0i64;
				(**v48)(v48, v66[2], v66, &LocalFileTime);
				if (LocalFileTime)
				{
					v51 = 0i64;
					if (*(_WORD*)LocalFileTime.dwLowDateTime)
					{
						do
							++v51;
						while (*(_WORD*)(*(_QWORD*)&LocalFileTime + 2 * v51));
					}
					sub_14001C480((__int64)v67, *(int**)&LocalFileTime, (int*)(*(_QWORD*)&LocalFileTime + 2 * v51));
				}
				else
				{
					if (v68 == v69)
					{
					LABEL_88:
						v48 = (void(__fastcall***)(_QWORD, __int64, __int64*, FILETIME*))qword_140C63648;
						goto LABEL_89;
					}
					*v68 = 0;
					v69 = v68;
				}
				if (LocalFileTime)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)&LocalFileTime - 16i64) + 8i64))(*(_QWORD*)&LocalFileTime - 16i64);
				goto LABEL_88;
			}
			v59 = 0i64;
			(**v48)(v48, v60[2], v60, (FILETIME*)&v59);
			if (v59)
			{
				v50 = 0i64;
				if (*(_WORD*)v59)
				{
					do
						++v50;
					while (*((_WORD*)v59 + v50));
				}
				sub_14001C480((__int64)v61, v59, (int*)((char*)v59 + 2 * v50));
			}
			else
			{
				if (v62 == v63)
				{
				LABEL_77:
					v48 = (void(__fastcall***)(_QWORD, __int64, __int64*, FILETIME*))qword_140C63648;
					goto LABEL_78;
				}
				*v62 = 0;
				v63 = v62;
			}
			if (v59)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v59 - 2) + 8i64))(v59 - 4);
			goto LABEL_77;
		}
		v58 = 0i64;
		(**(void(__fastcall***)(__int64, __int64, __int64*, int**))qword_140C63648)(qword_140C63648, v72[2], v72, &v58);
		if (v58)
		{
			v49 = 0i64;
			if (*(_WORD*)v58)
			{
				do
					++v49;
				while (*((_WORD*)v58 + v49));
			}
			sub_14001C480((__int64)v73, v58, (int*)((char*)v58 + 2 * v49));
		}
		else
		{
			if (v74 == v75)
			{
			LABEL_66:
				v48 = (void(__fastcall***)(_QWORD, __int64, __int64*, FILETIME*))qword_140C63648;
				goto LABEL_67;
			}
			*v74 = 0;
			v75 = v74;
		}
		if (v58)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v58 - 2) + 8i64))(v58 - 4);
		goto LABEL_66;
	}
	v9 = 1;
LABEL_108:
	if (v11)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	return v9;
}
// 14040A027: variable 'v3' is possibly undefined
// 14040A031: variable 'v4' is possibly undefined
// 14040A03B: variable 'v5' is possibly undefined
// 14040A918: variable 'v53' is possibly undefined
// 14040A918: variable 'v52' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140409FF0: using guessed type char var_1A8[8];
// 140409FF0: using guessed type char var_368[8];
// 140409FF0: using guessed type char var_288[8];
// 140409FF0: using guessed type char var_C8[8];

