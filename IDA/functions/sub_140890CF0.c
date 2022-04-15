//----- (0000000140890CF0) ----------------------------------------------------
__int64 __fastcall sub_140890CF0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rdx
	__int64 result; // rax
	__int64 v5; // rdx

	v1 = *(_QWORD*)(a1 + 216);
	if (v1)
	{
		v3 = *(_QWORD*)v1;
		if (*(_QWORD*)v1)
		{
			*(_QWORD*)(v1 + 8) = v3;
			result = sub_140881720(dword_140C10F20, v3);
			*(_QWORD*)v1 = 0i64;
			*(_QWORD*)(v1 + 8) = 0i64;
			*(_DWORD*)(v1 + 16) = 0;
		}
		v5 = *(_QWORD*)(a1 + 216);
		if (v5)
			result = sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)(a1 + 216) = 0i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

