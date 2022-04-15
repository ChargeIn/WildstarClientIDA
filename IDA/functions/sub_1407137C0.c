#include "../winhttp.h"

//----- (00000001407137C0) ----------------------------------------------------
void __fastcall sub_1407137C0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v6; // r8
	_QWORD* v7; // rcx
	_QWORD* v8; // r9
	__int64 v9; // rdx
	__int64 v10; // r8
	void(__fastcall * **v11)(_QWORD, __int64); // rcx
	__int64 v12; // rax
	_QWORD* v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // rcx

	for (; *(_QWORD*)(a1 + 16); *(_QWORD*)(v12 + 48) = 0i64)
	{
		v6 = *(_QWORD*)(a1 + 16);
		if ((int)(a3 - *(_DWORD*)(v6 + 8)) < 0)
			break;
		v7 = *(_QWORD**)(a1 + 8);
		if (v7)
		{
			v8 = (_QWORD*)v7[3];
			if (v8)
			{
				v9 = v7[2];
				if (v9 != *(_QWORD*)(v6 + 16))
				{
					*v8 = v7[4];
					v10 = v7[4];
					if (v10)
						*(_QWORD*)(v10 + 24) = v7[3];
					v7[3] = 0i64;
					v7[4] = 0i64;
					if (*(int*)(v9 + 4) < 2)
					{
						*(_DWORD*)(v9 + 4) = 3;
						if (*(_QWORD*)(v9 + 120) || *(_QWORD*)(v9 + 128))
							sub_140195960(v9 + 8, 0, v9 + 112, 4);
					}
				}
			}
			v11 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 8);
			if (v11)
				(**v11)(v11, 1i64);
		}
		v12 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(a1 + 8) = v12;
		v13 = *(_QWORD**)(v12 + 40);
		if (v13)
			*v13 = *(_QWORD*)(v12 + 48);
		v14 = *(_QWORD*)(v12 + 48);
		if (v14)
			*(_QWORD*)(v14 + 40) = *(_QWORD*)(v12 + 40);
		*(_QWORD*)(v12 + 40) = 0i64;
	}
	v15 = *(_QWORD*)(a1 + 8);
	if (v15)
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)v15 + 16i64))(v15, a2, a3, a1);
}

