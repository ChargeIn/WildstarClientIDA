//----- (00000001408F4880) ----------------------------------------------------
__int64 __fastcall sub_1408F4880(_DWORD* a1, __int64* a2, __m128* a3)
{
	switch (*a1)
	{
	case 1:
		sub_1408F6070((__int64)a1, (__int64)a2, a3);
		break;
	case 2:
		sub_1408F6260((__int64)a1, a2, a3);
		return sub_1408F5A80((__int64)a1);
	case 4:
		sub_1408F64D0((__int64)a1, (__int64)a2, a3);
		return sub_1408F5A80((__int64)a1);
	}
	return sub_1408F5A80((__int64)a1);
}

