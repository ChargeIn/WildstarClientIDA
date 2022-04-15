//----- (000000014083D1A0) ----------------------------------------------------
__int64 __fastcall sub_14083D1A0(__int64* a1, __int64 a2, _BYTE* a3)
{
	__int64 v3; // rbp
	__int64 v4; // rdi
	int v6; // r10d
	int v7; // r11d
	unsigned int v8; // r9d
	int v9; // r8d
	unsigned int v10; // eax
	bool v11; // cf
	unsigned int v12; // eax
	bool v13; // cf
	bool v14; // zf
	unsigned int v15; // eax

	v3 = *a1;
	v4 = 0i64;
	v6 = 0;
	v7 = (*((_DWORD*)a1 + 2) - *(_DWORD*)a1) / 40 - 1;
	if (v7 >= 0)
	{
		v8 = *(_DWORD*)(a2 + 4);
		do
		{
			v9 = v6 + (v7 - v6) / 2;
			v10 = *(_DWORD*)(v3 + 40i64 * v9 + 4);
			v11 = v8 < v10;
			if (v8 == v10)
				v11 = *(_DWORD*)(a2 + 8) < *(_DWORD*)(v3 + 40i64 * v9 + 8);
			if (v11)
			{
				v7 = v9 - 1;
			}
			else
			{
				v12 = *(_DWORD*)(v3 + 40i64 * v9 + 4);
				v13 = v8 < v12;
				v14 = v8 == v12;
				if (v8 == v12)
				{
					v15 = *(_DWORD*)(v3 + 40i64 * v9 + 8);
					v13 = *(_DWORD*)(a2 + 8) < v15;
					v14 = *(_DWORD*)(a2 + 8) == v15;
				}
				if (v13 || v14)
				{
					*a3 = 1;
					return *a1 + 40i64 * v9;
				}
				v6 = v9 + 1;
			}
		} while (v6 <= v7);
	}
	*a3 = 0;
	if (*a1)
		return *a1 + 40i64 * v6;
	return v4;
}

