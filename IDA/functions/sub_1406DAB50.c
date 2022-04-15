//----- (00000001406DAB50) ----------------------------------------------------
__int64 __fastcall sub_1406DAB50(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // r9d
	unsigned __int64 v4; // rax
	unsigned __int64 v5; // r8
	_QWORD* v6; // rcx
	_DWORD* v7; // rdx
	unsigned __int64* v8; // rdx
	int v9; // eax
	__int64 v10; // rcx
	__int16* v11; // rax
	unsigned __int64 v12; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	result = sub_1406DAEE0(a1);
	if (!result)
		return result;
	v3 = *(_DWORD*)(result + 1036);
	if (v3 && (v4 = 0i64, (v5 = *(_QWORD*)(qword_140C65898 + 2712)) != 0))
	{
		v6 = *(_QWORD**)(qword_140C65898 + 2704);
		while (1)
		{
			v7 = (_DWORD*)*v6;
			if (*v6)
			{
				if (v7[16] == v3)
					break;
			}
			++v4;
			++v6;
			if (v4 >= v5)
				goto LABEL_8;
		}
		v9 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v7 + 128i64))(*v6);
		v11 = sub_14034BDD0(v10, v9);
		v8 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v11)[1];
		if (v8)
		{
			v12 = -1i64;
			do
				++v12;
			while (*((_BYTE*)v8 + v12));
			goto LABEL_16;
		}
	}
	else
	{
	LABEL_8:
		v8 = (unsigned __int64*)sub_14018F0E0(&v13, word_1409F7AD4)[1];
		if (v8)
		{
			v12 = -1i64;
			do
				++v12;
			while (*((_BYTE*)v8 + v12));
		LABEL_16:
			sub_140058710((__int64)a1, v8, v12);
			goto LABEL_17;
		}
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
LABEL_17:
	if (v14)
		sub_14018B900(v14, 0);
	return 1i64;
}
// 1406DABE5: variable 'v10' is possibly undefined
// 1409F7AD4: using guessed type unsigned __int16 word_1409F7AD4[2];
// 140C65898: using guessed type __int64 qword_140C65898;

