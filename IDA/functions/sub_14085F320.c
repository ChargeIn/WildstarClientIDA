//----- (000000014085F320) ----------------------------------------------------
__int64 __fastcall sub_14085F320(__int64 a1, float a2, __int64* a3, char a4)
{
	unsigned __int64 v5; // rdi
	int v6; // r11d
	__int64 v7; // rcx
	__int64 v8; // r10
	unsigned __int8 v9; // si
	unsigned __int64 i; // rax
	__int64 result; // rax
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rdi
	__int64 v14; // rcx
	unsigned __int64 v15; // rcx
	__int128 v16; // [rsp+20h] [rbp-18h] BYREF

	if (a4)
	{
		v5 = *(_QWORD*)(a1 + 48);
		v6 = *((_DWORD*)a3 + 2);
		v7 = *(_QWORD*)(a1 + 56);
		v8 = *a3;
		v9 = BYTE8(v16) & 0xFC | ((v6 & 1) == 0);
		for (i = v5; i != v7; i += 24i64)
		{
			if (*(_QWORD*)i == v8 && ((v9 ^ *(_BYTE*)(i + 8)) & 1) == 0)
				break;
		}
		if (i != v7)
		{
			result = i + 16;
			if (result)
			{
				if ((v6 & 1) != 0)
					return result;
				if (v5 != v7)
				{
					do
					{
						if (*(_QWORD*)v5 == v8 && ((v9 ^ *(_BYTE*)(v5 + 8)) & 1) == 0)
							break;
						v5 += 24i64;
					} while (v5 != v7);
					if (v5 != v7)
					{
						v12 = v7 - 24;
						if (v5 < v12)
							qmemcpy((void*)v5, (const void*)(v5 + 24), 24 * ((v12 - v5 - 1) / 0x18 + 1));
						*(_QWORD*)(a1 + 56) -= 24i64;
					}
				}
			}
		}
	}
	if (a2 == 1.0 && (!a4 || (a3[1] & 1) != 0))
	{
		v13 = *(_QWORD*)(a1 + 48);
		v14 = *(_QWORD*)(a1 + 56);
		v16 = *(_OWORD*)a3;
		if (v13 != v14)
		{
			do
			{
				if (*(_QWORD*)v13 == (_QWORD)v16 && ((BYTE8(v16) ^ *(_BYTE*)(v13 + 8)) & 1) == 0)
					break;
				v13 += 24i64;
			} while (v13 != v14);
			if (v13 != v14)
			{
				v15 = v14 - 24;
				if (v13 < v15)
					qmemcpy((void*)v13, (const void*)(v13 + 24), 24 * ((v15 - v13 - 1) / 0x18 + 1));
				*(_QWORD*)(a1 + 56) -= 24i64;
			}
		}
	}
	else
	{
		v16 = *(_OWORD*)a3;
		sub_14084F8A0((__int64*)(a1 + 48), &v16, a2);
	}
	return sub_14085D440(a1);
}

