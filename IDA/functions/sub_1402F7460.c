//----- (00000001402F7460) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402F7460(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	unsigned int v4; // edi
	__int64 v6; // rax
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v4 = -1;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v8, 0i64);
	if ((_DWORD)v3)
	{
		v6 = a1[8];
		if ((unsigned int)v3 < *(_DWORD*)(v6 + 400))
			v4 = *(unsigned __int16*)(*(_QWORD*)(v6 + 408) + 2 * v3);
	}
	else
	{
		v4 = 0;
	}
	sub_140300DD0((__int64)a1, 8u);
	return a1[103] + ((unsigned __int64)v4 << 6);
}
// 1402F7460: using guessed type int var_18[6];

