//----- (0000000140293B20) ----------------------------------------------------
int __fastcall sub_140293B20(__int64* a1, int a2, unsigned int a3)
{
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // r14
	__int64 v7; // rbp
	int v8; // ebx
	int v9; // ecx
	__int64 v10; // rax
	_DWORD* v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rsi
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rcx
	int v17; // ebx
	__int64 v18; // rax
	__int64 v19; // rdi
	__int64 v20; // rcx
	__int64 v21; // rdi
	__int64 v22; // rcx
	bool v23; // zf
	int v24; // ebx
	__int64 v26[5]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v27; // [rsp+70h] [rbp+8h] BYREF
	__int64 v28; // [rsp+88h] [rbp+20h] BYREF

	v3 = *a1;
	v4 = a2;
	v5 = a3;
	LODWORD(v26[0]) = -1;
	(*(void(__fastcall**)(__int64*, __int64*))(v3 + 32))(a1, v26);
	v7 = v4;
	v8 = 1 << v5;
	v9 = *((_DWORD*)a1 + v4 + 64);
	LODWORD(v10) = v9 | *((_DWORD*)a1 + v4 + 70);
	if (((unsigned int)v10 & (1 << v5)) != 0)
	{
		if ((v9 & v8) != 0)
		{
			v11 = (_DWORD*)(a1[2 * v4 + 20] + 24 * v5);
			LODWORD(v10) = *v11;
			if (*v11 > 1u)
			{
				LODWORD(v10) = v10 - 1;
				*v11 = v10;
				return v10;
			}
		}
		v12 = a1[15];
		if (!v12)
			return v10;
		if (a1[18])
		{
			if ((unsigned int)v5 >= *((_DWORD*)a1 + 11))
				return v10;
			sub_14003D8F0(v26, a1[2] + 24);
			v13 = 2i64 * (unsigned int)(v4 + 6 * v5);
			v14 = *(_QWORD*)(a1[18] + 8 * v13);
			if (v14)
			{
				if ((*(int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v14 + 160i64))(v14, 0i64) >= 0)
				{
					v17 = ~v8;
					if ((*(_BYTE*)(a1[18] + 8 * v13 + 8) & 2) != 0)
					{
						*((_DWORD*)a1 + v7 + 70) &= v17;
						v18 = a1[18];
						v28 = 0i64;
						v27 = 0i64;
						if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v18 + 8 * v13) + 144i64))(
							*(_QWORD*)(v18 + 8 * v13),
							0i64,
							&v28) < 0
							|| (*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64*))(*(_QWORD*)a1[15] + 144i64))(
								a1[15],
								(unsigned int)dword_140AE7B00[v7],
								(unsigned int)v5,
								&v27) < 0
							|| (*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1[2] + 6608) + 240i64))(
								*(_QWORD*)(a1[2] + 6608),
								v28,
								0i64,
								v27,
								0i64) < 0
							&& (int)D3DXLoadSurfaceFromSurface(v27, 0i64, 0i64, v28, 0i64, 0i64, 1, 0) < 0)
						{
							v19 = a1[18];
							v20 = *(_QWORD*)(v19 + 8 * v13);
							if (v20)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
								*(_QWORD*)(v19 + 8 * v13) = 0i64;
							}
							if (v27)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
							if (v28)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
								LODWORD(v10) = sub_14003D880(v26);
								return v10;
							}
							goto LABEL_30;
						}
						if (v27)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
						if (v28)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
					}
					else
					{
						*((_DWORD*)a1 + v7 + 64) &= v17;
						*(_DWORD*)(a1[2 * v7 + 20] + 24 * v5) = 0;
					}
					v21 = a1[18];
					v22 = *(_QWORD*)(v21 + 8 * v13);
					if (v22)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22);
						*(_QWORD*)(v21 + 8 * v13) = 0i64;
					}
					goto LABEL_30;
				}
				v15 = a1[18];
				v16 = *(_QWORD*)(v15 + 8 * v13);
				if (v16)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
					*(_QWORD*)(v15 + 8 * v13) = 0i64;
					LODWORD(v10) = sub_14003D880(v26);
					return v10;
				}
			}
		LABEL_30:
			LODWORD(v10) = sub_14003D880(v26);
			return v10;
		}
		LODWORD(v10) = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v12 + 160i64))(
			v12,
			(unsigned int)dword_140AE7B00[v4],
			(unsigned int)v5);
		if ((int)v10 >= 0)
		{
			LODWORD(v10) = *((_DWORD*)a1 + v4 + 64);
			v23 = ((unsigned int)v10 & v8) == 0;
			v24 = ~v8;
			if (v23)
			{
				*((_DWORD*)a1 + v4 + 70) &= v24;
			}
			else
			{
				*((_DWORD*)a1 + v4 + 64) = v10 & v24;
				v10 = a1[2 * v4 + 20];
				*(_DWORD*)(v10 + 24 * v5) = 0;
			}
		}
	}
	return v10;
}
// 140AE7B00: using guessed type int dword_140AE7B00[6];
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140293B20: using guessed type __int64 var_28[5];

