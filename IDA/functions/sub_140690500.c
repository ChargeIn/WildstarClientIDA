#include "../winhttp.h"

//----- (0000000140690500) ----------------------------------------------------
__int64 __fastcall sub_140690500(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebp
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	_QWORD* v9; // rsi
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v16; // rax
	__int64 v17; // rdx
	_QWORD* v18; // rax
	__int64 v19; // r8
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-28h] BYREF
	int v22; // [rsp+28h] [rbp-20h]
	_QWORD* v23; // [rsp+30h] [rbp-18h]
	int v24; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v23 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v21 = off_140B569F0;
	v24 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v22 = v5;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(v1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v7 + 8) + 8i64),
			0i64),
			(v9 = (_QWORD*)v8) != 0i64)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 40i64))(v8)
		&& (*(unsigned int(__fastcall**)(_QWORD*))(*v9 + 104i64))(v9)
		&& (v10 = (*(__int64(__fastcall**)(_QWORD*))(*v9 + 40i64))(v9),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 104i64))(v10)))
	{
		v11 = v9[20];
		v12 = *(_QWORD*)(v11 + 16);
		if (v12 != v11)
		{
			do
			{
				if ((unsigned int)sub_140649870(v1, *(_DWORD*)(v12 + 32)))
				{
					sub_1400FB470((__int64)&v21);
					v1 = v23;
					v23[2] -= 16i64;
				}
				v13 = *(_QWORD*)(v12 + 24);
				if (v13)
				{
					v12 = *(_QWORD*)(v12 + 24);
					for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
						v12 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v12 + 8); v12 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v12 = j;
					if (*(_QWORD*)(v12 + 24) != j)
						v12 = j;
				}
			} while (v12 != v9[20]);
			v5 = v22;
		}
		v16 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v17 = v1[2];
		*(_QWORD*)v17 = *v16;
		*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	}
	else
	{
		v18 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v19 = v1[2];
		*(_QWORD*)v19 = *v18;
		v17 = *((unsigned int*)v18 + 2);
		*(_DWORD*)(v19 + 8) = v17;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v17, v5);
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

