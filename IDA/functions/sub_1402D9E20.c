//----- (00000001402D9E20) ----------------------------------------------------
__int64 __fastcall sub_1402D9E20(__int64 a1, __int16 a2)
{
	__int64 result; // rax

	if ((a2 & 1) != 0)
		*(_DWORD*)(a1 + 64) = 0;
	if ((a2 & 2) != 0)
		*(_DWORD*)(a1 + 68) = dword_140C79C94;
	if ((a2 & 4) != 0)
		*(_OWORD*)a1 = xmmword_140C77870;
	if ((a2 & 8) != 0)
	{
		result = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	if ((a2 & 0x10) != 0)
	{
		result = 0i64;
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	if ((a2 & 0x20) != 0)
		*(_OWORD*)(a1 + 48) = xmmword_140C777F0;
	if ((a2 & 0x40) != 0)
		*(_DWORD*)(a1 + 72) = 1065353216;
	if ((a2 & 0x80u) != 0)
		*(_DWORD*)(a1 + 76) = 0;
	if ((a2 & 0x100) != 0)
	{
		result = 0i64;
		*(_QWORD*)(a1 + 80) = 0i64;
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	if ((a2 & 0x200) != 0)
	{
		result = 0i64;
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	if ((a2 & 0x400) != 0)
		*(_DWORD*)(a1 + 112) = 0;
	if ((a2 & 0x800) != 0)
		*(_DWORD*)(a1 + 116) = 0;
	if ((a2 & 0x1000) != 0)
	{
		result = 0i64;
		*(_QWORD*)(a1 + 120) = 0i64;
		*(_QWORD*)(a1 + 128) = 0i64;
	}
	return result;
}
// 140C777F0: using guessed type __int128 xmmword_140C777F0;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C79C94: using guessed type int dword_140C79C94;

