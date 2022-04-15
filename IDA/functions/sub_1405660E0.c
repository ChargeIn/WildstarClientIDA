//----- (00000001405660E0) ----------------------------------------------------
__int64 __fastcall sub_1405660E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 result; // rax
	unsigned __int64 v4; // r8
	_QWORD* i; // rcx
	unsigned __int64 v6; // rdi
	int* v7; // rbx
	unsigned __int64 v8; // rbp
	__int64 v9; // r15
	int* v10; // rdx
	__int64 v11; // rcx

	v2 = qword_140C65B70;
	result = 0i64;
	v4 = *(_QWORD*)(qword_140C65B70 + 2056);
	if (!v4)
		return result;
	for (i = *(_QWORD**)(qword_140C65B70 + 2048); *i != a2; ++i)
	{
		if (++result >= v4)
			return result;
	}
	v6 = v4 - 1;
	result = (__int64)sub_1407DB590(
		(int*)(*(_QWORD*)(qword_140C65B70 + 2048) + 8 * result),
		(int*)(*(_QWORD*)(qword_140C65B70 + 2048) + 8 * result + 8),
		8 * (v4 - 1 - result));
	v7 = *(int**)(v2 + 2048);
	if (v6)
	{
		if (!v7)
		{
			v8 = v6;
			v9 = 8 * v6 + 16;
			goto LABEL_12;
		}
		if (v6 > *((_QWORD*)v7 - 1))
		{
			v8 = (unsigned __int64)(sub_14018A3E0(8 * v6 + 16) - 16) >> 3;
			v9 = 8 * v8 + 16;
			result = (**((__int64(__fastcall***)(__int64, __int64))v7 - 2))((__int64)(v7 - 4), v9);
			if ((_DWORD)result)
			{
				*((_QWORD*)v7 - 1) = v8;
				goto LABEL_15;
			}
		LABEL_12:
			result = (__int64)sub_14018B280(v9, 0);
			if (result)
			{
				*(_QWORD*)(result + 8) = v8;
				*(_QWORD*)result = off_140B55060;
			}
			v7 = (int*)(result + 16);
		}
	}
LABEL_15:
	v10 = *(int**)(v2 + 2048);
	if (v10 != v7)
	{
		result = (__int64)sub_1407DB590(v7, v10, 8 * v6);
		v11 = *(_QWORD*)(v2 + 2048);
		if (v11)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		*(_QWORD*)(v2 + 2048) = v7;
	}
	*(_QWORD*)(v2 + 2056) = v6;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65B70: using guessed type __int64 qword_140C65B70;

