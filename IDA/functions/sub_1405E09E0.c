#include "../winhttp.h"

//----- (00000001405E09E0) ----------------------------------------------------
__int64 __fastcall sub_1405E09E0(__int64 a1, unsigned __int8* a2)
{
	__int64 v4; // r12
	int* v5; // rax
	int* v6; // r14
	unsigned __int64 v7; // r15
	__int64 v8; // rbp
	unsigned __int64 v9; // rdi
	_QWORD* v10; // rbx
	_QWORD* v11; // rbx
	__int64 v12; // rbp
	int* v13; // rax
	int* v14; // rbx
	__int64 v15; // rbp
	unsigned __int64 v16; // rdi
	__int64 v17; // rbx

	v4 = 0i64;
	v5 = sub_14018DBC0(0i64, *a2, 4i64);
	v6 = 0i64;
	v7 = 0i64;
	if (v5)
		v6 = v5;
	if (*a2)
	{
		do
		{
			v8 = *((_QWORD*)a2 + 1) + 8 * v7;
			v9 = (*(__int64(__fastcall**)(__int64))(a1 + 144))(v8);
			v10 = *(_QWORD**)(*(_QWORD*)(a1 + 136) + 8 * (v9 % *(_QWORD*)(a1 + 128)));
			if (v10)
			{
				while (v9 != *v10 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 152))(v8, v10 + 2))
				{
					v10 = (_QWORD*)v10[1];
					if (!v10)
						goto LABEL_21;
				}
				v11 = v10 + 3;
				if (v11)
				{
					v12 = *v11;
					*(_DWORD*)(*v11 + 236i64) = *(_DWORD*)(*((_QWORD*)a2 + 2) + 4 * v7);
					v13 = sub_14018DB00((__int64)v6, v4 + 1, 4i64);
					v14 = v13;
					v13[v4] = *(_DWORD*)(v12 + 8);
					if (v6 != v13)
					{
						sub_1407DB590(v13, v6, 4 * v4);
						if (v6)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
						v6 = v14;
					}
					v15 = v12 + 184;
					++v4;
					v16 = (*(__int64(__fastcall**)(__int64))(a1 + 504))(v15);
					v17 = *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * (v16 % *(_QWORD*)(a1 + 488)));
					if (v17)
					{
						while (v16 != *(_QWORD*)v17
							|| !(*(unsigned int(__fastcall**)(__int64, __int64))(a1 + 512))(v15, v17 + 16))
						{
							v17 = *(_QWORD*)(v17 + 8);
							if (!v17)
								goto LABEL_21;
						}
						if (v17 != -32)
							sub_1405DCE30(*(unsigned int**)(v17 + 32), v15, *(_DWORD*)(*((_QWORD*)a2 + 2) + 4 * v7));
					}
				}
			}
		LABEL_21:
			++v7;
		} while (v7 < *a2);
	}
	sub_140427960(*(_QWORD*)(qword_140C65898 + 29504), (__int64)v6, *((unsigned int**)a2 + 2), *a2);
	if (v6)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

