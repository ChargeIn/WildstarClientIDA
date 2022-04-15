#include "../winhttp.h"

//----- (00000001405AD620) ----------------------------------------------------
void __fastcall sub_1405AD620(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // r9
	int v7; // r8d
	unsigned int v8; // edx
	__int64 v9; // rax
	_DWORD* i; // rcx
	_QWORD* v11; // rbx
	__int64 v12; // rcx
	__int64 v13; // rcx

	if (a2)
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3);
		v5 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
		v6 = *(_QWORD*)(a1 + 232);
		v7 = *v5;
		if (v6)
		{
			v8 = *(_DWORD*)(a1 + 272);
			v9 = 0i64;
			if (v8)
			{
				for (i = (_DWORD*)(v6 + 4); *i != v7; i += 48)
				{
					v9 = (unsigned int)(v9 + 1);
					if ((unsigned int)v9 >= v8)
						return;
				}
				v11 = (_QWORD*)(v6 + 192 * v9);
				if (v11)
				{
					v11[11] = 0i64;
					v12 = v11[12];
					if (v12)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
						v11[12] = 0i64;
					}
					v13 = v11[13];
					if (v13)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
						v11[13] = 0i64;
					}
				}
			}
		}
	}
}

