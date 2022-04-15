//----- (000000014005D6E0) ----------------------------------------------------
__int64* __fastcall sub_14005D6E0(__int64 a1, __int64* a2, __int64 a3)
{
	__int64 v3; // rbp
	__int64 v4; // rbx
	__int64* v5; // rdi
	int v7; // eax
	int v8; // eax
	__int64 v9; // r8
	__int64 v10; // rdx
	void* v11; // rdx
	int i; // [rsp+40h] [rbp+8h]
	__int64 v14; // [rsp+50h] [rbp+18h]

	v3 = *(_QWORD*)(a1 + 32);
	v4 = *a2;
	v5 = a2;
	for (i = *(unsigned __int8*)(v3 + 32) ^ 3; *v5; a3 = v14)
	{
		v14 = a3 - 1;
		if (!a3)
			break;
		if (*(_BYTE*)(v4 + 8) == 8)
			sub_14005D6E0(a1, v4 + 152, -3i64, 0x140000000ui64);
		if (((*(unsigned __int8*)(v4 + 9) ^ 3) & i) != 0)
		{
			v5 = (__int64*)v4;
			*(_BYTE*)(v4 + 9) = *(_BYTE*)(v3 + 32) & 3 | *(_BYTE*)(v4 + 9) & 0xF8;
		}
		else
		{
			*v5 = *(_QWORD*)v4;
			if (v4 == *(_QWORD*)(v3 + 40))
				*(_QWORD*)(v3 + 40) = *(_QWORD*)v4;
			switch (*(_BYTE*)(v4 + 8))
			{
			case 4:
				-- * (_DWORD*)(*(_QWORD*)(a1 + 32) + 8i64);
				v9 = *(_QWORD*)(v4 + 16) + 33i64;
				goto LABEL_24;
			case 5:
				v11 = *(void**)(v4 + 32);
				if (v11 != &unk_140A12148)
					sub_140064780(a1, (__int64)v11, 40 * (1i64 << *(_BYTE*)(v4 + 11)), 0i64);
				sub_140064780(a1, *(_QWORD*)(v4 + 24), 16i64 * *(int*)(v4 + 56), 0i64);
				v9 = 64i64;
				goto LABEL_24;
			case 6:
				v7 = *(unsigned __int8*)(v4 + 11);
				if (*(_BYTE*)(v4 + 10))
					v8 = 16 * v7 + 40;
				else
					v8 = 8 * v7 + 40;
				v9 = v8;
				goto LABEL_24;
			case 7:
				v9 = *(_QWORD*)(v4 + 32) + 48i64;
				goto LABEL_24;
			case 8:
				sub_140060CB0(v4, *(_QWORD*)(v4 + 64));
				sub_140064780(a1, *(_QWORD*)(v4 + 80), 40i64 * *(int*)(v4 + 92), 0i64);
				sub_140064780(a1, *(_QWORD*)(v4 + 64), 16i64 * *(int*)(v4 + 88), 0i64);
				v9 = 184i64;
				goto LABEL_24;
			case 9:
				sub_140060E30(a1, v4);
				break;
			case 0xA:
				v10 = v4 + 24;
				if (*(_QWORD*)(v4 + 16) != v4 + 24)
				{
					*(_QWORD*)(*(_QWORD*)(v4 + 32) + 24i64) = *(_QWORD*)v10;
					*(_QWORD*)(*(_QWORD*)v10 + 32i64) = *(_QWORD*)(v4 + 32);
				}
				v9 = 40i64;
			LABEL_24:
				sub_140064780(a1, v4, v9, 0i64);
				break;
			default:
				break;
			}
		}
		v4 = *v5;
	}
	return v5;
}

