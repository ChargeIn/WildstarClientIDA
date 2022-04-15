//----- (000000014067F2F0) ----------------------------------------------------
__int64 __fastcall sub_14067F2F0(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD** v3; // rdi
	_QWORD* v4; // rdi
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	unsigned int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int16* v10; // rax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	v2 = (_QWORD**)sub_14067B760(a1);
	v3 = v2;
	if (!v2 || *(_DWORD*)(*v2[6] + 12i64) != 13 || ((int(__fastcall*)(_QWORD**))(*v2)[26])(v2) < 3)
	{
		v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F5204)[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			goto LABEL_27;
		}
		goto LABEL_24;
	}
	v4 = (_QWORD*)sub_140721F50(*v3[6], *(_DWORD*)(*v3[6] + 20i64));
	if (v4)
	{
		v7 = sub_1400584E0((__int64)a1, 2);
		if (v7 < (unsigned int)((__int64)(v4[4] - v4[3]) >> 3))
		{
			v8 = sub_1407209F0(v4, v7);
			if (v8)
			{
				v10 = sub_14034BDD0(v9, *(_DWORD*)(*(_QWORD*)(v8 + 16) + 4i64));
				v5 = (unsigned __int64*)sub_14018F0E0(&v12, (unsigned __int16*)v10)[1];
				if (v5)
				{
					v6 = -1i64;
					do
						++v6;
					while (*((_BYTE*)v5 + v6));
					goto LABEL_27;
				}
			}
			else
			{
				v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F5174)[1];
				if (v5)
				{
					v6 = -1i64;
					do
						++v6;
					while (*((_BYTE*)v5 + v6));
					goto LABEL_27;
				}
			}
		}
		else
		{
			v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F51D4)[1];
			if (v5)
			{
				v6 = -1i64;
				do
					++v6;
				while (*((_BYTE*)v5 + v6));
				goto LABEL_27;
			}
		}
	LABEL_24:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_28;
	}
	v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F51A4)[1];
	if (!v5)
		goto LABEL_24;
	v6 = -1i64;
	do
		++v6;
	while (*((_BYTE*)v5 + v6));
LABEL_27:
	sub_140058710((__int64)a1, v5, v6);
LABEL_28:
	if (v13)
		sub_14018B900(v13, 0);
	return 1i64;
}
// 14067F413: variable 'v9' is possibly undefined
// 1409F5174: using guessed type unsigned __int16 word_1409F5174[2];
// 1409F51A4: using guessed type unsigned __int16 word_1409F51A4[2];
// 1409F51D4: using guessed type unsigned __int16 word_1409F51D4[2];
// 1409F5204: using guessed type unsigned __int16 word_1409F5204[2];

