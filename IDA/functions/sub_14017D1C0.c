//----- (000000014017D1C0) ----------------------------------------------------
__int64 __fastcall sub_14017D1C0(__int64 a1)
{
	_DWORD* v2; // rax
	__int64 v3; // rax
	int v4; // eax
	int v5; // ecx
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v2 = sub_1400CB0E0(a1, v7, a1 + 64);
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
	if (*(_DWORD*)(a1 + 1048) != v4 || *(_DWORD*)(a1 + 1052) != v5)
	{
		*(_DWORD*)(a1 + 1048) = v4;
		*(_DWORD*)(a1 + 1052) = v5;
		*(float*)(a1 + 1056) = (float)v4 / (float)v5;
		sub_1401807E0(a1);
	}
	return 0i64;
}
// 14017D1C0: using guessed type int var_18[6];

