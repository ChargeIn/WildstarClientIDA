#include "../winhttp.h"

//----- (000000014086EB20) ----------------------------------------------------
__int64 __fastcall sub_14086EB20(_BYTE* a1, __int64 a2, int a3)
{
	__int64 result; // rax
	unsigned int v5; // r14d
	unsigned int* v6; // rcx
	int v7; // edi
	_QWORD* v8; // rax
	__int64 v9; // rbx
	unsigned int v10; // esi
	unsigned int* v11; // [rsp+48h] [rbp+10h] BYREF
	int v12; // [rsp+50h] [rbp+18h] BYREF

	v12 = a3;
	v11 = (unsigned int*)(a2 + 4);
	result = sub_1408546E0(a1, &v11, &v12, 0);
	if ((_DWORD)result == 1)
	{
		result = sub_140869CC0((__int64)a1, &v11);
		if ((_DWORD)result == 1)
		{
			v5 = *v11;
			v6 = v11 + 1;
			v7 = 0;
			++v11;
			if (v5)
			{
				while (1)
				{
					v8 = (_QWORD*)sub_140865090(*v6);
					v9 = (__int64)v8;
					if (!v8)
						return 2i64;
					sub_140865A40(v8, (__int64)a1);
					v10 = sub_140865960(v9, &v11, &v12);
					if (v10 != 1)
						break;
					if (!sub_14084CA80((__int64)(a1 + 216), v9))
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
						return 2i64;
					}
					if (++v7 >= v5)
						return v10;
					v6 = v11;
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				return v10;
			}
		}
	}
	return result;
}

