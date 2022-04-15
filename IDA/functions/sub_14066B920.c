//----- (000000014066B920) ----------------------------------------------------
__int64 __fastcall sub_14066B920(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned __int64 v7; // rcx
	unsigned __int16* v8; // rdx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 48i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_14048D310(qword_140C65990, v4),
			(v6 = v5) == 0)
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5))
	{
		v9 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F4964)[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			goto LABEL_19;
		}
	LABEL_16:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_20;
	}
	v7 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6) + 8);
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
	v9 = (unsigned __int64*)sub_14018F0E0(&v12, v8)[1];
	if (!v9)
		goto LABEL_16;
	v10 = -1i64;
	do
		++v10;
	while (*((_BYTE*)v9 + v10));
LABEL_19:
	sub_140058710((__int64)a1, v9, v10);
LABEL_20:
	if (v13)
		sub_14018B900(v13, 0);
	return 1i64;
}
// 1409F4964: using guessed type unsigned __int16 word_1409F4964[16];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

