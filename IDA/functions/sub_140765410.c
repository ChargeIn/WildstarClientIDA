//----- (0000000140765410) ----------------------------------------------------
__int64 __fastcall sub_140765410(__int64* a1, int a2)
{
	__int64 v3; // r8
	unsigned int v5; // esi
	__int64 result; // rax
	unsigned int v7; // ebp
	unsigned int i; // edi
	__int64 v9; // rbx
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // [rsp+70h] [rbp+18h] BYREF

	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3)
		v5 = *(_DWORD*)(v3 + 56);
	else
		v5 = 0;
	result = (__int64)qword_140C63838;
	if (qword_140C63838)
	{
		result = qword_140C63838(off_140A6B550, qword_140C63858);
	}
	else
	{
		if (dword_140C65558)
		{
			v7 = 0;
			goto LABEL_12;
		}
		result = sub_140214FE0();
		if ((int)result < 0)
		{
			v7 = 0;
			goto LABEL_12;
		}
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C641F0 + 40i64))(qword_140C641F0);
	}
	v7 = result;
LABEL_12:
	for (i = 0; i < v7; ++i)
	{
		result = (__int64)qword_140C63848;
		if (qword_140C63848)
		{
			result = qword_140C63848(off_140A6B550, i, qword_140C63858);
		}
		else
		{
			if (dword_140C65558)
			{
				v9 = 0i64;
				goto LABEL_21;
			}
			result = sub_140214FE0();
			if ((int)result < 0)
			{
				v9 = 0i64;
				goto LABEL_21;
			}
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641F0 + 32i64))(qword_140C641F0, i);
		}
		v9 = result;
	LABEL_21:
		v12 = v9;
		if (!v9)
			continue;
		v10 = *(unsigned int*)(v9 + 32);
		if ((_DWORD)v10)
		{
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					*(_QWORD*)(qword_140C65898 + 120),
					v10,
					0i64,
					0i64,
					0);
			if (!(_DWORD)result)
				continue;
		}
		result = sub_1405C3960(qword_140C65B98, *(_DWORD*)v9);
		if (!(_DWORD)result)
			continue;
		if ((*(_BYTE*)(v9 + 4) & 1) == 0)
			continue;
		result = sub_140214E00(*(_DWORD*)(v9 + 16));
		v11 = result;
		if (!result || (*(_BYTE*)(result + 16) & 1) == 0)
			continue;
		result = *(unsigned int*)(result + 12);
		if (a2)
		{
			if ((unsigned int)(result - 1) <= 1 || (_DWORD)result == 8)
				goto LABEL_34;
		}
		else if (!(_DWORD)result || (result = (unsigned int)(result - 3), (unsigned int)result <= 4))
		{
		LABEL_34:
			if (v5 <= *(_DWORD*)(v11 + 28) && v5 >= *(_DWORD*)(v11 + 24))
				result = sub_140033260(a1, &v12);
		}
	}
	return result;
}
// 140A6B550: using guessed type wchar_t *off_140A6B550[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C641F0: using guessed type __int64 qword_140C641F0;
// 140C65558: using guessed type int dword_140C65558;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B98: using guessed type __int64 qword_140C65B98;

