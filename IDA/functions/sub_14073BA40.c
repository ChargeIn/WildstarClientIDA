//----- (000000014073BA40) ----------------------------------------------------
__int64 __fastcall sub_14073BA40(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r8d
	_DWORD* v4; // rdx
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	BOOL v8; // ecx
	_DWORD* v9; // rax
	__int64 v10; // rcx
	int v11; // ecx
	int v12; // ecx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = 0;
	if (!v2)
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
		return result;
	}
	if (*(_DWORD*)v2 == 3)
	{
		v10 = *(_QWORD*)(v2 + 24);
		if (!v10)
			goto LABEL_8;
		v11 = *(_DWORD*)(v10 + 20) - 2;
		if (v11)
		{
			v12 = v11 - 1;
			if (v12)
			{
				if (v12 != 2)
					goto LABEL_8;
				v13 = 0i64;
				if (!qword_140C7DE20)
					goto LABEL_8;
				while (1)
				{
					v7 = *(_QWORD*)(qword_140C7DE18 + 8 * v13);
					if (*(_DWORD*)(v7 + 16) == 6)
						break;
					if (++v13 >= (unsigned __int64)qword_140C7DE20)
						goto LABEL_8;
				}
			}
			else
			{
				v14 = 0i64;
				if (!qword_140C7DE20)
					goto LABEL_8;
				while (1)
				{
					v7 = *(_QWORD*)(qword_140C7DE18 + 8 * v14);
					if (*(_DWORD*)(v7 + 16) == 5)
						break;
					if (++v14 >= (unsigned __int64)qword_140C7DE20)
						goto LABEL_8;
				}
			}
		}
		else
		{
			v15 = 0i64;
			if (!qword_140C7DE20)
				goto LABEL_8;
			while (1)
			{
				v7 = *(_QWORD*)(qword_140C7DE18 + 8 * v15);
				if (*(_DWORD*)(v7 + 16) == 4)
					break;
				if (++v15 >= (unsigned __int64)qword_140C7DE20)
					goto LABEL_8;
			}
		}
	}
	else
	{
		if (*(_DWORD*)v2 != 4)
			goto LABEL_8;
		v6 = 0i64;
		if (!qword_140C7DE20)
			goto LABEL_8;
		while (1)
		{
			v7 = *(_QWORD*)(qword_140C7DE18 + 8 * v6);
			if (*(_DWORD*)(v7 + 16) == 3)
				break;
			if (++v6 >= (unsigned __int64)qword_140C7DE20)
				goto LABEL_8;
		}
	}
	if (v7)
	{
		v8 = *(_DWORD*)(v7 + 560) != 0;
		goto LABEL_9;
	}
LABEL_8:
	v8 = 0;
LABEL_9:
	v9 = (_DWORD*)a1[2];
	LOBYTE(v3) = v8;
	v9[2] = 1;
	*v9 = v3;
	a1[2] += 16i64;
	return 1i64;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

