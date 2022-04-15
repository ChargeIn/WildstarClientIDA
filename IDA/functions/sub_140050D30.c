//----- (0000000140050D30) ----------------------------------------------------
_DWORD* __fastcall sub_140050D30(__int64 a1)
{
	_DWORD* result; // rax
	unsigned int v2; // esi
	unsigned int v4; // r12d
	int v5; // r8d
	int v6; // edx
	int v7; // ebx
	unsigned __int64 v8; // rbp
	__int64* v9; // r14
	__int64 v10; // rcx
	int v11; // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+24h] [rbp-24h]
	int v13; // [rsp+28h] [rbp-20h]

	result = qword_140C63838;
	v2 = 0;
	if (qword_140C63838)
	{
		result = (_DWORD*)qword_140C63838(off_140A6CEB0, qword_140C63858);
	}
	else
	{
		if (dword_140C64614)
			return result;
		result = (_DWORD*)sub_140233CE0();
		if ((int)result < 0)
			return result;
		result = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C638E8 + 40i64))(qword_140C638E8);
	}
	v4 = (unsigned int)result;
	if ((_DWORD)result)
	{
		do
		{
			if (qword_140C63848)
			{
				result = (_DWORD*)qword_140C63848(off_140A6CEB0, v2, qword_140C63858);
			}
			else if (dword_140C64614)
			{
				result = 0i64;
			}
			else if ((int)sub_140233CE0() >= 0)
			{
				result = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C638E8 + 32i64))(
					qword_140C638E8,
					v2);
			}
			else
			{
				result = 0i64;
			}
			v5 = result[1];
			if (*(_QWORD*)(result + 1) || result[3])
			{
				v6 = result[3];
				v12 = result[2];
				v13 = v6;
				v11 = v5;
				v7 = result[4];
				if (*(_QWORD*)(a1 + 1480) == *(_QWORD*)(a1 + 1488))
					sub_1400290D0(a1 + 1480);
				v8 = (*(__int64(__fastcall**)(int*))(a1 + 1504))(&v11);
				v9 = (__int64*)(*(_QWORD*)(a1 + 1496) + 8 * (v8 % *(_QWORD*)(a1 + 1488)));
				result = sub_14018B280(32i64, 0);
				if (result)
				{
					v10 = *v9;
					*(_QWORD*)result = v8;
					*((_QWORD*)result + 1) = v10;
					result[4] = v11;
					result[5] = v12;
					LODWORD(v10) = v13;
					result[7] = v7;
					result[6] = v10;
				}
				*v9 = (__int64)result;
				++* (_QWORD*)(a1 + 1480);
			}
			else
			{
				*(_DWORD*)(a1 + 1528) = result[4];
			}
			++v2;
		} while (v2 < v4);
	}
	return result;
}
// 140A6CEB0: using guessed type wchar_t *off_140A6CEB0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638E8: using guessed type __int64 qword_140C638E8;
// 140C64614: using guessed type int dword_140C64614;

