//----- (000000014063FBA0) ----------------------------------------------------
__int64 __fastcall sub_14063FBA0(__int64 a1)
{
	int* v1; // rdx
	__int64 result; // rax
	__int128 v3; // xmm0

	v1 = dword_140C4EEC0;
	if ((((unsigned __int8)a1 | (unsigned __int8)dword_140C4EEC0) & 0xF) != 0)
	{
		sub_1407DB590((int*)a1, dword_140C4EEC0, 0x46E0ui64);
		return 0i64;
	}
	else
	{
		result = 141i64;
		do
		{
			v3 = *(_OWORD*)v1;
			a1 += 128i64;
			v1 += 32;
			*(_OWORD*)(a1 - 128) = v3;
			*(_OWORD*)(a1 - 112) = *((_OWORD*)v1 - 7);
			*(_OWORD*)(a1 - 96) = *((_OWORD*)v1 - 6);
			*(_OWORD*)(a1 - 80) = *((_OWORD*)v1 - 5);
			*(_OWORD*)(a1 - 64) = *((_OWORD*)v1 - 4);
			*(_OWORD*)(a1 - 48) = *((_OWORD*)v1 - 3);
			*(_OWORD*)(a1 - 32) = *((_OWORD*)v1 - 2);
			*(_OWORD*)(a1 - 16) = *((_OWORD*)v1 - 1);
			--result;
		} while (result);
		*(_OWORD*)a1 = *(_OWORD*)v1;
		*(_OWORD*)(a1 + 16) = *((_OWORD*)v1 + 1);
		*(_OWORD*)(a1 + 32) = *((_OWORD*)v1 + 2);
		*(_OWORD*)(a1 + 48) = *((_OWORD*)v1 + 3);
		*(_OWORD*)(a1 + 64) = *((_OWORD*)v1 + 4);
		*(_OWORD*)(a1 + 80) = *((_OWORD*)v1 + 5);
	}
	return result;
}
// 140C4EEC0: using guessed type int dword_140C4EEC0[4];

