//----- (00000001401624A0) ----------------------------------------------------
__int64 __fastcall sub_1401624A0(__int64 a1, int a2, int* a3)
{
	int v7; // [rsp+20h] [rbp-28h]
	int v8; // [rsp+28h] [rbp-20h]
	int v9; // [rsp+50h] [rbp+8h] BYREF
	int v10; // [rsp+68h] [rbp+20h] BYREF

	if (*(int*)(a1 + 1068) >= 0 && !a2)
		*(_DWORD*)(a1 + 1068) = -1;
	if (*(int*)(a1 + 1080) >= 0)
	{
		v9 = -1;
		v10 = -1;
		if (sub_140161CD0(a1, a3, &v9, &v10))
		{
			if (*(_DWORD*)(a1 + 1080) == v9 && *(_DWORD*)(a1 + 1076) == v10)
			{
				v8 = a3[1];
				v7 = *a3;
				v9 = 0;
				sub_1400D4070(a1, 0x14u, (char*)a1, "ii>b", v7, v8, &v9);
				if (v9)
				{
					sub_1400D2550(a1, a2, a3);
					return 0i64;
				}
			}
		}
		*(_DWORD*)(a1 + 1080) = -1;
	}
	return sub_1400D2550(a1, a2, a3);
}

