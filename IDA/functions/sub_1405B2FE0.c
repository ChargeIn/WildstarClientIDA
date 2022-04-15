#include "../winhttp.h"

//----- (00000001405B2FE0) ----------------------------------------------------
__int16* __fastcall sub_1405B2FE0(__int64 a1)
{
	__int16* result; // rax
	__int64 v2; // rcx

	switch ((int)a1)
	{
	case 0:
		return sub_14034BDD0(a1, 500327);
	case 1:
		return sub_14034BDD0(a1, 136284);
	case 2:
		return sub_14034BDD0(a1, 131101);
	case 3:
		return sub_14034BDD0(a1, 136286);
	case 4:
		return sub_14034BDD0(a1, 48416);
	case 5:
		return sub_14034BDD0(a1, 136287);
	case 6:
		return sub_14034BDD0(a1, 131017);
	case 7:
	case 16:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 24:
	case 25:
	case 28:
	case 29:
		goto LABEL_36;
	case 8:
		return sub_14034BDD0(a1, 131015);
	case 9:
		return sub_14034BDD0(a1, 131012);
	case 10:
		if (!qword_140C65970)
			goto LABEL_36;
		if (*(_DWORD*)(qword_140C65970 + 8) == 2)
		{
			result = sub_14034BDD0((unsigned int)(*(_DWORD*)(qword_140C65970 + 8) - 2), 136297);
		}
		else
		{
			v2 = (unsigned int)(*(_DWORD*)(qword_140C65970 + 8) - 3);
			if (*(_DWORD*)(qword_140C65970 + 8) == 3)
				result = sub_14034BDD0(v2, 136298);
			else
				result = sub_14034BDD0(v2, 131013);
		}
		break;
	case 11:
		if (qword_140C65970 && *(_DWORD*)(qword_140C65970 + 8) == 2)
		{
			if (*(_DWORD*)(qword_140C65970 + 192))
				result = sub_14034BDD0(a1, 166989);
			else
				result = sub_14034BDD0(a1, 166987);
		}
		else
		{
		LABEL_36:
			result = L"Unknown game command";
		}
		break;
	case 12:
		result = sub_14034BDD0(a1, 136293);
		break;
	case 13:
		result = sub_14034BDD0(a1, 136294);
		break;
	case 14:
		result = sub_14034BDD0(a1, 136295);
		break;
	case 15:
		result = sub_14034BDD0(a1, 136296);
		break;
	case 17:
		result = sub_14034BDD0(a1, 130990);
		break;
	case 23:
		result = sub_14034BDD0(a1, 616916);
		break;
	case 26:
		result = sub_14034BDD0(a1, 577405);
		break;
	case 27:
		result = sub_14034BDD0(a1, 577406);
		break;
	case 30:
		result = sub_14034BDD0(a1, 596986);
		break;
	case 31:
		result = sub_14034BDD0(a1, 596987);
		break;
	case 32:
		result = sub_14034BDD0(a1, 596988);
		break;
	case 33:
		result = sub_14034BDD0(a1, 596989);
		break;
	case 34:
		result = sub_14034BDD0(a1, 596993);
		break;
	case 35:
		result = sub_14034BDD0(a1, 596994);
		break;
	}
	return result;
}
// 140B212D8: using guessed type wchar_t aUnknownGameCom[21];
// 140C65970: using guessed type __int64 qword_140C65970;

