#include "../winhttp.h"

//----- (000000014079E250) ----------------------------------------------------
void __fastcall sub_14079E250(__int64 a1, int a2, int a3, int a4, float a5, int a6)
{
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // r9
	_DWORD* v11; // rdx
	_DWORD* v12; // rax
	int v13; // eax
	__int64 v14; // rbx
	int* v15; // rax
	__int64 v16; // rcx
	int* v17; // rsi
	int* v18; // rdx
	__int64 v19; // rcx
	int v20; // [rsp+20h] [rbp-38h]
	int v22; // [rsp+28h] [rbp-30h]
	int v23; // [rsp+30h] [rbp-28h]

	if (a2 || a3 || a4)
	{
		v9 = *(_QWORD*)(a1 + 24);
		v10 = 0i64;
		if (v9)
		{
			v11 = *(_DWORD**)(a1 + 16);
			v12 = v11;
			while (*v12 != a2 || v12[1] != a3 || v12[2] != a4)
			{
				++v10;
				v12 += 5;
				if (v10 >= v9)
					goto LABEL_10;
			}
			if (*(_DWORD*)a1)
			{
				switch (*(_DWORD*)a1)
				{
				case 1:
					v11[5 * v10 + 4] = a6;
					break;
				case 2:
					*(float*)&v11[5 * v10 + 3] = a5 + *(float*)&v11[5 * v10 + 3];
					break;
				case 3:
					*(float*)&v11[5 * v10 + 3] = a5 * *(float*)&v11[5 * v10 + 3];
					break;
				}
			}
			else
			{
				v11[5 * v10 + 4] = 1;
			}
		}
		else
		{
		LABEL_10:
			v13 = a6;
			v14 = *(_QWORD*)(a1 + 24);
			if (!*(_DWORD*)a1)
				v13 = 1;
			v20 = a2;
			v22 = a4;
			v23 = v13;
			v15 = sub_14018DB00(*(_QWORD*)(a1 + 16), v14 + 1, 20i64);
			v16 = 5 * v14;
			v15[v16] = v20;
			v17 = v15;
			v15[v16 + 1] = a3;
			v15[v16 + 2] = v22;
			*(float*)&v15[v16 + 3] = a5;
			v15[v16 + 4] = v23;
			v18 = *(int**)(a1 + 16);
			if (v18 != v15)
			{
				sub_1407DB590(v15, v18, 20i64 * *(_QWORD*)(a1 + 24));
				v19 = *(_QWORD*)(a1 + 16);
				if (v19)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
				*(_QWORD*)(a1 + 16) = v17;
			}
			*(_QWORD*)(a1 + 24) = v14 + 1;
		}
	}
}

