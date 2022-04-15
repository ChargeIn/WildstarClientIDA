//----- (00000001402877C0) ----------------------------------------------------
void __fastcall sub_1402877C0(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rsi
	unsigned __int64 v6; // rdx
	_OWORD* v7; // rcx
	__int64 v8; // r8
	_OWORD* v9; // rax

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 32i64);
		v5 = v4;
		if ((int*)*a1 != v4)
		{
			v6 = 0i64;
			if (a1[1])
			{
				v7 = v4;
				v8 = -(__int64)v4;
				do
				{
					if (v7)
					{
						v9 = (_OWORD*)((char*)v7 + v8 + *a1);
						*v7 = *v9;
						v7[1] = v9[1];
					}
					++v6;
					v7 += 2;
				} while (v6 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v5;
		}
		a1[1] = a2;
	}
}

