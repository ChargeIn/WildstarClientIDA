//----- (00000001406A94A0) ----------------------------------------------------
__int64 __fastcall sub_1406A94A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	int v4; // esi
	_DWORD* v5; // rdx
	int v6; // ebp
	__int64 v7; // rax
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rax

	v2 = sub_1406A93C0(a1);
	v4 = 0;
	if (v2)
	{
		v6 = 0;
		if (qword_140C7DFD8 == v2)
		{
			v6 = 1;
		}
		else if (*(_DWORD*)(v2 + 48) == 5)
		{
			v7 = sub_1405845F0(v3, *(_QWORD*)(v2 + 40));
			if (v7)
			{
				v8 = *(int*)(v7 + 772);
				if (v8 < 0xA)
				{
					v9 = v7 + 8 * (v8 + 4 * v8 + 3);
					if (v9)
					{
						if ((*(_DWORD*)(v9 + 8) & 0x10000000) != 0)
							v6 = 1;
					}
				}
			}
		}
		v10 = (_DWORD*)a1[2];
		LOBYTE(v4) = v6 != 0;
		v10[2] = 1;
		*v10 = v4;
	}
	else
	{
		v5 = (_DWORD*)a1[2];
		*v5 = 0;
		v5[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406A94EA: variable 'v3' is possibly undefined
// 140C7DFD8: using guessed type __int64 qword_140C7DFD8;

