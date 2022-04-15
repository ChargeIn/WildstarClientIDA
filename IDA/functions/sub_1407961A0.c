//----- (00000001407961A0) ----------------------------------------------------
__int8* __fastcall sub_1407961A0(__int64 a1, unsigned __int64* a2)
{
	unsigned __int64* v2; // rbx
	int v4; // eax
	__int8* v6; // rdi
	__int64 v7; // rdi

	v2 = a2;
	if (*(char*)a2 == byte_140C39EE4)
	{
		do
		{
			v4 = *((char*)v2 + 1);
			v2 = (unsigned __int64*)((char*)v2 + 1);
		} while (v4 == byte_140C39EE4);
	}
	if (!*(_BYTE*)v2)
		return 0i64;
	v6 = sub_1407DE0B4((__int64)v2, byte_140C39E34);
	if (!v6)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)v2 + v7));
		v6 = (char*)v2 + v7;
	}
	sub_140058710(a1, v2, v6 - (__int8*)v2);
	return v6;
}
// 140C39E34: using guessed type char byte_140C39E34;
// 140C39EE4: using guessed type char byte_140C39EE4;

