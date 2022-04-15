//----- (000000014083D0A0) ----------------------------------------------------
DWORD __fastcall sub_14083D0A0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rdi
	_QWORD* v5; // rsi
	_QWORD* i; // rax
	_DWORD* v7; // rcx
	int v8; // edi
	DWORD result; // eax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v4 = *(_QWORD**)a1;
	v5 = *(_QWORD**)(a1 + 8);
	for (i = *(_QWORD**)a1; i != v5; i += 2)
	{
		if (*i == a2)
			break;
	}
	if (i != v5)
	{
		v7 = i + 1;
		if (i != (_QWORD*)-8i64)
		{
			if (*v7 > 1u)
			{
				--* v7;
			}
			else if (v4 != v5)
			{
				do
				{
					if (*v4 == a2)
						break;
					v4 += 2;
				} while (v4 != v5);
				if (v4 != v5)
				{
					if (v4 < v5 - 2)
						qmemcpy(
							v4,
							v4 + 2,
							8
							* (((((unsigned __int64)((char*)(v5 - 2) - (char*)v4 - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
					*(_QWORD*)(a1 + 8) -= 16i64;
				}
			}
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v8 = dword_140C61F78;
	result = GetCurrentThreadId();
	if (v8 != result)
		return WaitForSingleObject(*(HANDLE*)(a1 + 64), 0xFFFFFFFF);
	return result;
}
// 140C61F78: using guessed type int dword_140C61F78;

