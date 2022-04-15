//----- (00000001404697A0) ----------------------------------------------------
void __fastcall sub_1404697A0(__int64 a1, int a2)
{
	__int64 v3; // rdi
	__int64 v4; // rbx
	unsigned int v5; // r9d
	__int64 v6; // r10
	__int64 v7; // rbx
	unsigned int v8; // eax

	if (a2 != *(_DWORD*)(a1 + 5632))
	{
		while (1)
		{
			*(_DWORD*)(a1 + 5632) = a2;
			if (!a2)
				break;
			v3 = sub_140561C30(qword_140C65B70, a2);
			if (v3)
			{
				v4 = *(_QWORD*)(a1 + 5512);
				if (v4)
				{
					sub_1400518A0(qword_140C63628, 38, 2, 0);
					sub_14053DA10(v3);
					(*(void(__fastcall**)(__int64, _QWORD))(v6 + 80))(v4, v5);
				}
				return;
			}
			a2 = 0;
			if (!*(_DWORD*)(a1 + 5632))
				return;
		}
		if (!*(_DWORD*)(a1 + 5668))
		{
			*(_DWORD*)(a1 + 5664) = 0;
			sub_140195D70(a1 + 5672);
		}
		v7 = *(_QWORD*)(a1 + 5512);
		if (v7)
		{
			v8 = sub_1400518A0(qword_140C63628, 38, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 80i64))(v7, v8);
		}
	}
}
// 14046983B: variable 'v6' is possibly undefined
// 140469828: variable 'v5' is possibly undefined
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65B70: using guessed type __int64 qword_140C65B70;

