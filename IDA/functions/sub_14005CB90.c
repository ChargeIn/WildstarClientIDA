//----- (000000014005CB90) ----------------------------------------------------
__int64 __fastcall sub_14005CB90(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	__int64* v5; // r11
	__int64 v6; // r8
	char v7; // r9
	__int64 v8; // rdx
	__int64 v9; // r10
	_QWORD* v10; // rax
	__int64 v12; // rax
	_QWORD* v13; // rax

	v2 = *(_QWORD*)(a1 + 32);
	v3 = 0i64;
	v5 = *(__int64**)(v2 + 176);
	v6 = *v5;
	while (*v5)
	{
		v7 = *(_BYTE*)(v6 + 9);
		if (((v7 & 3) != 0 || a2) && (v7 & 8) == 0)
		{
			v8 = *(_QWORD*)(v6 + 16);
			if (v8 && (*(_BYTE*)(v8 + 10) & 4) == 0)
			{
				v9 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 312i64);
				v10 = (_QWORD*)(*(_QWORD*)(v8 + 32)
					+ 40 * (*(int*)(v9 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v8 + 11)) - 1)));
				while (*((_DWORD*)v10 + 6) != 4 || v10[2] != v9)
				{
					v10 = (_QWORD*)v10[4];
					if (!v10)
					{
						v10 = &unk_140A12138;
						break;
					}
				}
				if (*((_DWORD*)v10 + 2))
				{
					v12 = *(_QWORD*)(v6 + 32) + 48i64;
					*(_BYTE*)(v6 + 9) = v7 | 8;
					v3 += v12;
					*v5 = *(_QWORD*)v6;
					v13 = *(_QWORD**)(v2 + 80);
					if (v13)
					{
						*(_QWORD*)v6 = *v13;
						**(_QWORD**)(v2 + 80) = v6;
					}
					else
					{
						*(_QWORD*)v6 = v6;
					}
					*(_QWORD*)(v2 + 80) = v6;
					goto LABEL_16;
				}
				*(_BYTE*)(v8 + 10) |= 4u;
			}
			*(_BYTE*)(v6 + 9) |= 8u;
		}
		v5 = (__int64*)v6;
	LABEL_16:
		v6 = *v5;
	}
	return v3;
}

