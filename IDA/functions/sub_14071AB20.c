//----- (000000014071AB20) ----------------------------------------------------
__int64 __fastcall sub_14071AB20(__int64 a1, int a2)
{
	_QWORD* v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	_DWORD* v7; // rcx
	bool v8; // zf

	v3 = *(_QWORD**)(a1 + 520);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 528);
	v5 = *(_QWORD*)(a1 + 528);
	if (v5)
		*(_QWORD*)(v5 + 520) = *(_QWORD*)(a1 + 520);
	*(_QWORD*)(a1 + 520) = 0i64;
	*(_QWORD*)(a1 + 528) = 0i64;
	sub_140195D70(a1 + 432);
	if (*(_DWORD*)(a1 + 420))
	{
		*(_DWORD*)(a1 + 420) = 0;
		if (!a2)
		{
			v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 376));
			if (v6)
			{
				if (*(_DWORD*)(a1 + 400) == 4)
				{
					v7 = *(_DWORD**)(v6 + 5600);
				}
				else
				{
					if (*(_DWORD*)(a1 + 400) != 5)
						goto LABEL_20;
					v7 = *(_DWORD**)(v6 + 5608);
				}
				if (v7)
				{
					v8 = v7[106] == 2;
					v7[105] = 1;
					if (!v8)
					{
						if (v7[126] && !v7[127])
						{
							sub_14071A6E0((__int64)v7, 1, 1);
							return sub_14071A150(a1);
						}
						if (v7[99])
						{
							sub_14071A6E0((__int64)v7, 2, 1);
							return sub_14071A150(a1);
						}
					}
					(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v7 + 80i64))(v7, 0i64);
					return sub_14071A150(a1);
				}
			LABEL_20:
				sub_14046C8E0(v6, *(_DWORD*)(a1 + 400), 0, 0, 1065353216, 0, 1, 1);
			}
		}
	}
	return sub_14071A150(a1);
}
// 140C65898: using guessed type __int64 qword_140C65898;

