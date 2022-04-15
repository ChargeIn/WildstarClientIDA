//----- (00000001407E3190) ----------------------------------------------------
char __fastcall sub_1407E3190(__int64 a1)
{
	__int64 v2; // rbx
	unsigned int v3; // eax
	CHAR* v4; // rcx
	BYTE v5; // al
	BYTE* LeadByte; // rdx
	unsigned int v7; // r8d
	__int64 i; // rcx
	unsigned int v9; // eax
	WORD* v10; // rdx
	_BYTE* j; // rcx
	unsigned int v12; // edx
	_BYTE* v13; // rcx
	struct _cpinfo CPInfo; // [rsp+50h] [rbp-B0h] BYREF
	CHAR v16[256]; // [rsp+70h] [rbp-90h] BYREF
	WCHAR v17[128]; // [rsp+170h] [rbp+70h] BYREF
	WCHAR v18[128]; // [rsp+270h] [rbp+170h] BYREF
	WORD v19[256]; // [rsp+370h] [rbp+270h] BYREF

	v2 = 256i64;
	if (GetCPInfo(*(_DWORD*)(a1 + 4), &CPInfo))
	{
		v3 = 0;
		v4 = v16;
		do
			*v4++ = v3++;
		while (v3 < 0x100);
		v5 = CPInfo.LeadByte[0];
		v16[0] = 32;
		LeadByte = CPInfo.LeadByte;
		while (v5)
		{
			v7 = LeadByte[1];
			for (i = v5; (unsigned int)i <= v7 && (unsigned int)i < 0x100; i = (unsigned int)(i + 1))
				v16[i] = 32;
			LeadByte += 2;
			v5 = *LeadByte;
		}
		sub_1407E82FC(0i64, 1u, v16, 256, v19, *(_DWORD*)(a1 + 4), 0);
		sub_1407F09F8(0i64, *(_QWORD*)(a1 + 544), 0x100u, v16, 256, v17, 256, *(_DWORD*)(a1 + 4), 0);
		LOBYTE(v9) = sub_1407F09F8(0i64, *(_QWORD*)(a1 + 544), 0x200u, v16, 256, v18, 256, *(_DWORD*)(a1 + 4), 0);
		v10 = v19;
		for (j = (_BYTE*)(a1 + 25); ; ++j)
		{
			if ((*(_BYTE*)v10 & 1) != 0)
			{
				*j |= 0x10u;
				LOBYTE(v9) = j[(_QWORD)v17 - a1 - 25];
			}
			else
			{
				if ((*(_BYTE*)v10 & 2) == 0)
				{
					j[256] = 0;
					goto LABEL_18;
				}
				*j |= 0x20u;
				LOBYTE(v9) = j[(_QWORD)v18 - a1 - 25];
			}
			j[256] = v9;
		LABEL_18:
			++v10;
			if (!--v2)
				return v9;
		}
	}
	v12 = 0;
	v13 = (_BYTE*)(a1 + 25);
	do
	{
		v9 = v12 - 97 + 32;
		if (v9 <= 0x19)
		{
			*v13 |= 0x10u;
			LOBYTE(v9) = v12 + 32;
		LABEL_25:
			v13[256] = v9;
			goto LABEL_27;
		}
		if (v12 - 97 <= 0x19)
		{
			*v13 |= 0x20u;
			LOBYTE(v9) = v12 - 32;
			goto LABEL_25;
		}
		v13[256] = 0;
	LABEL_27:
		++v12;
		++v13;
	} while (v12 < 0x100);
	return v9;
}
// 1407E3190: using guessed type CHAR var_510[256];
// 1407E3190: using guessed type WORD var_210[256];
// 1407E3190: using guessed type WCHAR var_410[128];
// 1407E3190: using guessed type WCHAR var_310[128];

