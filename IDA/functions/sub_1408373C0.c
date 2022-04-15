#include "../winhttp.h"

//----- (00000001408373C0) ----------------------------------------------------
void __fastcall sub_1408373C0(__int64 a1, __int64 a2, float a3, unsigned __int64 a4)
{
	__int64* v4; // rdi
	__int64* v5; // rsi
	unsigned int v6; // r12d
	char v8; // r9
	__int64 v9; // rax
	__int64 v10; // r8
	int v11; // r10d
	__int64 v12; // r14
	unsigned __int64 v13; // rdx
	int v14; // ecx
	float v15; // xmm6_4
	float v16; // xmm0_4
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 j; // rbx
	__int64 v20; // r15
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rbx
	float i; // xmm6_4
	int v25; // r8d
	__int64 v26; // r15
	__int64 v27; // rax
	unsigned int v28; // eax
	__int64 v29; // rbx
	__int64* v30; // rcx
	char v31; // [rsp+48h] [rbp-29h]
	float v32; // [rsp+4Ch] [rbp-25h] BYREF
	_DWORD v33[4]; // [rsp+50h] [rbp-21h] BYREF
	__int64 v34; // [rsp+60h] [rbp-11h] BYREF
	__int64 v35; // [rsp+68h] [rbp-9h]
	__int128 v36; // [rsp+70h] [rbp-1h]

	v4 = *(__int64**)(a1 + 56);
	v5 = *(__int64**)(a1 + 64);
	v6 = *(_DWORD*)a1;
	v8 = 0;
	v9 = 0i64;
	v10 = a1;
	v34 = 0i64;
	v35 = 0i64;
	LODWORD(v36) = 0;
	v31 = 0;
	if (v4 == v5)
		goto LABEL_60;
	v11 = 523241489;
	do
	{
		v12 = *v4;
		if (*v4 != v9)
		{
			v13 = *(_QWORD*)(v12 + 24);
			v9 = *v4;
			if (a4 == v13 || !a4 || !v13)
			{
				v14 = *(_DWORD*)(v12 + 32);
				v15 = 0.0;
				v32 = 0.0;
				if ((unsigned int)(v14 - 1) <= 1)
				{
					if (a4 && v14 == 1)
						goto LABEL_56;
					v26 = *(_QWORD*)v12;
					v27 = *(_QWORD*)(*(_QWORD*)v12 + 56i64);
					if (!v27 || !*(_WORD*)(v27 + 72) && !*(_WORD*)(v27 + 74))
					{
						if (v14 != 1)
							goto LABEL_56;
						v28 = *(_DWORD*)(v12 + 8);
						if (v28 > 0x1C || !_bittest(&v11, v28))
							goto LABEL_56;
					}
					v29 = *(_QWORD*)(v12 + 40);
					if (v29 != *(_QWORD*)(v12 + 48))
					{
						do
						{
							if (*(_DWORD*)(v29 + 4) == v6)
							{
								v15 = v15 + sub_140835CA0((_DWORD*)(v29 + 8), a3, 0, v33);
								v32 = v15;
							}
							v29 += 24i64;
						} while (v29 != *(_QWORD*)(v12 + 48));
						v10 = a1;
						v8 = v31;
					}
					v30 = 0i64;
					if (!a4 && *(_DWORD*)(v12 + 32) != 1)
					{
						if (!v8)
						{
							sub_1408367F0(v10, (__int64)&v34);
							v31 = 1;
							v15 = v32;
						}
						v30 = &v34;
					}
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, float, unsigned __int64, __int64*))(*(_QWORD*)v26 + 472i64))(
						v26,
						v12,
						*(unsigned int*)(v12 + 8),
						v6,
						COERCE_FLOAT(LODWORD(v15)),
						a4,
						v30);
					goto LABEL_55;
				}
				if (!v14)
				{
					if (a4 == v13)
						goto LABEL_12;
					if (!a4)
					{
						if (sub_140834F40((__int64*)(v10 + 24), v13))
						{
						LABEL_55:
							v8 = v31;
							v10 = a1;
							v11 = 523241489;
							goto LABEL_56;
						}
					LABEL_12:
						v16 = sub_140835CA0((_DWORD*)(*(_QWORD*)(v12 + 40) + 8i64), a3, 0, v33);
						v17 = *(_QWORD*)v12;
						v18 = *(unsigned __int16*)(v12 + 8);
						v32 = v16;
						(*(void(__fastcall**)(__int64, __int64, float*, __int64))(*(_QWORD*)v17 + 8i64))(v17, v18, &v32, 4i64);
						goto LABEL_55;
					}
				LABEL_56:
					v9 = v12;
					goto LABEL_57;
				}
				if (v14 != 4)
				{
					v20 = *(_QWORD*)v12;
					v21 = *(_QWORD*)(*(_QWORD*)v12 + 64i64);
					if (!v21)
						goto LABEL_56;
					v22 = *(_QWORD*)(v21 + 56);
					if (!v22 || !*(_WORD*)(v22 + 72))
						goto LABEL_56;
					if (sub_1408653E0(*(_QWORD*)v12))
					{
						v23 = *(_QWORD*)(v12 + 40);
						for (i = v32; v23 != *(_QWORD*)(v12 + 48); v23 += 24i64)
						{
							if (*(_DWORD*)(v23 + 4) == v6)
							{
								i = i + sub_140835CA0((_DWORD*)(v23 + 8), a3, 0, v33);
								v32 = i;
							}
						}
						if (!a4 && !v31)
						{
							sub_1408367F0(a1, (__int64)&v34);
							v31 = 1;
							i = v32;
						}
						v25 = *(_DWORD*)(v12 + 8);
						if (v25 == 64)
							sub_1408654A0(v20, a4, a3);
						else
							sub_140865AF0(v20, v12, v25, v6, i, a4, (__int64)&v34);
					}
					goto LABEL_55;
				}
				if (a4 != v13)
				{
					if (a4)
						goto LABEL_56;
					if (sub_140834F40((__int64*)(v10 + 24), v13))
						goto LABEL_55;
				}
				for (j = *(_QWORD*)(v12 + 40); j != *(_QWORD*)(v12 + 48); j += 24i64)
				{
					if (*(_DWORD*)(j + 4) == v6)
					{
						v15 = v15 + sub_140835CA0((_DWORD*)(j + 8), a3, 0, v33);
						v32 = v15;
					}
				}
				sub_1408600D0(*(_QWORD*)v12, *(_WORD*)(v12 + 8), (int*)&v32);
				goto LABEL_55;
			}
		}
	LABEL_57:
		++v4;
	} while (v4 != v5);
	if (v34)
	{
		v35 = v34;
		sub_140881720(dword_140C10F20, v34);
		v34 = 0i64;
		v35 = 0i64;
		LODWORD(v36) = 0;
	}
LABEL_60:
	sub_1408372F0(qword_140C61BB0, v6, a2, a3, a4);
}
// 140837654: conditional instruction was optimized away because rax.8!=0
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;
// 1408373C0: using guessed type _DWORD var_78[4];

