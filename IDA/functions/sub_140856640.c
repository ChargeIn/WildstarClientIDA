//----- (0000000140856640) ----------------------------------------------------
__int64 __fastcall sub_140856640(__int64 a1, int a2, __int64 a3, _DWORD* a4)
{
	__int64 v8; // rdx
	__int64 result; // rax

	if ((*(_BYTE*)(a1 + 16) & 0x7C) == 4)
	{
		v8 = *(_QWORD*)(a1 + 24);
		if (v8)
		{
			sub_140881720(dword_140C10F20, v8);
			*(_QWORD*)(a1 + 24) = 0i64;
		}
	}
	*(_DWORD*)a1 = 0;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) &= 0xFFFFF800;
	*(_DWORD*)(a1 + 32) = a2;
	*(_QWORD*)(a1 + 24) = a3;
	*(_DWORD*)a1 = *a4;
	*(_DWORD*)(a1 + 4) = a4[1];
	*(_DWORD*)(a1 + 8) = a4[2];
	*(_DWORD*)(a1 + 12) = a4[3];
	result = (unsigned int)a4[4];
	*(_DWORD*)(a1 + 16) = result;
	*(_DWORD*)(a1 + 16) |= 0x80u;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

