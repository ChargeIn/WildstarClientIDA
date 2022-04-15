//----- (00000001408889F0) ----------------------------------------------------
__int64 __fastcall sub_1408889F0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	char v6; // al
	__int64 v7; // r10
	unsigned int v8; // ecx
	unsigned __int64 v9; // rdx
	char v10; // r14
	unsigned __int64 v11; // rsi
	int v12; // esi
	__int64 v13; // rbp
	__int64 v15; // [rsp+60h] [rbp+8h] BYREF

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v6 = *(_BYTE*)(a1 + 117);
	if ((v6 & 8) != 0 || (v6 & 0x40) == 0)
		goto LABEL_16;
	*a2 = *(_QWORD*)(a1 + 40);
	v7 = *(_QWORD*)(a1 + 96);
	v8 = *(_DWORD*)(a1 + 152) - *(_DWORD*)(a1 + 168);
	v9 = *(_QWORD*)(a1 + 128) + *(unsigned int*)(a1 + 168);
	if (v8 > *(_DWORD*)(v7 + 264))
		v8 = *(_DWORD*)(v7 + 264);
	v10 = 0;
	if ((*(_BYTE*)(a1 + 117) & 2) != 0 || (v11 = **(_QWORD**)(a1 + 40), v9 + v8 <= v11))
	{
		v12 = v8;
	}
	else
	{
		v10 = 1;
		v12 = v9 >= v11 ? 0 : v11 - v9;
	}
	v13 = sub_140887D80(v7, a1, a1 + 128, *(_DWORD*)(a1 + 168), v9, v8, v12, &v15);
	if (v13)
	{
		*a3 = v15;
		*(_DWORD*)(a1 + 168) += v12;
		if (v10 || *(_DWORD*)(a1 + 168) == *(_DWORD*)(a1 + 152))
			sub_140885D10(a1, 0);
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 112i64);
	}
	else
	{
	LABEL_16:
		v13 = 0i64;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	return v13;
}

