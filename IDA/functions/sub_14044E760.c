#include "../winhttp.h"

//----- (000000014044E760) ----------------------------------------------------
__int64 __fastcall sub_14044E760(__int64 a1)
{
	unsigned int v1; // r13d
	__int64 v2; // r15
	unsigned __int64 v3; // r8
	int* v4; // rdi
	__int64 v5; // rax
	int* v6; // r12
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	int* v9; // rax
	_QWORD* Value; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	int v13; // ebx
	char* v14; // rsi
	__int64 v15; // rax
	int* v16; // r14
	__int64 v17; // rdi
	__int64 v18; // rbx
	int* i; // rax
	__int64 v20; // rdi
	__int64 v21; // rbx
	unsigned __int64 v22; // rax
	int v23; // ebx
	int v24; // eax
	int* v25; // rdi
	int v26; // ebx
	__int64 v27; // rax
	unsigned __int64 v28; // rbx
	int v29; // eax
	__int64 v30; // rcx
	int v31; // eax
	__int64 v32; // rax
	int v33; // eax
	__int64 v34; // rcx
	int* v35; // rcx
	int* v36; // rbx
	int* v37; // rax
	int* v38; // rax
	__int64 v39; // rax
	int v40; // eax
	__int64 v41; // rcx
	int* v42; // rbx
	int* v43; // rax
	int* v44; // rax
	int v45; // eax
	WCHAR* v46; // r14
	unsigned __int64 v47; // rbx
	int* v48; // rax
	WCHAR* v49; // rsi
	unsigned __int64 v50; // rbx
	int v51; // eax
	int v52; // eax
	const wchar_t* v53; // rdx
	int v54; // eax
	__int64 v55; // rcx
	const wchar_t* v56; // rdx
	__int64 v57; // rax
	int* v58; // rbx
	const wchar_t* v59; // rdx
	const wchar_t* v60; // rdx
	const wchar_t* v61; // rdx
	int* v62; // rax
	__int64 v63; // r12
	__int64 v64; // r14
	__int64 v65; // rbx
	int* v66; // rax
	int* v67; // rsi
	unsigned __int64 v68; // rbx
	__int64 v69; // r14
	__int64 v70; // rbx
	int* v71; // rax
	int* v72; // rsi
	unsigned __int64 v73; // rbx
	__int64 v74; // r8
	int* v75; // rbx
	__int64 v76; // r15
	__int64 v77; // rsi
	int* v78; // rax
	int* v79; // r14
	unsigned __int64 v80; // rsi
	__int64 v81; // r13
	_WORD* v82; // r15
	__int64 v83; // rsi
	int* v84; // rax
	int* v85; // r14
	unsigned __int64 v86; // rsi
	__int64 v87; // rax
	unsigned __int64 j; // rbx
	__int64 v89; // rax
	__int64 v90; // rsi
	__int64 v91; // rcx
	__int64 v92; // rcx
	int* v94; // r13
	__int64 v95; // r14
	int* v96; // rsi
	unsigned __int64 v97; // r8
	int* v98; // [rsp+28h] [rbp-89h]
	__int64 v99; // [rsp+38h] [rbp-79h] BYREF
	__int64 v100; // [rsp+40h] [rbp-71h] BYREF
	int* v101; // [rsp+48h] [rbp-69h] BYREF
	WCHAR* v102; // [rsp+50h] [rbp-61h] BYREF
	WCHAR* v103; // [rsp+58h] [rbp-59h] BYREF
	__int64 v104; // [rsp+60h] [rbp-51h] BYREF
	WCHAR* v105; // [rsp+68h] [rbp-49h] BYREF
	__int64 v106; // [rsp+70h] [rbp-41h] BYREF
	int* v107; // [rsp+78h] [rbp-39h] BYREF
	__int64 v108; // [rsp+80h] [rbp-31h]
	int* v109; // [rsp+88h] [rbp-29h]
	__int64 v110; // [rsp+90h] [rbp-21h]
	int* v111; // [rsp+98h] [rbp-19h]
	int* v112; // [rsp+A0h] [rbp-11h] BYREF
	char v113[8]; // [rsp+A8h] [rbp-9h] BYREF
	int* v114; // [rsp+B0h] [rbp-1h]
	int* v115; // [rsp+B8h] [rbp+7h]
	__int64 v116; // [rsp+C0h] [rbp+Fh]
	__int64 v118; // [rsp+120h] [rbp+6Fh] BYREF
	__int64 v119; // [rsp+128h] [rbp+77h] BYREF
	int* v120; // [rsp+130h] [rbp+7Fh] BYREF

	v1 = 0;
	v2 = a1;
	v3 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 88i64);
	if (v3)
	{
		if (v3 <= qword_140C3FE70)
			v4 = (int*)(v3 + qword_140C3FE68);
		else
			v4 = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	v5 = 0i64;
	v6 = 0i64;
	v109 = 0i64;
	if (*(_WORD*)v4)
	{
		do
			++v5;
		while (*((_WORD*)v4 + v5));
	}
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v7 + 1), 0);
		v109 = v6;
	}
	v8 = 2 * v7;
	sub_1407DB590(v6, v4, v8);
	v9 = (int*)((char*)v6 + v8);
	if ((int*)((char*)v6 + v8))
		*(_WORD*)v9 = 0;
	if (v6 == v9)
		goto LABEL_221;
	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v11 = Value[1]) != 0)
		v12 = *(_QWORD*)(v11 + 96);
	else
		v12 = 0i64;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 40i64))(v12, 0i64);
	if (v13 < 0)
	{
		v118 = 0x141DFD460i64;
		sub_1401A3130(109, 2, &v118, (unsigned int)v13);
		v1 = v13;
		goto LABEL_221;
	}
	v14 = (char*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 424) + 32i64))(*(_QWORD*)(v2 + 424));
	v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 424) + 16i64))(*(_QWORD*)(v2 + 424));
	v16 = 0i64;
	v114 = 0i64;
	v17 = v15 + 1;
	v116 = 0i64;
	if ((unsigned __int64)(v15 + 2) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v18 = 2 * (v15 + 2);
		v16 = sub_14018B280(v18, 0);
		v114 = v16;
		v116 = (__int64)v16 + v18;
	}
	for (i = v16; v17; --v17)
	{
		if (i)
			*(_WORD*)i = 0;
		i = (int*)((char*)i + 2);
	}
	v115 = i;
	if (i)
		*(_WORD*)i = 0;
	v20 = *(_QWORD*)(v2 + 424);
	v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
	v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
	v23 = sub_14018EA30(v14, v22, (__int64)v16, v21, 0i64);
	if (v23 < 0)
	{
		v118 = 0x141DFD420i64;
		sub_1401A3130(109, 2, &v118, (unsigned int)v23);
		v1 = v23;
		goto LABEL_219;
	}
	v118 = 0i64;
	v24 = sub_1407B24E0((__int64)v113, (int**)&v118);
	v25 = (int*)v118;
	v26 = v24;
	if (v24 < 0)
	{
		v118 = 0x141DFD340i64;
		sub_1401A3130(109, 2, &v118, (unsigned int)v24);
		v1 = v26;
		goto LABEL_217;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v118 + 16i64))(v118) != 5)
	{
		v118 = 0x141DFD300i64;
		sub_1401A3130(109, 2, &v118);
		goto LABEL_217;
	}
	v27 = *(_QWORD*)v25;
	v28 = 0i64;
	v108 = 0i64;
	v107 = 0i64;
	v100 = 0i64;
	if (!(*(__int64(__fastcall**)(int*))(v27 + 256))(v25))
		goto LABEL_207;
	do
	{
		v119 = 0i64;
		v29 = (*(__int64(__fastcall**)(int*, unsigned __int64, __int64*))(*(_QWORD*)v25 + 320i64))(v25, v28, &v119);
		v30 = v119;
		if (v29 < 0)
		{
			if (!v119)
				goto LABEL_205;
		LABEL_37:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v119 + 8i64))(v30);
			goto LABEL_205;
		}
		v31 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 56i64))(v119, L"id", &v118);
		if (v31 < 0)
		{
			v99 = 0x141DFD2C0i64;
			sub_1401A3130(109, 2, &v99, (unsigned int)v31);
			goto LABEL_40;
		}
		v120 = 0i64;
		v99 = 0i64;
		if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 88i64))(v119, L"title", &v99) < 0)
		{
			v36 = v120;
			v37 = sub_14018B280(18i64, 0);
			if (v37)
			{
				*(_QWORD*)v37 = off_140B55060;
				*((_QWORD*)v37 + 1) = 0i64;
			}
			else
			{
				v37 = 0i64;
			}
			v38 = v37 + 4;
			*(_WORD*)v38 = 0;
			v120 = v38;
			if (v36)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v36 - 2) + 8i64))(v36 - 4);
			v28 = v100;
			goto LABEL_64;
		}
		v32 = *(_QWORD*)v99;
		switch (*(_DWORD*)(qword_140C7AAC0 + 8))
		{
		case 2:
			v33 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v32 + 72))(v99, L"de", &v120);
			if (v33 >= 0)
				goto LABEL_64;
			v34 = 0x141DFD790i64;
		LABEL_52:
			v100 = v34;
			sub_1401A3130(109, 2, &v100, (unsigned int)v33, v98);
			v35 = (int*)v99;
			if (!v99)
				goto LABEL_54;
			goto LABEL_53;
		case 3:
			v33 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v32 + 72))(v99, L"fr", &v120);
			if (v33 >= 0)
				goto LABEL_64;
			v34 = 0x141DFD380i64;
			goto LABEL_52;
		case 5:
			v33 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v32 + 72))(v99, L"ch", &v120);
			if (v33 >= 0)
				goto LABEL_64;
			v34 = 0x141DFD710i64;
			goto LABEL_52;
		}
		v33 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v32 + 72))(v99, L"en", &v120);
		if (v33 < 0)
		{
			v34 = 0x141DFD820i64;
			goto LABEL_52;
		}
	LABEL_64:
		if (v99)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v99 + 8i64))(v99);
		v101 = 0i64;
		v99 = 0i64;
		if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 88i64))(v119, L"body", &v99) < 0)
		{
			v42 = v101;
			v43 = sub_14018B280(18i64, 0);
			if (v43)
			{
				*(_QWORD*)v43 = off_140B55060;
				*((_QWORD*)v43 + 1) = 0i64;
			}
			else
			{
				v43 = 0i64;
			}
			v44 = v43 + 4;
			*(_WORD*)v44 = 0;
			v101 = v44;
			if (v42)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v42 - 2) + 8i64))(v42 - 4);
		LABEL_87:
			if (v99)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v99 + 8i64))(v99);
			v103 = 0i64;
			v45 = (*(__int64(__fastcall**)(__int64, const wchar_t*, WCHAR**))(*(_QWORD*)v119 + 72i64))(
				v119,
				L"location",
				&v103);
			if (v45 >= 0)
			{
				v102 = 0i64;
				if ((*(int(__fastcall**)(__int64, const wchar_t*, WCHAR**))(*(_QWORD*)v119 + 72i64))(
					v119,
					L"order",
					&v102) < 0)
				{
					v46 = v102;
					v47 = 0i64;
					do
						++v47;
					while (*((_WORD*)&unk_1409F011C + v47));
					v48 = sub_14018B280(2 * v47 + 18, 0);
					if (v48)
					{
						*(_QWORD*)v48 = off_140B55060;
						*((_QWORD*)v48 + 1) = v47;
					}
					else
					{
						v48 = 0i64;
					}
					v49 = (WCHAR*)(v48 + 4);
					v50 = v47;
					sub_1407DB590(v48 + 4, (int*)&unk_1409F011C, v50 * 2);
					v49[v50] = 0;
					v102 = v49;
					if (v46)
						(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v46 - 2) + 8i64))(v46 - 8);
				}
				v104 = 0i64;
				v51 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 72i64))(
					v119,
					L"path",
					&v104);
				if (v51 >= 0)
				{
					v105 = 0i64;
					v52 = (*(__int64(__fastcall**)(__int64, const wchar_t*, WCHAR**))(*(_QWORD*)v119 + 72i64))(
						v119,
						L"type",
						&v105);
					if (v52 >= 0)
					{
						LODWORD(v110) = sub_14018E820(v105);
						switch ((int)v110)
						{
						case 0:
							v99 = 0i64;
							v53 = L"sup_id";
							if ((*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
								v53 = L"ptr_sup_id";
							v54 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 72i64))(
								v119,
								v53,
								&v99);
							if (v54 >= 0)
								goto LABEL_143;
							v55 = 0x141DFD890i64;
							goto LABEL_122;
						case 1:
							v99 = 0i64;
							v56 = L"filter_url";
							if ((*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
								v56 = L"ptr_filter_url";
							v54 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 72i64))(
								v119,
								v56,
								&v99);
							if (v54 >= 0)
								goto LABEL_128;
							v55 = 0x141DFD8D0i64;
							goto LABEL_122;
						case 2:
							v99 = 0i64;
							v59 = L"sup_id";
							if ((*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
								v59 = L"ptr_sup_id";
							v54 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 72i64))(
								v119,
								v59,
								&v99);
							if (v54 >= 0)
								goto LABEL_143;
							v55 = 0x141DFDAB0i64;
							goto LABEL_122;
						case 3:
							v99 = 0i64;
							v60 = L"filter_url";
							if ((*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
								v60 = L"ptr_filter_url";
							v54 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 72i64))(
								v119,
								v60,
								&v99);
							if (v54 < 0)
							{
								v55 = 0x141DFDA50i64;
								goto LABEL_122;
							}
						LABEL_128:
							v57 = 2i64 * *(_QWORD*)(v99 - 8);
							if (!is_mul_ok(*(_QWORD*)(v99 - 8), 2ui64))
								v57 = -1i64;
							v58 = sub_14018B280(v57, 0);
							sub_14001B2D0(v58, *(_QWORD*)(v99 - 8), v99);
							v111 = v58;
							goto LABEL_144;
						case 4:
							v99 = 0i64;
							v61 = L"sup_id";
							if ((*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
								v61 = L"ptr_sup_id";
							v54 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*))(*(_QWORD*)v119 + 72i64))(
								v119,
								v61,
								&v99);
							if (v54 < 0)
							{
								v55 = 0x141DFDB30i64;
							LABEL_122:
								v106 = v55;
								sub_1401A3130(109, 2, &v106, (unsigned int)v54, v98);
								if (v99)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v99 - 16) + 8i64))(v99 - 16);
								goto LABEL_115;
							}
						LABEL_143:
							LODWORD(v111) = sub_14018E820((WCHAR*)v99);
						LABEL_144:
							if (v99)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v99 - 16) + 8i64))(v99 - 16);
						LABEL_146:
							v62 = sub_14018B280(80i64, 0);
							v63 = (__int64)v62;
							if (v62)
							{
								v62[3] = 0;
								*((_QWORD*)v62 + 2) = 0i64;
								*((_QWORD*)v62 + 3) = 0i64;
								*((_QWORD*)v62 + 4) = 0i64;
								*((_QWORD*)v62 + 5) = 0i64;
								*((_QWORD*)v62 + 8) = 0i64;
								*((_QWORD*)v62 + 9) = 0i64;
							}
							else
							{
								v63 = 0i64;
							}
							*(_DWORD*)v63 = v118;
							*(_DWORD*)(v63 + 4) = sub_14018E820(v103);
							*(_DWORD*)(v63 + 8) = sub_14018E820(v102);
							v64 = *(_QWORD*)(v63 + 32);
							if (v120)
							{
								v65 = *((_QWORD*)v120 - 1);
								v66 = sub_14018B280(2 * v65 + 18, 0);
								if (v66)
								{
									*(_QWORD*)v66 = off_140B55060;
									*((_QWORD*)v66 + 1) = v65;
								}
								else
								{
									v66 = 0i64;
								}
								v67 = v66 + 4;
								v68 = 2 * v65;
								sub_1407DB590(v66 + 4, v120, v68);
								*(_WORD*)((char*)v67 + v68) = 0;
								*(_QWORD*)(v63 + 32) = v67;
							}
							else
							{
								*(_QWORD*)(v63 + 32) = 0i64;
							}
							if (v64)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v64 - 16) + 8i64))(v64 - 16);
							v69 = *(_QWORD*)(v63 + 40);
							if (v101)
							{
								v70 = *((_QWORD*)v101 - 1);
								v71 = sub_14018B280(2 * v70 + 18, 0);
								if (v71)
								{
									*((_QWORD*)v71 + 1) = v70;
									*(_QWORD*)v71 = off_140B55060;
								}
								else
								{
									v71 = 0i64;
								}
								v72 = v71 + 4;
								v73 = 2 * v70;
								sub_1407DB590(v71 + 4, v101, v73);
								*(_WORD*)((char*)v72 + v73) = 0;
								*(_QWORD*)(v63 + 40) = v72;
							}
							else
							{
								*(_QWORD*)(v63 + 40) = 0i64;
							}
							if (v69)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v69 - 16) + 8i64))(v69 - 16);
							v74 = (__int64)v109;
							*(_QWORD*)(v63 + 48) = v110;
							*(_QWORD*)(v63 + 56) = v111;
							sub_14018D540(&v112, (__int64)L"%suploads/%s", v74, v104, v98);
							v75 = v112;
							v76 = *(_QWORD*)(v63 + 16);
							if (v112)
							{
								v77 = 0i64;
								if (*(_WORD*)v112)
								{
									do
										++v77;
									while (*((_WORD*)v112 + v77));
								}
								v78 = sub_14018B280(2 * v77 + 18, 0);
								if (v78)
								{
									*((_QWORD*)v78 + 1) = v77;
									*(_QWORD*)v78 = off_140B55060;
								}
								else
								{
									v78 = 0i64;
								}
								v79 = v78 + 4;
								v80 = 2 * v77;
								sub_1407DB590(v78 + 4, v75, v80);
								*(_WORD*)((char*)v79 + v80) = 0;
								*(_QWORD*)(v63 + 16) = v79;
							}
							else
							{
								*(_QWORD*)(v63 + 16) = 0i64;
							}
							if (v76)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v76 - 16) + 8i64))(v76 - 16);
							v81 = *(_QWORD*)(v63 + 24);
							v82 = (_WORD*)v75 + 5;
							if (v75 == (int*)-10i64)
							{
								*(_QWORD*)(v63 + 24) = 0i64;
							}
							else
							{
								v83 = 0i64;
								if (*v82)
								{
									do
										++v83;
									while (v82[v83]);
								}
								v84 = sub_14018B280(2 * v83 + 18, 0);
								if (v84)
								{
									*((_QWORD*)v84 + 1) = v83;
									*(_QWORD*)v84 = off_140B55060;
								}
								else
								{
									v84 = 0i64;
								}
								v85 = v84 + 4;
								v86 = 2 * v83;
								sub_1407DB590(v84 + 4, (int*)((char*)v75 + 10), v86);
								*(_WORD*)((char*)v85 + v86) = 0;
								*(_QWORD*)(v63 + 24) = v85;
							}
							if (v81)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v81 - 16) + 8i64))(v81 - 16);
							if ((int)sub_1407B01F0(v75, 1, (int**)(v63 + 72), v63 + 64) >= 0)
							{
								v2 = a1;
								(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 416) + 72i64))(
									*(_QWORD*)(a1 + 416),
									*(_QWORD*)(v63 + 64));
								v94 = v107;
								v95 = v108 + 1;
								v96 = sub_14018DB00((__int64)v107, v108 + 1, 8i64);
								v97 = 8 * v108;
								*(_QWORD*)&v96[2 * v108] = v63;
								if (v94 != v96)
								{
									sub_1407DB590(v96, v94, v97);
									if (v94)
										(*(void(__fastcall**)(int*))(*((_QWORD*)v94 - 2) + 8i64))(v94 - 4);
									v107 = v96;
								}
								v108 = v95;
								if (v75)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v75 - 2) + 8i64))(v75 - 4);
								if (v105)
									(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v105 - 2) + 8i64))(v105 - 8);
								if (v104)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v104 - 16) + 8i64))(v104 - 16);
								if (v102)
									(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v102 - 2) + 8i64))(v102 - 8);
								if (v103)
									(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v103 - 2) + 8i64))(v103 - 8);
								if (v101)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v101 - 2) + 8i64))(v101 - 4);
								if (v120)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v120 - 2) + 8i64))(v120 - 4);
								if (v119)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v119 + 8i64))(v119);
							}
							else
							{
								v98 = v75;
								sub_1400035B0();
								sub_1404511E0(v63);
								sub_14018B900(v63, 0);
								if (v75)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v75 - 2) + 8i64))(v75 - 4);
								if (v105)
									(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v105 - 2) + 8i64))(v105 - 8);
								if (v104)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v104 - 16) + 8i64))(v104 - 16);
								if (v102)
									(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v102 - 2) + 8i64))(v102 - 8);
								if (v103)
									(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v103 - 2) + 8i64))(v103 - 8);
								if (v101)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v101 - 2) + 8i64))(v101 - 4);
								if (v120)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v120 - 2) + 8i64))(v120 - 4);
								if (v119)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v119 + 8i64))(v119);
								v2 = a1;
							}
							v1 = 0;
							break;
						case 6:
							goto LABEL_146;
						default:
							v106 = 0x141DFDAF0i64;
							sub_1401A3130(109, 2, &v106);
							goto LABEL_115;
						}
						goto LABEL_204;
					}
					v99 = 0x141DFD980i64;
					sub_1401A3130(109, 2, &v99, (unsigned int)v52);
				LABEL_115:
					if (v105)
						(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v105 - 2) + 8i64))(v105 - 8);
				}
				else
				{
					v99 = 0x141DFD9D0i64;
					sub_1401A3130(109, 2, &v99, (unsigned int)v51);
				}
				if (v104)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v104 - 16) + 8i64))(v104 - 16);
				if (v102)
					(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v102 - 2) + 8i64))(v102 - 8);
			}
			else
			{
				v99 = 0x141DFD910i64;
				sub_1401A3130(109, 2, &v99, (unsigned int)v45);
			}
			if (v103)
				(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v103 - 2) + 8i64))(v103 - 8);
			if (v101)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v101 - 2) + 8i64))(v101 - 4);
			if (v120)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v120 - 2) + 8i64))(v120 - 4);
			if (v119)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v119 + 8i64))(v119);
		LABEL_204:
			v28 = v100;
			goto LABEL_205;
		}
		v39 = *(_QWORD*)v99;
		switch (*(_DWORD*)(qword_140C7AAC0 + 8))
		{
		case 2:
			v40 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v39 + 72))(v99, L"de", &v101);
			if (v40 >= 0)
				goto LABEL_87;
			v41 = 0x141DFD560i64;
			break;
		case 3:
			v40 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v39 + 72))(v99, L"fr", &v101);
			if (v40 >= 0)
				goto LABEL_87;
			v41 = 0x141DFD5C0i64;
			break;
		case 5:
			v40 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v39 + 72))(v99, L"ch", &v101);
			if (v40 >= 0)
				goto LABEL_87;
			v41 = 0x141DFD680i64;
			break;
		default:
			v40 = (*(__int64(__fastcall**)(__int64, const wchar_t*, int**))(v39 + 72))(v99, L"en", &v101);
			if (v40 >= 0)
				goto LABEL_87;
			v41 = 0x141DFD620i64;
			break;
		}
		v100 = v41;
		sub_1401A3130(109, 2, &v100, (unsigned int)v40, v98);
		if (v99)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v99 + 8i64))(v99);
		if (!v101)
			goto LABEL_54;
		v35 = v101 - 4;
	LABEL_53:
		(*(void(__fastcall**)(int*))(*(_QWORD*)v35 + 8i64))(v35);
	LABEL_54:
		if (v120)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v120 - 2) + 8i64))(v120 - 4);
	LABEL_40:
		v30 = v119;
		if (v119)
			goto LABEL_37;
	LABEL_205:
		v87 = *(_QWORD*)v25;
		v100 = ++v28;
	} while (v28 < (*(__int64(__fastcall**)(int*))(v87 + 256))(v25));
	v16 = v114;
	v6 = v109;
LABEL_207:
	for (j = 0i64; j < *(_QWORD*)(v2 + 400); ++j)
	{
		v89 = *(_QWORD*)(v2 + 392);
		v90 = *(_QWORD*)(v89 + 8 * j);
		if (v90)
		{
			sub_1404511E0(*(_QWORD*)(v89 + 8 * j));
			sub_14018B900(v90, 0);
		}
	}
	sub_1403D86E0((__int64*)(v2 + 392), (__int64)&v107);
	v91 = *(_QWORD*)(v2 + 424);
	if (v91)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v91 + 8i64))(v91);
		*(_QWORD*)(v2 + 424) = 0i64;
	}
	v92 = *(_QWORD*)(v2 + 408);
	if (v92)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v92 + 8i64))(v92);
		*(_QWORD*)(v2 + 408) = 0i64;
	}
	if (v107)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v107 - 2) + 8i64))(v107 - 4);
LABEL_217:
	if (v25)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v25 + 8i64))(v25);
LABEL_219:
	if (v16)
		sub_14018B900((__int64)v16, 0);
LABEL_221:
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return v1;
}
// 14044EB59: variable 'v98' is possibly undefined
// 140B02C74: using guessed type wchar_t aId_9[3];
// 140B02CF8: using guessed type wchar_t aDe_1[3];
// 140B02D94: using guessed type wchar_t aFr_0[3];
// 140B02DA0: using guessed type wchar_t aTitle_1[6];
// 140B02DD4: using guessed type wchar_t aCh_0[3];
// 140B02EB8: using guessed type wchar_t aDe_2[3];
// 140B02F14: using guessed type wchar_t aEn_3[3];
// 140B02F74: using guessed type wchar_t aEn_2[3];
// 140B02FD4: using guessed type wchar_t aCh[3];
// 140B03034: using guessed type wchar_t aFr_1[3];
// 140B03098: using guessed type wchar_t aPtrFilterUrl[15];
// 140B030B8: using guessed type wchar_t aPtrSupId[11];
// 140B03128: using guessed type wchar_t aSupId[7];
// 140B03138: using guessed type wchar_t aPtrSupId_0[11];
// 140B031A8: using guessed type wchar_t aBody[5];
// 140B031B8: using guessed type wchar_t aSupId_0[7];
// 140B031C8: using guessed type wchar_t aFilterUrl[11];
// 140B03238: using guessed type wchar_t aOrder[6];
// 140B03310: using guessed type wchar_t aLocation_0[9];
// 140B03328: using guessed type wchar_t aFilterUrl_0[11];
// 140B03380: using guessed type wchar_t aType[5];
// 140B033D0: using guessed type wchar_t aPath_2[5];
// 140B033F0: using guessed type wchar_t aSuploadsS[13];
// 140B03450: using guessed type wchar_t aPtrFilterUrl_0[15];
// 140B03530: using guessed type wchar_t aSupId_1[7];
// 140B03540: using guessed type wchar_t aPtrSupId_1[11];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 14044E760: using guessed type char var_60[8];

