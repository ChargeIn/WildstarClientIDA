//----- (0000000140896A80) ----------------------------------------------------
char __fastcall sub_140896A80(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	unsigned __int16 v3; // bp
	_QWORD* v5; // rax
	_QWORD* i; // rdi
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rbx
	_WORD* v11; // rdi
	_WORD* v12; // rcx
	unsigned __int64 v13; // rcx
	_WORD* v14; // rsi
	unsigned __int64 j; // rcx
	unsigned __int16* v16; // r8
	unsigned __int16* v17; // rsi
	int v18; // edi
	unsigned __int16* v19; // rax
	__int64 v20; // rdx

	v2 = *(_QWORD*)(a2 + 8);
	v3 = 0;
	v5 = *(_QWORD**)(v2 + 32);
	for (i = *(_QWORD**)(v2 + 40); v5 != i; ++v3)
	{
		if (*v5 == a2)
			break;
		++v5;
	}
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *(_QWORD*)(v7 - 24);
	LODWORD(v9) = *(_DWORD*)(v8 + 56) - 1;
	if ((v9 & 0xFFFFFFFD) != 0)
	{
		v10 = *(_QWORD*)(v7 - 8);
	}
	else
	{
		v9 = sub_140896C70(v8);
		v10 = v9;
	}
	if (v10)
	{
		sub_14087C150(v10, v3);
		v11 = *(_WORD**)(v10 + 40);
		v12 = *(_WORD**)(v10 + 48);
		if (v11 != v12)
		{
			do
			{
				if (*v11 == v3)
					break;
				++v11;
			} while (v11 != v12);
			if (v11 != v12)
			{
				v13 = (unsigned __int64)(v12 - 1);
				if ((unsigned __int64)v11 < v13)
				{
					v14 = v11 + 1;
					for (j = ((v13 - (unsigned __int64)v11 - 1) >> 1) + 1; j; --j)
						*v11++ = *v14++;
				}
				*(_QWORD*)(v10 + 48) -= 2i64;
			}
		}
		*(_WORD*)(v10 + 34) = (__int64)(unsigned int)(*(_DWORD*)(v2 + 40) - *(_DWORD*)(v2 + 32)) >> 3;
		sub_14087C360(v10, (unsigned int)((__int64)(*(_QWORD*)(v2 + 40) - *(_QWORD*)(v2 + 32)) >> 3));
		v16 = *(unsigned __int16**)(v10 + 40);
		v17 = *(unsigned __int16**)(v10 + 48);
		v18 = *(_DWORD*)(v10 + 24);
		v19 = v16;
		for (*(_DWORD*)(v10 + 28) = v18; v19 != v17; *(_DWORD*)(v10 + 28) = v18)
		{
			v20 = *v19++;
			v18 -= *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 8 * v20) + 24i64);
		}
		*(_WORD*)(v10 + 32) -= v17 - v16;
		LOBYTE(v9) = sub_140897E70(a1, v2, v3, v2 + 32, v10);
	}
	return v9;
}

