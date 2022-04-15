//----- (000000014090E7B0) ----------------------------------------------------
__int64 __fastcall sub_14090E7B0(
	unsigned __int16** a1,
	__int64 a2,
	__int64 a3,
	int a4,
	int a5,
	int a6,
	unsigned int* a7)
{
	unsigned __int16* v7; // r10
	int* v8; // rbx
	int v9; // esi
	int v11; // edx
	int v12; // r11d
	int v13; // ecx
	unsigned __int16 v14; // ax
	unsigned __int16* v15; // rcx
	__int64 result; // rax
	unsigned __int16 v17; // ax
	unsigned __int16* v18; // rcx
	unsigned __int16 i; // ax
	unsigned __int16 v20; // ax
	unsigned __int16 v21; // ax
	unsigned __int16 v22; // ax
	unsigned __int16* j; // rdx
	__int64 v24; // r8
	unsigned __int16 v25; // ax
	int k; // ebx
	unsigned __int16 v27; // ax
	unsigned __int16* v28; // rcx
	int v29; // eax
	unsigned __int16 v30; // ax
	unsigned __int16 v31; // cx
	int v32; // edx
	unsigned __int64 v33; // r8
	int v34; // eax
	int v35; // [rsp+40h] [rbp-20h]
	int v36; // [rsp+44h] [rbp-1Ch]
	int v37; // [rsp+48h] [rbp-18h]
	unsigned __int16* v38; // [rsp+50h] [rbp-10h] BYREF
	__int64 v39; // [rsp+58h] [rbp-8h]
	int v41; // [rsp+90h] [rbp+30h]
	int v42; // [rsp+98h] [rbp+38h]

	v42 = a4;
	v41 = a3;
	v7 = *a1;
	v8 = (int*)a7;
	v9 = 0;
	v11 = *a7;
	v38 = v7;
	v12 = a3;
	v37 = v11;
	v13 = v11;
	v35 = v11;
	v36 = 0;
	if (*v7 == 40)
	{
		v14 = v7[1];
		v15 = v7 + 1;
		if (v14 == 42)
		{
			v7 += 2;
			v13 = v11;
			v38 = v7;
		}
		else if (v14 == 63)
		{
			v17 = v7[2];
			v18 = v7 + 2;
			if (v17 == 124)
			{
				v7 += 3;
				v9 = 1;
				v38 = v7;
				v36 = 1;
			}
			else
			{
				if (v17 == 35)
				{
					v7 += 3;
					v38 = v7;
					for (i = *v7; *v7; i = *v7)
					{
						if (i == 41)
							break;
						v38 = ++v7;
					}
					goto LABEL_105;
				}
				v7 += 2;
				v38 = v18;
				if (v17 == 40)
				{
					if (v18[1] != 63)
					{
						v20 = *v18;
						if (*v18)
						{
							while (v20 != 41)
							{
								v38 = ++v7;
								v20 = *v7;
								if (!*v7)
								{
									v13 = v11;
									goto LABEL_42;
								}
							}
							v13 = v11;
							if (*v7)
								v38 = ++v7;
							goto LABEL_42;
						}
					}
				}
				else
				{
					if (*v18 == 80)
					{
						v7 = v18 + 1;
						v38 = v18 + 1;
					}
					if (*v7 == 60 && (v21 = v7[1], v21 != 33) && v21 != 61 || *v7 == 39)
					{
						result = (unsigned int)(v11 + 1);
						*a7 = result;
						if (!a3 && (_DWORD)result == a4)
							return result;
						v22 = *v7++;
						v38 = v7;
						if (v22 == 60)
							v22 = 62;
						for (j = v7; *v7 != v22; v38 = v7)
							++v7;
						if (a3 && a4 == (unsigned int)(v7 - j))
						{
							if (!(unsigned int)sub_1409199A0(a3, j, a4))
								return *a7;
							v7 = v38;
							a4 = v42;
							v12 = v41;
						}
						v13 = v35;
						goto LABEL_42;
					}
				}
			}
			v13 = v11;
		}
		else
		{
			result = (unsigned int)(v11 + 1);
			*a7 = result;
			if (!a3 && (_DWORD)result == a4)
				return result;
			++v7;
			v38 = v15;
			v13 = v11;
		}
	}
LABEL_42:
	v24 = v9;
	v39 = v9;
	if ((unsigned __int64)v7 >= *(_QWORD*)(a2 + 56))
		goto LABEL_105;
	while (1)
	{
		v25 = *v7;
		if (*v7 == 92)
		{
			v38 = ++v7;
			if (*v7)
			{
				if (*v7 != 81)
					goto LABEL_73;
				while (1)
				{
					v38 = ++v7;
					if (!*v7)
						break;
					if (*v7 == 92)
					{
						v38 = ++v7;
						if (*v7 == 69)
							goto LABEL_73;
					}
				}
			}
			goto LABEL_105;
		}
		if (v25 == 91)
		{
			for (k = 0; ; k = 1)
			{
				while (1)
				{
					v27 = v7[1];
					v28 = v7 + 1;
					if (v27 != 92)
						break;
					v7 += 2;
					if (*v7 == 69)
					{
						v38 = v7;
					}
					else
					{
						v29 = sub_140919950(v7, "Q\\E", 3);
						v7 = v38;
						if (v29)
							goto LABEL_60;
						v7 = v38 + 4;
						v38 += 4;
					}
				}
				if (k || v27 != 94)
					break;
				++v7;
				v38 = v28;
			}
		LABEL_60:
			if (v7[1] == 93 && (*(_DWORD*)(a2 + 124) & 0x2000000) == 0)
				++v7;
			v38 = ++v7;
			v30 = *v7;
			if (*v7 == 93)
			{
			LABEL_72:
				v8 = (int*)a7;
				goto LABEL_73;
			}
			while (v30)
			{
				if (v30 == 92)
				{
					v38 = ++v7;
					if (!*v7)
						goto LABEL_105;
					if (*v7 == 81)
					{
						while (1)
						{
							v38 = ++v7;
							if (!*v7)
								goto LABEL_105;
							if (*v7 == 92)
							{
								v38 = ++v7;
								if (*v7 == 69)
									break;
							}
						}
					}
				}
				v38 = ++v7;
				v30 = *v7;
				if (*v7 == 93)
					goto LABEL_72;
			}
			return 0xFFFFFFFFi64;
		}
		if (a5 && v25 == 35)
			break;
		if (v25 == 40)
		{
			result = sub_14090E7B0((unsigned int)&v38, a2, v12, a4, a5, a6, (__int64)v8);
			if ((int)result > 0)
				return result;
			v7 = v38;
			if (!*v38)
				goto LABEL_105;
		}
		else
		{
			if (v25 == 41)
			{
				if (v36 && *v8 < v13)
					*v8 = v13;
				goto LABEL_105;
			}
			if (v25 == 124 && v24)
			{
				if (*v8 > v13)
					v13 = *v8;
				*v8 = v37;
				v35 = v13;
			}
		}
	LABEL_73:
		v38 = ++v7;
		if ((unsigned __int64)v7 >= *(_QWORD*)(a2 + 56))
			goto LABEL_105;
		v13 = v35;
		v24 = v39;
		a4 = v42;
		v12 = v41;
	}
	v38 = ++v7;
	v31 = *v7;
	if (!*v7)
		goto LABEL_105;
	while (1)
	{
		v32 = *(_DWORD*)(a2 + 148);
		if (!v32)
			break;
		v33 = *(_QWORD*)(a2 + 56);
		if ((unsigned __int64)v7 < v33)
		{
			v34 = sub_1409199E0(v7, v32, v33, (int*)(a2 + 152), a6);
			v7 = v38;
			if (v34)
				goto LABEL_81;
		}
	LABEL_87:
		v38 = ++v7;
		if (a6 && (*v7 & 0xFC00) == 0xDC00)
			v38 = ++v7;
		v31 = *v7;
		if (!*v7)
			goto LABEL_105;
	}
	if ((unsigned __int64)v7 > *(_QWORD*)(a2 + 56) - 2i64 * *(int*)(a2 + 152)
		|| v31 != *(_WORD*)(a2 + 156)
		|| *(_DWORD*)(a2 + 152) != 1 && v7[1] != *(_WORD*)(a2 + 158))
	{
		goto LABEL_87;
	}
LABEL_81:
	v7 += *(_DWORD*)(a2 + 152) - 1;
	v38 = v7;
	if (*v7)
		goto LABEL_73;
LABEL_105:
	*a1 = v7;
	return 0xFFFFFFFFi64;
}

