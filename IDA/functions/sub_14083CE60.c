//----- (000000014083CE60) ----------------------------------------------------
void __fastcall sub_14083CE60(
	__int64 a1,
	void(__fastcall* a2)(_QWORD, __int64, _QWORD, _QWORD, __int64),
	unsigned int a3,
	__int64 a4,
	unsigned int a5,
	unsigned int a6,
	__int64 a7)
{
	_QWORD* v10; // rdi
	_QWORD* v11; // rsi
	_QWORD* i; // rax
	_DWORD* v13; // rcx
	int v14; // edx
	bool v15; // r15

	if (a2)
	{
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
		v10 = *(_QWORD**)a1;
		v11 = *(_QWORD**)(a1 + 8);
		for (i = *(_QWORD**)a1; i != v11; i += 2)
		{
			if (*i == a7)
				break;
		}
		if (i == v11 || (v13 = i + 1, i == (_QWORD*)-8i64))
		{
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
		}
		else
		{
			v14 = *((_DWORD*)i + 3);
			v15 = v14 != 0;
			if (*v13 > 1u)
			{
				--* v13;
				if (v14)
					*((_DWORD*)i + 3) = v14 - 1;
			}
			else if (v10 != v11)
			{
				do
				{
					if (*v10 == a7)
						break;
					v10 += 2;
				} while (v10 != v11);
				if (v10 != v11)
				{
					if (v10 < v11 - 2)
						qmemcpy(
							v10,
							v10 + 2,
							8
							* (((((unsigned __int64)((char*)(v11 - 2) - (char*)v10 - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
					*(_QWORD*)(a1 + 8) -= 16i64;
				}
			}
			ResetEvent(*(HANDLE*)(a1 + 64));
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
			if (!v15)
				a2(a3, a4, a5, a6, a7);
			SetEvent(*(HANDLE*)(a1 + 64));
		}
	}
}

