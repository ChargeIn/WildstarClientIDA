//----- (000000014051CA10) ----------------------------------------------------
void __fastcall sub_14051CA10(__int64* a1)
{
	__int64 v2; // rax

	if (a1[1])
	{
		v2 = a1[2];
		if (v2)
		{
			if (*(_DWORD*)(v2 + 96))
			{
				*(_DWORD*)(v2 + 96) = 0;
				(*(void(__fastcall**)(__int64*))(*a1 + 72))(a1);
				if (sub_1405257A0(a1[1]) != 0.0)
					*(_DWORD*)(a1[1] + 1480) = dword_140C636A8;
			}
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

