//----- (0000000140061510) ----------------------------------------------------
__int64 __fastcall sub_140061510(__int64 a1, __int64 a2, int a3)
{
	int v3; // ebp
	__int64 v5; // rsi
	int v6; // r13d
	__int64 v7; // rcx
	int v8; // edi
	__int64 v9; // r15
	int v10; // edi
	__int64 v11; // r14
	__int64 v12; // rbp
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // r8
	unsigned __int64 v16; // rax
	__int64 v17; // r9
	__int64 v18; // r8
	__int64 v19; // rdx
	__int64 v20; // rcx
	__int64 result; // rax
	__int64 v22; // rdx
	double v23; // [rsp+20h] [rbp-68h] BYREF
	int v24; // [rsp+28h] [rbp-60h]
	int v25; // [rsp+90h] [rbp+8h]
	int v26; // [rsp+98h] [rbp+10h]
	int v27; // [rsp+A0h] [rbp+18h]
	double v28; // [rsp+A8h] [rbp+20h]

	v27 = a3;
	v3 = *(unsigned __int8*)(a2 + 113);
	v5 = 0i64;
	v26 = v3;
	v6 = a3;
	if (a3 < v3)
	{
		v6 = *(unsigned __int8*)(a2 + 113);
		v7 = (unsigned int)(v3 - a3);
		v27 = v6;
		do
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			--v7;
		} while (v7);
	}
	if ((*(_BYTE*)(a2 + 114) & 4) != 0)
	{
		v8 = v6 - v3;
		v25 = v6 - v3;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v9 = v8;
		v5 = sub_14005C1B0(a1, v8, 1);
		if (v8 > 0)
		{
			v10 = 1;
			v11 = -16 * v9;
			do
			{
				v12 = *(_QWORD*)(a1 + 16);
				if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v5 + 56))
				{
					if ((double)v10 == 0.0)
					{
						v13 = *(_QWORD*)(v5 + 32);
					}
					else
					{
						v28 = (double)v10;
						v13 = *(_QWORD*)(v5 + 32)
							+ 40 * ((unsigned int)(LODWORD(v28) + HIDWORD(v28)) % (((1i64 << *(_BYTE*)(v5 + 11)) - 1) | 1));
					}
					while (*(_DWORD*)(v13 + 24) != 3 || (double)v10 != *(double*)(v13 + 16))
					{
						v13 = *(_QWORD*)(v13 + 32);
						if (!v13)
							goto LABEL_12;
					}
				}
				else
				{
					v13 = *(_QWORD*)(v5 + 24) + 16i64 * (v10 - 1);
				}
				if ((_UNKNOWN*)v13 == &unk_140A12138)
				{
				LABEL_12:
					v24 = 3;
					v23 = (double)v10;
					v13 = sub_14005C260(a1, v5, &v23);
				}
				v14 = *(_QWORD*)(v11 + v12);
				++v10;
				v11 += 16i64;
				*(_QWORD*)v13 = v14;
				*(_DWORD*)(v13 + 8) = *(_DWORD*)(v11 + v12 - 8);
				--v9;
			} while (v9);
			v6 = v27;
			v8 = v25;
			v3 = v26;
		}
		v15 = sub_140062650(a1, (unsigned __int64*)&unk_140C1DE0C, 1ui64);
		v16 = *(_QWORD*)(v5 + 32) + 40 * (*(int*)(v15 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v5 + 11)) - 1));
		while (*(_DWORD*)(v16 + 24) != 4 || *(_QWORD*)(v16 + 16) != v15)
		{
			v16 = *(_QWORD*)(v16 + 32);
			if (!v16)
				goto LABEL_28;
		}
		if ((_UNKNOWN*)v16 != &unk_140A12138)
			goto LABEL_29;
	LABEL_28:
		v23 = *(double*)&v15;
		v24 = 4;
		v16 = sub_14005C260(a1, v5, &v23);
	LABEL_29:
		*(_DWORD*)(v16 + 8) = 3;
		*(double*)v16 = (double)v8;
	}
	v17 = *(_QWORD*)(a1 + 16);
	v18 = v3;
	if (v3 > 0i64)
	{
		v19 = *(_QWORD*)(a1 + 16) - 16i64 * v6 + 8;
		do
		{
			v20 = *(_QWORD*)(a1 + 16);
			v19 += 16i64;
			*(_QWORD*)(a1 + 16) = v20 + 16;
			*(_QWORD*)v20 = *(_QWORD*)(v19 - 24);
			*(_DWORD*)(v20 + 8) = *(_DWORD*)(v19 - 16);
			*(_DWORD*)(v19 - 16) = 0;
			--v18;
		} while (v18);
	}
	result = v17;
	if (v5)
	{
		v22 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(a1 + 16) = v22 + 16;
		*(_QWORD*)v22 = v5;
		*(_DWORD*)(v22 + 8) = 5;
	}
	return result;
}
// 14005C260: using guessed type __int64 __fastcall sub_14005C260(_QWORD, _QWORD, _QWORD);

