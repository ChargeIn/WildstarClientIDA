//----- (0000000140170510) ----------------------------------------------------
__int64 __fastcall sub_140170510(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int v5; // esi
	int v6; // edi
	_DWORD* v7; // r8
	int v8; // edx
	int v9; // eax
	int v11; // [rsp+20h] [rbp-28h]
	int v12; // [rsp+28h] [rbp-20h]
	int v13; // [rsp+60h] [rbp+18h] BYREF

	if (!sub_140001D30(a1, a2))
		return sub_1400D23B0(a1, a2);
	v4 = *(int*)(a1 + 1380);
	v5 = *(_DWORD*)(a1 + 904) - *a2;
	v6 = *(_DWORD*)(a1 + 908) - a2[1];
	if ((int)v4 >= 0)
	{
		if ((int)v4 < *(_DWORD*)(a1 + 1400))
		{
			v7 = *(_DWORD**)(*(_QWORD*)(a1 + 1392) + 8 * v4);
			v8 = *(_DWORD*)(a1 + 1384) - v5;
			v9 = v7[2];
			if (v8 >= v9)
			{
				if (v8 > v7[3])
					v8 = v7[3];
				v9 = v8;
			}
			v7[1] = v9;
			sub_14016E890(a1);
		}
		else
		{
			*(_DWORD*)(a1 + 1380) = -1;
		}
	}
	if (*(_DWORD*)(a1 + 1572) == -1)
		return sub_1400D23B0(a1, a2);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64))
		return sub_1400D23B0(a1, a2);
	if (v5 * v5 + v6 * v6 < 49)
		return sub_1400D23B0(a1, a2);
	if ((unsigned int)sub_14018CDF0() - *(_DWORD*)(a1 + 932) <= 0x7D)
		return sub_1400D23B0(a1, a2);
	v12 = *(_DWORD*)(a1 + 908);
	v11 = *(_DWORD*)(a1 + 904);
	v13 = 0;
	sub_1400D4070(a1, 0x13u, (char*)a1, "ii>b", v11, v12, &v13);
	if (!v13)
		return sub_1400D23B0(a1, a2);
	sub_1400D23B0(a1, a2);
	return 0i64;
}

