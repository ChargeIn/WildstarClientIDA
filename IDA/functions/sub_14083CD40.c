//----- (000000014083CD40) ----------------------------------------------------
__int64 __fastcall sub_14083CD40(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // r9
	_QWORD* i; // r8
	_DWORD* v7; // r8
	unsigned int v8; // edi
	_QWORD* v9; // rax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v4 = *(_QWORD**)a1;
	v5 = *(_QWORD**)(a1 + 8);
	for (i = *(_QWORD**)a1; i != v5; i += 2)
	{
		if (*i == a2)
			break;
	}
	if (i == v5 || (v7 = i + 1) == 0i64)
	{
		if (v4 != v5)
		{
			do
			{
				if (*v4 == a2)
					break;
				v4 += 2;
			} while (v4 != v5);
			if (v4 != v5 && v4 != (_QWORD*)-8i64)
				goto LABEL_14;
		}
		v9 = (_QWORD*)sub_14083CDF0(a1);
		if (!v9 || (*v9 = a2, v9 == (_QWORD*)-8i64))
			v8 = 52;
		else
			LABEL_14:
		v8 = 1;
	}
	else
	{
		++* v7;
		v8 = 1;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	return v8;
}

