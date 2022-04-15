//----- (0000000140929F50) ----------------------------------------------------
__int64 __fastcall sub_140929F50(
	unsigned int* a1,
	char a2,
	char a3,
	char a4,
	char a5,
	int a6,
	__int64 a7,
	int a8,
	__int64 a9,
	int a10,
	__int64 a11)
{
	char* v15; // rax
	char* v16; // rax
	unsigned int v17; // eax
	char* v18; // rax
	__int64 result; // rax
	char* v20; // rax
	char* v21; // rax
	char* v22; // rax
	unsigned int v23; // ecx
	char v24; // si
	__int64 v25; // r8
	char* v26; // rax
	char* v27; // rax
	__int64 v28; // r9
	int v29; // r8d
	char* v30; // rax
	unsigned int v31; // edx
	char v32; // si
	char* v33; // rax
	char* v34; // rax
	char* v35; // rax
	char* v36; // rax
	unsigned int v37; // eax
	char* v38; // rax
	char* v39; // rax
	char* v40; // rax
	char* v41; // rax
	char* v42; // rax

	if (a6)
	{
		if (a6 == a8 && a7 == a9)
		{
			if ((a10 & 0x200) != 0)
			{
				if (a6 == 1 && (unsigned __int64)(a11 + 128) > 0xFF)
				{
					v23 = a1[26];
					if (v23)
						goto LABEL_35;
					if (a11 > 0x7FFFFFFF)
						goto LABEL_40;
					if (a11 >= (__int64)0xFFFFFFFF80000000ui64)
					{
					LABEL_35:
						v24 = 0;
						if (!v23)
							v24 = 72;
						if ((unsigned int)sub_14092A740(a1, v24, a5, a11))
							return *a1;
						return 0i64;
					}
				}
				if ((unsigned __int64)(a11 + 0x80000000i64) <= 0xFFFFFFFF)
				{
				LABEL_42:
					v26 = sub_14092D140((__int64)a1, 17, 512, a11, a6, a7);
					if (!v26)
						return *a1;
					v26[1] |= a4;
					return 0i64;
				}
			LABEL_40:
				if (!a1[26])
				{
					v25 = a11;
					goto LABEL_66;
				}
				goto LABEL_42;
			}
			if (a6 <= 12)
			{
				v27 = sub_14092D140((__int64)a1, 1, a6, a7, a10, a11);
				goto LABEL_72;
			}
			if (a10 <= 12)
			{
				v28 = a11;
				v29 = a10;
				goto LABEL_82;
			}
			v30 = sub_14092D140((__int64)a1, 1, 12, 0i64, a10, a11);
			if (!v30)
			{
				result = *a1;
				if ((_DWORD)result)
					return result;
				goto LABEL_80;
			}
		LABEL_79:
			*v30 = -117;
		LABEL_80:
			v29 = 12;
			goto LABEL_81;
		}
		if (a6 == a10 && a7 == a11)
		{
			if ((a8 & 0x200) == 0)
			{
				if (a6 <= 12)
				{
					v27 = sub_14092D140((__int64)a1, 1, a6, a7, a8, a9);
				LABEL_72:
					if (!v27)
						return *a1;
					goto LABEL_95;
				}
				if (a8 <= 12)
				{
					v28 = a9;
					v29 = a8;
					goto LABEL_82;
				}
				v30 = sub_14092D140((__int64)a1, 1, 12, 0i64, a8, a9);
				if (!v30)
				{
					result = *a1;
					if ((_DWORD)result)
						return result;
					goto LABEL_80;
				}
				goto LABEL_79;
			}
			if (a6 == 1 && (unsigned __int64)(a9 + 128) > 0xFF)
			{
				v31 = a1[26];
				if (v31)
					goto LABEL_59;
				if (a9 > 0x7FFFFFFF)
					goto LABEL_64;
				if (a9 >= (__int64)0xFFFFFFFF80000000ui64)
				{
				LABEL_59:
					v32 = 0;
					if (!v31)
						v32 = 72;
					if ((unsigned int)sub_14092A740(a1, v32, a5, a9))
						return *a1;
					return 0i64;
				}
			}
			if ((unsigned __int64)(a9 + 0x80000000i64) <= 0xFFFFFFFF)
			{
			LABEL_68:
				v33 = sub_14092D140((__int64)a1, 17, 512, a9, a6, a7);
				if (!v33)
					return *a1;
				goto LABEL_93;
			}
		LABEL_64:
			if (!a1[26])
			{
				v25 = a9;
			LABEL_66:
				if (!(unsigned int)sub_14092A980(a1, 13, v25))
				{
					v29 = 13;
				LABEL_81:
					v28 = 0i64;
				LABEL_82:
					v34 = sub_14092D140((__int64)a1, 1, v29, v28, a6, a7);
					if (!v34)
						return *a1;
					goto LABEL_91;
				}
				return *a1;
			}
			goto LABEL_68;
		}
		if (a6 <= 12)
		{
			if ((unsigned int)sub_14092AA10(a1, a6, 0i64, a8, a9))
				return *a1;
			if ((a10 & 0x200) == 0)
			{
				v27 = sub_14092D140((__int64)a1, 1, a6, 0i64, a10, a11);
				if (!v27)
					return *a1;
			LABEL_95:
				*v27 = a2;
				return 0i64;
			}
			if ((unsigned __int64)(a11 + 0x80000000i64) > 0xFFFFFFFF && !a1[26])
			{
				if (!(unsigned int)sub_14092A980(a1, 13, a11))
				{
					v34 = sub_14092D140((__int64)a1, 1, 13, 0i64, a6, 0i64);
					if (v34)
					{
					LABEL_91:
						*v34 = a3;
						return 0i64;
					}
				}
				return *a1;
			}
			v33 = sub_14092D140((__int64)a1, 17, 512, a11, a6, 0i64);
			if (!v33)
				return *a1;
		LABEL_93:
			v33[1] |= a4;
			return 0i64;
		}
		if (a8 > 12)
		{
			if ((a8 & 0x200) != 0)
			{
				if (a1[26])
				{
					v37 = sub_14092A740(a1, 65, 186, a9);
					goto LABEL_108;
				}
				if ((unsigned __int64)(a9 + 0x80000000i64) > 0xFFFFFFFF)
				{
					v37 = sub_14092A980(a1, 12, a9);
					goto LABEL_108;
				}
				v36 = sub_14092D140((__int64)a1, 1, 512, a9, 12, 0i64);
				if (v36)
				{
					*v36 = -57;
					goto LABEL_111;
				}
			}
			else
			{
				v38 = sub_14092D140((__int64)a1, 1, 12, 0i64, a8, a9);
				if (v38)
				{
					*v38 = -117;
					goto LABEL_111;
				}
			}
		}
		else
		{
			v35 = sub_14092D140((__int64)a1, 1, a8, 0i64, 12, 0i64);
			if (v35)
			{
				*v35 = -119;
			LABEL_111:
				if ((a10 & 0x200) != 0)
				{
					if ((unsigned __int64)(a11 + 0x80000000i64) <= 0xFFFFFFFF || a1[26])
					{
						v40 = sub_14092D140((__int64)a1, 17, 512, a11, 12, 0i64);
						if (!v40)
							return *a1;
						v40[1] |= a4;
					}
					else
					{
						if ((unsigned int)sub_14092A980(a1, 13, a11))
							return *a1;
						v39 = sub_14092D140((__int64)a1, 1, 13, 0i64, 12, 0i64);
						if (!v39)
							return *a1;
						*v39 = a3;
					}
				}
				else
				{
					v41 = sub_14092D140((__int64)a1, 1, 12, 0i64, a10, a11);
					if (!v41)
						return *a1;
					*v41 = a2;
				}
				v42 = sub_14092D140((__int64)a1, 1, 12, 0i64, a6, a7);
				if (v42)
				{
					*v42 = -119;
				}
				else
				{
					result = *a1;
					if ((_DWORD)result)
						return result;
				}
				return 0i64;
			}
		}
		v37 = *a1;
	LABEL_108:
		if (v37)
			return *a1;
		goto LABEL_111;
	}
	if (a8 > 12)
	{
		if ((a8 & 0x200) != 0)
		{
			if (a1[26])
			{
				v17 = sub_14092A740(a1, 65, 186, a9);
				goto LABEL_14;
			}
			if ((unsigned __int64)(a9 + 0x80000000i64) > 0xFFFFFFFF)
			{
				v17 = sub_14092A980(a1, 12, a9);
				goto LABEL_14;
			}
			v16 = sub_14092D140((__int64)a1, 1, 512, a9, 12, 0i64);
			if (v16)
			{
				*v16 = -57;
				goto LABEL_17;
			}
		}
		else
		{
			v18 = sub_14092D140((__int64)a1, 1, 12, 0i64, a8, a9);
			if (v18)
			{
				*v18 = -117;
				goto LABEL_17;
			}
		}
	}
	else
	{
		v15 = sub_14092D140((__int64)a1, 1, a8, 0i64, 12, 0i64);
		if (v15)
		{
			*v15 = -119;
			goto LABEL_17;
		}
	}
	v17 = *a1;
LABEL_14:
	if (v17)
		return *a1;
LABEL_17:
	if ((a10 & 0x200) != 0)
	{
		if ((unsigned __int64)(a11 + 0x80000000i64) > 0xFFFFFFFF && !a1[26])
		{
			if (!(unsigned int)sub_14092A980(a1, 13, a11))
			{
				v20 = sub_14092D140((__int64)a1, 1, 13, 0i64, 12, 0i64);
				if (v20)
				{
					*v20 = a3;
					return 0i64;
				}
			}
			return *a1;
		}
		v21 = sub_14092D140((__int64)a1, 17, 512, a11, 12, 0i64);
		if (!v21)
			return *a1;
		v21[1] |= a4;
		return 0i64;
	}
	else
	{
		v22 = sub_14092D140((__int64)a1, 1, 12, 0i64, a10, a11);
		if (!v22)
			return *a1;
		*v22 = a2;
		return 0i64;
	}
}

