//----- (0000000140288B50) ----------------------------------------------------
__int64 __fastcall sub_140288B50(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	_DWORD* v4; // rax
	_DWORD* v5; // r9
	unsigned int v6; // edx
	unsigned int v7; // r8d
	_DWORD* v8; // r10
	unsigned int v9; // eax
	unsigned int v10; // ecx
	unsigned __int8 v11; // dl
	unsigned int v12; // ecx
	unsigned int v13; // eax
	unsigned int v14; // ecx
	unsigned __int8 v15; // dl
	unsigned int v16; // ecx
	unsigned int v17; // ecx
	unsigned int v18; // eax
	unsigned int v19; // ecx
	unsigned __int8 v20; // dl
	unsigned int v21; // ecx
	unsigned int v22; // eax
	__int64 v23; // rax
	unsigned __int64 v24; // kr00_8
	int* v25; // rax
	unsigned __int64 v26; // r8
	int v27; // eax
	__int64 v28; // rcx
	__int64 v29; // rcx

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2);
		if (!(_DWORD)result)
			return result;
		v4 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 40i64))(*(_QWORD*)(a1 + 56));
		v5 = v4;
		*(_DWORD*)(a1 + 64) = *v4;
		v6 = v4[1];
		if (v6 < v4[2])
			v6 = v4[2];
		if (v6 < v4[3])
			v6 = v4[3];
		*(_DWORD*)(a1 + 68) = v6;
		v7 = v4[4];
		*(_DWORD*)(a1 + 76) = v7;
		v8 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v4[5]);
		if (*v8 > 1u)
		{
			v9 = v4[1] / *v8;
			v10 = v9;
			if (v9)
			{
				v11 = 0;
				if (!(_WORD)v9)
				{
					v11 = 16;
					v10 = HIWORD(v9);
				}
				if (!(_BYTE)v10)
				{
					v11 += 8;
					v10 >>= 8;
				}
				if ((v10 & 0xF) == 0)
				{
					v11 += 4;
					v10 >>= 4;
				}
				if ((v10 & 3) == 0)
				{
					v11 += 2;
					v10 >>= 2;
				}
				if ((v10 & 1) == 0)
					++v11;
			}
			else
			{
				v11 = -1;
			}
			if ((unsigned int)v11 + 1 < v7)
				v7 = v11 + 1;
			*(_DWORD*)(a1 + 76) = v7;
		}
		v12 = v8[3];
		if (v12 > 1)
		{
			v13 = v5[2] / v12;
			v14 = v13;
			if (v13)
			{
				v15 = 0;
				if (!(_WORD)v13)
				{
					v15 = 16;
					v14 = HIWORD(v13);
				}
				if (!(_BYTE)v14)
				{
					v15 += 8;
					v14 >>= 8;
				}
				if ((v14 & 0xF) == 0)
				{
					v15 += 4;
					v14 >>= 4;
				}
				if ((v14 & 3) == 0)
				{
					v15 += 2;
					v14 >>= 2;
				}
				if ((v14 & 1) == 0)
					++v15;
			}
			else
			{
				v15 = -1;
			}
			v16 = *(_DWORD*)(a1 + 76);
			if ((unsigned int)v15 + 1 < v16)
				v16 = v15 + 1;
			*(_DWORD*)(a1 + 76) = v16;
		}
		v17 = v8[6];
		if (v17 > 1)
		{
			v18 = v5[3] / v17;
			v19 = v18;
			if (v18)
			{
				v20 = 0;
				if (!(_WORD)v18)
				{
					v20 = 16;
					v19 = HIWORD(v18);
				}
				if (!(_BYTE)v19)
				{
					v20 += 8;
					v19 >>= 8;
				}
				if ((v19 & 0xF) == 0)
				{
					v20 += 4;
					v19 >>= 4;
				}
				if ((v19 & 3) == 0)
				{
					v20 += 2;
					v19 >>= 2;
				}
				if ((v19 & 1) == 0)
					++v20;
			}
			else
			{
				v20 = -1;
			}
			v21 = *(_DWORD*)(a1 + 76);
			if ((unsigned int)v20 + 1 < v21)
				v21 = v20 + 1;
			*(_DWORD*)(a1 + 76) = v21;
		}
		v22 = *(_DWORD*)(a1 + 76);
		if (v22)
		{
			v24 = v22;
			v23 = 4i64 * v22;
			if (!is_mul_ok(v24, 4ui64))
				v23 = -1i64;
			v25 = sub_14018B280(v23, 0);
		}
		else
		{
			v25 = 0i64;
		}
		v26 = 4i64 * *(unsigned int*)(a1 + 76);
		*(_QWORD*)(a1 + 80) = v25;
		sub_1407E4830(v25, 0i64, v26);
		v27 = *(_DWORD*)(a1 + 76);
		v28 = *(_QWORD*)(a1 + 56);
		*(_DWORD*)(a1 + 88) = v27;
		*(_DWORD*)(a1 + 92) = v27;
		*(_DWORD*)(a1 + 72) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 32i64))(v28);
		v29 = *(_QWORD*)(a1 + 56);
		if (v29)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
			*(_QWORD*)(a1 + 56) = 0i64;
		}
	}
	return 1i64;
}

