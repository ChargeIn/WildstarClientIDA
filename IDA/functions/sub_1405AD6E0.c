#include "../winhttp.h"

//----- (00000001405AD6E0) ----------------------------------------------------
void __fastcall sub_1405AD6E0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	int* v6; // rax
	__int64 v7; // r9
	int v8; // r8d
	unsigned int v9; // edx
	__int64 v10; // rax
	_DWORD* i; // rcx
	__int64 v12; // rcx
	int* v13; // rdx
	_QWORD* v14; // rcx
	__int64 v15; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
		v6 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5);
		v7 = *(_QWORD*)(a1 + 232);
		v8 = *v6;
		if (v7)
		{
			v9 = *(_DWORD*)(a1 + 272);
			v10 = 0i64;
			if (v9)
			{
				for (i = (_DWORD*)(v7 + 4); *i != v8; i += 48)
				{
					v10 = (unsigned int)(v10 + 1);
					if ((unsigned int)v10 >= v9)
						return;
				}
				v12 = v7 + 192 * v10;
				if (v12)
				{
					v13 = *(int**)(v12 + 72);
					v14 = (_QWORD*)(v12 + 56);
					v15 = a2;
					if (v13 == (int*)v14[3])
					{
						sub_1400B9430(v14, v13, &v15);
					}
					else
					{
						if (v13)
							*(_QWORD*)v13 = a2;
						v14[2] += 8i64;
					}
				}
			}
		}
	}
}

