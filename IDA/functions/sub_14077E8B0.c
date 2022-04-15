#include "../winhttp.h"

//----- (000000014077E8B0) ----------------------------------------------------
_WORD* __fastcall sub_14077E8B0(__int64 a1)
{
	_WORD* result; // rax
	__int64 v2; // rax
	_WORD** v3; // rax

	if (!qword_140C65B70)
		return &unk_1409F9E5C;
	v2 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(a1 + 276), *(_QWORD*)(qword_140C65898 + 25744));
	if (!v2)
		return &unk_1409F9E34;
	v3 = *(_WORD***)(v2 + 8);
	if (!v3)
		return &unk_1409F9E34;
	result = *v3;
	if (!result || !*result)
		return &unk_1409F9E34;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

