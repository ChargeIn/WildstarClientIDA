//----- (00000001406B9DE0) ----------------------------------------------------
__int64 __fastcall sub_1406B9DE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned __int64 v5; // rcx
	_WORD* v6; // rax
	unsigned __int16* v7; // rdx
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0
		|| (v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 24i64)) == 0
		|| v5 > qword_140C3FE70
		|| !(qword_140C3FE68 + v5)
		|| (v5 <= qword_140C3FE70 ? (v6 = (_WORD*)(qword_140C3FE68 + v5)) : (v6 = 0i64), !*v6))
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, word_1409F6EAC)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			goto LABEL_22;
		}
	LABEL_19:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_23;
	}
	if (v5 <= qword_140C3FE70)
		v7 = (unsigned __int16*)(qword_140C3FE68 + v5);
	else
		v7 = 0i64;
	v8 = (unsigned __int64*)sub_14018F0E0(&v11, v7)[1];
	if (!v8)
		goto LABEL_19;
	v9 = -1i64;
	do
		++v9;
	while (*((_BYTE*)v8 + v9));
LABEL_22:
	sub_140058710((__int64)a1, v8, v9);
LABEL_23:
	if (v12)
		sub_14018B900(v12, 0);
	return 1i64;
}
// 1406B9E49: conditional instruction was optimized away because rcx.8!=0
// 1406B9E65: conditional instruction was optimized away because rcx.8!=0
// 1409F6EAC: using guessed type unsigned __int16 word_1409F6EAC[76];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

