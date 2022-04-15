#include "../winhttp.h"

//----- (00000001404C8200) ----------------------------------------------------
void __fastcall sub_1404C8200(__int64 a1, unsigned int a2, __int64 a3)
{
	int* v6; // r9
	int* v7; // rax
	__int64 v8; // rcx
	int* i; // rcx
	__int64 j; // rcx
	__int64 v11; // rdx
	int* v12; // rax
	__int64 v13; // rcx
	int* v14; // [rsp+20h] [rbp-28h] BYREF
	_QWORD v15[4]; // [rsp+28h] [rbp-20h] BYREF
	int* v16; // [rsp+68h] [rbp+20h] BYREF

	if (a2)
	{
		if (*(_DWORD*)(a3 + 104))
		{
			v6 = *(int**)(a1 + 120);
			v7 = (int*)*((_QWORD*)v6 + 2);
			if (v7 != v6)
			{
				while (*((_QWORD*)v7 + 5) != a3)
				{
					v8 = *((_QWORD*)v7 + 3);
					if (v8)
					{
						v7 = (int*)*((_QWORD*)v7 + 3);
						for (i = *(int**)(v8 + 16); i; i = (int*)*((_QWORD*)i + 2))
							v7 = i;
					}
					else
					{
						for (j = *((_QWORD*)v7 + 1); v7 == *(int**)(j + 24); j = *(_QWORD*)(j + 8))
							v7 = (int*)j;
						if (*((_QWORD*)v7 + 3) != j)
							v7 = (int*)j;
					}
					if (v7 == v6)
						goto LABEL_16;
				}
				v16 = v7;
				sub_1404CB8B0(a1 + 112, (__int64*)&v16);
			}
		}
	LABEL_16:
		v11 = *(_QWORD*)(a1 + 120);
		v12 = (int*)v11;
		v13 = *(_QWORD*)(v11 + 8);
		while (v13)
		{
			if (*(_DWORD*)(v13 + 32) < a2)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v12 = (int*)v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		}
		if (v12 == (int*)v11 || a2 < v12[8])
		{
			LODWORD(v15[0]) = a2;
			v15[1] = 0i64;
			v16 = v12;
			sub_140055C60(a1 + 112, &v14, (__int64*)&v16, v15);
			v12 = v14;
		}
		*((_QWORD*)v12 + 5) = a3;
	}
}

