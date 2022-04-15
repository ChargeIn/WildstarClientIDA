//----- (0000000140906974) ----------------------------------------------------
__int64 __fastcall sub_140906974(__int64 a1, int a2, __int64 a3, _WORD** a4, _QWORD* a5, __int64 a6)
{
	WORD* v6; // r11
	__int64 v7; // r8
	int v9; // r14d
	WCHAR* v10; // rdi
	WORD v11; // ax
	int v12; // r14d
	__int64 v13; // rcx
	WORD v14; // ax
	int v15; // eax
	int v16; // esi
	SIZE_T v17; // rcx
	__int64 v18; // rax
	void* v19; // rsp
	WCHAR* v20; // rbx
	WCHAR* v21; // rax
	__int64 v22; // rcx
	int v23; // eax
	WCHAR* v24; // r8
	int i; // edx
	__int16 v26; // ax
	int v28; // ebx
	int v29; // ecx
	WCHAR* v30; // rsi
	unsigned __int16 v31; // ax
	int v32; // ecx
	int v33; // ecx
	int v34; // ecx
	int v35; // ecx
	WCHAR v36; // cx
	int v37; // ecx
	int v38; // ecx
	int v39; // ecx
	_WORD* v40; // rdx
	__int16 v41; // cx
	int v42; // ecx
	int v43; // ecx
	int v44; // ecx
	int v45; // eax
	WCHAR v46; // r9
	__int64 v47; // [rsp+0h] [rbp-40h] BYREF
	WCHAR* v48; // [rsp+20h] [rbp-20h]
	__int64 v49; // [rsp+28h] [rbp-18h]
	WORD* v50; // [rsp+40h] [rbp+0h] BYREF
	__int64 v51; // [rsp+48h] [rbp+8h]
	SYSTEMTIME v52; // [rsp+50h] [rbp+10h] BYREF

	v6 = (WORD*)a3;
	v50 = (WORD*)a3;
	v7 = 0i64;
	v9 = a1;
	v51 = a1;
	if (a2)
	{
		if (a2 == 1)
			v10 = *(WCHAR**)(a6 + 680);
		else
			v10 = *(WCHAR**)(a6 + 688);
	}
	else
	{
		v10 = *(WCHAR**)(a6 + 672);
	}
	if (*(_DWORD*)(a6 + 344) == 1)
		goto LABEL_113;
	v11 = v6[10];
	v12 = 1;
	LODWORD(v49) = 0;
	v52.wMilliseconds = 0;
	if (a2 != 2)
		v12 = 0;
	v13 = *(_QWORD*)(a6 + 696);
	v52.wYear = v11 + 1900;
	v14 = v6[8] + 1;
	v48 = 0i64;
	v52.wMonth = v14;
	v52.wDay = v6[6];
	v52.wHour = v6[4];
	v52.wMinute = v6[2];
	v52.wSecond = *v6;
	if (v12)
		v15 = sub_1407E86D8(v13, 0i64, &v52, v10, v48, v49);
	else
		v15 = sub_1407E860C(v13, 0i64, &v52, v10, v48, v49);
	v7 = 0i64;
	v16 = v15;
	if (!v15)
		goto LABEL_32;
	v17 = 2i64 * v15 + 16;
	if (v17 > 0x400)
	{
		v21 = (WCHAR*)sub_1407E1500(v17);
		v7 = 0i64;
		v20 = v21;
		if (!v21)
			goto LABEL_21;
		*(_DWORD*)v21 = 56797;
	}
	else
	{
		v18 = 2i64 * v15 + 31;
		if (v17 + 15 <= v17)
			v18 = 0xFFFFFFFFFFFFFF0i64;
		v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0ui64);
		v20 = (WCHAR*)&v50;
		if (&v47 == (__int64*)-64i64)
			goto LABEL_32;
		LODWORD(v50) = 52428;
	}
	v20 += 8;
LABEL_21:
	if (!v20)
	{
	LABEL_32:
		v9 = v51;
		while (1)
		{
			while (1)
			{
				v6 = v50;
			LABEL_113:
				v46 = *v10;
				if (!*v10 || !*a5)
					return 1i64;
				v28 = 0;
				v29 = 0;
				v30 = v10;
				do
				{
					++v30;
					++v29;
					++v7;
				} while (*v30 == v46);
				v31 = 100;
				if (v46 > 0x64u)
					break;
				switch (v46)
				{
				case 'd':
					v37 = v29 - 1;
					if (!v37)
					{
						v28 = 1;
						goto LABEL_110;
					}
					v38 = v37 - 1;
					if (!v38)
						goto LABEL_110;
					v39 = v38 - 1;
					if (!v39)
					{
						v31 = 97;
						goto LABEL_110;
					}
					if (v39 == 1)
					{
						v31 = 65;
						goto LABEL_110;
					}
				LABEL_107:
					++v10;
					*(*a4)++ = v46;
					--* a5;
				LABEL_68:
					v7 = 0i64;
					break;
				case '\'':
					if ((v29 & 1) == 0)
					{
						v10 += v29;
						goto LABEL_68;
					}
					v10 += v7;
					v7 = 0i64;
					v36 = *v10;
					if (!*v10)
						return 1i64;
					do
					{
						if (!*a5)
							break;
						++v10;
						if (v36 == 39)
							break;
						*(*a4)++ = v36;
						--* a5;
						v36 = *v10;
					} while (*v10);
					break;
				case 'A':
				LABEL_43:
					if ((unsigned int)sub_1407F0C28(v10, L"am/pm"))
					{
						if (!(unsigned int)sub_1407F0C28(v10, L"a/p"))
							v30 = v10 + 3;
					}
					else
					{
						v30 = v10 + 5;
					}
					v31 = 112;
				LABEL_110:
					v45 = sub_140906224(v9, v31, (_DWORD)v50, (_DWORD)a4, (__int64)a5, a6, v28);
					v7 = 0i64;
					if (!v45)
						return 0i64;
					v10 = v30;
					break;
				case 'H':
					v35 = v29 - 1;
					if (!v35)
					{
						v28 = 1;
					LABEL_57:
						v31 = 72;
						goto LABEL_110;
					}
					if (v35 == 1)
						goto LABEL_57;
					break;
				case 'M':
					v32 = v29 - 1;
					if (!v32)
					{
						v28 = 1;
					LABEL_52:
						v31 = 109;
						goto LABEL_110;
					}
					v33 = v32 - 1;
					if (!v33)
						goto LABEL_52;
					v34 = v33 - 1;
					if (!v34)
					{
						v31 = 98;
						goto LABEL_110;
					}
					if (v34 == 1)
					{
						v31 = 66;
						goto LABEL_110;
					}
					break;
				case 'a':
					goto LABEL_43;
				default:
					goto LABEL_107;
				}
			}
			switch (v46)
			{
			case 'h':
				v44 = v29 - 1;
				if (!v44)
				{
					v28 = 1;
				LABEL_109:
					v31 = 73;
					goto LABEL_110;
				}
				if (v44 == 1)
					goto LABEL_109;
				goto LABEL_107;
			case 'm':
				v43 = v29 - 1;
				if (!v43)
				{
					v28 = 1;
				LABEL_104:
					v31 = 77;
					goto LABEL_110;
				}
				if (v43 == 1)
					goto LABEL_104;
				goto LABEL_107;
			case 's':
				v42 = v29 - 1;
				if (!v42)
				{
					v28 = 1;
				LABEL_99:
					v31 = 83;
					goto LABEL_110;
				}
				if (v42 == 1)
					goto LABEL_99;
				goto LABEL_107;
			}
			if (v46 != 116)
			{
				if (v46 == 121)
				{
					if (v29 == 2)
					{
						v31 = 121;
						goto LABEL_110;
					}
					if (v29 == 4)
					{
						v31 = 89;
						goto LABEL_110;
					}
				}
				goto LABEL_107;
			}
			if (*((int*)v6 + 2) > 11)
				v40 = *(_WORD**)(a6 + 664);
			else
				v40 = *(_WORD**)(a6 + 656);
			v7 = 0i64;
			if (v29 == 1 && *a5)
			{
				*(*a4)++ = *v40;
				--* a5;
			}
			else
			{
				while (1)
				{
					v41 = *v40;
					if (!*v40 || !*a5)
						break;
					++v40;
					*(*a4)++ = v41;
					--* a5;
				}
			}
			v10 = v30;
		}
	}
	v22 = *(_QWORD*)(a6 + 696);
	LODWORD(v49) = v16;
	v48 = v20;
	if (v12)
		v23 = sub_1407E86D8(v22, 0i64, &v52, v10, v48, v49);
	else
		v23 = sub_1407E860C(v22, 0i64, &v52, v10, v48, v49);
	v24 = v20;
	for (i = v23 - 1; i > 0 && *a5; --i)
	{
		v26 = *v24++;
		*(*a4)++ = v26;
		--* a5;
	}
	if (*((_DWORD*)v20 - 4) == 56797)
		sub_1407E14C0(v20 - 8);
	return 1i64;
}
// 140906224: using guessed type __int64 __fastcall sub_140906224(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD);
// 1409CE258: using guessed type wchar_t aAmPm[6];
// 1409CE268: using guessed type wchar_t aAP[4];

