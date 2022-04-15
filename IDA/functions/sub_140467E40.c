//----- (0000000140467E40) ----------------------------------------------------
__int64 __fastcall sub_140467E40(__int64 a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rax
	__int64* v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rax

	v2 = 0;
	v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
	if (!v3 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3))
	{
		v4 = *(__int64**)(a1 + 3264);
		if (!v4
			|| ((v5 = *v4, *(_DWORD*)(a1 + 5160) != 63)
				? (v6 = (*(__int64 (**)(void))(v5 + 216))())
				: (v6 = (*(__int64 (**)(void))(v5 + 208))()),
				(v2 = v6) == 0))
		{
			v7 = *(_QWORD*)(a1 + 224);
			if (v7 && *(_DWORD*)(v7 + 24) == 1)
				return 8;
		}
	}
	return v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;

