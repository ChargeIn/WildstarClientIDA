//----- (000000014073BE50) ----------------------------------------------------
__int64 __fastcall sub_14073BE50(_QWORD* a1)
{
	int* v2; // rax
	int v3; // edx
	_DWORD* v4; // rcx

	v2 = (int*)sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2)
		v3 = *v2;
	else
		v3 = 16;
	if ((unsigned int)sub_1405BED30(qword_140C65B98, v3))
		return sub_14073BC90(a1);
	v4 = (_DWORD*)a1[2];
	*v4 = 0;
	v4[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

