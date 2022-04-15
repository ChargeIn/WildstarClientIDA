#include "../winhttp.h"

//----- (000000014044DBD0) ----------------------------------------------------
__int64 sub_14044DBD0()
{
	__int64 v0; // rcx
	__int64 v1; // rcx
	__int64 v2; // rcx
	__int64 result; // rax

	if (qword_140C65898)
	{
		sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32736) + 96i64), "StoreCatalogReady", byte_1409D13DF);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "StoreLinksRefresh", byte_1409D13AB);
	}
	if (qword_140C65A48)
	{
		v0 = *(_QWORD*)(qword_140C65A48 + 200);
		if (v0)
		{
			v1 = *(_QWORD*)(v0 + 1424);
			if (v1)
				sub_1400EA3E0(v1, "StoreLinksRefresh", byte_1409D13FF);
		}
	}
	v2 = qword_140C66DA8;
	result = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(result + 368) == 5)
		{
			result = *(_QWORD*)(result + 176);
			if (!result)
				return result;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v2 + 368) != 5)
					break;
				v2 = *(_QWORD*)(v2 + 176);
			} while (v2);
		}
		return sub_1400EA3E0(*(_QWORD*)(v2 + 72), "StoreCatalogReady", &unk_1409D13FE);
	}
	return result;
}
// 1409D13AB: using guessed type _BYTE byte_1409D13AB[3];
// 1409D13DF: using guessed type _BYTE byte_1409D13DF[16];
// 1409D13FF: using guessed type _BYTE byte_1409D13FF[16];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A48: using guessed type __int64 qword_140C65A48;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

