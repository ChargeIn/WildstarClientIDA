//----- (0000000140467ED0) ----------------------------------------------------
__int64 __fastcall sub_140467ED0(__int64 a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // rax

	v2 = 0;
	v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
	if (v3 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3))
		return v2;
	v4 = *(_QWORD*)(a1 + 3264);
	if (!v4 || (result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 216i64))(v4), (v2 = result) == 0))
	{
		v6 = *(_QWORD*)(a1 + 224);
		if (v6)
		{
			if (*(_DWORD*)(v6 + 24) == 1)
				return 8;
		}
		return v2;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

