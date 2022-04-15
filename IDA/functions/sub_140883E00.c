//----- (0000000140883E00) ----------------------------------------------------
void __fastcall sub_140883E00(__int64 a1)
{
	char v2; // r8
	__int64** v3; // rax
	int v4; // r10d
	__int64* v5; // r9
	__int64 v6; // r11
	unsigned __int64 v7; // rcx
	__int64 v8; // rsi
	int v9; // ecx
	bool v10; // zf

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	*(_BYTE*)(a1 - 3) = *(_BYTE*)(a1 - 3) & 0xB7 | 8;
	v2 = *(_BYTE*)(a1 + 72);
	v3 = *(__int64***)(a1 + 56);
	if (v2)
	{
		v4 = *(_DWORD*)(a1 + 36);
		do
		{
			v5 = v3[1];
			v6 = *((unsigned int*)v3 + 4);
			v7 = *(unsigned int*)(a1 + 28);
			v8 = *v5;
			if (*v5 + v6 >= v7 || v8 + (unsigned __int64)*((unsigned int*)v5 + 6) <= v7)
				v9 = *((_DWORD*)v5 + 6);
			else
				v9 = v7 - v8;
			v4 += v9 - v6;
			v10 = v2-- == 1;
			*(_BYTE*)(a1 + 72) = v2;
			*(_DWORD*)(a1 + 36) = v4;
			v3 = (__int64**)*v3;
		} while (!v10);
	}
	sub_1408843E0(a1 - 120);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
}

