//----- (000000014092BFE0) ----------------------------------------------------
__int64 __fastcall sub_14092BFE0(unsigned int* a1, char a2, int a3, __int64 a4, int a5, __int64 a6, int a7, __int64 a8)
{
	char* v12; // rax
	char* v13; // rax
	unsigned int v14; // eax
	char* v15; // rax
	__int64 result; // rax
	char* v17; // rax
	char* v18; // rax
	char* v19; // rax
	char* v20; // rax
	char* v21; // rax
	char* v22; // rax
	char* v23; // rax
	char* v24; // rax
	char* v25; // rax
	unsigned int v26; // eax
	char* v27; // rax
	char* v28; // rax
	char* v29; // rax
	char* v30; // rax
	char* v31; // rax
	char* v32; // rax
	char* v33; // rax
	char* v34; // rax
	char* v35; // rax
	int v36; // eax
	char* v37; // rax
	char* v38; // rax
	char* v39; // rax
	int v40; // eax
	char* v41; // rax
	char* v42; // rax
	char* v43; // rax
	unsigned int v44; // eax
	char* v45; // rax
	char* v46; // rax

	if ((a7 & 0x200) != 0 || a7 == 3)
	{
		if (a3 == a5 && a4 == a6)
		{
			v33 = sub_14092D140((__int64)a1, 33, a7, a8, a3, a4);
			if (!v33)
				return *a1;
		LABEL_83:
			*v33 |= a2;
			return 0i64;
		}
		if (!a3)
		{
			if (a5 <= 12)
			{
				v34 = sub_14092D140((__int64)a1, 1, a5, 0i64, 12, 0i64);
				if (v34)
				{
					*v34 = -119;
					goto LABEL_100;
				}
				goto LABEL_96;
			}
			if ((a5 & 0x200) != 0)
			{
				if (a1[26])
				{
					v36 = sub_14092A740(a1, 65, 186, a6);
					goto LABEL_97;
				}
				if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
				{
					v36 = sub_14092A980(a1, 12, a6);
					goto LABEL_97;
				}
				v35 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
				if (v35)
				{
					*v35 = -57;
					goto LABEL_100;
				}
			}
			else
			{
				v37 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
				if (v37)
				{
					*v37 = -117;
				LABEL_100:
					v33 = sub_14092D140((__int64)a1, 33, a7, a8, 12, 0i64);
					if (!v33)
						return *a1;
					goto LABEL_83;
				}
			}
		LABEL_96:
			v36 = *a1;
		LABEL_97:
			if (v36)
				return *a1;
			goto LABEL_100;
		}
		if (a3 == 3)
		{
			if (a7 == 3)
			{
				if (a5 > 12)
				{
					if ((a5 & 0x200) != 0)
					{
						if (a1[26])
						{
							v40 = sub_14092A740(a1, 65, 186, a6);
							goto LABEL_116;
						}
						if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
						{
							v40 = sub_14092A980(a1, 12, a6);
							goto LABEL_116;
						}
						v39 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
						if (v39)
						{
							*v39 = -57;
							goto LABEL_119;
						}
					}
					else
					{
						v41 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
						if (v41)
						{
							*v41 = -117;
							goto LABEL_119;
						}
					}
				}
				else
				{
					v38 = sub_14092D140((__int64)a1, 1, a5, 0i64, 12, 0i64);
					if (v38)
					{
						*v38 = -119;
					LABEL_119:
						v19 = sub_14092D140((__int64)a1, 33, 3, 0i64, 12, 0i64);
					LABEL_120:
						if (!v19)
							return *a1;
						goto LABEL_27;
					}
				}
				v40 = *a1;
			LABEL_116:
				if (v40)
					return *a1;
				goto LABEL_119;
			}
		LABEL_123:
			if ((unsigned int)sub_14092AA10(a1, a3, 0i64, a5, a6))
				return *a1;
			v33 = sub_14092D140((__int64)a1, 33, a7, a8, a3, 0i64);
			if (!v33)
				return *a1;
			goto LABEL_83;
		}
		if (a3 <= 12)
			goto LABEL_123;
		if (a5 > 12)
		{
			if ((a5 & 0x200) != 0)
			{
				if (a1[26])
				{
					v44 = sub_14092A740(a1, 65, 186, a6);
					goto LABEL_138;
				}
				if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
				{
					v44 = sub_14092A980(a1, 12, a6);
					goto LABEL_138;
				}
				v43 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
				if (v43)
				{
					*v43 = -57;
					goto LABEL_141;
				}
			}
			else
			{
				v45 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
				if (v45)
				{
					*v45 = -117;
					goto LABEL_141;
				}
			}
		}
		else
		{
			v42 = sub_14092D140((__int64)a1, 1, a5, 0i64, 12, 0i64);
			if (v42)
			{
				*v42 = -119;
			LABEL_141:
				v46 = sub_14092D140((__int64)a1, 33, a7, a8, 12, 0i64);
				if (!v46)
					return *a1;
				*v46 |= a2;
				goto LABEL_143;
			}
		}
		v44 = *a1;
	LABEL_138:
		if (v44)
			return *a1;
		goto LABEL_141;
	}
	if (a3 == 3)
	{
		if (a5 > 12)
		{
			if ((a5 & 0x200) != 0)
			{
				if (a1[26])
				{
					v14 = sub_14092A740(a1, 65, 186, a6);
					goto LABEL_16;
				}
				if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
				{
					v14 = sub_14092A980(a1, 12, a6);
					goto LABEL_16;
				}
				v13 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
				if (v13)
				{
					*v13 = -57;
					goto LABEL_19;
				}
			}
			else
			{
				v15 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
				if (v15)
				{
					*v15 = -117;
					goto LABEL_19;
				}
			}
		}
		else
		{
			v12 = sub_14092D140((__int64)a1, a3 - 2, a5, 0i64, 12, 0i64);
			if (v12)
			{
				*v12 = -119;
				goto LABEL_19;
			}
		}
		v14 = *a1;
	LABEL_16:
		if (v14)
			return *a1;
	LABEL_19:
		if (a7 > 12)
		{
			v18 = sub_14092D140((__int64)a1, 1, 3, 0i64, a7, a8);
			if (v18)
			{
				*v18 = -117;
				goto LABEL_26;
			}
		}
		else
		{
			v17 = sub_14092D140((__int64)a1, 1, a7, 0i64, 3, 0i64);
			if (v17)
			{
				*v17 = -119;
				goto LABEL_26;
			}
		}
		result = *a1;
		if ((_DWORD)result)
			return result;
	LABEL_26:
		v19 = sub_14092D140((__int64)a1, 33, 3, 0i64, 12, 0i64);
		if (v19)
		{
		LABEL_27:
			*v19 |= a2;
			v20 = sub_14092D140((__int64)a1, 1, 12, 0i64, 3, 0i64);
			goto LABEL_144;
		}
		return *a1;
	}
	if (a3 <= 12 && a3 != a7 && ((a7 & 0x100) == 0 || (a7 & 0xF) != a3 && ((a7 >> 4) & 0xF) != a3))
	{
		if (a5 != a3 && (unsigned int)sub_14092AA10(a1, a3, 0i64, a5, a6))
			return *a1;
		v21 = sub_14092D140((__int64)a1, 1, 3, 0i64, 12, 0i64);
		if (v21)
		{
			*v21 = -119;
		}
		else
		{
			result = *a1;
			if ((_DWORD)result)
				return result;
		}
		if (a7 > 12)
		{
			v23 = sub_14092D140((__int64)a1, 1, 3, 0i64, a7, a8);
			if (v23)
			{
				*v23 = -117;
			LABEL_46:
				v19 = sub_14092D140((__int64)a1, 33, 3, 0i64, a3, 0i64);
				goto LABEL_120;
			}
		}
		else
		{
			v22 = sub_14092D140((__int64)a1, 1, a7, 0i64, 3, 0i64);
			if (v22)
			{
				*v22 = -119;
				v19 = sub_14092D140((__int64)a1, 33, 3, 0i64, a3, 0i64);
				goto LABEL_120;
			}
		}
		result = *a1;
		if ((_DWORD)result)
			return result;
		goto LABEL_46;
	}
	if (a5 > 12)
	{
		if ((a5 & 0x200) != 0)
		{
			if (a1[26])
			{
				v26 = sub_14092A740(a1, 65, 186, a6);
				goto LABEL_59;
			}
			if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
			{
				v26 = sub_14092A980(a1, 12, a6);
				goto LABEL_59;
			}
			v25 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
			if (v25)
			{
				*v25 = -57;
				goto LABEL_62;
			}
		}
		else
		{
			v27 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
			if (v27)
			{
				*v27 = -117;
				goto LABEL_62;
			}
		}
	}
	else
	{
		v24 = sub_14092D140((__int64)a1, 1, a5, 0i64, 12, 0i64);
		if (v24)
		{
			*v24 = -119;
			goto LABEL_62;
		}
	}
	v26 = *a1;
LABEL_59:
	if (v26)
		return *a1;
LABEL_62:
	v28 = sub_14092D140((__int64)a1, 1, 3, 0i64, 13, 0i64);
	if (v28)
	{
		*v28 = -119;
	}
	else
	{
		result = *a1;
		if ((_DWORD)result)
			return result;
	}
	if (a7 > 12)
	{
		v30 = sub_14092D140((__int64)a1, 1, 3, 0i64, a7, a8);
		if (v30)
		{
			*v30 = -117;
			goto LABEL_73;
		}
	LABEL_70:
		result = *a1;
		if ((_DWORD)result)
			return result;
		goto LABEL_73;
	}
	v29 = sub_14092D140((__int64)a1, 1, a7, 0i64, 3, 0i64);
	if (!v29)
		goto LABEL_70;
	*v29 = -119;
LABEL_73:
	v31 = sub_14092D140((__int64)a1, 33, 3, 0i64, 12, 0i64);
	if (!v31)
		return *a1;
	*v31 |= a2;
	v32 = sub_14092D140((__int64)a1, 1, 3, 0i64, 13, 0i64);
	if (v32)
	{
		*v32 = -117;
	}
	else
	{
		result = *a1;
		if ((_DWORD)result)
			return result;
	}
	if (!a3)
		return 0i64;
LABEL_143:
	v20 = sub_14092D140((__int64)a1, 1, 12, 0i64, a3, a4);
LABEL_144:
	if (v20)
	{
		*v20 = -119;
		return 0i64;
	}
	result = *a1;
	if (!(_DWORD)result)
		return 0i64;
	return result;
}

