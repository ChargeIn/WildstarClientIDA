//----- (0000000140929830) ----------------------------------------------------
__int64 __fastcall sub_140929830(unsigned int* a1, unsigned int a2, int a3, __int64 a4, int a5, __int64 a6)
{
	char* v10; // rax
	char* v11; // rax
	int v12; // eax
	char* v13; // rax
	char* v15; // rax
	char* v16; // rax
	int v17; // eax
	char* v18; // rax
	int v19; // eax
	__int64 v20; // rcx
	char* v21; // rax
	int v22; // r15d
	unsigned int v23; // edx
	char* v29; // rax
	_QWORD* v30; // rax
	_BYTE* v31; // rdx
	char v32; // al
	char* v33; // rax

	if (!a3)
	{
		if (a5 > 12)
		{
			if ((a5 & 0x200) != 0)
			{
				if (a1[26])
				{
					v12 = sub_14092A740(a1, 65, 186, a6);
					goto LABEL_14;
				}
				if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
				{
					v12 = sub_14092A980(a1, 12, a6);
					goto LABEL_14;
				}
				v11 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
				if (v11)
				{
					*v11 = -57;
					goto LABEL_17;
				}
			}
			else
			{
				v13 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
				if (v13)
				{
					*v13 = -117;
					goto LABEL_17;
				}
			}
		}
		else
		{
			v10 = sub_14092D140((__int64)a1, 1, a5, 0i64, 12, 0i64);
			if (v10)
			{
				*v10 = -119;
			LABEL_17:
				v15 = sub_14092D140((__int64)a1, 1, 0, 0i64, 12, 0i64);
				if (v15)
				{
					*v15 = -9;
					v15[1] |= 0x10u;
					v16 = sub_14092D140((__int64)a1, 33, 512, ~(unsigned __int8)(a2 >> 3) & 0x20 | 0x1Fi64, 12, 0i64);
					if (v16)
					{
						*v16 |= 0x28u;
						return 0i64;
					}
				}
				return *a1;
			}
		}
		v12 = *a1;
	LABEL_14:
		if (v12)
			return *a1;
		goto LABEL_17;
	}
	v17 = a5;
	if ((a5 & 0x200) != 0)
	{
		if (a1[26])
		{
			v19 = sub_14092A740(a1, 65, 186, a6);
		}
		else if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
		{
			v19 = sub_14092A980(a1, 12, a6);
		}
		else
		{
			v18 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
			if (v18)
			{
				*v18 = -57;
				v20 = 0i64;
				v17 = 12;
				goto LABEL_31;
			}
			v19 = *a1;
		}
		if (v19)
			return *a1;
		v17 = 12;
		v20 = 0i64;
	}
	else
	{
		v20 = a6;
	}
LABEL_31:
	v21 = sub_14092D140((__int64)a1, 2, 12, 0i64, v17, v20);
	if (!v21)
		return *a1;
	*(_WORD*)v21 = -17137;
	v22 = 13;
	if (a3 <= 12)
		v22 = a3;
	a1[26] = 0;
	if ((unsigned int)sub_14092AA10(a1, v22, 0i64, 512, ~(unsigned __int8)(a2 >> 2) & 0x40 | 0x3Fi64))
		return *a1;
	v23 = dword_140C1B200;
	a1[26] = a2 & 0x100;
	if (v23 == -1)
	{
		_RAX = 1i64;
		__asm { cpuid }
		v23 = ((unsigned int)_RDX >> 15) & 1;
		dword_140C1B200 = v23;
	}
	if (v23)
	{
		v29 = sub_14092D140((__int64)a1, 2, v22, 0i64, 12, 0i64);
		if (v29)
		{
			*(_WORD*)v29 = 17679;
			goto LABEL_45;
		}
		return *a1;
	}
	v30 = sub_14092D610((__int64)a1, 6i64);
	v31 = v30;
	if (!v30)
		return *a1;
	*(_BYTE*)v30 = 5;
	*((_QWORD*)a1 + 11) += 5i64;
	*(_WORD*)((char*)v30 + 1) = 884;
	v32 = 0;
	if (byte_1409D00E0[v22] >= 8u)
		v32 = 68;
	v31[3] = v32 | 0x49;
	v31[4] = -117;
	v31[5] = (8 * byte_1409D00E0[v22 + 16]) | 0xC2;
LABEL_45:
	v33 = sub_14092D140((__int64)a1, 17, 512, ~(unsigned __int8)(a2 >> 3) & 0x20 | 0x1Fi64, v22, 0i64);
	if (!v33)
		return *a1;
	v33[1] |= 0x30u;
	if ((a3 & 0x100) != 0)
	{
		if ((unsigned int)sub_14092AA10(a1, a3, a4, 13, 0i64))
			return *a1;
	}
	return 0i64;
}
// 1409D00E0: using guessed type _BYTE byte_1409D00E0[32];
// 140C1B200: using guessed type int dword_140C1B200;

