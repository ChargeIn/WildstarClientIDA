#include "../winhttp.h"

//----- (000000014028DD70) ----------------------------------------------------
int __fastcall sub_14028DD70(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v3; // rbp
	int v5; // edi
	__int64 v6; // rax
	_DWORD* v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rax
	int v13; // edi
	__int64 v14; // rbx
	__int64 v15; // rcx
	bool v16; // zf
	int v17; // edi
	int v18; // edi
	int v20[4]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v21; // [rsp+80h] [rbp+8h] BYREF
	__int64 v22; // [rsp+90h] [rbp+18h] BYREF
	__int64 v23; // [rsp+98h] [rbp+20h] BYREF

	v2 = *a1;
	v3 = a2;
	v20[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 32))(a1, v20);
	v5 = 1 << v3;
	LODWORD(v6) = *((_DWORD*)a1 + 45) | *((_DWORD*)a1 + 44);
	if (((unsigned int)v6 & (1 << v3)) != 0)
	{
		if (((_DWORD)a1[22] & v5) != 0)
		{
			v7 = (_DWORD*)(a1[20] + 24 * v3);
			LODWORD(v6) = *v7;
			if (*v7 > 1u)
			{
				LODWORD(v6) = v6 - 1;
				*v7 = v6;
				return v6;
			}
		}
		v8 = a1[15];
		if (!v8)
			return v6;
		if (a1[18])
		{
			if ((unsigned int)v3 >= *((_DWORD*)a1 + 11))
				return v6;
			sub_14003D8F0(&v23, a1[2] + 24);
			v9 = *(_QWORD*)(a1[18] + 16 * v3);
			if (v9)
			{
				if ((*(int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 160i64))(v9, 0i64) >= 0)
				{
					v12 = a1[18];
					v13 = ~v5;
					if ((*(_BYTE*)(v12 + 16 * v3 + 8) & 2) != 0)
					{
						*((_DWORD*)a1 + 45) &= v13;
						v22 = 0i64;
						v21 = 0i64;
						if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v12 + 16 * v3) + 144i64))(
							*(_QWORD*)(v12 + 16 * v3),
							0i64,
							&v22) < 0
							|| (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a1[15] + 144i64))(
								a1[15],
								(unsigned int)v3,
								&v21) < 0
							|| (*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1[2] + 6608) + 240i64))(
								*(_QWORD*)(a1[2] + 6608),
								v22,
								0i64,
								v21,
								0i64) < 0
							&& (int)D3DXLoadSurfaceFromSurface(v21, 0i64, 0i64, v22, 0i64, 0i64, 1, 0) < 0)
						{
							v14 = a1[18];
							v15 = *(_QWORD*)(v14 + 16 * v3);
							if (v15)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
								*(_QWORD*)(v14 + 16 * v3) = 0i64;
							}
							if (v21)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
							if (v22)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22);
							goto LABEL_30;
						}
						if (v21)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
						if (v22)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22);
					}
					else
					{
						*((_DWORD*)a1 + 44) &= v13;
						*(_DWORD*)(a1[20] + 24 * v3) = 0;
					}
					v10 = a1[18];
					v11 = *(_QWORD*)(v10 + 16 * v3);
					if (v11)
						goto LABEL_29;
				}
				else
				{
					v10 = a1[18];
					v11 = *(_QWORD*)(v10 + 16 * v3);
					if (v11)
					{
					LABEL_29:
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
						*(_QWORD*)(v10 + 16 * v3) = 0i64;
					}
				}
			}
		LABEL_30:
			LODWORD(v6) = sub_14003D880(&v23);
			return v6;
		}
		LODWORD(v6) = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 160i64))(v8, (unsigned int)v3);
		if ((int)v6 >= 0)
		{
			LODWORD(v6) = *((_DWORD*)a1 + 44);
			v16 = ((unsigned int)v6 & v5) == 0;
			v17 = ~v5;
			if (v16)
			{
				*((_DWORD*)a1 + 45) &= v17;
			}
			else
			{
				v18 = v6 & v17;
				v6 = a1[20];
				*((_DWORD*)a1 + 44) = v18;
				*(_DWORD*)(v6 + 24 * v3) = 0;
			}
		}
	}
	return v6;
}
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 14028DD70: using guessed type int var_38[4];

