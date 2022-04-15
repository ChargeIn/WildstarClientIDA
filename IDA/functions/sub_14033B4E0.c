//----- (000000014033B4E0) ----------------------------------------------------
__int64 __fastcall sub_14033B4E0(__int64* a1, __int64* a2)
{
	__int64* v2; // rbx
	__int64 result; // rax

	v2 = a1 + 40;
	a2[2] = a1[64];
	a2[3] = a1[65];
	*a2 = sub_140338940(a1 + 40);
	result = sub_140338830(v2);
	a2[1] = result;
	return result;
}

