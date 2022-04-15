//----- (00000001401C26B0) ----------------------------------------------------
__int64 __fastcall sub_1401C26B0(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	int* v4; // rbp
	__int64 v5; // r15
	unsigned __int64 v6; // r13
	int* v7; // rsi
	unsigned int v8; // r14d
	unsigned __int64 v9; // r12
	__int64 v10; // rcx
	_QWORD* v11; // rbx
	int* v12; // rax
	unsigned __int64 v13; // r15
	int* v14; // r14
	int v15; // ebx
	int* v16; // rax
	int* v17; // r14
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // r10
	int v21; // eax
	int v22; // [rsp+80h] [rbp+8h]
	__int64 v23; // [rsp+88h] [rbp+10h]
	__int64 v24; // [rsp+90h] [rbp+18h] BYREF
	__int64 v25; // [rsp+98h] [rbp+20h]

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 144i64))(*(_QWORD*)(a1 + 8));
	if ((int)result >= 0)
	{
		v3 = 0;
		v4 = 0i64;
		v5 = 0i64;
		v6 = 0i64;
		v7 = 0i64;
		v8 = 0;
		v22 = 0;
		v9 = 0i64;
		if (*(_QWORD*)(a1 + 64))
		{
			v10 = 0i64;
			v23 = 0i64;
			do
			{
				v11 = (_QWORD*)(v10 + *(_QWORD*)(a1 + 56));
				if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 8) + 64i64))(
					*(_QWORD*)(a1 + 8),
					*(unsigned int*)v11,
					&v24) >= 0
					&& v11[3] == v24)
				{
					v25 = v5 + 1;
					v12 = sub_14018DB00((__int64)v4, v5 + 1, 32i64);
					v13 = 8 * v5;
					*(_QWORD*)&v12[v13] = *v11;
					v14 = v12;
					*(_QWORD*)&v12[v13 + 2] = v11[1];
					*(_QWORD*)&v12[v13 + 4] = v11[2];
					*(_QWORD*)&v12[v13 + 6] = v11[3];
					if (v4 != v12)
					{
						sub_1407DB590(v12, v4, v13 * 4);
						if (v4)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
						v4 = v14;
					}
					v5 = v25;
					v15 = v22++;
					v25 = v6 + 1;
					v16 = sub_14018DB00((__int64)v7, v6 + 1, 4i64);
					v16[v6] = v15;
					v17 = v16;
					if (v7 != v16)
					{
						sub_1407DB590(v16, v7, 4 * v6);
						if (v7)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
						v7 = v17;
					}
					v6 = v25;
				}
				++v9;
				v10 = v23 + 32;
				v23 += 32i64;
			} while (v9 < *(_QWORD*)(a1 + 64));
			v8 = v22;
			v3 = 0;
		}
		sub_1401C3280((__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1401C2DC0, (unsigned int*)v7, v6, (__int64)v4);
		v18 = *(_QWORD*)(a1 + 56);
		if (v18)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
		*(_QWORD*)(a1 + 56) = v4;
		*(_QWORD*)(a1 + 64) = v5;
		v19 = *(_QWORD*)(a1 + 72);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
		*(_QWORD*)(a1 + 72) = v7;
		*(_QWORD*)(a1 + 80) = v6;
		v20 = *(_QWORD*)(a1 + 8);
		*(_DWORD*)(a1 + 44) = v8;
		v21 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v20 + 48i64))(
			v20,
			a1 + 48,
			32i64
			* (((((v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8) | (((v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8)) >> 4) | (((v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8) | (((v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8)) >> 4)) >> 2)) >> 1) | (v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8) | (((v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8)) >> 4) | (((v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8) | (((v8 - 1) | ((v8 - 1) >> 16) | (((v8 - 1) | ((v8 - 1) >> 16)) >> 8)) >> 4)) >> 2))
				+ 1));
		if (v21 < 0)
			return (unsigned int)v21;
		v21 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 48),
			0i64,
			*(_QWORD*)(a1 + 56),
			32i64 * v8);
		if (v21 < 0)
			return (unsigned int)v21;
		v21 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 32),
			0i64,
			a1 + 36,
			16i64);
		if (v21 < 0)
			return (unsigned int)v21;
		return v3;
	}
	return result;
}

