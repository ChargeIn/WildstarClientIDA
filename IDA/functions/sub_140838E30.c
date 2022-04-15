//----- (0000000140838E30) ----------------------------------------------------
__int64 __fastcall sub_140838E30(__int64 a1, __int64 a2, int a3)
{
	__int64 result; // rax
	__int64 v6; // r9
	unsigned __int64 v7; // rbx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rdx
	int v13; // edi

	result = (unsigned int)(356059465 * (a2 + a3));
	v6 = ((int)a2 + a3) % 0xC1u;
	v7 = *(_QWORD*)(a1 + 8 * v6 + 3112);
	if (v7)
	{
		while (*(_QWORD*)v7 != a2 || *(_DWORD*)(v7 + 8) != a3)
		{
			v7 = *(_QWORD*)(v7 + 16);
			if (!v7)
				return result;
		}
		v8 = a1 + 8 * v6;
		v9 = 0i64;
		v10 = *(_QWORD*)(v8 + 3112);
		if (v10)
		{
			while (*(_QWORD*)v10 != a2 || *(_DWORD*)(v10 + 8) != a3)
			{
				v9 = v10;
				v10 = *(_QWORD*)(v10 + 16);
				if (!v10)
					goto LABEL_15;
			}
			v11 = *(_QWORD*)(v10 + 16);
			if (v9)
				*(_QWORD*)(v9 + 16) = v11;
			else
				*(_QWORD*)(v8 + 3112) = v11;
			--* (_DWORD*)(a1 + 4656);
		}
	LABEL_15:
		sub_140837930((_QWORD*)a1, v7);
		v12 = *(_QWORD*)(v7 + 40);
		v13 = dword_140C10F20;
		if (v12)
		{
			*(_QWORD*)(v7 + 48) = v12;
			sub_140881720(dword_140C10F20, v12);
			*(_QWORD*)(v7 + 40) = 0i64;
			*(_QWORD*)(v7 + 48) = 0i64;
			*(_DWORD*)(v7 + 56) = 0;
		}
		return sub_140881720(v13, v7);
	}
	return result;
}
// 140838E82: conditional instruction was optimized away because rbx.8!=0
// 140C10F20: using guessed type int dword_140C10F20;

