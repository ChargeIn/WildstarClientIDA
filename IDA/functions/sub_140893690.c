#include "../winhttp.h"

//----- (0000000140893690) ----------------------------------------------------
__int64 __fastcall sub_140893690(int** a1)
{
	int v2; // eax
	unsigned int v3; // ebp
	int* v4; // rcx
	int v5; // r12d
	int* v6; // rax
	int v7; // r15d
	__int64 v8; // r14
	_DWORD* v9; // rbx
	_DWORD* i; // rdi
	_DWORD* v11; // rcx
	_DWORD* v12; // rax
	unsigned int v13; // eax
	_DWORD* v14; // rcx
	_DWORD* v15; // rax
	_DWORD* v17; // [rsp+20h] [rbp-48h] BYREF
	_DWORD* v18; // [rsp+28h] [rbp-40h]
	int v19; // [rsp+30h] [rbp-38h]

	if ((_BYTE)qword_140C61B20 && *((_DWORD*)a1 + 68) == 1)
	{
		v2 = *((_DWORD*)a1 + 66);
		v3 = 1;
		if (v2)
		{
			*((_DWORD*)a1 + 66) = v2 + 1;
		}
		else
		{
			v3 = (*((__int64(__fastcall**)(int**)) * a1 + 85))(a1);
			if (v3 == 1)
			{
				v4 = a1[38];
				if (v4)
					v5 = *v4;
				else
					v5 = 0;
				v6 = a1[39];
				if (v6)
					v7 = *(unsigned __int8*)v6;
				else
					v7 = 0;
				v8 = sub_14087BB10((__int64)(a1 + 31), v5, v7);
				if (v8)
				{
					v17 = 0i64;
					v18 = 0i64;
					v19 = 0;
					sub_140834890((__int64)(a1 + 34), (__int64)&v17);
					v9 = v17;
					for (i = v17; i != v18; i += 2)
					{
						if (!*i)
							goto LABEL_18;
						v11 = *(_DWORD**)(v8 + 8);
						v12 = *(_DWORD**)v8;
						if (*(_DWORD**)v8 != v11)
						{
							do
							{
								if (*v12 == *i)
									break;
								++v12;
							} while (v12 != v11);
							if (v12 != v11)
							{
							LABEL_18:
								v13 = sub_140853B00(i[1]);
								v9 = v17;
								v3 = v13;
							}
						}
						if (v3 != 1 && v9 != i)
						{
							do
							{
								v14 = *(_DWORD**)(v8 + 8);
								v15 = *(_DWORD**)v8;
								if (*(_DWORD**)v8 != v14)
								{
									do
									{
										if (*v15 == *v9)
											break;
										++v15;
									} while (v15 != v14);
									if (v15 != v14)
										sub_1408552B0(i[1]);
								}
								v9 += 2;
							} while (v9 != i);
							v9 = v17;
						}
					}
					if (v9)
					{
						v18 = v9;
						sub_140881720(dword_140C10F20, (__int64)v9);
						v17 = 0i64;
						v18 = 0i64;
						v19 = 0;
					}
					if (v3 == 1)
					{
						++* ((_DWORD*)a1 + 66);
						v3 = sub_14087BB40((__int64)(a1 + 31), v5, v7);
						if (v3 != 1)
						{
							(*((void(__fastcall**)(int**)) * a1 + 41))(a1);
							(*((void(__fastcall**)(int**)) * a1 + 86))(a1);
						}
						return v3;
					}
				}
				else
				{
					v3 = 52;
				}
				(*((void(__fastcall**)(int**)) * a1 + 86))(a1);
			}
		}
		return v3;
	}
	return sub_140891130((__int64)a1);
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B20: using guessed type __int64 qword_140C61B20;

