//----- (000000014067EF90) ----------------------------------------------------
__int64 __fastcall sub_14067EF90(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD** v3; // rdi
	__int64 v4; // rax
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rcx
	unsigned __int16* v8; // rdx
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = (_QWORD**)sub_14067B760(a1);
	v3 = v2;
	if (!v2 || *(_DWORD*)(*v2[6] + 12i64) != 13 || ((int(__fastcall*)(_QWORD**))(*v2)[26])(v2) < 2)
	{
		v5 = (unsigned __int64*)sub_14018F0E0(&v10, word_1409F5244)[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			goto LABEL_22;
		}
		goto LABEL_19;
	}
	v4 = sub_140721F50(*v3[6], *(_DWORD*)(*v3[6] + 20i64));
	if (v4)
	{
		v7 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 48i64);
		if (v7)
		{
			if (v7 <= qword_140C3FE70)
				v8 = (unsigned __int16*)(v7 + qword_140C3FE68);
			else
				v8 = 0i64;
		}
		else
		{
			v8 = 0i64;
		}
		v5 = (unsigned __int64*)sub_14018F0E0(&v10, v8)[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			goto LABEL_22;
		}
	LABEL_19:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_23;
	}
	v5 = (unsigned __int64*)sub_14018F0E0(&v10, word_1409F51E4)[1];
	if (!v5)
		goto LABEL_19;
	v6 = -1i64;
	do
		++v6;
	while (*((_BYTE*)v5 + v6));
LABEL_22:
	sub_140058710((__int64)a1, v5, v6);
LABEL_23:
	if (v11)
		sub_14018B900(v11, 0);
	return 1i64;
}
// 1409F51E4: using guessed type unsigned __int16 word_1409F51E4[2];
// 1409F5244: using guessed type unsigned __int16 word_1409F5244[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

