//----- (00000001400EC7D0) ----------------------------------------------------
bool __fastcall sub_1400EC7D0(__int64 a1, const char* a2)
{
	__int64 v4; // rdx
	char* v5; // rbx
	__int64 v6; // r8
	char* v7; // r9
	_QWORD* v8; // rax
	_QWORD* v9; // r10
	_QWORD* v10; // rdi
	char* v11; // r11
	int v12; // ecx
	__int64 v13; // r11
	int v14; // ecx
	bool v15; // bl
	_QWORD* v16; // [rsp+48h] [rbp+10h]
	__int64 v17; // [rsp+50h] [rbp+18h] BYREF

	if (!a2)
		return 0;
	v5 = (char*)*sub_14018DED0(&v17, (__int64)"SlashCmd_%s", a2);
	v8 = *(_QWORD**)(a1 + 3296);
	v9 = (_QWORD*)v8[1];
	v10 = v8;
	while (v9)
	{
		v11 = (char*)v9[4];
		v6 = (unsigned int)*v11;
		v12 = *v11 - *v5;
		if (v12)
		{
		LABEL_8:
			if (v12 < 0)
			{
				v9 = (_QWORD*)v9[3];
				continue;
			}
		}
		else
		{
			v7 = v5;
			v13 = v11 - v5;
			while ((_BYTE)v6)
			{
				v6 = (unsigned int)v7[v13 + 1];
				v4 = (unsigned int)*++v7;
				v12 = v6 - v4;
				if ((_DWORD)v6 != (_DWORD)v4)
					goto LABEL_8;
			}
		}
		v10 = v9;
		v9 = (_QWORD*)v9[2];
	}
	if (v10 == v8)
		goto LABEL_18;
	v7 = (char*)v10[4];
	v6 = (unsigned int)*v5;
	v4 = (unsigned int)(*v5 - *v7);
	if (!(_DWORD)v4)
	{
		while ((_BYTE)v6)
		{
			v6 = (unsigned int)v5[1];
			v14 = v7[1];
			++v5;
			++v7;
			v4 = (unsigned int)(v6 - v14);
			if ((_DWORD)v6 != v14)
				goto LABEL_16;
		}
		goto LABEL_17;
	}
LABEL_16:
	if ((int)v4 < 0)
	{
	LABEL_18:
		v16 = v8;
		goto LABEL_19;
	}
LABEL_17:
	v16 = v10;
LABEL_19:
	v15 = v16 != v8;
	if (v17)
		(*(void(__fastcall**)(__int64, __int64, __int64, char*))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16, v4, v6, v7);
	return v15;
}
// 1400EC8E0: variable 'v4' is possibly undefined
// 1400EC8E0: variable 'v6' is possibly undefined
// 1400EC8E0: variable 'v7' is possibly undefined

