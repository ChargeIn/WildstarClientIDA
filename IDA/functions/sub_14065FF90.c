#include "../winhttp.h"

//----- (000000014065FF90) ----------------------------------------------------
__int64 __fastcall sub_14065FF90(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebx
	int* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rax
	unsigned __int64 v9; // rsi
	unsigned __int64 v10; // rbp
	__int64 v11; // r14
	void(__fastcall * **v12)(_QWORD); // rbx
	_QWORD* v13; // rax
	__int64 v14; // r8
	__int64 v16; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v17; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * *v18)(); // [rsp+30h] [rbp-28h] BYREF
	int v19; // [rsp+38h] [rbp-20h]
	_QWORD* v20; // [rsp+40h] [rbp-18h]
	int v21; // [rsp+48h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v20 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v18 = off_140B569F0;
	v21 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v19 = v5;
	v6 = (int*)sub_1406622C0((__int64)v1, 1);
	if (v6)
	{
		v8 = sub_1403D90D0(qword_140C65898, *v6);
		if (v8)
		{
			if (v8 == *(_QWORD*)(qword_140C65898 + 120))
			{
				v9 = 0i64;
				v17 = 0i64;
				v16 = 0i64;
				sub_1403D6710(qword_140C65898 + 184, &v16);
				v10 = v17;
				v11 = v16;
				if (v17)
				{
					do
					{
						v12 = *(void(__fastcall****)(_QWORD))(v11 + 8 * v9);
						if (v12
							&& ((unsigned int(__fastcall*)(_QWORD))(*v12)[12])(*(_QWORD*)(v11 + 8 * v9))
							&& (*(unsigned int(__fastcall**)(__int64, void(__fastcall**)(_QWORD)))(*(_QWORD*)qword_140C65BC0
								+ 8i64))(
									qword_140C65BC0,
									v12[8])
							&& (unsigned int)sub_140415D60(v1, v12))
						{
							sub_1400FB470((__int64)&v18);
							v1 = v20;
							v20[2] -= 16i64;
						}
						++v9;
					} while (v9 < v10);
					v5 = v19;
				}
				v13 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
				v14 = v1[2];
				*(_QWORD*)v14 = *v13;
				v7 = *((unsigned int*)v13 + 2);
				*(_DWORD*)(v14 + 8) = v7;
				v1[2] += 16i64;
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			}
		}
	}
	sub_1400579E0((__int64)v1, v7, v5);
	return 1i64;
}
// 14066011A: variable 'v7' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BC0: using guessed type __int64 qword_140C65BC0;

