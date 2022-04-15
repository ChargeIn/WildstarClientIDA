//----- (0000000140001D30) ----------------------------------------------------
bool __fastcall sub_140001D30(__int64 a1, int* a2)
{
	_DWORD* v4; // rax
	__int64 v5; // rax
	int v6; // eax
	bool v7; // cc
	int v8; // eax
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v4 = sub_1400CB0E0(a1, v10, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v4;
		*(_DWORD*)(a1 + 400) = v4[1];
		*(_DWORD*)(a1 + 404) = v4[2];
		*(_DWORD*)(a1 + 408) = v4[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v5 = a1;
		do
		{
			if (!*(_DWORD*)(v5 + 392))
				break;
			*(_DWORD*)(v5 + 392) = 0;
			v5 = *(_QWORD*)(v5 + 16);
		} while (v5);
	}
	if (*a2 < 0
		|| *a2 >= *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396)
		|| (v6 = a2[1], v6 < 0)
		|| (v7 = v6 < *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400), v8 = 1, !v7))
	{
		v8 = 0;
	}
	return v8 == 1;
}
// 140001D30: using guessed type int var_18[6];

