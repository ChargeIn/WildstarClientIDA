//----- (000000014071FED0) ----------------------------------------------------
__int64 __fastcall sub_14071FED0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rcx

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 376));
	if (v2)
	{
		v3 = *(_DWORD*)(v2 + 4920);
		if (v3)
			*(_DWORD*)(v2 + 4920) = v3 - 1;
		v4 = *(_QWORD*)(v2 + 5864);
		if (v4)
			(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)v4 + 392i64))(v4, *(_DWORD*)(v2 + 4920) != 0);
	}
	return sub_14071A150(a1);
}
// 140C65898: using guessed type __int64 qword_140C65898;

