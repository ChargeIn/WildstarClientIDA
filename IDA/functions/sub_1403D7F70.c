#include "../winhttp.h"

//----- (00000001403D7F70) ----------------------------------------------------
void __fastcall sub_1403D7F70(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rsi
	unsigned __int64 v3; // r12
	unsigned __int64 v5; // rbx
	__int64 v7; // r15
	__int64 v8; // r14
	__int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // r9
	_QWORD* v12; // rcx
	_QWORD* v13; // rcx

	v2 = *(_QWORD*)(a2 + 8);
	v3 = *(_QWORD*)(a1 + 16);
	v5 = 2 * v2 + 1;
	if (v5 >= v3)
	{
		*(_QWORD*)(a2 + 8) = v2;
	}
	else
	{
		do
		{
			if (v5 + 1 < v3
				&& (*(int(__fastcall**)(unsigned __int64, unsigned __int64, _QWORD))a1)(
					*(_QWORD*)(a1 + 8) + 8i64 + 16 * v5,
					16 * v5 + *(_QWORD*)(a1 + 8) + 24i64,
					*(_QWORD*)(a1 + 24)) >= 0)
			{
				++v5;
			}
			v7 = 16 * v2;
			v8 = 16 * v5;
			if ((*(int(__fastcall**)(unsigned __int64, unsigned __int64, _QWORD))a1)(
				16 * v5 + *(_QWORD*)(a1 + 8) + 8i64,
				16 * v2 + *(_QWORD*)(a1 + 8) + 8i64,
				*(_QWORD*)(a1 + 24)) >= 0)
				break;
			v9 = *(_QWORD*)(a1 + 8);
			v10 = *(_QWORD*)(v9 + 16 * v2);
			v11 = *(_QWORD*)(v9 + v7 + 8);
			v12 = (_QWORD*)(v9 + v7);
			if (v9 + v7)
			{
				*v12 = *(_QWORD*)(v9 + 16 * v5);
				v12[1] = *(_QWORD*)(v9 + v8 + 8);
			}
			v13 = (_QWORD*)(v8 + *(_QWORD*)(a1 + 8));
			if (v13)
			{
				*v13 = v10;
				v13[1] = v11;
			}
			*(_QWORD*)(*(_QWORD*)(v7 + *(_QWORD*)(a1 + 8)) + 8i64) = v2;
			v2 = v5;
			v5 = 2 * v5 + 1;
		} while (v5 < v3);
		*(_QWORD*)(a2 + 8) = v2;
	}
}

