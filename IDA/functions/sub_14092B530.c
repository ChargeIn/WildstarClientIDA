//----- (000000014092B530) ----------------------------------------------------
__int64 __fastcall sub_14092B530(
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
	unsigned int v23; // eax
	char v24; // si
	int v25; // r8d
	char* v26; // rax
	char* v27; // rax
	__int64 v28; // r9
	char* v29; // rax
	char* v30; // rax
	char* v31; // rax
	char* v32; // rax
	char* v33; // rax
	unsigned int v34; // eax
	char* v35; // rax
	char* v36; // rax
	char* v37; // rax
	char* v38; // rax
	char* v39; // rax

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
				LABEL_43:
					v26 = sub_14092D140((__int64)a1, 17, 512, a11, a6, a7);
					if (!v26)
						return *a1;
					v26[1] |= a4;
					return 0i64;
				}
			LABEL_40:
				if (!a1[26])
				{
					if (!(unsigned int)sub_14092A980(a1, 13, a11))
					{
						v25 = 13;
						goto LABEL_55;
					}
					return *a1;
				}
				goto LABEL_43;
			}
			if (a6 > 12)
			{
				if (a10 <= 12)
				{
					v28 = a11;
					v25 = a10;
					goto LABEL_56;
				}
				v29 = sub_14092D140((__int64)a1, 1, 12, 0i64, a10, a11);
				if (v29)
				{
					*v29 = -117;
				}
				else
				{
					result = *a1;
					if ((_DWORD)result)
						return result;
				}
				v25 = 12;
			LABEL_55:
				v28 = 0i64;
			LABEL_56:
				v30 = sub_14092D140((__int64)a1, 1, v25, v28, a6, a7);
				if (!v30)
					return *a1;
				goto LABEL_66;
			}
			v27 = sub_14092D140((__int64)a1, 1, a6, a7, a10, a11);
			if (!v27)
				return *a1;
		LABEL_70:
			*v27 = a2;
			return 0i64;
		}
		if (a6 <= 12 && a6 != a10)
		{
			if ((unsigned int)sub_14092AA10(a1, a6, 0i64, a8, a9))
				return *a1;
			if ((a10 & 0x200) != 0)
			{
				if ((unsigned __int64)(a11 + 0x80000000i64) <= 0xFFFFFFFF || a1[26])
				{
					v31 = sub_14092D140((__int64)a1, 17, 512, a11, a6, 0i64);
					if (v31)
					{
						v31[1] |= a4;
						return 0i64;
					}
				}
				else if (!(unsigned int)sub_14092A980(a1, 13, a11))
				{
					v30 = sub_14092D140((__int64)a1, 1, 13, 0i64, a6, 0i64);
					if (v30)
					{
					LABEL_66:
						*v30 = a3;
						return 0i64;
					}
				}
				return *a1;
			}
			v27 = sub_14092D140((__int64)a1, 1, a6, 0i64, a10, a11);
			if (!v27)
				return *a1;
			goto LABEL_70;
		}
		if (a8 > 12)
		{
			if ((a8 & 0x200) != 0)
			{
				if (a1[26])
				{
					v34 = sub_14092A740(a1, 65, 186, a9);
					goto LABEL_83;
				}
				if ((unsigned __int64)(a9 + 0x80000000i64) > 0xFFFFFFFF)
				{
					v34 = sub_14092A980(a1, 12, a9);
					goto LABEL_83;
				}
				v33 = sub_14092D140((__int64)a1, 1, 512, a9, 12, 0i64);
				if (v33)
				{
					*v33 = -57;
					goto LABEL_86;
				}
			}
			else
			{
				v35 = sub_14092D140((__int64)a1, 1, 12, 0i64, a8, a9);
				if (v35)
				{
					*v35 = -117;
					goto LABEL_86;
				}
			}
		}
		else
		{
			v32 = sub_14092D140((__int64)a1, 1, a8, 0i64, 12, 0i64);
			if (v32)
			{
				*v32 = -119;
			LABEL_86:
				if ((a10 & 0x200) != 0)
				{
					if ((unsigned __int64)(a11 + 0x80000000i64) <= 0xFFFFFFFF || a1[26])
					{
						v37 = sub_14092D140((__int64)a1, 17, 512, a11, 12, 0i64);
						if (!v37)
							return *a1;
						v37[1] |= a4;
					}
					else
					{
						if ((unsigned int)sub_14092A980(a1, 13, a11))
							return *a1;
						v36 = sub_14092D140((__int64)a1, 1, 13, 0i64, 12, 0i64);
						if (!v36)
							return *a1;
						*v36 = a3;
					}
				}
				else
				{
					v38 = sub_14092D140((__int64)a1, 1, 12, 0i64, a10, a11);
					if (!v38)
						return *a1;
					*v38 = a2;
				}
				v39 = sub_14092D140((__int64)a1, 1, 12, 0i64, a6, a7);
				if (v39)
				{
					*v39 = -119;
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
		v34 = *a1;
	LABEL_83:
		if (v34)
			return *a1;
		goto LABEL_86;
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

