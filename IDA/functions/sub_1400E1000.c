//----- (00000001400E1000) ----------------------------------------------------
void __fastcall sub_1400E1000(__int64 a1, __int64 a2, __int64* a3)
{
	__int64** v3; // r14
	__int64** v4; // rsi
	__int64* v6; // rbx
	__int64** v7; // rdi
	__int64* v8; // rax
	__int64* v9; // rdx
	__int64* v10; // rcx

	v3 = *(__int64***)(a1 + 8);
	v4 = *(__int64***)(a2 + 8);
	v6 = *v3;
	v7 = (__int64**)*v4;
	if (*v3 == (__int64*)v3)
	{
	LABEL_9:
		if (v7 != v4 && v3 != v4)
		{
			*v4[1] = (__int64)v3;
			*v7[1] = (__int64)v4;
			*v3[1] = (__int64)v7;
			v10 = v3[1];
			v3[1] = v4[1];
			v4[1] = v7[1];
			v7[1] = v10;
		}
	}
	else
	{
		while (v7 != v4)
		{
			if (sub_1400C81F0(a3, (__int64)v7[2], v6[2]))
			{
				v8 = *v7;
				if (v6 != *v7)
				{
					*(_QWORD*)v8[1] = v6;
					*v7[1] = (__int64)v8;
					*(_QWORD*)v6[1] = v7;
					v9 = (__int64*)v6[1];
					v6[1] = v8[1];
					v8[1] = (__int64)v7[1];
					v7[1] = v9;
				}
				v7 = (__int64**)v8;
			}
			else
			{
				v6 = (__int64*)*v6;
			}
			if (v6 == (__int64*)v3)
				goto LABEL_9;
		}
	}
}

