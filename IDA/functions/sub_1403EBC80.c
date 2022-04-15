#include "../winhttp.h"

//----- (00000001403EBC80) ----------------------------------------------------
const wchar_t* __fastcall sub_1403EBC80(__int64 a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(a1 + 25744);
	if (!v1)
		return L"Attack";
	switch (*(_DWORD*)(v1 + 220))
	{
	case 1:
		return L"AttackWarrior";
	case 3:
		return L"AttackESPer";
	case 4:
		return L"AttackMedic";
	}
	if (*(_DWORD*)(v1 + 220) != 7)
		return L"Attack";
	return L"AttackSpellslinger";
}
// 140AF8240: using guessed type wchar_t aAttackspellsli[19];
// 140AF8268: using guessed type wchar_t aAttackesper[12];
// 140AF8280: using guessed type wchar_t aAttack[7];
// 140AF8290: using guessed type wchar_t aAttackwarrior[14];
// 140AF82E8: using guessed type wchar_t aAttackmedic[12];

