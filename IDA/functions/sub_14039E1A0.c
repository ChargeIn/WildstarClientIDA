//----- (000000014039E1A0) ----------------------------------------------------
_BOOL8 __fastcall sub_14039E1A0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	_BOOL8 result; // rax

	v1 = *(_QWORD*)(a1 + 120);
	result = 0;
	if (v1)
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v1 + 192));
		v3 = v2;
		if (v2)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
			{
				v4 = *(_QWORD*)(v3 + 184);
				if (v4)
				{
					if (*(_DWORD*)(v4 + 4) == 7)
						return 1;
				}
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

