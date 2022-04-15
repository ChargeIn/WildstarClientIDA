#include "../winhttp.h"

//----- (000000014075AB90) ----------------------------------------------------
void __fastcall sub_14075AB90(_DWORD* a1, _DWORD* a2)
{
	_DWORD* i; // rbx
	int v5; // r14d
	unsigned int v6; // edi
	int v7; // r15d
	int v8; // r12d
	int v9; // r13d
	_DWORD* v10; // rdx
	_DWORD* v11; // rax

	if (a1 != a2)
	{
		for (i = a1 + 5; i != a2; i += 5)
		{
			v5 = *i;
			v6 = i[1];
			v7 = i[2];
			v8 = i[3];
			v9 = i[4];
			v10 = i;
			if (v6 >= a1[1])
			{
				v11 = i - 5;
				if (v6 < *(i - 4))
				{
					do
					{
						*v10 = *v11;
						v10[1] = v11[1];
						v10[2] = v11[2];
						v10[3] = v11[3];
						v10[4] = v11[4];
						v10 = v11;
						v11 -= 5;
					} while (v6 < v11[1]);
				}
				*v10 = v5;
				v10[1] = v6;
				v10[2] = v7;
				v10[3] = v8;
				v10[4] = v9;
			}
			else
			{
				sub_14075A960((__int64)a1, (__int64)i, i + 5);
				*a1 = v5;
				a1[1] = v6;
				a1[2] = v7;
				a1[3] = v8;
				a1[4] = v9;
			}
		}
	}
}

