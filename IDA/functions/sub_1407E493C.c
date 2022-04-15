//----- (00000001407E493C) ----------------------------------------------------
__int64 sub_1407E493C()
{
	_QWORD* v0; // rax
	unsigned int* v1; // rcx

	v0 = sub_1407E3D94();
	v1 = (unsigned int*)v0[24];
	if (v1 != off_140C102E0 && ((_DWORD)v0[25] & dword_140C10470) == 0)
		v1 = (unsigned int*)sub_1407E69FC();
	return v1[1];
}
// 140C102E0: using guessed type void *off_140C102E0;
// 140C10470: using guessed type int dword_140C10470;

