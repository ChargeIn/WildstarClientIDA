//----- (00000001401448A0) ----------------------------------------------------
void __fastcall sub_1401448A0(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rdx
	unsigned __int64 v6; // r8
	int* v7; // rsi
	unsigned __int64 v8; // rax
	int* v9; // rcx
	__int64 v10; // rcx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 32i64);
		v6 = 0i64;
		v7 = v4;
		v8 = a1[1];
		if (v8 < a2)
		{
			v9 = &v7[8 * v8 + 5];
			v5 = (int*)(a2 - v8);
			do
			{
				if (v9 != (int*)20)
				{
					*(v9 - 1) = 0;
					*v9 = -1;
				}
				v9 += 8;
				v5 = (int*)((char*)v5 - 1);
			} while (v5);
		}
		if ((int*)*a1 != v7)
		{
			if (a1[1])
			{
				v5 = v7;
				do
				{
					if (v5)
					{
						v10 = *a1 + (char*)v5 - (char*)v7;
						*(_OWORD*)v5 = *(_OWORD*)v10;
						v5[4] = *(_DWORD*)(v10 + 16);
						v5[5] = *(_DWORD*)(v10 + 20);
					}
					++v6;
					v5 += 8;
				} while (v6 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*, unsigned __int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5, v6);
			*a1 = (__int64)v7;
		}
		a1[1] = a2;
	}
}
// 14014495B: variable 'v5' is possibly undefined

