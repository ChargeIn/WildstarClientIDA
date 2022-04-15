#include "../winhttp.h"

//----- (0000000140717DF0) ----------------------------------------------------
__int64 __fastcall sub_140717DF0(__int64 a1, int a2)
{
	__int64 v4; // rbp
	int v6; // esi
	bool v7; // zf
	_DWORD* v8; // rcx
	int v9; // ebx
	int v10; // eax
	void(__fastcall * **v11)(_QWORD); // rax
	__int64 v12; // rax
	__int64 v13; // rbx
	_QWORD* v14; // rax
	__int64 v15; // rsi
	_DWORD* v16; // rcx
	int v17; // ebx
	int v18; // eax

	v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 64));
	if (!v4)
		return 2147500037i64;
	v6 = a2 - *(_DWORD*)(a1 + 80);
	v7 = *(_QWORD*)(a1 + 96) == 0i64;
	*(_DWORD*)(a1 + 80) = a2;
	if (v7)
	{
		if (a2)
		{
			v8 = *(_DWORD**)(a1 + 56);
			v9 = v8[85];
			v10 = (*(__int64 (**)(void))(*(_QWORD*)v8 + 8i64))();
			v11 = (void(__fastcall***)(_QWORD))sub_1404693C0(v4, v10, v9);
			*(_QWORD*)(a1 + 96) = v11;
			if (v11)
				(**v11)(v11);
		}
	}
	v12 = *(_QWORD*)(a1 + 96);
	if (v12 && v6)
	{
		*(_DWORD*)(v12 + 28) += v6;
		v13 = *(_QWORD*)(a1 + 96);
		if (*(int*)(v13 + 28) <= 0)
		{
			v15 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 64));
			if (v15)
			{
				v16 = *(_DWORD**)(a1 + 56);
				v17 = v16[85];
				v18 = (*(__int64 (**)(void))(*(_QWORD*)v16 + 8i64))();
				sub_1404694A0(v15, v18, v17);
			}
			sub_140717FA0(a1);
		}
		else
		{
			v14 = sub_1405BBBB0();
			sub_1405BC0D0((__int64)v14, *(_DWORD*)(a1 + 64), v13);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

