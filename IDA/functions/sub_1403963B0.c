#include "../winhttp.h"

//----- (00000001403963B0) ----------------------------------------------------
void __fastcall sub_1403963B0(_QWORD* a1, int a2)
{
	__int64 v3; // rcx
	int v5; // ebp
	unsigned int v6; // r15d
	unsigned int v7; // eax
	unsigned int v8; // ebx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // r8
	void(__fastcall * v13)(_QWORD, _QWORD, _QWORD); // rax
	__int64 v14; // rcx
	int v15; // ebx
	unsigned int v16; // eax
	__int64 v17; // r8
	void(__fastcall * v18)(_QWORD, __int64, _QWORD); // r9
	__int64 v19; // rcx
	__int64 v20; // rcx

	v3 = a1[2];
	v5 = *(_DWORD*)(v3 + 308);
	if (a2 <= v5)
	{
		if (a2 < 2 && v5 >= 2)
		{
			v14 = a1[3];
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 72i64))(v14);
			v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1[2] + 24i64) + 344i64))(*(_QWORD*)(a1[2] + 24i64));
			v16 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1[2] + 24i64) + 360i64))(*(_QWORD*)(a1[2] + 24i64));
			if (!v15)
			{
				if (v16)
				{
					v17 = *(_QWORD*)(a1[2] + 16i64);
					v18 = *(void(__fastcall**)(_QWORD, __int64, _QWORD))(v17 + 5224);
					if (v18)
						v18(v16, 1i64, *(_QWORD*)(v17 + 5232));
				}
			}
		}
		if (a2 < 1 && v5 >= 1)
		{
			v19 = a1[3];
			if (v19)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
				a1[3] = 0i64;
			}
			v20 = a1[4];
			if (v20)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
				a1[4] = 0i64;
			}
		}
	}
	else
	{
		v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 24) + 344i64))(*(_QWORD*)(v3 + 24));
		v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1[2] + 24i64) + 360i64))(*(_QWORD*)(a1[2] + 24i64));
		v8 = v7;
		if (v6)
		{
			if (v5 >= 1 || a2 < 1)
			{
			LABEL_10:
				v11 = a1[3];
				if (v11 && v5 < 2 && a2 >= 2)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 64i64))(v11);
				return;
			}
			if (!v7)
				v8 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1[2] + 16i64) + 16i64) + 2816i64);
			if ((*(int(__fastcall**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
				qword_140C65848,
				a1 + 4,
				0i64) >= 0
				&& (*(int(__fastcall**)(_QWORD, _QWORD*, _QWORD, _QWORD))(*(_QWORD*)a1[4] + 32i64))(a1[4], a1 + 3, v6, v8) >= 0)
			{
				v9 = *(_QWORD*)a1[4];
				v10 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[2] + 56i64))(a1[2]);
				(*(void(__fastcall**)(_QWORD, __int64))(v9 + 88))(a1[4], v10);
				goto LABEL_10;
			}
		}
		else if (v5 < 2 && a2 >= 2)
		{
			if (v7)
			{
				v12 = *(_QWORD*)(a1[2] + 16i64);
				v13 = *(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(v12 + 5224);
				if (v13)
					v13(v8, 0i64, *(_QWORD*)(v12 + 5232));
			}
		}
	}
}
// 140C65848: using guessed type __int64 qword_140C65848;

