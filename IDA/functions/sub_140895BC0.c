#include "../winhttp.h"

//----- (0000000140895BC0) ----------------------------------------------------
unsigned int** __fastcall sub_140895BC0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // rbp
	int v6; // edx
	__int64 v7; // rsi
	unsigned int** i; // r11
	unsigned int* v9; // r9
	unsigned __int64 v10; // rcx
	unsigned int* v11; // r8
	unsigned int* v12; // r10
	__int64 v13; // kr00_8
	unsigned int* v14; // rdx
	unsigned int* v15; // r9
	unsigned __int64 v16; // rcx
	unsigned int* v17; // r8
	unsigned int* v18; // r10
	__int64 v19; // kr08_8
	unsigned int* v20; // rdx

	v3 = *(_QWORD*)(a1 + 224);
	v6 = (*(_DWORD*)(a1 + 232) - (int)v3) / 104 - 1;
	v7 = v6;
	if (v6 < 0)
		return (unsigned int**)v3;
	for (i = (unsigned int**)(v3 + 104i64 * v6); ; i -= 13)
	{
		v9 = *i;
		if (**i == -1)
			goto LABEL_30;
		v10 = (unsigned __int64)i[1];
		v11 = (unsigned int*)v10;
		if (v9)
		{
			v12 = i[1];
			if ((unsigned __int64)v9 <= v10)
			{
				do
				{
					v13 = v12 - v9;
					v14 = &v9[v13 / 2];
					if (a2 >= *v14)
					{
						if (a2 <= *v14)
						{
							v11 = &v9[v13 / 2];
							break;
						}
						v9 = v14 + 1;
					}
					else
					{
						v12 = v14 - 1;
					}
				} while (v9 <= v12);
			}
		}
		if (v11 != (unsigned int*)v10)
		{
		LABEL_30:
			v15 = i[3];
			if (*v15 == -1)
				break;
			v16 = (unsigned __int64)i[4];
			v17 = (unsigned int*)v16;
			if (v15)
			{
				v18 = i[4];
				if ((unsigned __int64)v15 <= v16)
				{
					do
					{
						v19 = v18 - v15;
						v20 = &v15[v19 / 2];
						if (a3 >= *v20)
						{
							if (a3 <= *v20)
							{
								v17 = &v15[v19 / 2];
								break;
							}
							v15 = v20 + 1;
						}
						else
						{
							v18 = v20 - 1;
						}
					} while (v15 <= v18);
				}
			}
			if (v17 != (unsigned int*)v16)
				break;
		}
		if (--v7 < 0)
			return (unsigned int**)v3;
	}
	return i;
}

