//----- (000000014084B960) ----------------------------------------------------
unsigned __int64 __fastcall sub_14084B960(unsigned int a1, float a2)
{
	unsigned __int64 result; // rax

	result = (unsigned __int64)a1 << 7;
	*(float*)&byte_140C62000[result + 36] = a2;
	byte_140C62000[result + 117] = 1;
	return result;
}
// 140C62000: using guessed type _BYTE byte_140C62000[80];

