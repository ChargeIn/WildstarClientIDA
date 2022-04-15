//----- (0000000140958650) ----------------------------------------------------
__int64 __fastcall sub_140958650(__int64 a1, int a2)
{
	__int64 result; // rax

	result = ((a2 + 0x1FFFF) & 0xFFFE0000) + 4096;
	if ((unsigned int)result < 0x41000)
		return 266240i64;
	return result;
}

