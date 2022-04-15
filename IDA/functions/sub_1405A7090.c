#include "../winhttp.h"

//----- (00000001405A7090) ----------------------------------------------------
void __fastcall sub_1405A7090(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	unsigned int v5; // eax
	__int64 v6; // rcx
	unsigned int v7; // r11d
	__int64 v8; // r14
	__int64 v9; // r8
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rbp
	int v13; // eax
	int v14; // ebx
	int v15; // [rsp+20h] [rbp-38h] BYREF
	__int64 v16; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * v17)(); // [rsp+30h] [rbp-28h]
	__int64 v18; // [rsp+38h] [rbp-20h]
	__int64 v19; // [rsp+60h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 120);
	if (v2)
	{
		v5 = sub_1403BAD30(a1, a2, *(_BYTE*)(a1 + 28140));
		if (v5)
		{
			v8 = sub_1407A16F0(v6, v5);
			if (v8)
			{
				v9 = *(_QWORD*)(a1 + 28064);
				v10 = v9;
				v11 = *(_QWORD*)(v9 + 8);
				while (v11)
				{
					if (*(_DWORD*)(v11 + 32) < (unsigned int)a2)
					{
						v11 = *(_QWORD*)(v11 + 24);
					}
					else
					{
						v10 = v11;
						v11 = *(_QWORD*)(v11 + 16);
					}
				}
				if (v10 == v9 || (v19 = v10, (unsigned int)a2 < *(_DWORD*)(v10 + 32)))
					v19 = *(_QWORD*)(a1 + 28064);
				if (v19 != v9)
				{
					v12 = *(_QWORD*)(v19 + 40);
					if (*(_DWORD*)(v12 + 4) < (unsigned int)sub_1405A6EB0(a1, v7, a2))
					{
						v13 = *(_DWORD*)(v8 + 4);
						v15 = 1;
						v14 = (int)(float)((float)v13 * *(float*)(v2 + 2564));
						v16 = sub_14001C280(a1);
						v18 = a2;
						v17 = sub_1405A7090;
						sub_140195960(v12 + 8, v14, (__int64)&v15, 4);
					}
				}
			}
		}
	}
}
// 1405A70CA: variable 'v6' is possibly undefined
// 1405A713A: variable 'v7' is possibly undefined

