//----- (00000001405C6000) ----------------------------------------------------
__int16* __fastcall sub_1405C6000(__int64 a1)
{
	__int64 v1; // rcx
	__int64 v2; // rcx

	if (!(_DWORD)a1)
		return sub_14034BDD0(a1, 229250);
	v1 = (unsigned int)(a1 - 1);
	if (!(_DWORD)v1)
		return sub_14034BDD0(v1, 232141);
	v2 = (unsigned int)(v1 - 1);
	if ((_DWORD)v2)
		return L"Unknown pet command";
	else
		return sub_14034BDD0(v2, 232142);
}
// 140B21F58: using guessed type wchar_t aUnknownPetComm[20];

