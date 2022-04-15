//----- (0000000140887010) ----------------------------------------------------
__int64 __fastcall sub_140887010(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	char v6; // al
	unsigned int v7; // r8d
	__int64 v8; // r11
	unsigned __int64 v9; // rdx
	unsigned int v10; // ecx
	unsigned __int64 v11; // rsi
	int v12; // esi
	__int64 v13; // rax
	__int64 v14; // rbp

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v6 = *(_BYTE*)(a1 + 117);
	if ((v6 & 8) != 0 || (v6 & 0x40) == 0)
	{
		v14 = 0i64;
	}
	else
	{
		*a2 = *(_QWORD*)(a1 + 40);
		v7 = *(_DWORD*)(a1 + 168);
		v8 = *(_QWORD*)(a1 + 96);
		v9 = *(_QWORD*)(a1 + 128) + v7;
		v10 = *(_DWORD*)(a1 + 152) - v7;
		if (v10 > *(_DWORD*)(v8 + 264))
			v10 = *(_DWORD*)(v8 + 264);
		if ((*(_BYTE*)(a1 + 117) & 2) != 0 || (v11 = **(_QWORD**)(a1 + 40), v9 + v10 <= v11))
		{
			v12 = v10;
		}
		else if (v9 >= v11)
		{
			v12 = 0;
		}
		else
		{
			v12 = v11 - v9;
		}
		v13 = sub_140886810(v8, a1, a1 + 128, v7, v9, v10, v12, a3);
		v14 = v13;
		if (v13)
		{
			*(_DWORD*)(a1 + 168) += v12;
			*(_QWORD*)(a1 + 184) = v13;
			*(_QWORD*)(a1 + 88) = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 112i64);
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	return v14;
}

