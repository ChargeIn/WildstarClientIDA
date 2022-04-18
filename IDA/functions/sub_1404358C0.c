#include "../winhttp.h"

//----- (00000001404358C0) ----------------------------------------------------
__int64 sub_1404358C0()
{
	__int64 v0; // rcx

	v0 = qword_140C658C0;
	*(_DWORD*)(qword_140C658C0 + 40) = 4;
	sub_1404351E0(v0);
	if (qword_140C65898)
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ShowInventory", &unk_1409D13DA);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658C0: using guessed type __int64 qword_140C658C0;

