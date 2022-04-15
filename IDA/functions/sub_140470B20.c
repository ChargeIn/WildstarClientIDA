//----- (0000000140470B20) ----------------------------------------------------
void __fastcall sub_140470B20(__int64 a1)
{
	__int64 v2; // rax
	_BOOL8 v3; // rdx
	__int64 v4; // rcx

	v3 = 0;
	if (*(_DWORD*)(a1 + 14052))
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
		if (v2)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
				v3 = 1;
		}
	}
	v4 = *(_QWORD*)(a1 + 3264);
	if (v4)
		(*(void(__fastcall**)(__int64, _BOOL8))(*(_QWORD*)v4 + 192i64))(v4, v3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

