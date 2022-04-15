//----- (000000014094C6A0) ----------------------------------------------------
__int64 sub_14094C6A0()
{
	_BYTE* v0; // rbx
	int i; // edi
	__int64 result; // rax

	v0 = byte_140C62000;
	for (i = 7; i >= 0; --i)
	{
		result = sub_14001C280((__int64)v0);
		v0 += 128;
	}
	return result;
}
// 140C62000: using guessed type _BYTE byte_140C62000[80];

