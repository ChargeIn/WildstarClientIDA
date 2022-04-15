#include "../winhttp.h"

//----- (0000000140906224) ----------------------------------------------------
_BOOL8 __fastcall sub_140906224(
	__int64 a1,
	unsigned __int16 a2,
	unsigned int* a3,
	WCHAR** a4,
	_QWORD* a5,
	__int64 a6,
	int a7)
{
	WCHAR** v7; // rdi
	unsigned int* v8; // rsi
	_OWORD* v9; // rbp
	unsigned int v10; // ecx
	bool v11; // cc
	WCHAR* v12; // rdx
	WCHAR v13; // r8
	bool v14; // zf
	WCHAR* v15; // rdx
	WCHAR v16; // r8
	unsigned int v17; // ecx
	int v18; // ecx
	int v19; // ebx
	unsigned int v20; // eax
	signed int v21; // r8d
	signed int v22; // r8d
	int v23; // edx
	unsigned int v24; // ecx
	int v25; // edx
	WCHAR* v26; // rdx
	WCHAR v27; // r8
	WCHAR* v29; // rdx
	WCHAR v30; // r8
	unsigned int v31; // ecx
	void** v32; // rax
	unsigned __int64 v33; // rcx
	int v34; // ecx
	WCHAR* v35; // rdx
	WCHAR v36; // r8
	WCHAR* v37; // r8
	WCHAR v38; // r9
	_QWORD* v39; // [rsp+20h] [rbp-38h]
	__int64 v40; // [rsp+28h] [rbp-30h]
	unsigned __int64 v41[5]; // [rsp+30h] [rbp-28h] BYREF

	v7 = a4;
	v8 = a3;
	v9 = (_OWORD*)a1;
	if (a2 > 0x59u)
	{
		if (a2 > 0x6Du)
		{
			switch (a2)
			{
			case 'p':
				if (a3[2] <= 0x17)
				{
					if ((int)a3[2] > 11)
					{
						v37 = *(WCHAR**)(a6 + 664);
						if (*a5)
						{
							do
							{
								v38 = *v37;
								if (!*v37)
									break;
								++v37;
								*(*v7)++ = v38;
								v14 = (*a5)-- == 1i64;
							} while (!v14);
						}
					}
					else
					{
						v35 = *(WCHAR**)(a6 + 656);
						if (*a5)
						{
							do
							{
								v36 = *v35;
								if (!*v35)
									break;
								++v35;
								*(*a4)++ = v36;
								v14 = (*a5)-- == 1i64;
							} while (!v14);
						}
					}
					return 1i64;
				}
				goto LABEL_75;
			case 'w':
				if (a3[6] <= 6)
				{
					v10 = a3[6];
					v23 = 1;
					goto LABEL_62;
				}
				goto LABEL_75;
			case 'x':
				v40 = a6;
				v39 = a5;
				v25 = a7 != 0;
				return (unsigned int)sub_140906974(a1, v25, (__int64)a3, a4, v39, v40) != 0;
			case 'y':
				v34 = a3[5];
				if (v34 < 0)
					goto LABEL_75;
				v10 = v34 % 100;
				goto LABEL_61;
			}
			if (a2 != 122)
				return 0i64;
		}
		else
		{
			if (a2 == 109)
			{
				v31 = a3[4];
				if (v31 > 0xB)
					goto LABEL_75;
				v10 = v31 + 1;
				goto LABEL_61;
			}
			if (a2 != 90)
			{
				switch (a2)
				{
				case 'a':
					if (a3[6] <= 6)
					{
						v29 = *(WCHAR**)(a6 + 8i64 * (int)a3[6] + 352);
						if (*a5)
						{
							do
							{
								v30 = *v29;
								if (!*v29)
									break;
								++v29;
								*(*a4)++ = v30;
								v14 = (*a5)-- == 1i64;
							} while (!v14);
						}
						return 1i64;
					}
					goto LABEL_75;
				case 'b':
					if (a3[4] <= 0xB)
					{
						v26 = *(WCHAR**)(a6 + 8i64 * (int)a3[4] + 464);
						if (*a5)
						{
							do
							{
								v27 = *v26;
								if (!*v26)
									break;
								++v26;
								*(*a4)++ = v27;
								v14 = (*a5)-- == 1i64;
							} while (!v14);
						}
						return 1i64;
					}
					goto LABEL_75;
				case 'c':
					if (!(unsigned int)sub_140906974(a1, a7 != 0, (__int64)a3, a4, a5, a6) || !*a5)
						return 0i64;
					v40 = a6;
					*(*v7)++ = 32;
					--* a5;
					v39 = a5;
					a4 = v7;
					a3 = v8;
				LABEL_66:
					v25 = 2;
					a1 = (__int64)v9;
					return (unsigned int)sub_140906974(a1, v25, (__int64)a3, a4, v39, v40) != 0;
				case 'd':
					v10 = a3[3];
					if (v10 - 1 > 0x1E)
						goto LABEL_75;
					goto LABEL_61;
				}
				if (a2 != 106)
					return 0i64;
				v24 = a3[7];
				if (v24 > 0x16D)
					goto LABEL_75;
				v10 = v24 + 1;
				v23 = 3;
			LABEL_62:
				sub_14090687C(v10, v23, (__int16**)a4, a5, a7);
				return 1i64;
			}
		}
		sub_140905788();
		v41[0] = 0i64;
		v32 = sub_1409056F0();
		if ((unsigned int)sub_1409073D4(v41, *v7, *a5, (CHAR*)v32[v8[8] != 0], 0xFFFFFFFFFFFFFFFFui64, v9))
		{
			sub_1407DC390();
			JUMPOUT(0x140906879i64);
		}
		v33 = v41[0];
		*v7 += v41[0] - 1;
		*a5 += 1 - v33;
		return 1i64;
	}
	if (a2 == 89)
	{
		v22 = a3[5];
		if ((unsigned int)(v22 + 1900) > 0x270F)
			goto LABEL_75;
		v23 = 4;
		v10 = v22 % 100 + 100 * (v22 / 100 + 19);
		goto LABEL_62;
	}
	if (a2 > 0x49u)
	{
		if (a2 == 77)
		{
			v10 = a3[1];
			v11 = v10 <= 0x3B;
		LABEL_12:
			if (!v11)
				goto LABEL_75;
			goto LABEL_61;
		}
		v18 = 6;
		if (a2 == 83)
		{
			if (*a3 > 0x3B)
				goto LABEL_75;
			v10 = *a3;
			goto LABEL_61;
		}
		v19 = 0;
		switch (a2)
		{
		case 'U':
			if (a3[6] > 6)
				goto LABEL_75;
			v18 = a3[6];
			break;
		case 'W':
			v20 = a3[6];
			if (v20 > 6)
				goto LABEL_75;
			if (v20)
				v18 = v20 - 1;
			break;
		case 'X':
			v40 = a6;
			v39 = a5;
			goto LABEL_66;
		default:
			return 0i64;
		}
		v21 = a3[7];
		if ((unsigned int)v21 > 0x16D)
			goto LABEL_75;
		if (v21 >= v18)
		{
			v19 = v21 / 7;
			if (v21 % 7 >= v18)
				++v19;
		}
		v10 = v19;
		goto LABEL_61;
	}
	if (a2 == 73)
	{
		v17 = a3[2];
		if (v17 > 0x17)
			goto LABEL_75;
		v10 = (int)v17 % 12;
		if (!v10)
			v10 = 12;
	LABEL_61:
		v23 = 2;
		goto LABEL_62;
	}
	if (a2 == 4 || a2 == 13)
		return 1i64;
	if (a2 != 37)
	{
		switch (a2)
		{
		case 'A':
			if (a3[6] <= 6)
			{
				v15 = *(WCHAR**)(a6 + 8i64 * (int)a3[6] + 408);
				if (*a5)
				{
					do
					{
						v16 = *v15;
						if (!*v15)
							break;
						++v15;
						*(*a4)++ = v16;
						v14 = (*a5)-- == 1i64;
					} while (!v14);
				}
				return 1i64;
			}
			break;
		case 'B':
			if (a3[4] <= 0xB)
			{
				v12 = *(WCHAR**)(a6 + 8i64 * (int)a3[4] + 560);
				if (*a5)
				{
					do
					{
						v13 = *v12;
						if (!*v12)
							break;
						++v12;
						*(*a4)++ = v13;
						v14 = (*a5)-- == 1i64;
					} while (!v14);
				}
				return 1i64;
			}
			break;
		case 'H':
			v10 = a3[2];
			v11 = v10 <= 0x17;
			goto LABEL_12;
		default:
			return 0i64;
		}
	LABEL_75:
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	*(*a4)++ = 37;
	--* a5;
	return 1i64;
}
// 140906874: control flows out of bounds to 140906879
// 140906224: using guessed type unsigned __int64 var_28[5];

