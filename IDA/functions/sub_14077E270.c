#include "../winhttp.h"

//----- (000000014077E270) ----------------------------------------------------
const wchar_t* sub_14077E270()
{
	__int64 v0; // rax
	int v2; // [rsp+38h] [rbp+10h] BYREF
	int v3; // [rsp+3Ch] [rbp+14h]

	v2 = 0;
	v3 = 11;
	v0 = sub_1403AC780(qword_140C65898 + 160, &v2);
	if (v0)
		return *(const wchar_t**)(*(_QWORD*)(v0 + 64) + 488i64);
	else
		return L"Icon_ItemMisc_gadget_0001";
}
// 140B6D808: using guessed type wchar_t aIconItemmiscGa[26];
// 140C65898: using guessed type __int64 qword_140C65898;

