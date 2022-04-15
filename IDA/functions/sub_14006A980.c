//----- (000000014006A980) ----------------------------------------------------
void __fastcall sub_14006A980(__int64 a1, int* a2, int a3)
{
	int v6; // r8d
	int v7; // edx
	int v8; // r15d
	int v9; // r12d
	int v10; // r11d
	int v11; // r14d
	int v12; // eax
	int v13; // eax
	int v14; // ebx

	sub_14006A7E0(a1, a2, a3);
	if (*a2 == 10)
	{
		v6 = a2[2];
		if (v6 != -1)
			sub_14006A3C0((__int64*)a1, a2 + 4, v6);
	}
	v7 = a2[4];
	if (v7 != a2[5])
	{
		v8 = -1;
		v9 = -1;
		if ((unsigned int)sub_14006A130(a1, v7) || (unsigned int)sub_14006A130(a1, v10))
		{
			if (*a2 == 10)
				v11 = -1;
			else
				v11 = sub_14006A030((__int64*)a1);
			*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 48);
			v12 = sub_14006BBF0(a1, (a3 << 6) | 0x4002u, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
			*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 48);
			v8 = v12;
			v13 = sub_14006BBF0(a1, (a3 << 6) | 0x800002u, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
			*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 48);
			v9 = v13;
			if (v11 != -1)
				sub_14006A3C0((__int64*)a1, (int*)(a1 + 56), v11);
		}
		v14 = *(_DWORD*)(a1 + 48);
		*(_DWORD*)(a1 + 52) = v14;
		sub_14006A230((__int64*)a1, a2[5], v14, a3, v8);
		sub_14006A230((__int64*)a1, a2[4], v14, a3, v9);
	}
	*((_QWORD*)a2 + 2) = -1i64;
	a2[2] = a3;
	*a2 = 12;
}
// 14006A9E9: variable 'v10' is possibly undefined

