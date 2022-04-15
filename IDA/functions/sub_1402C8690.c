//----- (00000001402C8690) ----------------------------------------------------
__int64 __fastcall sub_1402C8690(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int128 v5; // xmm0
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int128 v8; // xmm0

	v2 = a1 + 128;
	*(_OWORD*)a1 = *(_OWORD*)a2;
	*(_OWORD*)(a1 + 16) = *(_OWORD*)(a2 + 16);
	*(_OWORD*)(a1 + 32) = *(_OWORD*)(a2 + 32);
	*(_OWORD*)(a1 + 48) = *(_OWORD*)(a2 + 48);
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a2 + 64);
	*(_OWORD*)(a1 + 80) = *(_OWORD*)(a2 + 80);
	*(_OWORD*)(a1 + 96) = *(_OWORD*)(a2 + 96);
	v5 = *(_OWORD*)(a2 + 112);
	v6 = a2 - (a1 + 128);
	*(_OWORD*)(a1 + 112) = v5;
	v7 = 6i64;
	do
	{
		v8 = *(_OWORD*)(v6 + v2 + 128);
		v2 += 16i64;
		*(_OWORD*)(v2 - 16) = v8;
		--v7;
	} while (v7);
	*(_QWORD*)(a1 + 224) = *(_QWORD*)(a2 + 224);
	sub_1402C8730(a1 + 240, a2 + 240);
	return a1;
}

