//----- (000000014039E000) ----------------------------------------------------
__int64 __fastcall sub_14039E000(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rax
	__int64 v3; // rbx

	result = *(_QWORD*)(a1 + 120);
	if (result)
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(result + 192));
		v3 = v2;
		if (v2 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
			return *(_QWORD*)(v3 + 184);
		else
			return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
