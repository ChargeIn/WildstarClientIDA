//----- (00000001406B8370) ----------------------------------------------------
__int64 __fastcall sub_1406B8370(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int16* v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0 || (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		v6 = (unsigned __int64*)sub_14018F0E0(&v9, word_1409F6DAC)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			goto LABEL_12;
		}
	LABEL_9:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_13;
	}
	v5 = sub_14034BDD0(v4, *(_DWORD*)(v4 + 28));
	v6 = (unsigned __int64*)sub_14018F0E0(&v9, (unsigned __int16*)v5)[1];
	if (!v6)
		goto LABEL_9;
	v7 = -1i64;
	do
		++v7;
	while (*((_BYTE*)v6 + v7));
LABEL_12:
	sub_140058710((__int64)a1, v6, v7);
LABEL_13:
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 1409F6DAC: using guessed type unsigned __int16 word_1409F6DAC[36];

