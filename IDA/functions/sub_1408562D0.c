//----- (00000001408562D0) ----------------------------------------------------
__int64 __fastcall sub_1408562D0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx

	result = *(_DWORD*)(a1 + 16) & 0x7C;
	if ((*(_BYTE*)(a1 + 16) & 0x7C) == 4)
	{
		v3 = *(_QWORD*)(a1 + 24);
		if (v3)
		{
			result = sub_140881720(dword_140C10F20, v3);
			*(_QWORD*)(a1 + 24) = 0i64;
		}
	}
	*(_DWORD*)(a1 + 16) &= 0xFFFFF800;
	*(_DWORD*)a1 = 0;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) &= ~0x80u;
	*(_QWORD*)(a1 + 24) = 0i64;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

