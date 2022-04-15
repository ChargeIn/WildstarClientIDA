//----- (0000000140069480) ----------------------------------------------------
__int64 __fastcall sub_140069480(__int64 a1, int a2)
{
	__int64 v2; // rdi
	int v5; // ebp
	int i; // ebx
	int v7; // eax
	int v8; // r9d
	int v9; // ecx
	__int64 v10; // r8
	int v11; // eax
	int v12; // r9d
	_DWORD* v13; // r8
	int v14; // eax
	__int64 v15; // rdx
	int v16; // edx
	__int64 v17; // r8
	int v18; // ecx
	bool v19; // zf
	__int64 v20; // rax
	__int64 v21; // rbx
	char v22; // al
	int v23; // edx
	__int64 v24; // r8
	int v25; // ecx
	__int64 v27; // [rsp+20h] [rbp-18h] BYREF
	int v28; // [rsp+28h] [rbp-10h]
	char v29; // [rsp+2Ch] [rbp-Ch]
	char v30; // [rsp+2Dh] [rbp-Bh]
	char v31; // [rsp+2Eh] [rbp-Ah]

	v2 = *(_QWORD*)(a1 + 48);
	v5 = -1;
	for (i = sub_140069370(a1); *(_DWORD*)(a1 + 16) == 261; i = sub_140069370(a1))
	{
		v7 = sub_14006A030((__int64*)v2);
		v8 = v7;
		if (v7 != -1)
		{
			if (v5 == -1)
			{
				v5 = v7;
			}
			else
			{
				v9 = v5;
				v10 = *(_QWORD*)(*(_QWORD*)v2 + 24i64);
				while (*(_DWORD*)(v10 + 4i64 * v9) >> 14 != 131070)
				{
					v11 = (*(_DWORD*)(v10 + 4i64 * v9) >> 14) - 0x1FFFF;
					if (v9 + v11 + 1 == -1)
						break;
					v9 += v11 + 1;
				}
				v12 = v8 - v9;
				v13 = (_DWORD*)(v10 + 4i64 * v9);
				if ((int)abs32(v12 - 1) > 0x1FFFF)
					sub_140062CF0(*(_QWORD*)(v2 + 24), aControlStructu, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 16i64));
				*v13 &= 0x3FFFu;
				*v13 |= (v12 + 131070) << 14;
			}
		}
		*(_DWORD*)(v2 + 52) = *(_DWORD*)(v2 + 48);
		if (i != -1)
			sub_14006A3C0((__int64*)v2, (int*)(v2 + 56), i);
	}
	if (*(_DWORD*)(a1 + 16) == 260)
	{
		v14 = sub_14006A030((__int64*)v2);
		if (v14 != -1)
		{
			if (v5 == -1)
			{
				v5 = v14;
			}
			else
			{
				v16 = v5;
				v17 = *(_QWORD*)(*(_QWORD*)v2 + 24i64);
				while (*(_DWORD*)(v17 + 4i64 * v16) >> 14 != 131070)
				{
					v18 = (*(_DWORD*)(v17 + 4i64 * v16) >> 14) - 0x1FFFF;
					if (v16 + v18 + 1 == -1)
						break;
					v16 += v18 + 1;
				}
				sub_14006A0D0((__int64*)v2, v16, v14);
			}
		}
		*(_DWORD*)(v2 + 52) = *(_DWORD*)(v2 + 48);
		if (i != -1)
			sub_14006A3C0((__int64*)v2, (int*)(v2 + 56), i);
		v19 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v19)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v20 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v20;
		}
		v21 = *(_QWORD*)(a1 + 48);
		v28 = -1;
		v31 = 0;
		v22 = *(_BYTE*)(v21 + 74);
		v30 = 0;
		v29 = v22;
		v27 = *(_QWORD*)(v21 + 40);
		*(_QWORD*)(v21 + 40) = &v27;
		sub_140069EC0(a1, v15);
		sub_140065E10(v21);
	}
	else if (i != -1)
	{
		if (v5 == -1)
		{
			v5 = i;
		}
		else
		{
			v23 = v5;
			v24 = *(_QWORD*)(*(_QWORD*)v2 + 24i64);
			while (*(_DWORD*)(v24 + 4i64 * v23) >> 14 != 131070)
			{
				v25 = (*(_DWORD*)(v24 + 4i64 * v23) >> 14) - 0x1FFFF;
				if (v23 + v25 + 1 == -1)
					break;
				v23 += v25 + 1;
			}
			sub_14006A0D0((__int64*)v2, v23, i);
		}
	}
	*(_DWORD*)(v2 + 52) = *(_DWORD*)(v2 + 48);
	if (v5 != -1)
		sub_14006A3C0((__int64*)v2, (int*)(v2 + 56), v5);
	return sub_1400656B0(a1, 262, 266, a2);
}
// 140069662: variable 'v15' is possibly undefined
// 140069EC0: using guessed type __int64 __fastcall sub_140069EC0(_QWORD, _QWORD);

