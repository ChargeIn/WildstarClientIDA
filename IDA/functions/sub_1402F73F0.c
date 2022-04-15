//----- (00000001402F73F0) ----------------------------------------------------
__int64 __fastcall sub_1402F73F0(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	unsigned int v4; // ebx
	unsigned int v6; // r8d
	__int64 v7; // rax
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v4 = -1;
	v9[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 1400))(a1, v9);
	v6 = 0;
	if ((_DWORD)v3)
	{
		v7 = a1[8];
		if ((unsigned int)v3 < *(_DWORD*)(v7 + 400))
			v4 = *(unsigned __int16*)(*(_QWORD*)(v7 + 408) + 2 * v3);
	}
	else
	{
		v4 = 0;
	}
	LOBYTE(v6) = v4 < *(_DWORD*)(a1[8] + 384);
	return v6;
}
// 1402F73F0: using guessed type int var_18[6];

