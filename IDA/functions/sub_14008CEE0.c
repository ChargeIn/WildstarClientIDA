#include "../winhttp.h"

//----- (000000014008CEE0) ----------------------------------------------------
__int64 __fastcall sub_14008CEE0(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // r15
	unsigned int v10; // r14d
	__int64 v11; // rbp
	__int64 v12; // r8
	__int64 v13; // r8
	__int64 v14; // rax
	__int64 v15; // rdx
	unsigned int v16; // ebp
	_BYTE* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rbp

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 176i64 * *a3);
	*((_QWORD*)a3 + 1) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0i64;
	v10 = 0;
	if (*a3)
	{
		do
		{
			v11 = *((_QWORD*)a3 + 1) + 176i64 * v10;
			if (!v11)
				return (unsigned int)-2147467259;
			v7 = sub_14008C0D0(a1, a2, v11);
			if (v7 >= 0)
				v7 = sub_14006C090(a1, (_DWORD*)(v11 + 168), 6ui64);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v10 < *a3);
	}
	v7 = sub_140337160(a1, (_BYTE*)a3 + 16, 120i64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C120(a1, (__int64*)a3 + 17, v12);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 36, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 37, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 38, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 39, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 40, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006BE30(a1, (_BYTE*)a3 + 164, 3ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006BFF0(a1, (_WORD*)a3 + 83, v13);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 42, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_1400AB910(a1, a2, (__int64)(a3 + 44));
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 48, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v14 = sub_1403374E0(a2, 16i64 * a3[48]);
	*((_QWORD*)a3 + 25) = v14;
	if (!v14)
		return 2147500037i64;
	v16 = 0;
	if (a3[48])
	{
		do
		{
			v7 = sub_14008CDF0(a1, v15, *((_QWORD*)a3 + 25) + 16i64 * v16);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v16 < a3[48]);
	}
	v7 = sub_14006C090(a1, a3 + 52, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, a3 + 53, 0x10ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, a3 + 54, 0x20ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, a3 + 55, 0x20ui64);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, a3 + 56, 0x20ui64);
					if (v7 >= 0)
					{
						v7 = sub_14006BE30(a1, (_BYTE*)a3 + 228, 6ui64);
						if (v7 >= 0)
						{
							v17 = (_BYTE*)sub_1403374E0(a2, 2i64 * *((unsigned __int8*)a3 + 228));
							*((_QWORD*)a3 + 29) = v17;
							if (!v17)
								return 2147500037i64;
							v7 = sub_140337160(a1, v17, 2i64 * *((unsigned __int8*)a3 + 228));
							if (v7 < 0)
								return (unsigned int)v7;
							v7 = sub_140337160(a1, (_BYTE*)a3 + 240, 1024i64);
							if (v7 < 0)
								return (unsigned int)v7;
							v7 = sub_14006C1C0(a1, a3 + 316);
							if (v7 < 0)
								return (unsigned int)v7;
							v7 = sub_14006C090(a1, a3 + 317, 1ui64);
							if (v7 < 0)
								return (unsigned int)v7;
							v7 = sub_14006C090(a1, a3 + 318, 0x20ui64);
							if (v7 < 0)
								return (unsigned int)v7;
							v7 = sub_14006C090(a1, a3 + 319, 0x20ui64);
							if (v7 < 0)
								return (unsigned int)v7;
							v18 = sub_1403374E0(a2, 8i64 * a3[319]);
							*((_QWORD*)a3 + 160) = v18;
							if (!v18)
								return 2147500037i64;
							if (a3[319])
							{
								while (1)
								{
									v19 = *((_QWORD*)a3 + 160);
									v20 = v19 + 8 * v9;
									if (!v20)
										break;
									v7 = sub_14006C090(a1, (_DWORD*)(v19 + 8 * v9), 0xEui64);
									if (v7 >= 0)
										v7 = sub_14006C090(a1, (_DWORD*)(v20 + 4), 0x20ui64);
									if (v7 >= 0)
									{
										v9 = (unsigned int)(v9 + 1);
										if ((unsigned int)v9 < a3[319])
											continue;
									}
									return (unsigned int)v7;
								}
								return (unsigned int)-2147467259;
							}
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 14008CFD5: variable 'v12' is possibly undefined
// 14008D0A8: variable 'v13' is possibly undefined
// 14008D151: variable 'v15' is possibly undefined

