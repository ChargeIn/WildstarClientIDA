//----- (00000001404DA9D0) ----------------------------------------------------
void __fastcall sub_1404DA9D0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // ecx
	unsigned int v6; // ecx
	__int64 v7; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 120);
	if (v1)
	{
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v1 + 192));
		if (!v3
			|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3)
			|| *(_DWORD*)(*(_QWORD*)(a1 + 120) + 5160i64) != 63)
		{
			v4 = *(_QWORD*)(a1 + 120);
			if (*(_DWORD*)(v4 + 5160) == 63
				|| ((v5 = *(_DWORD*)(v4 + 5160), (v5 & 4) != 0) || *(_QWORD*)(v4 + 5032))
				&& ((v5 & 0x10) != 0 || *(_QWORD*)(v4 + 5104))
				&& (v5 & 8) != 0
				&& (v5 & 0x20) != 0)
			{
				v6 = *(_DWORD*)(v4 + 460);
				if (!v6
					|| (v7 = sub_1401FDBE0(v6)) == 0
					|| !*(_DWORD*)(v7 + 44)
					|| *(_DWORD*)(*(_QWORD*)(a1 + 120) + 5160i64) != 63)
				{
					v8 = 0;
					v8 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 5160i64) != 63;
					sub_1403F4900(a1, 0x177u, (__int64)&v8);
					sub_140470650(*(_QWORD*)(a1 + 120), v8, 0);
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

