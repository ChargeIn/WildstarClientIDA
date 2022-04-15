//----- (0000000140641520) ----------------------------------------------------
__int64 __fastcall sub_140641520(__int64 a1, __int64 a2, float a3)
{
	__int64 v3; // rax
	__int64 v5; // rax
	__int128 v6; // xmm0
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 120);
	if (v3)
		sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 192));
	sub_14062B9F0((__m128**)(a1 + 29088), a2, a3);
	v5 = *(_QWORD*)(a1 + 29096);
	if (!v5)
		v5 = *(_QWORD*)(a1 + 29088);
	v6 = *(_OWORD*)(v5 + 64);
	result = 0i64;
	*(_OWORD*)(a1 + 29280) = v6;
	return result;
}
// 140641582: variable 'a2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

