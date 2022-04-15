#include "../winhttp.h"

//----- (000000014051BAC0) ----------------------------------------------------
__int64 sub_14051BAC0()
{
	unsigned int v0; // ebx
	__int64 v1; // rax
	__int64 v2; // r15
	int* v4; // r13
	unsigned int v5; // edi
	__int64 v6; // rax
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rcx
	_DWORD* v9; // rax
	int* v10; // rax
	int v11; // ecx
	int v12; // r12d
	int v13; // r14d
	__int64 v14; // rdx
	int v15; // ecx
	unsigned int v16; // ebp
	int* v17; // rdi
	int v18; // esi
	unsigned int v19; // eax
	int* v20; // rax
	int v21; // eax
	int v22; // ecx
	int v23; // eax
	__int64 i; // rdi
	unsigned int v25; // edx
	int* v26; // rax
	int v27; // eax
	int v28; // ecx
	int v29; // eax
	unsigned int v30; // edx
	int* v31; // rax
	int v32; // eax
	unsigned int v33; // eax
	bool v34; // cf
	__int64 v35; // [rsp+68h] [rbp+10h]

	v0 = 100;
	v1 = sub_140245C00(*(_DWORD*)(qword_140C65898 + 6864));
	v2 = v1;
	if (!v1)
		return 100i64;
	v4 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v1 + 12), 0i64);
	if (!v4)
		return 100i64;
	v5 = *(_DWORD*)(v2 + 96);
	if (!v5)
		goto LABEL_16;
	if (*(_DWORD*)(qword_140C65898 + 6328))
	{
		v6 = *(_QWORD*)(qword_140C65898 + 6536);
		if (!*(_DWORD*)v6)
		{
			if (*(_DWORD*)(v6 + 8))
				goto LABEL_14;
			v7 = *(_QWORD*)(v6 + 24);
			v8 = 0i64;
			if (v7)
			{
				v9 = (_DWORD*)(*(_QWORD*)(v6 + 16) + 16i64);
				while (!*v9)
				{
					++v8;
					v9 += 5;
					if (v8 >= v7)
						goto LABEL_13;
				}
				goto LABEL_14;
			}
		}
	}
LABEL_13:
	if ((unsigned int)sub_14079E7C0(*(_QWORD*)(qword_140C65898 + 6000), *(_DWORD*)(v2 + 8), v4[81]))
	{
	LABEL_14:
		v10 = sub_1400B5DF0(qword_140C658F0, v5, 0i64);
		if (v10)
			v4 = v10;
	}
LABEL_16:
	v35 = sub_140242D40(*(_DWORD*)(v2 + 8));
	if (v35)
	{
		v11 = v4[86];
		v12 = 1;
		v13 = 7;
		v14 = 1i64;
		if (v11 > 1)
			v14 = (unsigned int)v11;
		v15 = 7;
		if ((int)v14 < 7)
			v15 = v14;
		if (v15 > 1)
		{
			if (v15 > 3)
				return 1000i64;
			v0 = 250;
		}
		v16 = 0;
		v17 = (int*)(v2 + 36);
		do
		{
			v18 = *v17;
			if (*v17 && v17[5])
			{
				v19 = sub_1405E6430(qword_140C65898 + 5784, v14, *(_DWORD*)(v2 + 8), v4[81], *v17);
				if (!v19)
					v19 = v18;
				v20 = sub_1400B5DF0(qword_140C658F0, v19, 0i64);
				if (v20)
				{
					v21 = v20[86];
					v22 = 1;
					if (v21 > 1)
						v22 = v21;
					v23 = 7;
					if (v22 < 7)
						v23 = v22;
					if (v23 != 1)
					{
						if (v23 > 3)
							goto LABEL_65;
						if (v0 < 0xFA)
							v0 = 250;
					}
				}
			}
			++v16;
			++v17;
		} while (v16 < 5);
		if ((*(_BYTE*)(v35 + 12) & 8) != 0)
		{
			for (i = 0i64; (unsigned int)i < *(_DWORD*)(qword_140C65898 + 6940); i = (unsigned int)(i + 1))
			{
				if ((unsigned int)i < *(_DWORD*)(qword_140C65898 + 6940) && *(_DWORD*)(qword_140C65898 + 4 * i + 6916))
				{
					v25 = (unsigned int)i >= *(_DWORD*)(qword_140C65898 + 6940) ? 0 : *(_DWORD*)(qword_140C65898 + 4 * i + 6916);
					v26 = sub_1400B5DF0(qword_140C658F0, v25, 0i64);
					if (v26)
					{
						v27 = v26[2];
						v28 = 1;
						if (v27 > 1)
							v28 = v27;
						v29 = 7;
						if (v28 < 7)
							v29 = v28;
						if (v29 != 1)
						{
							if (v29 > 3)
								goto LABEL_65;
							if (v0 < 0xFA)
								v0 = 250;
						}
					}
				}
			}
			v30 = *(_DWORD*)(qword_140C65898 + 6912);
			if (v30)
			{
				v31 = sub_1400B5DF0(qword_140C658F0, v30, 0i64);
				if (v31)
				{
					v32 = v31[2];
					if (v32 > 1)
						v12 = v32;
					if (v12 < 7)
						v13 = v12;
					if (v13 == 1)
					{
						v34 = v0 < 0x64;
						v33 = 100;
					LABEL_70:
						if (v34)
							return v33;
						return v0;
					}
					if (v13 > 3)
					{
					LABEL_65:
						v33 = 1000;
						v34 = v0 < 0x3E8;
						goto LABEL_70;
					}
					if (v0 < 0xFA)
						return 250;
				}
			}
		}
	}
	return v0;
}
// 14051BC01: conditional instruction was optimized away because ecx.4 is in (4..7)
// 14051BC8C: conditional instruction was optimized away because eax.4 is in (2..7)
// 14051BC96: conditional instruction was optimized away because eax.4 is in (4..7)
// 14051BCB2: conditional instruction was optimized away because ebx.4 is in (==64|==FA)
// 14051BD48: conditional instruction was optimized away because eax.4 is in (2..7)
// 14051BD52: conditional instruction was optimized away because eax.4 is in (4..7)
// 14051BD65: conditional instruction was optimized away because ebx.4 is in (==64|==FA)
// 14051BDB9: conditional instruction was optimized away because r14d.4 is in (2..7)
// 14051BDC5: conditional instruction was optimized away because r14d.4 is in (4..7)
// 14051BC51: variable 'v14' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

