//----- (000000014062E3E0) ----------------------------------------------------
void __fastcall sub_14062E3E0(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rsi
	unsigned __int64 v6; // r8
	int* v7; // rcx
	__int64 v8; // rdx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 48i64);
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
						v8 = *a1 + (char*)v7 - (char*)v4;
						*v7 = *(_DWORD*)v8;
						*((_OWORD*)v7 + 1) = *(_OWORD*)(v8 + 16);
						*((_OWORD*)v7 + 2) = *(_OWORD*)(v8 + 32);
					}
					++v6;
					v7 += 12;
				} while (v6 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v5;
		}
		a1[1] = a2;
	}
}

