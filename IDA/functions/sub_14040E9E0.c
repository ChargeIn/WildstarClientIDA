#include "../winhttp.h"

//----- (000000014040E9E0) ----------------------------------------------------
__int64 __fastcall sub_14040E9E0(__int64 a1, _DWORD* a2, _DWORD* a3, int a4, int a5, int a6, _DWORD* a7)
{
	unsigned int v7; // r12d
	unsigned int v9; // eax
	_QWORD* v10; // r14
	unsigned int v11; // ebx
	__int64 v12; // rdx
	__int64 v13; // r13
	int* v14; // rax
	int* v15; // rsi
	unsigned int v16; // r15d
	__int64 v17; // rdi
	_DWORD* v18; // rdx
	unsigned __int64 v19; // r8
	int* v20; // rax
	int* v21; // rbx
	__int64 v23; // [rsp+20h] [rbp-48h] BYREF
	__int64 v24; // [rsp+28h] [rbp-40h]
	unsigned int v27; // [rsp+88h] [rbp+20h]
	unsigned int v28; // [rsp+90h] [rbp+28h]

	v7 = 0;
	if (!a4)
		a4 = 127;
	*a2 = 197;
	*a3 = 0;
	v24 = 0i64;
	v23 = 0i64;
	sub_14040E8B0(a1, &v23, a4);
	if (v24)
	{
		v9 = sub_1401AE6F0(0, (int)v24 - 1);
		v10 = *(_QWORD**)(v23 + 16i64 * v9 + 8);
		*a3 = *(_DWORD*)(v23 + 16i64 * v9);
		v11 = 0;
		v27 = 0;
		do
		{
			if (!v10)
				break;
			v12 = v10[1];
			if (!v12)
				break;
			v13 = 0i64;
			v14 = sub_14018DBC0(0i64, v12, 4i64);
			v15 = 0i64;
			v16 = 0;
			if (v14)
				v15 = v14;
			v28 = *((_DWORD*)v10 + 2);
			if (v28)
			{
				v17 = 0i64;
				do
				{
					v18 = a7;
					v19 = 0i64;
					while (*v18 != 1 || *(_DWORD*)(v17 + *v10) != v18[1])
					{
						v19 = (unsigned int)(v19 + 1);
						v18 += 2;
						if ((unsigned int)v19 >= 5)
						{
							v20 = sub_14018DB00((__int64)v15, v13 + 1, 4i64);
							v19 = 4 * v13;
							v20[v13] = v16;
							v21 = v20;
							if (v15 != v20)
							{
								sub_1407DB590(v20, v15, v19);
								if (v15)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 4);
								v15 = v21;
							}
							++v13;
							break;
						}
					}
					++v16;
					v17 += 4i64;
				} while (v16 < v28);
				if (v13)
				{
					v7 = 1;
					*a2 = *(_DWORD*)(*v10
						+ 4i64
						* (unsigned int)v15[(int)((double)(*(int(__fastcall**)(__int64*, _DWORD*, unsigned __int64))(qword_140C77890 + 24))(
							&qword_140C77890,
							v18,
							v19)
							* 2.328306436538696e-10
							* ((double)((int)v13 - 1) + 1.0))]);
				LABEL_29:
					if (v15)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 4);
					break;
				}
				v11 = v27;
			}
			sub_14040E8B0(a1, &v23, 64);
			if (!v24)
				goto LABEL_29;
			v10 = *(_QWORD**)(v23 + 8);
			if (v15)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 4);
			v27 = ++v11;
		} while (v11 < 2);
	}
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	return v7;
}
// 14040EA2A: conditional instruction was optimized away because r9d.4!=0
// 14040EBC0: variable 'v18' is possibly undefined
// 14040EBC0: variable 'v19' is possibly undefined
// 140C77890: using guessed type __int64 qword_140C77890;

