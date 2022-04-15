#include "../winhttp.h"

//----- (00000001407C2170) ----------------------------------------------------
__int64 __fastcall sub_1407C2170(_QWORD* a1, int a2, unsigned int a3)
{
	_QWORD* v3; // rdi
	__int64 v5; // rbx
	__int64 v6; // r13
	__int64 v7; // rsi
	__int64* v8; // rbx
	__int64 v9; // rdi
	int* v10; // rax
	int* v11; // r14
	__int64 i; // r15
	__int64 v13; // rdi
	int* v14; // rax
	int* v15; // r14
	__int64 v16; // rax
	__int64 result; // rax
	__int64 v18; // [rsp+30h] [rbp-48h]
	unsigned int v20; // [rsp+88h] [rbp+10h] BYREF
	__int64 v21; // [rsp+98h] [rbp+20h]

	v20 = a2;
	v3 = a1;
	v5 = 1 << a2;
	if ((v5 & a1[7]) == 0)
	{
		sub_1407C2470(
			&a1[a2],
			(__int64)off_140C5F3E0,
			(__int64(__fastcall*)(__int64, __int64, __int64))off_140C5F3E0[a2],
			(__int64)&v20,
			a1[a2 + 8]);
		v3[7] |= v5;
		a2 = v20;
	}
	v21 = 0i64;
	v18 = 0i64;
	v6 = v3[a2];
	if (v6)
	{
		do
		{
			v7 = *(_QWORD*)(v6 + 40);
			if ((a3 & *(_DWORD*)(v6 + 8)) != 0)
			{
				v8 = v3 + 15;
				sub_1400523E0(v3 + 15);
				v9 = v3[16];
				v10 = sub_14018DB00(*v8, v9 + 1, 8i64);
				v11 = v10;
				*(_QWORD*)&v10[2 * v9] = v6;
				if ((int*)*v8 != v10)
				{
					sub_1407DB590(v10, (int*)*v8, 8 * v8[1]);
					if (*v8)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16) + 8i64))(*v8 - 16);
					*v8 = (__int64)v11;
				}
				v8[1] = v9 + 1;
				for (i = *(_QWORD*)(v6 + 24); v7; v7 = *(_QWORD*)(v7 + 40))
				{
					if ((a3 & *(_DWORD*)(v7 + 8)) != 0)
					{
						if (i != *(_QWORD*)(v7 + 24)
							|| !(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)i + 16i64))(
								i,
								v20,
								a3,
								v6,
								v7))
						{
							break;
						}
						v13 = v8[1];
						v14 = sub_14018DB00(*v8, v13 + 1, 8i64);
						v15 = v14;
						*(_QWORD*)&v14[2 * v13] = v7;
						if ((int*)*v8 != v14)
						{
							sub_1407DB590(v14, (int*)*v8, 8 * v8[1]);
							if (*v8)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16) + 8i64))(*v8 - 16);
							*v8 = (__int64)v15;
						}
						v8[1] = v13 + 1;
					}
				}
				v3 = a1;
				v16 = 0i64;
				if (v18 == i)
					v16 = v21;
				result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int64))(*(_QWORD*)i + 24i64))(
					i,
					v20,
					a3,
					*v8,
					a1[16],
					v16);
				if ((int)result < 0)
					return result;
				v21 = v6;
				v18 = i;
			}
			v6 = v7;
		} while (v7);
	}
	return 0i64;
}
// 140C5F3E0: using guessed type __int64 (__fastcall *off_140C5F3E0[10])();

