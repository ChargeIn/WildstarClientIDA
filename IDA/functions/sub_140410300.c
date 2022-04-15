//----- (0000000140410300) ----------------------------------------------------
__int64 __fastcall sub_140410300(__int64 a1, __int64 a2, int a3)
{
	unsigned int v4; // edi
	int v7; // eax
	__int64 v8; // rdx
	bool v9; // zf
	_DWORD* v10; // rax
	int v11; // ecx
	int v12; // ecx
	__int64 v13; // rax
	void(__fastcall * **v14)(_QWORD); // r15
	__int64 v15; // rcx
	int v16; // eax
	int v17; // ecx
	__int64 v18; // rdx
	int v19; // ecx
	int v20; // eax
	int v21; // ecx
	int v22; // eax
	_DWORD* v23; // r14
	__int64 v24; // rcx
	int v25; // eax
	int v26; // eax
	int v27; // eax
	int v28; // eax

	v4 = 0;
	if (!a2)
	{
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 24) = 0;
		if (*(_DWORD*)(a1 + 1200))
		{
			*(_DWORD*)(a1 + 1048) = 0;
			*(_DWORD*)(a1 + 1200) = 0;
			v4 = 1;
		}
		if (*(_DWORD*)(a1 + 1204))
		{
			*(_DWORD*)(a1 + 792) = 0;
			*(_DWORD*)(a1 + 1204) = 0;
			v4 = 1;
		}
		if (*(_DWORD*)(a1 + 1208))
		{
			*(_DWORD*)(a1 + 1208) = 0;
			*(_QWORD*)(a1 + 1136) = 0i64;
			v4 = 1;
		}
		v24 = *(_QWORD*)a1;
		if (v24)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
			*(_QWORD*)a1 = 0i64;
			v4 = 1;
		}
		v25 = *(_DWORD*)(a1 + 1184);
		if (v25 <= 6 && v25)
		{
			*(_QWORD*)(a1 + 8) = 0i64;
			*(_DWORD*)(a1 + 1184) = 0;
			v4 = 1;
		}
		v26 = *(_DWORD*)(a1 + 1176);
		if (v26 <= 6 && v26)
		{
			*(_DWORD*)(a1 + 1176) = 0;
			v4 = 1;
		}
		v27 = *(_DWORD*)(a1 + 1180);
		if (v27 <= 6 && v27)
		{
			*(_DWORD*)(a1 + 1180) = 0;
			v4 = 1;
		}
		v28 = *(_DWORD*)(a1 + 1188);
		if (v28 <= 6 && v28)
		{
			*(_DWORD*)(a1 + 1188) = 0;
			v4 = 1;
		}
		v22 = *(_DWORD*)(a1 + 1192);
		if (v22 <= 6)
			goto LABEL_66;
		goto LABEL_69;
	}
	v7 = *(_DWORD*)(a2 + 16);
	v8 = a2 + 1048;
	*(_DWORD*)(a1 + 16) = v7;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(v8 - 1024);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(v8 - 1028);
	if ((unsigned int)sub_1404111E0(a1, v8, 0))
		v4 = 1;
	v9 = (unsigned int)sub_1404129B0((_DWORD*)a1, (int*)(a2 + 792), 0) == 0;
	v10 = (_DWORD*)(a2 + 1136);
	if (!v9)
		v4 = 1;
	if (a2 == -1136 || (v11 = *(_DWORD*)(a2 + 1140)) == 0 || !*v10)
	{
		if (!*(_DWORD*)(a1 + 1208))
			goto LABEL_17;
		*(_DWORD*)(a1 + 1208) = 0;
		*(_QWORD*)(a1 + 1136) = 0i64;
		goto LABEL_16;
	}
	if (*v10 != *(_DWORD*)(a1 + 1136) || (v9 = v11 == *(_DWORD*)(a1 + 1140), v12 = 0, !v9))
		v12 = 1;
	v13 = *(_QWORD*)v10;
	*(_DWORD*)(a1 + 1208) = 6;
	*(_QWORD*)(a1 + 1136) = v13;
	if (v12)
		LABEL_16:
	v4 = 1;
LABEL_17:
	v14 = *(void(__fastcall****)(_QWORD))a2;
	v15 = *(_QWORD*)a1;
	if (*(_QWORD*)a2 != *(_QWORD*)a1)
	{
		if (v15)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			*(_QWORD*)a1 = 0i64;
		}
		*(_QWORD*)a1 = v14;
		if (v14)
			(**v14)(v14);
		v4 = 1;
	}
	v16 = *(_DWORD*)(a2 + 1184);
	v17 = *(_DWORD*)(a1 + 1184);
	v18 = *(_QWORD*)(a2 + 8);
	if (v16 >= v17)
	{
		if (v18)
		{
			if (v18 != *(_QWORD*)(a1 + 8) || (v9 = v16 == v17, v19 = 0, !v9))
				v19 = 1;
			*(_QWORD*)(a1 + 8) = v18;
			*(_DWORD*)(a1 + 1184) = v16;
			if (v19)
				goto LABEL_33;
		}
		else if (v16 == 6 && v17)
		{
			*(_QWORD*)(a1 + 8) = 0i64;
			*(_DWORD*)(a1 + 1184) = 0;
		LABEL_33:
			v4 = 1;
		}
	}
	if ((unsigned int)sub_140412570(a1, (int*)(a2 + 32), 0, *(_DWORD*)(a2 + 1176)))
		v4 = 1;
	if ((unsigned int)sub_140412800(a1, (int*)(a2 + 344), 0, *(_DWORD*)(a2 + 1180)))
		v4 = 1;
	v20 = sub_140412900(a1, (_DWORD*)(a2 + 744), 0, *(_DWORD*)(a2 + 1188));
	v21 = *(_DWORD*)(a2 + 1192);
	v9 = v20 == 0;
	v22 = *(_DWORD*)(a1 + 1192);
	if (!v9)
		v4 = 1;
	v23 = (_DWORD*)(a2 + 1144);
	if (v21 >= v22)
	{
		if (v23)
		{
			*(_QWORD*)(a1 + 1144) = 0i64;
			*(_QWORD*)(a1 + 1152) = 0i64;
			*(_QWORD*)(a1 + 1160) = 0i64;
			*(_QWORD*)(a1 + 1168) = 0i64;
			*(_DWORD*)(a1 + 1144) = *v23;
			*(_DWORD*)(a1 + 1148) = v23[1];
			*(_DWORD*)(a1 + 1152) = v23[2];
			*(_DWORD*)(a1 + 1156) = v23[3];
			*(_DWORD*)(a1 + 1160) = v23[4];
			*(_DWORD*)(a1 + 1164) = v23[5];
			*(_DWORD*)(a1 + 1168) = v23[6];
			*(_DWORD*)(a1 + 1172) = v23[7];
			*(_DWORD*)(a1 + 1192) = v21;
		LABEL_68:
			v4 = 1;
			goto LABEL_69;
		}
		if (v21 != 6)
			goto LABEL_69;
	LABEL_66:
		if (!v22)
			goto LABEL_69;
		*(_DWORD*)(a1 + 1192) = 0;
		goto LABEL_68;
	}
LABEL_69:
	if (a3)
		sub_140412AD0(a1);
	return v4;
}

