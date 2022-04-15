//----- (0000000140845660) ----------------------------------------------------
void __fastcall sub_140845660(__int64 a1, int a2, _DWORD* a3, __int64 a4)
{
	_DWORD* v4; // rax
	_DWORD* v5; // r10
	_DWORD* v10; // rdi
	_DWORD* v11; // rax
	_DWORD* v12; // rcx
	_DWORD* v13; // rax

	v4 = *(_DWORD**)a1;
	v5 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 == v5)
		goto LABEL_6;
	do
	{
		if (*v4 == a2)
			break;
		v4 += 10;
	} while (v4 != v5);
	if (v4 == v5)
		LABEL_6:
	v10 = 0i64;
	else
		v10 = v4 + 2;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	if (v10)
	{
		if (a4 == *((_QWORD*)v10 + 3))
		{
		LABEL_22:
			*v10 = *a3;
			v10[1] = a3[1];
			v10[2] = a3[2];
			v10[3] = a3[3];
			*((_QWORD*)v10 + 2) = *(_QWORD*)(a1 + 64);
		}
	}
	else
	{
		v11 = *(_DWORD**)a1;
		v12 = *(_DWORD**)(a1 + 8);
		if (*(_DWORD**)a1 == v12)
			goto LABEL_14;
		do
		{
			if (*v11 == a2)
				break;
			v11 += 10;
		} while (v11 != v12);
		if (v11 == v12)
		{
		LABEL_14:
			v10 = 0i64;
		}
		else
		{
			v10 = v11 + 2;
			if (v11 != (_DWORD*)-8i64)
			{
			LABEL_18:
				if (*(_QWORD*)(a1 + 8) != *(_QWORD*)a1)
					QueryPerformanceCounter((LARGE_INTEGER*)(a1 + 64));
				*((_QWORD*)v10 + 3) = a4;
				goto LABEL_22;
			}
		}
		v13 = (_DWORD*)sub_14088C520(a1);
		if (v13)
		{
			*v13 = a2;
			v10 = v13 + 2;
		}
		if (v10)
			goto LABEL_18;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

