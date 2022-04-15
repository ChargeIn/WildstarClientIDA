//----- (00000001408D2910) ----------------------------------------------------
__int64 __fastcall sub_1408D2910(__int64 a1, __int64 a2)
{
	int* v2; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int128 v6; // xmm0

	v2 = (int*)(a2 + 8);
	*(_QWORD*)a1 = off_1409B17D8;
	v4 = a1 + 8;
	if ((((unsigned __int8)v4 | (unsigned __int8)v2) & 0xF) != 0)
	{
		sub_1407DB590((int*)v4, v2, 0xA4ui64);
	}
	else
	{
		v5 = 1i64;
		do
		{
			v6 = *(_OWORD*)v2;
			v4 += 128i64;
			v2 += 32;
			*(_OWORD*)(v4 - 128) = v6;
			*(_OWORD*)(v4 - 112) = *((_OWORD*)v2 - 7);
			*(_OWORD*)(v4 - 96) = *((_OWORD*)v2 - 6);
			*(_OWORD*)(v4 - 80) = *((_OWORD*)v2 - 5);
			*(_OWORD*)(v4 - 64) = *((_OWORD*)v2 - 4);
			*(_OWORD*)(v4 - 48) = *((_OWORD*)v2 - 3);
			*(_OWORD*)(v4 - 32) = *((_OWORD*)v2 - 2);
			*(_OWORD*)(v4 - 16) = *((_OWORD*)v2 - 1);
			--v5;
		} while (v5);
		*(_OWORD*)v4 = *(_OWORD*)v2;
		*(_OWORD*)(v4 + 16) = *((_OWORD*)v2 + 1);
		*(_DWORD*)(v4 + 32) = v2[8];
	}
	*(_BYTE*)(a1 + 32) = 1;
	*(_BYTE*)(a1 + 52) = 1;
	*(_BYTE*)(a1 + 72) = 1;
	*(_BYTE*)(a1 + 100) = 1;
	*(_BYTE*)(a1 + 124) = 1;
	*(_BYTE*)(a1 + 136) = 1;
	*(_BYTE*)(a1 + 152) = 1;
	return a1;
}
// 1409B17D8: using guessed type __int64 (__fastcall *off_1409B17D8[6])();

