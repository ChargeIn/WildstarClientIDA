//----- (00000001401729D0) ----------------------------------------------------
__int64 __fastcall sub_1401729D0(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebx
	int v4; // eax
	int v5; // edx

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = sub_140056D60(a1, 3u);
	v5 = 0;
	if (v3 > 0)
		v5 = v3;
	sub_1401709A0(v2, v5, v4);
	return 0i64;
}

