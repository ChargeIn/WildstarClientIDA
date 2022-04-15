//----- (0000000140182AE0) ----------------------------------------------------
__int64 __fastcall sub_140182AE0(__int64 a1)
{
	_DWORD* v2; // rax
	__int64 v3; // rax
	int v4; // eax
	int v5; // ecx
	float v6; // xmm1_4
	__int64 v7; // rax
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v2 = sub_1400CB0E0(a1, v9, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v2;
		*(_DWORD*)(a1 + 400) = v2[1];
		*(_DWORD*)(a1 + 404) = v2[2];
		*(_DWORD*)(a1 + 408) = v2[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v3 = a1;
		do
		{
			if (!*(_DWORD*)(v3 + 392))
				break;
			*(_DWORD*)(v3 + 392) = 0;
			v3 = *(_QWORD*)(v3 + 16);
		} while (v3);
	}
	v4 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	v5 = *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400);
	if (*(_DWORD*)(a1 + 1080) != v4 || *(_DWORD*)(a1 + 1084) != v5)
	{
		*(_DWORD*)(a1 + 1080) = v4;
		*(_DWORD*)(a1 + 1084) = v5;
		v6 = (float)v4;
		v7 = *(_QWORD*)a1;
		*(float*)(a1 + 1088) = v6 / (float)v5;
		(*(void(__fastcall**)(__int64))(v7 + 704))(a1);
	}
	return 0i64;
}
// 140182AE0: using guessed type int var_18[6];

