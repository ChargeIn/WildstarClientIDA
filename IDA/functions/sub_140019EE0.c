//----- (0000000140019EE0) ----------------------------------------------------
void __fastcall sub_140019EE0(__int64 a1, int a2, int a3)
{
	char v3; // r10
	int v5; // ebx
	int v6; // eax
	_DWORD* v7; // rdx
	__int64 v8; // r8
	__int64 v9; // rcx
	void(__fastcall * v10)(__int64*); // r8
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	v3 = a3;
	if (a3 < a2)
	{
		v5 = *(_DWORD*)(a1 + 12i64 * a2 + 40);
		v11 = *(_QWORD*)(a1 + 12i64 * a2 + 32);
		v6 = a3 + 1;
		v12 = v5;
		v7 = (_DWORD*)(a1 + 4 * (a3 + 2 * (a3 + 4i64)));
		if ((unsigned __int64)(a3 + 1) < 5)
		{
			v8 = 5i64 - v6;
			v9 = a1 + 4 * (v6 + 2 * (v6 + 5i64));
			do
			{
				v9 += 12i64;
				*(_DWORD*)(v9 - 20) = *v7;
				*(_DWORD*)(v9 - 16) = v7[1];
				*(_DWORD*)(v9 - 12) = v7[2];
				--v8;
			} while (v8);
		}
		v10 = *(void(__fastcall**)(__int64*))(a1 + 144);
		*(_DWORD*)(a1 + 24) &= (2 << v3) - 1;
		if (v10 && (v11 != *(_QWORD*)v7 || v5 != v7[2]))
			v10(&v11);
	}
}

