//----- (0000000140052530) ----------------------------------------------------
void __fastcall sub_140052530(__int64 a1, int a2, int a3)
{
	unsigned int v4; // r10d
	int v5; // edx
	int v6; // eax
	_DWORD* v7; // rdi
	__int64 i; // rcx
	void(__fastcall * v9)(_QWORD); // rax

	if (a3 < a2)
	{
		v4 = *(_DWORD*)(a1 + 4i64 * a2 + 32);
		v5 = *(_DWORD*)(a1 + 4i64 * a3 + 32);
		v6 = a3 + 1;
		if ((unsigned __int64)(a3 + 1) < 5)
		{
			v7 = (_DWORD*)(a1 + 32 + 4i64 * v6);
			for (i = 5i64 - v6; i; --i)
				*v7++ = v5;
		}
		*(_DWORD*)(a1 + 24) &= (2 << a3) - 1;
		v9 = *(void(__fastcall**)(_QWORD))(a1 + 80);
		if (v9)
		{
			if (v4 != v5)
				v9(v4);
		}
	}
}

