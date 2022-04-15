//----- (00000001405DA480) ----------------------------------------------------
void __fastcall sub_1405DA480(__int64 a1)
{
	__int64 v2; // rax
	int v3; // eax
	unsigned __int64 v4; // rcx

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	if (v2)
	{
		v3 = *(_DWORD*)(v2 + 128);
		if (v3 == 20 || v3 == 23)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
			if (*(_DWORD*)(a1 + 344))
				sub_1405A71B0(v4, *(_DWORD*)(a1 + 336), *(_DWORD*)(a1 + 340));
		}
	}
}
// 1405DA4D2: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

