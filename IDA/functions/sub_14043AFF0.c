//----- (000000014043AFF0) ----------------------------------------------------
_QWORD* sub_14043AFF0()
{
	_QWORD* result; // rax
	_QWORD* v1; // rbx
	__int64 v2; // rbp
	_QWORD* v3; // rax
	_QWORD* v4; // rdi
	unsigned int v5; // esi
	__int64 v6; // rax
	_DWORD* v7; // rsi
	int* v8; // rax
	__int64 v9; // rax
	char v10[24]; // [rsp+20h] [rbp-68h] BYREF
	int* v11; // [rsp+38h] [rbp-50h]
	int* v12; // [rsp+40h] [rbp-48h]
	int* v13; // [rsp+48h] [rbp-40h]

	result = (_QWORD*)qword_140C7CD38;
	LODWORD(qword_140C7CD60) = 1;
	v1 = *(_QWORD**)(qword_140C7CD38 + 16);
	if (v1 == (_QWORD*)qword_140C7CD38)
		goto LABEL_27;
	do
	{
		v2 = v1[5];
		v3 = *(_QWORD**)(v2 + 8);
		v4 = (_QWORD*)*v3;
		if ((_QWORD*)*v3 == v3)
			goto LABEL_18;
		while (1)
		{
			v5 = *((_DWORD*)v4 + 4);
			if (qword_140C63840)
			{
				v6 = qword_140C63840(off_140A69AD8, v5, qword_140C63858);
			}
			else
			{
				if (dword_140C64E70 || (int)sub_1401F4D40() < 0)
					goto LABEL_12;
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B78 + 24i64))(qword_140C64B78, v5);
			}
			v7 = (_DWORD*)v6;
			if (v6)
			{
				if ((*(_BYTE*)(v6 + 12) & 1) == 0
					&& (_DWORD)qword_140C7CD60
					&& !(unsigned int)sub_14043D3D0((__int64)dword_140C7CC70, (_DWORD*)v6))
				{
					break;
				}
			}
		LABEL_12:
			v4 = (_QWORD*)*v4;
			if (v4 == *(_QWORD**)(v2 + 8))
				goto LABEL_18;
		}
		v8 = sub_14018B280(16i64, 0);
		v11 = v8;
		v12 = v8;
		v13 = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		sub_14043CC10(v7, (__int64)v10);
		sub_14043BF30(dword_140C7CC70, (__int64)v10);
		if (v11)
			sub_14018B900((__int64)v11, 0);
	LABEL_18:
		v9 = v1[3];
		if (v9)
		{
			v1 = (_QWORD*)v1[3];
			for (result = *(_QWORD**)(v9 + 16); result; result = (_QWORD*)result[2])
				v1 = result;
		}
		else
		{
			for (result = (_QWORD*)v1[1]; v1 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
				v1 = result;
			if ((_QWORD*)v1[3] != result)
				v1 = result;
		}
	} while (v1 != (_QWORD*)qword_140C7CD38);
LABEL_27:
	HIDWORD(qword_140C7CD60) = 1;
	return result;
}
// 140A69AD8: using guessed type wchar_t *off_140A69AD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B78: using guessed type __int64 qword_140C64B78;
// 140C64E70: using guessed type int dword_140C64E70;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CD38: using guessed type __int64 qword_140C7CD38;
// 140C7CD60: using guessed type __int64 qword_140C7CD60;

