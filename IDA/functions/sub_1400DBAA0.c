//----- (00000001400DBAA0) ----------------------------------------------------
__int64 __fastcall sub_1400DBAA0(_QWORD* a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	__int64 result; // rax
	_QWORD* v6; // rax
	unsigned __int16* v7; // rax
	unsigned __int16* v8; // rdx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v6 = *(_QWORD**)(result + 792);
		if (v6)
			v6 = (_QWORD*)*v6;
		if (v6)
		{
			v7 = (unsigned __int16*)v6[4];
			v8 = (unsigned __int16*)&word_140B7B704;
			if (v7)
				v8 = v7;
			v9 = (unsigned __int64*)sub_14018F0E0(&v11, v8)[1];
			if (v9)
			{
				v10 = -1i64;
				do
					++v10;
				while (*((_BYTE*)v9 + v10));
			LABEL_19:
				sub_140058710((__int64)a1, v9, v10);
				goto LABEL_20;
			}
		}
		else
		{
			v9 = (unsigned __int64*)sub_14018F0E0(&v11, word_1409D32FC)[1];
			if (v9)
			{
				v10 = -1i64;
				do
					++v10;
				while (*((_BYTE*)v9 + v10));
				goto LABEL_19;
			}
		}
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	LABEL_20:
		if (v12)
			sub_14018B900(v12, 0);
		return 1i64;
	}
	return result;
}
// 1409D32FC: using guessed type unsigned __int16 word_1409D32FC[12];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;

