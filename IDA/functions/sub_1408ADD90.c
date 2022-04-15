#include "../winhttp.h"

//----- (00000001408ADD90) ----------------------------------------------------
void __fastcall sub_1408ADD90(int* a1, char* a2, _OWORD* a3, unsigned int a4)
{
	char* v4; // rsi
	__int64 v7; // r10
	int v8; // edi
	char* v9; // rax
	unsigned int v10; // edx
	__int64 v11; // rcx
	signed __int64 v12; // r11
	__int128 v13; // xmm1
	__int128 v14; // xmm0
	unsigned int v15; // r9d
	unsigned int v16; // edx
	unsigned int i; // ebx
	__int128 v18; // xmm1
	__int128 v19; // xmm0

	v4 = (char*)*((_QWORD*)a1 + 1);
	if (v4)
	{
		v7 = (unsigned int)a1[4];
		v8 = *a1;
		v9 = &v4[4 * v7];
		v10 = *a1 - v7;
		if (v10 <= a4)
		{
			v15 = a4 >> 2;
			v16 = v10 >> 2;
			if (v15)
			{
				do
				{
					if (v15 < v16)
						v16 = v15;
					for (i = v16; i; --i)
					{
						v18 = *(_OWORD*)v9;
						v9 += 16;
						v19 = *(_OWORD*)a2;
						*a3 = v18;
						a2 += 16;
						++a3;
						*((_OWORD*)v9 - 1) = v19;
					}
					LODWORD(v7) = v7 + 4 * v16;
					if ((_DWORD)v7 == v8)
					{
						v9 = v4;
						LODWORD(v7) = 0;
					}
					v15 -= v16;
					v16 = (unsigned int)(v8 - v7) >> 2;
				} while (v15);
				a1[4] = v7;
			}
		}
		else
		{
			v11 = a4 >> 2;
			if ((_DWORD)v11)
			{
				v12 = a2 - v9;
				do
				{
					v13 = *(_OWORD*)v9;
					v14 = *(_OWORD*)&v9[v12];
					v9 += 16;
					++a3;
					*((_OWORD*)v9 - 1) = v14;
					*(a3 - 1) = v13;
					--v11;
				} while (v11);
			}
			a1[4] = v7 + a4;
		}
	}
}

