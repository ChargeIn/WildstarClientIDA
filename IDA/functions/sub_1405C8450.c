#include "../winhttp.h"

//----- (00000001405C8450) ----------------------------------------------------
__int64 __fastcall sub_1405C8450(__int64 a1, int a2)
{
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // r8

	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
	{
	case 1u:
	case 3u:
	case 6u:
	case 7u:
	case 9u:
	case 0xAu:
		v6 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v6)
			goto LABEL_6;
		result = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(a1 + 276), v6);
		break;
	case 4u:
	case 0xDu:
		v4 = sub_1403C1780(qword_140C65898, *(_DWORD*)(a1 + 280));
		if (!v4)
			goto LABEL_6;
		result = sub_1405A4B80(v4, a2);
		break;
	default:
	LABEL_6:
		result = 0i64;
		break;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

