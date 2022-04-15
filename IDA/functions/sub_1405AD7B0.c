#include "../winhttp.h"

//----- (00000001405AD7B0) ----------------------------------------------------
void __fastcall sub_1405AD7B0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	int* v6; // rax
	__int64 v7; // r9
	int v8; // r8d
	unsigned int v9; // edx
	__int64 v10; // rax
	_DWORD* i; // rcx
	__int64 v12; // rbx
	int* v13; // rcx
	int* v14; // rax

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
					v13 = *(int**)(v12 + 64);
					v14 = *(int**)(v12 + 72);
					if (v13 != v14)
					{
						while (*(_QWORD*)v13 != a2)
						{
							v13 += 2;
							if (v13 == v14)
								return;
						}
						if (v13 + 2 != v14)
							sub_1407DB590(v13, v13 + 2, ((char*)v14 - (char*)(v13 + 2)) & 0xFFFFFFFFFFFFFFF8ui64);
						*(_QWORD*)(v12 + 72) -= 8i64;
					}
				}
			}
		}
	}
}

