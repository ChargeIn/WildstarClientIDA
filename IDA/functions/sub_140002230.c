//----- (0000000140002230) ----------------------------------------------------
void __fastcall sub_140002230(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // r13
	__int64 v4; // r15
	int Rects; // eax
	_DWORD* v6; // r14
	int v7; // edi
	int v8; // r11d
	int v9; // r10d
	int v10; // esi
	int v11; // r10d
	int* v12; // r14
	__int64 v13; // r12
	int v14; // r8d
	int v15; // r9d
	int v16; // edx
	int v17; // ecx
	int v18; // edx
	int v19; // edx
	__int64 v20; // rcx
	__int64 v21; // r9
	int v22; // ecx
	unsigned __int64 v23; // [rsp+30h] [rbp-38h] BYREF
	int v24; // [rsp+38h] [rbp-30h]
	int v25; // [rsp+3Ch] [rbp-2Ch]
	int v26; // [rsp+40h] [rbp-28h] BYREF
	int v27; // [rsp+44h] [rbp-24h]
	int v28; // [rsp+48h] [rbp-20h]
	int v29; // [rsp+4Ch] [rbp-1Ch]

	if (*(_QWORD*)(a1 + 96))
	{
		v2 = *(unsigned int*)(a1 + 124);
		v3 = a1 + 40 * (v2 + 8);
		v4 = a1 + ((v2 + 2) << 6);
		Rects = BinkGetRects();
		if (Rects > 0)
		{
			v6 = *(_DWORD**)(a1 + 96);
			v7 = v6[21];
			v8 = v6[20];
			v9 = v6[22];
			v10 = v7 + v6[23];
			v23 = __PAIR64__(v7, v8);
			v11 = v8 + v9;
			v25 = v10;
			v24 = v11;
			if (Rects > 1i64)
			{
				v12 = v6 + 24;
				v13 = Rects - 1i64;
				do
				{
					v14 = *v12;
					v15 = v12[1];
					v16 = v12[3];
					v17 = *v12 + v12[2];
					v12 += 4;
					v18 = v15 + v16;
					if (v11 < v17)
						v11 = v17;
					if (v10 < v18)
						v10 = v18;
					v24 = v11;
					if (v14 < v8)
						v8 = v14;
					v25 = v10;
					if (v15 < v7)
						v7 = v15;
					v23 = __PAIR64__(v7, v8);
					--v13;
				} while (v13);
			}
			if (*(_DWORD*)(a1 + 4))
			{
				v11 = *(_DWORD*)(a1 + 108);
				v10 = *(_DWORD*)(a1 + 112);
				v8 = 0;
				v23 = 0i64;
				v7 = 0;
				*(_DWORD*)(a1 + 4) = 0;
				v24 = v11;
				v25 = v10;
			}
			v19 = *(_DWORD*)(v4 + 12);
			v20 = *(_QWORD*)(a1 + 440);
			v26 = v8 >> 1;
			v28 = v11 >> 1;
			v21 = *(_QWORD*)v4 + (unsigned int)(v8 + v7 * v19);
			v27 = v7 >> 1;
			v29 = v10 >> 1;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, int, unsigned __int64*))(*(_QWORD*)v20 + 96i64))(
				v20,
				0i64,
				6i64,
				v21,
				v19,
				&v23);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, int*))(**(_QWORD**)(a1 + 448) + 96i64))(
				*(_QWORD*)(a1 + 448),
				0i64,
				6i64,
				*(_QWORD*)(v4 + 16) + (unsigned int)(v26 + v27 * *(_DWORD*)(v4 + 28)),
				*(_DWORD*)(v4 + 28),
				&v26);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, int*))(**(_QWORD**)(a1 + 456) + 96i64))(
				*(_QWORD*)(a1 + 456),
				0i64,
				6i64,
				*(_QWORD*)(v4 + 32) + (unsigned int)(v26 + v27 * *(_DWORD*)(v4 + 44)),
				*(_DWORD*)(v4 + 44),
				&v26);
			if (*(_QWORD*)(v3 + 24))
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, unsigned __int64*))(**(_QWORD**)(a1 + 464)
					+ 96i64))(
						*(_QWORD*)(a1 + 464),
						0i64,
						6i64,
						*(_QWORD*)(v4 + 48) + (unsigned int)(v23 + HIDWORD(v23) * *(_DWORD*)(v4 + 60)),
						*(_DWORD*)(v4 + 60),
						&v23);
			v22 = *(_DWORD*)(*(_QWORD*)(a1 + 96) + 12i64);
			*(_DWORD*)(a1 + 64) = 4;
			*(_DWORD*)(a1 + 24) = v22;
		}
	}
}
// 140959C00: using guessed type __int64 BinkGetRects(void);

