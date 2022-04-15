//----- (00000001403D8090) ----------------------------------------------------
void __fastcall sub_1403D8090(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rsi
	unsigned __int64 v6; // r8
	int* v7; // rcx
	_QWORD* v8; // rdx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 16i64);
		v5 = v4;
		if ((int*)*a1 != v4)
		{
			v6 = 0i64;
			if (a1[1])
			{
				v7 = v4;
				do
				{
					if (v7)
					{
						v8 = (_QWORD*)(*a1 + (char*)v7 - (char*)v4);
						*(_QWORD*)v7 = *v8;
						*((_QWORD*)v7 + 1) = v8[1];
					}
					++v6;
					v7 += 4;
				} while (v6 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v5;
		}
		a1[1] = a2;
	}
}

