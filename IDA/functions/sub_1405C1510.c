#include "../winhttp.h"

//----- (00000001405C1510) ----------------------------------------------------
_BOOL8 __fastcall sub_1405C1510(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // r9
	__int64 v4; // rax
	char* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax

	if (*(_DWORD*)(a1 + 68))
		return 0i64;
	v2 = *(_QWORD*)(qword_140C65898 + 27728);
	if (!v2 || (*(_BYTE*)(v2 + 8) & 1) != 0 || !sub_140605490(qword_140C65898 + 27664))
		return 0i64;
	v4 = *(int*)(v3 + 4);
	v5 = (unsigned int)v4 < 0x10 ? (char*)&unk_140B51560 + 16 * v4 : (char*)&unk_140B51550;
	if ((v5[12] & 2) == 0)
		return 0i64;
	if (*(_DWORD*)v3)
	{
		v6 = sub_140215240(*(_DWORD*)v3);
		if (v6)
		{
			v7 = sub_140214E00(*(_DWORD*)(v6 + 16));
			if (v7)
				return *(_QWORD*)(v2 + 96) < (unsigned __int64)*(unsigned int*)(v7 + 20);
		}
	}
	return 0i64;
}
// 1405C1556: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

