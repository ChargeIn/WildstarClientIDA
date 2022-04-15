//----- (00000001405DE890) ----------------------------------------------------
void __fastcall sub_1405DE890(__int64 a1, int a2)
{
	unsigned __int64 v3; // rsi
	_QWORD* v4; // rbx
	__int64 v5; // rdx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // r8
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	void(__fastcall * v11)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]
	int v13; // [rsp+58h] [rbp+10h] BYREF

	v13 = a2;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 224))(&v13);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 216) + 8 * (v3 % *(_QWORD*)(a1 + 208)));
	if (v4)
	{
		while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 232))(&v13, v4 + 2))
		{
			v4 = (_QWORD*)v4[1];
			if (!v4)
				return;
		}
		if (v4 != (_QWORD*)-24i64)
		{
			v5 = v4[3];
			if (*(int*)(v5 + 40) < 1)
			{
				*(_DWORD*)(v5 + 40) = 1;
				v6 = *(_QWORD**)(v5 + 112);
				if (v6)
					*v6 = *(_QWORD*)(v5 + 120);
				v7 = *(_QWORD*)(v5 + 120);
				v8 = v5 + 120;
				if (v7)
					*(_QWORD*)(v7 + 112) = *(_QWORD*)(v5 + 112);
				*(_QWORD*)v8 = 0i64;
				*(_QWORD*)(v5 + 112) = a1 + 616;
				*(_QWORD*)v8 = *(_QWORD*)(a1 + 616);
				*(_QWORD*)(a1 + 616) = v5;
				if (*(_QWORD*)v8)
					*(_QWORD*)(*(_QWORD*)v8 + 112i64) = v8;
				if (!*(_QWORD*)(a1 + 24))
				{
					v9 = 0;
					v12 = 0i64;
					v11 = sub_1405DF820;
					v10 = a1;
					sub_140195960(a1 + 8, 30000, (__int64)&v9, 4);
				}
			}
		}
	}
}

