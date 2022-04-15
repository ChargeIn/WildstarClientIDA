//----- (00000001407290A0) ----------------------------------------------------
__int64 __fastcall sub_1407290A0(__int64 a1, _DWORD* a2)
{
	int v3; // eax
	_DWORD* v4; // rdi
	unsigned int v5; // esi
	__int64 v6; // r14
	__int64 v7; // r15
	__int64 v8; // rcx
	__int64 v9; // rdx
	unsigned int v11; // ebx
	_DWORD* v12; // rdi

	if (!*a2)
		return 0i64;
	v3 = a2[1];
	if (v3 == 3)
	{
		v4 = (_DWORD*)(a1 + 56);
		*(_DWORD*)(a1 + 1256) = 0;
		v5 = 0;
		v6 = 0i64;
		v7 = (__int64)a2 - a1 - 48;
		do
		{
			if ((*v4 == 0) != (*(_DWORD*)((char*)v4 + v7) == 0))
			{
				sub_14078A370(*(_QWORD*)(a1 + 1272) + 152i64 * v5);
				v8 = qword_140C665E0;
				*v4 = 1;
				v9 = v6 + *(_QWORD*)(a1 + 1272);
				if (v9)
				{
					if (v8)
						sub_1400EA3E0(
							*(_QWORD*)(v8 + 1424),
							"CardFlipped",
							byte_1409F8DC4,
							(unsigned int)(*(_DWORD*)(v9 + 40) + 1));
				}
			}
			++v5;
			++v4;
			v6 += 152i64;
		} while (v5 < 3);
		return 0i64;
	}
	else
	{
		if (!v3)
		{
			*(_DWORD*)(a1 + 1256) = 3;
			v11 = 0;
			v12 = (_DWORD*)(a1 + 56);
			do
			{
				if (!*v12)
				{
					sub_14078A370(*(_QWORD*)(a1 + 1272) + 152i64 * v11);
					*v12 = 1;
				}
				++v11;
				++v12;
			} while (v11 < 3);
		}
		return 0i64;
	}
}
// 1409F8DC4: using guessed type _BYTE byte_1409F8DC4[48];
// 140C665E0: using guessed type __int64 qword_140C665E0;

