#include "../winhttp.h"

//----- (00000001407DF3AC) ----------------------------------------------------
void** sub_1407DF3AC()
{
	_QWORD* v0; // rax

	v0 = sub_1407E3D94();
	if ((void*)v0[24] != off_140C102E0 && ((_DWORD)v0[25] & dword_140C10470) == 0)
		sub_1407E69FC();
	return off_140C0F6E8;
}
// 140C0F6E8: using guessed type void **off_140C0F6E8;
// 140C102E0: using guessed type void *off_140C102E0;
// 140C10470: using guessed type int dword_140C10470;

