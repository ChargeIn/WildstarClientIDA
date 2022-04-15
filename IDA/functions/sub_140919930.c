//----- (0000000140919930) ----------------------------------------------------
__int64 __fastcall sub_140919930(_WORD* a1)
{
	__int64 result; // rax

	for (result = 0i64; *a1; result = (unsigned int)(result + 1))
		++a1;
	return result;
}

