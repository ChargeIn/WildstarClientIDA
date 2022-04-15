#include "../winhttp.h"

//----- (0000000140402F20) ----------------------------------------------------
__int64 __fastcall sub_140402F20(__int64* a1, __int64 a2)
{
	__int128* v2; // r15
	__int64 v3; // rdi
	__int64* v4; // r14
	__int64 v5; // rsi
	unsigned __int64 v6; // rbp
	_QWORD* v7; // rbx
	unsigned __int64 v8; // rax
	int v9; // r12d
	__int64 v10; // r13
	int* v11; // rax
	int* v12; // rbp
	__int64 v13; // rax
	int* v14; // rbx
	int v15; // eax
	__int64 v16; // rsi
	__int64 v17; // r14
	int* v18; // rax
	int* v19; // rsi
	__int64 v20; // r15
	__int64 v21; // rdi
	__int64 v22; // r14
	int* v23; // rax
	int* v24; // rbp
	int* v25; // r14
	__int16 v26; // dx
	int v27; // esi
	int* v28; // r9
	int* v29; // r8
	int v30; // edx
	__int64 v32; // [rsp+70h] [rbp-78h] BYREF
	__int64 v33; // [rsp+78h] [rbp-70h]
	__int128 v34; // [rsp+80h] [rbp-68h] BYREF
	int* v35; // [rsp+90h] [rbp-58h] BYREF
	__int64 v36; // [rsp+98h] [rbp-50h]
	int* v37; // [rsp+A0h] [rbp-48h]
	__int64 v38; // [rsp+A8h] [rbp-40h]

	v2 = (__int128*)(a2 + 32);
	v3 = a2;
	v4 = a1;
	if (!*(_DWORD*)(a2 + 32))
		goto LABEL_10;
	if (!*(_QWORD*)(a2 + 40))
		goto LABEL_10;
	v5 = qword_140C65898;
	v6 = (*(__int64(__fastcall**)(__int64))(qword_140C65898 + 26864))(a2 + 32);
	v7 = *(_QWORD**)(*(_QWORD*)(v5 + 26856) + 8 * (v6 % *(_QWORD*)(v5 + 26848)));
	if (!v7)
		goto LABEL_10;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int128*, _QWORD*))(v5 + 26872))(v2, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			goto LABEL_10;
	}
	if (v7 == (_QWORD*)-32i64 || *(_DWORD*)(v7[4] + 208i64) != 1)
	{
	LABEL_10:
		if (*(_DWORD*)v3 != 34 || *(_DWORD*)(v3 + 20) || sub_1405E2090(qword_140C65898 + 26680, (__int64)v2))
		{
			v8 = sub_140407590(v4, (int*)v3);
			v9 = 0;
			if (v8 >= v4[1]
				|| (v10 = *(_QWORD*)(*v4 + 8 * v8), **(_DWORD**)(v10 + 8) != *(_DWORD*)v3)
				|| *(_QWORD*)(v10 + 16) != *(_QWORD*)(v3 + 8))
			{
				v10 = 0i64;
			}
			v11 = *(int**)(v3 + 72);
			v12 = *(int**)(v3 + 88);
			v33 = 0i64;
			v35 = v11;
			v13 = *(_QWORD*)(v3 + 80);
			v32 = 0i64;
			v36 = v13;
			v14 = 0i64;
			v38 = *(_QWORD*)(v3 + 96);
			v37 = v12;
			v15 = dword_140C45F40;
			v16 = 0i64;
			if (*(_DWORD*)qword_140C63750 < dword_140C45F40)
				v15 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C45F50 + v15)
				|| v10 && (*(_DWORD*)(qword_140C635F0 + 5896) == 1 || (*(_BYTE*)(v10 + 4) & 1) != 0))
			{
				(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64*, _DWORD))(*(_QWORD*)qword_140C65890 + 8i64))(
					qword_140C65890,
					*(_QWORD*)(v3 + 72),
					2i64,
					&v32,
					0);
				if (v33)
				{
					v17 = (unsigned int)v36;
					v18 = sub_14018DBC0(0i64, (unsigned int)v36 + v33, 104i64);
					if (v18)
						v14 = v18;
					if (v17)
					{
						v19 = sub_14018DB00((__int64)v14, (unsigned int)v17, 104i64);
						sub_1407DB590(v19, v12, 104i64 * (unsigned int)v17);
						if (v14 != v19)
						{
							if (v14)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
							v14 = v19;
						}
						v16 = v17;
					}
					if (v33)
					{
						v20 = 0i64;
						v21 = v33;
						do
						{
							v22 = v16;
							v23 = sub_14018DB00((__int64)v14, v16 + 1, 104i64);
							v24 = v23;
							if (v14 != v23)
							{
								sub_1407DB590(v23, v14, 104 * v16);
								if (v14)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
								v14 = v24;
							}
							++v16;
							v25 = &v14[26 * v22];
							v20 += 16i64;
							v25[2] = dword_140C636A8;
							*v25 = 7;
							v26 = *(_WORD*)(v32 + v20 - 16);
							*((_WORD*)v25 + 2) = v26;
							*((_WORD*)v25 + 3) = v26 + *(_WORD*)(v32 + v20 - 8);
							--v21;
						} while (v21);
						v3 = a2;
						v2 = (__int128*)(a2 + 32);
					}
					v4 = a1;
					v37 = v14;
					LODWORD(v36) = v16;
				}
			}
			v27 = 0;
			if (!*(_DWORD*)(v3 + 20))
			{
				v28 = *(int**)(v3 + 72);
				v29 = *(int**)(v3 + 48);
				v34 = *v2;
				v27 = sub_140405AC0((__int64)v4, (struct _FILETIME)&v34, v29, v28);
			}
			if (v10)
			{
				if ((*(_BYTE*)(*(_QWORD*)(v10 + 8) + 52i64) & 0x10) != 0)
				{
					v30 = *(_DWORD*)(v3 + 104);
					if (v30)
					{
						if (sub_1403D90D0(qword_140C65898, v30) && !*(_DWORD*)(v3 + 24))
							v9 = 1;
					}
				}
			}
			sub_1404045C0(
				v4,
				*(_DWORD*)v3,
				*(_QWORD*)(v3 + 8),
				*(_DWORD*)(v3 + 104),
				*(int**)(v3 + 48),
				*(unsigned __int16**)(v3 + 56),
				*(_DWORD*)(v3 + 64),
				&v35,
				*(_DWORD*)(v3 + 20),
				*(_DWORD*)(v3 + 16),
				*(_DWORD*)(v3 + 24),
				v9,
				v27,
				*(_BYTE*)(v3 + 108));
			if (v32)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
			if (v14)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
		}
	}
	return 0i64;
}
// 140C45F40: using guessed type int dword_140C45F40;
// 140C45F50: using guessed type int dword_140C45F50;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65890: using guessed type __int64 qword_140C65890;
// 140C65898: using guessed type __int64 qword_140C65898;

