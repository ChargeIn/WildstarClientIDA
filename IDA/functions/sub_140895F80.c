//----- (0000000140895F80) ----------------------------------------------------
__int64 __fastcall sub_140895F80(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // edi
	__int64 v4; // r8
	__int64 v5; // rbx
	__int64 v6; // rsi
	unsigned int* v7; // rcx
	unsigned int* v8; // rcx

	result = sub_140891180(a1);
	v3 = result;
	if ((_DWORD)result == 1)
	{
		v4 = *(_QWORD*)(a1 + 224);
		v5 = 0i64;
		v6 = 0i64;
		if ((*(_DWORD*)(a1 + 232) - (int)v4) / 104)
		{
			while (1)
			{
				v7 = *(unsigned int**)(104i64 * (unsigned int)v6 + v4 + 96);
				if (v7)
				{
					v3 = sub_140853B00(*v7);
					if (v3 != 1)
						break;
				}
				v4 = *(_QWORD*)(a1 + 224);
				v6 = (unsigned int)(v6 + 1);
				if ((unsigned int)v6 >= (unsigned int)((*(_QWORD*)(a1 + 232) - v4) / 104))
					return v3;
			}
			if ((_DWORD)v6)
			{
				do
				{
					v8 = *(unsigned int**)(v5 + *(_QWORD*)(a1 + 224) + 96);
					if (v8)
						sub_1408552B0(*v8);
					v5 += 104i64;
					--v6;
				} while (v6);
			}
			sub_140891570(a1);
		}
		return v3;
	}
	return result;
}

