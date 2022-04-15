//----- (00000001407E1088) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407E1088(int* a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
	unsigned __int64 v8; // rdi

	if (a2 && a3)
	{
		if (a4)
		{
			sub_1407DDFA8(a4);
			v8 = sub_1407E0EF8(a1, a2, a3, a4);
			sub_1407DE044(a4);
			return v8;
		}
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	}
	return 0i64;
}

