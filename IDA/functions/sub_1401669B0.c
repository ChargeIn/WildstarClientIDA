//----- (00000001401669B0) ----------------------------------------------------
__int64 __fastcall sub_1401669B0(_QWORD* a1)
{
	_DWORD* v2; // rdi
	int v3; // eax
	int v4; // ecx
	int v5; // eax

	v2 = (_DWORD*)sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = v2[290] - 1;
	if (v3 < v4)
		v4 = v3;
	v5 = -1;
	if (v4 > -1)
		v5 = v4;
	v2[258] = v5;
	v2[260] = v5;
	return 0i64;
}

